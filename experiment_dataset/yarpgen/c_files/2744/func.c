/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2744
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
    var_20 = ((/* implicit */unsigned int) var_16);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_4 = 2; i_4 < 18; i_4 += 3) 
                        {
                            var_21 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) << (((((unsigned long long int) arr_0 [18LL])) - (2028210977853240852ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 7616201338140563815ULL))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((var_1), ((signed char)-1))))))) : (((arr_5 [16]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)56))) : (max((((/* implicit */unsigned long long int) var_11)), (10830542735568987788ULL)))))));
                            arr_15 [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_13 [11ULL] [i_2 + 3] [i_3] [i_3] [i_4 - 2])) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_3] [i_4 + 1] [i_0])) : (((/* implicit */int) arr_8 [i_0] [1LL] [i_4 - 2] [i_4 - 2] [i_4 + 1] [i_0])))), (((/* implicit */int) var_15))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(((arr_1 [(unsigned char)16] [i_4]) ? (((/* implicit */int) arr_1 [2LL] [i_4 - 1])) : (((/* implicit */int) arr_1 [(signed char)0] [i_1])))))))));
                        }
                        arr_16 [i_0] [i_0] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)145)) ? (((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0])))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_9 [i_0] [i_0])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0])) >= (((/* implicit */int) (short)0)))))))));
                        var_23 -= ((/* implicit */short) 260046848);
                        var_24 = ((/* implicit */long long int) var_13);
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 3) 
                        {
                            var_25 = var_6;
                            var_26 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
                        }
                        for (int i_6 = 1; i_6 < 17; i_6 += 3) 
                        {
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_2 + 1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2 + 1] [i_2] [i_0])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0]))))) != (14181128821393524774ULL)));
                            arr_23 [i_0] [i_1] [i_2] [i_2] [i_3] [i_0] = (unsigned short)0;
                            arr_24 [i_6] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (10830542735568987788ULL))) / (((/* implicit */unsigned long long int) arr_12 [i_6] [i_3] [i_3] [(signed char)7] [i_2] [i_1] [i_0]))))) ? (((1399168058U) & (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)7443))))))) : (max((((/* implicit */unsigned int) min((arr_3 [i_0]), (var_7)))), (1399168058U)))));
                        }
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_0] [i_2] [i_0] [i_3] [i_7] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                            arr_28 [i_7] [i_0] [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */int) arr_20 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_2 + 3] [i_2 - 1])) == (((/* implicit */int) arr_20 [i_2] [(unsigned char)18] [i_2] [i_2 + 1] [i_2 + 3]))))) == (((/* implicit */int) ((unsigned char) 4ULL))));
                            arr_29 [(short)12] [i_3] [i_2] [i_1] [i_1] [(short)12] |= ((/* implicit */long long int) arr_3 [i_0]);
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_4 [i_0]), (((/* implicit */long long int) arr_11 [i_7 + 1] [i_7] [i_7] [i_7]))))) ? (min((((/* implicit */int) arr_11 [i_7 + 1] [11ULL] [6] [i_7 + 1])), (arr_7 [i_7 + 1] [i_7 + 1] [i_7] [i_3]))) : (((((/* implicit */_Bool) arr_4 [i_0])) ? (2147483626) : (arr_7 [i_7 + 1] [i_7 + 1] [i_2] [(unsigned char)17])))));
                            arr_30 [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_13 [i_0] [i_1] [i_0] [(unsigned short)14] [i_7 + 1]);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4246554499975249877ULL)) ? (arr_25 [i_0] [i_2] [i_1] [i_0] [i_0] [i_0]) : (((((/* implicit */_Bool) var_11)) ? (var_6) : (((/* implicit */int) arr_9 [i_0] [i_0]))))));
                        /* LoopSeq 1 */
                        for (int i_9 = 1; i_9 < 18; i_9 += 1) 
                        {
                            var_29 *= ((/* implicit */signed char) arr_34 [18LL] [i_1] [18LL] [(_Bool)1] [i_9]);
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) (-(((/* implicit */int) arr_11 [i_9 + 1] [i_9 + 1] [i_2 + 1] [i_0 + 3])))))));
                            var_31 = ((/* implicit */signed char) (~(arr_13 [i_9] [i_9] [i_9] [i_9] [i_9 - 1])));
                        }
                        arr_36 [i_0] = var_16;
                        arr_37 [(short)14] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_16))) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_1] [i_2] [i_8])) : (((/* implicit */int) var_12))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 19; i_10 += 3) 
                    {
                        arr_42 [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_0)), ((short)3064)))) << (((((arr_32 [i_0] [i_1] [i_2] [i_10]) & (((/* implicit */unsigned int) arr_25 [i_0] [i_1] [i_2] [i_10] [i_10] [i_1])))) - (1611139291U)))))) : (arr_0 [i_0])))) : (((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_0)), ((short)3064)))) << (((((((arr_32 [i_0] [i_1] [i_2] [i_10]) & (((/* implicit */unsigned int) arr_25 [i_0] [i_1] [i_2] [i_10] [i_10] [i_1])))) - (1611139291U))) - (3355522977U)))))) : (arr_0 [i_0]))));
                        var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) 1023LL))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        for (unsigned long long int i_12 = 2; i_12 < 15; i_12 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */short) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((58720256ULL), (((/* implicit */unsigned long long int) -1)))))))) : ((-(((/* implicit */int) max((var_2), (((/* implicit */unsigned char) var_15)))))))));
                                arr_50 [i_0] [i_0] [i_2] [i_2] [i_11] [i_12] [(unsigned char)11] = ((/* implicit */short) var_14);
                                var_34 = ((/* implicit */unsigned char) (short)7359);
                            }
                        } 
                    } 
                    arr_51 [i_0 + 3] [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 7616201338140563828ULL)) ? ((+(((/* implicit */int) (short)18928)))) : ((((((~(((/* implicit */int) arr_48 [i_0] [i_0] [i_0 + 1])))) + (2147483647))) << (((arr_18 [i_0]) - (17634886751647748969ULL)))))));
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */signed char) arr_20 [i_0] [i_0] [i_0] [i_1] [i_2])), (var_0)))), (max((((/* implicit */int) (_Bool)0)), (arr_3 [i_0])))))) ? (((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) arr_13 [i_2] [i_2 + 2] [i_1] [i_1] [i_0]))))) ? ((+(var_11))) : (((/* implicit */long long int) (-(((/* implicit */int) var_15))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_47 [i_2] [(unsigned char)2] [(unsigned char)2] [(_Bool)1]) + (((/* implicit */int) arr_17 [i_0] [i_0] [i_1] [i_1] [i_2]))))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_49 [i_0] [i_0 + 3] [i_0] [13] [i_0] [(unsigned char)5]))))))))))));
                }
            } 
        } 
    } 
}
