/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219791
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219791 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219791
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_19 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) arr_4 [4ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_8 [i_3] [i_0] [i_2 + 1] [i_3 - 1])))));
                        arr_9 [i_1] [i_2] [i_1] [i_0] [i_0] [i_1] = (!(((/* implicit */_Bool) arr_5 [1LL] [i_1] [i_2 + 1])));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_7 [i_0] [i_0] [i_0]) : (((/* implicit */int) var_18))))) ? (arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1]) : ((-(((/* implicit */int) (unsigned char)32)))))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_4 = 4; i_4 < 11; i_4 += 2) 
            {
                arr_12 [i_1] = (unsigned char)147;
                var_21 = (+(((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | ((-9223372036854775807LL - 1LL)))));
            }
            arr_13 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [i_0] [i_0] [i_1] [i_0])))))));
            arr_14 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
            var_22 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */int) (unsigned char)141)) : (((/* implicit */int) (_Bool)0))))));
        }
        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) /* same iter space */
        {
            var_23 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(4289375149U)))) ? ((+(((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_8 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
            /* LoopNest 2 */
            for (short i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    {
                        arr_22 [i_0] [i_5] [i_5] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_3 [i_5] [i_5]), (((/* implicit */int) var_5))))) ? (((/* implicit */int) min(((unsigned short)32768), (((/* implicit */unsigned short) arr_0 [i_6]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5] [i_5])))))))), (min((9223372036854775807LL), (((/* implicit */long long int) (-(1837804478))))))));
                        var_24 = ((/* implicit */int) (~(min(((~(arr_8 [i_7 + 1] [i_6] [i_5] [(unsigned short)10]))), (((/* implicit */long long int) (short)-14313))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_5] [i_0] [i_0] [i_0]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) 1837804478)))))))) ^ (((/* implicit */int) var_15))));
            arr_23 [i_5] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (unsigned char)145)) ? ((-(((/* implicit */int) var_4)))) : (((int) (unsigned short)50325)))));
        }
        for (signed char i_8 = 0; i_8 < 13; i_8 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
            {
                var_26 -= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (min((arr_26 [i_8] [i_8]), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) 18446744073709551597ULL))));
                arr_31 [i_9] [i_8] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_2) * (((/* implicit */int) (unsigned char)0)))) / (((/* implicit */int) var_3))))) ? (((int) arr_0 [i_8])) : ((+(((/* implicit */int) arr_29 [i_0] [i_0] [i_0]))))));
                var_28 = var_1;
            }
            arr_32 [i_8] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (min((arr_15 [(unsigned short)2]), (arr_15 [8ULL])))));
            var_29 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_21 [i_0] [i_8] [0] [i_0] [i_0])) ? (arr_2 [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) 8388480U))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_10 = 4; i_10 < 10; i_10 += 2) 
            {
                arr_36 [i_10 - 3] = ((/* implicit */unsigned int) (_Bool)0);
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (int i_12 = 0; i_12 < 13; i_12 += 4) 
                    {
                        {
                            arr_42 [2] [i_11] [10U] [i_11] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_17 [12] [12] [i_8])) ? (arr_2 [i_12]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))));
                            var_30 *= ((/* implicit */short) var_2);
                            arr_43 [(unsigned short)9] [i_11] [i_12] [i_12] = ((/* implicit */int) ((_Bool) 4294967288U));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_13 = 0; i_13 < 13; i_13 += 1) 
            {
                var_31 = ((/* implicit */unsigned short) ((3986027566041953552ULL) >> (((/* implicit */int) (unsigned short)15))));
                arr_46 [i_0] [i_0] [i_13] [i_13] = ((/* implicit */unsigned long long int) (_Bool)0);
            }
        }
        var_32 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [2] [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_0] [i_0] [(short)12] [i_0] [i_0])) : (((/* implicit */int) arr_21 [i_0] [i_0] [(short)12] [i_0] [i_0]))))) ? (min((131070ULL), (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_5)))))));
    }
    for (int i_14 = 0; i_14 < 11; i_14 += 2) 
    {
        arr_49 [i_14] = ((/* implicit */short) ((arr_34 [i_14] [i_14] [i_14]) << ((-(((((/* implicit */int) var_4)) / (1310418381)))))));
        arr_50 [i_14] = ((/* implicit */_Bool) (-(((((/* implicit */int) ((((/* implicit */int) (unsigned char)174)) == (((/* implicit */int) (unsigned short)35112))))) % (((var_1) ? (((/* implicit */int) (unsigned short)12)) : (((/* implicit */int) var_6))))))));
        arr_51 [i_14] [i_14] = ((/* implicit */short) var_15);
    }
    var_33 = ((/* implicit */unsigned short) ((var_16) ? (((((/* implicit */_Bool) (short)11641)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (!(((/* implicit */_Bool) -2147483641))))))) : ((+((~(((/* implicit */int) (unsigned char)82))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 4) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) 18446744073709551596ULL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)98), (((/* implicit */unsigned char) (_Bool)1)))))) : (((((/* implicit */_Bool) -1428223858)) ? (((288230358971842560LL) | (((/* implicit */long long int) 8355840)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65522)))))));
                    arr_61 [i_15] [i_17] = ((((/* implicit */_Bool) arr_24 [i_17] [i_17] [i_17])) ? (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_15 + 1]))) % (arr_24 [i_15] [i_16] [i_17]))), (((/* implicit */unsigned long long int) var_12)))) : (((/* implicit */unsigned long long int) min(((+(-1722902979))), (((/* implicit */int) arr_41 [i_16] [i_16]))))));
                    /* LoopNest 2 */
                    for (short i_18 = 0; i_18 < 13; i_18 += 1) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 13; i_19 += 3) 
                        {
                            {
                                arr_69 [i_15] [i_15] [i_15] = (_Bool)1;
                                arr_70 [i_15] = ((/* implicit */unsigned long long int) arr_26 [i_17] [i_18]);
                                var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) ((((var_1) && (arr_29 [i_15 + 1] [i_16] [i_17]))) ? (((/* implicit */int) arr_29 [i_15 + 1] [i_16] [i_17])) : ((+(((/* implicit */int) arr_29 [i_15 + 1] [i_15 + 1] [i_15 + 1])))))))));
                            }
                        } 
                    } 
                    arr_71 [i_15] [i_15] = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) 3276844049U)) ? (arr_24 [i_15 + 1] [i_15 + 1] [i_15 + 1]) : (arr_24 [i_15 + 1] [i_15 + 1] [i_15 + 1]))));
                    arr_72 [i_15] [i_15 + 1] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((2891439061U), (((/* implicit */unsigned int) (unsigned short)52667)))), (((/* implicit */unsigned int) ((int) 2891439076U)))))) ? (((/* implicit */unsigned int) var_7)) : ((-(max((1073741568U), (((/* implicit */unsigned int) var_4))))))));
                }
            } 
        } 
    } 
}
