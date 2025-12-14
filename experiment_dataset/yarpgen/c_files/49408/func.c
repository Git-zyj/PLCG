/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49408
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (+(var_0))))));
    var_16 = ((var_12) % (var_10));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_17 += (-(max((arr_0 [i_0] [i_0]), (2721310110U))));
        arr_2 [4U] [i_0] = ((unsigned int) ((max((var_9), (arr_1 [i_0] [i_0]))) + (((unsigned int) 950216760U))));
    }
    for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1] = ((max((((1061753149U) ^ (4294967295U))), ((~(950216760U))))) ^ (var_10));
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            arr_10 [i_1] |= (~(((unsigned int) 2339193013U)));
            arr_11 [14U] [14U] = arr_9 [i_1];
        }
        for (unsigned int i_3 = 1; i_3 < 14; i_3 += 2) /* same iter space */
        {
            var_18 = var_11;
            arr_14 [2U] [i_3] = (-(((1925481084U) << (((arr_5 [i_1] [13U]) - (3759640824U))))));
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_19 = var_5;
                arr_19 [i_1] [i_3] [i_3] [i_4] = ((unsigned int) 3344750533U);
            }
            /* vectorizable */
            for (unsigned int i_5 = 4; i_5 < 12; i_5 += 2) 
            {
                arr_22 [i_3] [i_3] [i_3] [i_1] = 4294967295U;
                var_20 *= ((unsigned int) var_7);
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 2) 
                {
                    var_21 = arr_3 [i_3 - 1] [i_3];
                    var_22 = var_13;
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 14; i_7 += 3) 
                    {
                        var_23 = ((unsigned int) 393156372U);
                        var_24 = var_3;
                    }
                }
                arr_29 [i_1] [0U] [i_5] = var_0;
                var_25 = ((unsigned int) arr_7 [i_3 - 1] [i_5 + 2] [i_5]);
            }
        }
        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 2) /* same iter space */
        {
            arr_33 [i_8] [i_8] [i_8] = (-(3344750533U));
            arr_34 [i_8] = ((unsigned int) max(((~(arr_4 [i_8]))), (arr_25 [i_1] [4U] [10U] [i_8])));
        }
        for (unsigned int i_9 = 1; i_9 < 14; i_9 += 2) /* same iter space */
        {
            arr_37 [i_9] [i_9] [5U] = ((unsigned int) ((((380033062U) & (1447749359U))) % (max((3344750535U), (4095U)))));
            var_26 = ((((((arr_26 [i_1] [0U] [i_1] [i_1]) ^ (arr_1 [i_1] [7U]))) >> (((((arr_3 [i_1] [0U]) >> (23U))) - (95U))))) >> (((((((var_4) ^ (var_3))) << (((arr_15 [i_1] [i_1] [i_1] [i_1]) - (1825585851U))))) - (2868080632U))));
        }
        arr_38 [i_1] [i_1] = ((/* implicit */unsigned int) (((-(1763397200U))) <= (((arr_7 [i_1] [i_1] [i_1]) % (arr_32 [i_1])))));
    }
    for (unsigned int i_10 = 1; i_10 < 9; i_10 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            arr_45 [i_10] [i_11] = (-(max((arr_31 [i_10 + 2] [8U]), (arr_31 [i_10 - 1] [14U]))));
            arr_46 [i_10] [i_10] [i_11] = var_4;
        }
        for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
            {
                for (unsigned int i_14 = 0; i_14 < 11; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        {
                            arr_55 [i_10] = var_12;
                            var_27 = min(((~(arr_13 [i_10 + 1]))), (var_9));
                            var_28 -= ((((/* implicit */_Bool) 4294967294U)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) ((arr_48 [i_12] [i_15]) <= (arr_21 [i_10] [i_10] [i_15]))))))) : (1763397195U));
                        }
                    } 
                } 
            } 
            var_29 = arr_31 [i_10 + 1] [i_12];
        }
        arr_56 [0U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_6) ^ (max((2531570096U), (arr_28 [i_10] [i_10])))))) && (((/* implicit */_Bool) min((950216760U), (((arr_43 [i_10] [i_10 + 1] [4U]) | (var_12))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
        {
            arr_59 [i_10] = ((/* implicit */unsigned int) ((arr_21 [i_10] [i_10] [2U]) > (var_6)));
            /* LoopNest 2 */
            for (unsigned int i_17 = 0; i_17 < 11; i_17 += 2) 
            {
                for (unsigned int i_18 = 0; i_18 < 11; i_18 += 3) 
                {
                    {
                        var_30 = ((unsigned int) 0U);
                        var_31 = ((4147186745U) ^ (var_14));
                        arr_65 [9U] [i_10] [i_17] = ((/* implicit */unsigned int) ((arr_9 [i_18]) < (var_6)));
                    }
                } 
            } 
        }
        for (unsigned int i_19 = 1; i_19 < 8; i_19 += 2) 
        {
            arr_70 [i_10] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) 3279207870U)) && (((/* implicit */_Bool) 1530333746U))))));
            arr_71 [i_10] [i_19] = max((((unsigned int) arr_57 [i_10] [i_10] [i_10 - 1])), (((unsigned int) 1015759426U)));
            arr_72 [i_10] [i_10] = arr_57 [i_10] [i_19] [i_10];
        }
        for (unsigned int i_20 = 1; i_20 < 10; i_20 += 2) 
        {
            var_32 = ((3263694429U) * (1090036293U));
            var_33 = ((/* implicit */unsigned int) max((var_33), (max((2545199907U), (2328149489U)))));
            var_34 = 6U;
            arr_76 [i_10] = ((arr_51 [i_20] [i_20 + 1] [i_20 + 1] [i_20] [i_20 + 1] [2U]) ^ (((min((1763397200U), (3204931002U))) & (((arr_12 [3U] [13U] [i_20 - 1]) | (var_6))))));
            var_35 |= ((max((arr_48 [i_10 + 2] [i_20 - 1]), (arr_8 [i_10 + 1] [i_20 + 1]))) / (max((4294967295U), (3279207884U))));
        }
        for (unsigned int i_21 = 0; i_21 < 11; i_21 += 3) 
        {
            arr_79 [i_10] [i_10] [i_21] = ((unsigned int) ((unsigned int) 4095851919U));
            var_36 = ((((/* implicit */_Bool) ((arr_26 [i_10 + 1] [3U] [i_10 + 2] [i_10]) / (arr_26 [i_10 - 1] [i_10] [i_10 - 1] [i_10])))) ? (((((var_7) < (var_12))) ? (arr_8 [i_10 + 1] [i_10 + 2]) : (arr_36 [i_10 - 1] [i_10] [i_10 - 1]))) : (((((/* implicit */_Bool) 0U)) ? (4294967291U) : (2645249395U))));
            arr_80 [i_10] [i_10] = ((arr_26 [i_10] [i_10 - 1] [2U] [i_21]) & (((unsigned int) var_13)));
        }
    }
}
