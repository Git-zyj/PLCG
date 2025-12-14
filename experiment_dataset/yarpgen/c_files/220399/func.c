/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220399
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
                            {
                                arr_14 [i_2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_3] [i_2]))));
                                arr_15 [i_0] [i_1] [i_2] [(_Bool)1] [i_2] = ((/* implicit */long long int) arr_10 [i_2] [i_4] [i_2] [i_2] [i_2] [i_3]);
                            }
                            /* vectorizable */
                            for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
                            {
                                arr_18 [i_0] [i_1] [i_1] [i_5] [(short)2] [i_3] [(signed char)14] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_2]))));
                                arr_19 [i_1] [i_2] [i_3] [i_5] &= ((/* implicit */short) ((arr_5 [i_2] [i_2]) + (var_10)));
                            }
                            arr_20 [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_11 [i_1] [i_2])))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1]))) >= ((+(8021194319054922766LL)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [(unsigned char)0] [i_1] [i_2] [i_2] [i_3] [i_3] [18LL])) : (((/* implicit */int) arr_12 [i_1] [i_2]))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned int i_6 = 4; i_6 < 19; i_6 += 1) 
                {
                    arr_23 [8U] [i_1] [i_1] &= ((/* implicit */unsigned int) arr_0 [i_0] [i_1]);
                    arr_24 [i_6] [i_1] [(signed char)3] [i_0] = ((/* implicit */short) (~(-3885346184139370213LL)));
                    arr_25 [i_6] [(unsigned short)15] [i_1] [(signed char)13] = ((/* implicit */signed char) arr_4 [i_0] [i_0] [i_0]);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_17 -= ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (unsigned char)22)), (2056415139349452080LL))), (((/* implicit */long long int) var_16))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 4; i_8 < 19; i_8 += 1) 
                    {
                        arr_30 [i_8] [i_8 + 1] [i_7] [i_1] [(short)17] [i_8] = ((/* implicit */_Bool) arr_1 [i_7] [i_0]);
                        /* LoopSeq 1 */
                        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            var_18 = ((/* implicit */long long int) ((short) arr_9 [i_8 + 1] [i_8 + 1] [i_8 - 3] [i_8 + 1]));
                            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_29 [i_8 - 1] [14U] [i_8 - 2] [i_8]))));
                        }
                    }
                    arr_33 [i_0] = ((/* implicit */long long int) ((arr_3 [i_0] [i_0] [i_0]) ? (((((/* implicit */_Bool) (unsigned char)22)) ? (((/* implicit */unsigned long long int) 1358785302555021943LL)) : (var_12))) : (((arr_3 [i_0] [i_1] [i_7]) ? (var_4) : (((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_7]))))));
                    var_20 = ((/* implicit */unsigned char) (((((_Bool)1) ? (var_14) : ((+(10831558319965315511ULL))))) != (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-8021194319054922763LL))))));
                }
                for (unsigned char i_10 = 1; i_10 < 16; i_10 += 2) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_11 = 1; i_11 < 19; i_11 += 3) 
                    {
                        arr_39 [i_0] [(_Bool)1] [(short)4] [i_10] [i_11] [i_11] = ((/* implicit */unsigned long long int) arr_38 [i_10 + 1] [i_10 + 2] [i_10 + 1] [i_11 - 1] [i_11 + 1]);
                        var_21 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_12 [i_0] [10LL])), (((((/* implicit */_Bool) arr_12 [i_0] [(_Bool)1])) ? (((/* implicit */int) arr_12 [i_0] [6LL])) : (((/* implicit */int) arr_12 [i_1] [16]))))));
                    }
                    for (short i_12 = 3; i_12 < 19; i_12 += 4) 
                    {
                        arr_42 [i_12] [i_0] [i_1] [i_1] [i_1] [i_12 - 3] = ((/* implicit */long long int) ((max((arr_17 [i_10 + 4] [i_10 + 2] [i_12]), (arr_13 [i_10 + 4] [i_10 + 2] [i_10] [i_10] [i_10 + 2] [i_12 - 2] [i_12 - 2]))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_13 [i_10 + 4] [i_10 + 2] [i_12] [i_12] [i_12] [i_12 - 2] [i_12 - 2]), (arr_17 [i_10 + 4] [i_10 + 2] [i_12])))))));
                        var_22 = ((/* implicit */signed char) (+((+(((/* implicit */int) arr_17 [i_0] [i_1] [i_12]))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (long long int i_13 = 0; i_13 < 20; i_13 += 4) 
                    {
                        arr_46 [i_13] [i_1] [i_0] = ((/* implicit */unsigned char) (!((_Bool)0)));
                        arr_47 [(short)6] [5] [5] [i_13] = ((/* implicit */signed char) (+(((/* implicit */int) arr_0 [i_10 + 4] [i_10 + 3]))));
                        var_23 = ((/* implicit */unsigned long long int) arr_44 [i_0] [i_0] [i_1] [i_1] [i_10] [i_13]);
                        arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_1] [(unsigned char)16]);
                    }
                    for (unsigned int i_14 = 2; i_14 < 19; i_14 += 2) 
                    {
                        arr_51 [i_0] [i_0] [i_10 + 4] [(unsigned char)14] = ((/* implicit */signed char) (unsigned short)51430);
                        var_24 += ((/* implicit */signed char) var_10);
                        arr_52 [i_0] [i_0] [i_0] = ((/* implicit */long long int) max(((~(((/* implicit */int) ((_Bool) (unsigned char)154))))), (((/* implicit */int) arr_21 [i_10 + 1] [i_10 + 2] [i_10 + 3]))));
                    }
                    var_25 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) max((14797579969220061874ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14105))) : (arr_22 [(signed char)7] [i_1] [i_10])))));
                }
                arr_53 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)87)) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (short)-21202))));
            }
        } 
    } 
    var_26 = ((/* implicit */int) var_5);
}
