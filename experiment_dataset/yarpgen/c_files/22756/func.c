/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22756
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) var_3))));
        arr_3 [i_0] = ((/* implicit */_Bool) (-(1032489420U)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1] = max(((~(arr_1 [i_1]))), (((2284339056U) - (2284339056U))));
        arr_9 [i_1] = (((~(((unsigned int) 3298081403U)))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4192))));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_12 = ((min((max((((/* implicit */unsigned int) (unsigned short)9366)), (2284339056U))), (((/* implicit */unsigned int) arr_6 [i_2] [i_2])))) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)41366))));
        var_13 = ((/* implicit */unsigned int) min((var_13), ((~(max((min((arr_1 [(_Bool)1]), (((/* implicit */unsigned int) (_Bool)1)))), (((unsigned int) 6144U))))))));
        var_14 *= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)4192))))) - ((~((~(6144U)))))));
        var_15 ^= ((/* implicit */unsigned short) min((15U), (590454619U)));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((arr_4 [i_2] [i_2]), (((/* implicit */unsigned int) var_7)))), (((((/* implicit */_Bool) var_10)) ? (arr_0 [i_2]) : (4294961149U)))))) ? ((-((~(4294961151U))))) : (((unsigned int) ((_Bool) (_Bool)1)))));
    }
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        arr_16 [16U] = ((/* implicit */unsigned short) ((_Bool) ((_Bool) arr_14 [i_3])));
        arr_17 [i_3] = ((/* implicit */_Bool) ((unsigned short) ((unsigned short) 4294961121U)));
        /* LoopSeq 3 */
        for (unsigned int i_4 = 1; i_4 < 13; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                var_17 = ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61319))) == (3367488087U)))), (min((((/* implicit */unsigned int) arr_14 [i_3])), (2284339082U))))) | (((unsigned int) arr_14 [i_4 + 4]))));
                var_18 = ((/* implicit */unsigned int) max((arr_22 [i_3] [i_4] [i_5]), ((unsigned short)33532)));
                arr_23 [i_5] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned short)0)))));
            }
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_7 = 1; i_7 < 15; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        {
                            arr_34 [i_3] [i_4] [i_6] |= ((/* implicit */unsigned int) var_7);
                            var_19 = var_6;
                            arr_35 [i_3] [(unsigned short)10] [i_6] [i_7] [(_Bool)0] [i_6] = ((_Bool) arr_27 [i_3] [i_8] [i_8] [i_4 + 4] [i_8] [i_6]);
                        }
                    } 
                } 
                var_20 *= ((arr_30 [i_4] [i_4] [i_4 + 3] [i_4 - 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4174))));
            }
            arr_36 [i_3] |= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (~(6140U)))) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1)))))))));
            /* LoopNest 3 */
            for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned short) min((((((var_6) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61340))))) & (((((/* implicit */_Bool) 4294967288U)) ? (1770839219U) : (0U))))), (min((((/* implicit */unsigned int) arr_28 [i_3] [i_4] [0U] [i_4] [(unsigned short)2])), (arr_32 [i_3] [i_4] [i_4] [i_10] [i_11] [i_4 + 1] [0U])))));
                            arr_45 [i_3] [i_3] [i_3] [i_10] [i_11] = min((max((((unsigned int) 514719509U)), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)4840))))), (((((/* implicit */_Bool) arr_30 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 3])) ? (((unsigned int) (unsigned short)61362)) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_10] [i_10]))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_12 = 1; i_12 < 13; i_12 += 1) 
        {
            var_22 = ((min((arr_42 [i_3] [i_12 + 1] [i_12] [i_12 + 1] [i_3]), (((/* implicit */unsigned int) (unsigned short)49834)))) - (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_14 [i_12])))), (((((/* implicit */int) arr_14 [(unsigned short)7])) << (((((/* implicit */int) (unsigned short)49840)) - (49811)))))))));
            arr_48 [i_3] [i_3] = ((/* implicit */_Bool) 3780247787U);
        }
        for (unsigned int i_13 = 2; i_13 < 16; i_13 += 3) 
        {
            var_23 = (_Bool)1;
            arr_51 [i_13] [i_3] [i_3] = ((/* implicit */unsigned short) ((min((((((/* implicit */int) (unsigned short)15708)) * (((/* implicit */int) var_2)))), (((/* implicit */int) max(((unsigned short)49834), (arr_49 [i_3])))))) << (((/* implicit */int) ((_Bool) var_1)))));
            /* LoopSeq 1 */
            for (unsigned int i_14 = 3; i_14 < 15; i_14 += 3) 
            {
                arr_54 [i_14] = arr_26 [i_13 - 2] [i_14 + 1];
                arr_55 [i_3] [i_3] |= min((((/* implicit */unsigned int) ((unsigned short) arr_33 [i_13 + 1] [i_14 + 1] [i_14] [i_14 + 2] [i_14 + 2]))), (((unsigned int) min((1959950334U), (((/* implicit */unsigned int) (_Bool)1))))));
                var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) var_2))));
            }
        }
        var_25 = ((/* implicit */unsigned int) min(((unsigned short)37755), ((unsigned short)49834)));
    }
    /* LoopNest 2 */
    for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) 
    {
        for (unsigned int i_16 = 2; i_16 < 8; i_16 += 3) 
        {
            {
                arr_61 [i_16] = min((((/* implicit */unsigned int) min((var_6), (((((/* implicit */int) (unsigned short)28)) <= (((/* implicit */int) (_Bool)1))))))), (((unsigned int) ((((/* implicit */_Bool) 4U)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                var_26 = ((/* implicit */unsigned int) (unsigned short)65535);
                /* LoopNest 3 */
                for (unsigned int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    for (unsigned int i_18 = 3; i_18 < 9; i_18 += 3) 
                    {
                        for (unsigned short i_19 = 0; i_19 < 10; i_19 += 1) 
                        {
                            {
                                arr_69 [i_15] [i_18 - 3] [i_15] |= ((/* implicit */unsigned short) ((unsigned int) min((((4294961151U) & (arr_30 [i_15] [8U] [(_Bool)1] [i_18]))), (((/* implicit */unsigned int) (_Bool)1)))));
                                arr_70 [i_18] [i_16] [i_16] [i_16] [i_16] [i_16] [8U] = arr_26 [i_17] [i_18 + 1];
                                arr_71 [i_18] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) ((4294967278U) >> (((var_3) - (2125511247U)))))));
                                var_27 *= ((/* implicit */_Bool) max((((unsigned int) arr_62 [i_16 - 2] [i_16 + 1] [i_16 + 1])), (4294967289U)));
                            }
                        } 
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    var_29 |= ((/* implicit */_Bool) ((unsigned int) min((((unsigned int) (unsigned short)65530)), (((/* implicit */unsigned int) (unsigned short)4840)))));
}
