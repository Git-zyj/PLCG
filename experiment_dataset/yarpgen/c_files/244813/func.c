/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244813
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
    var_12 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((var_9) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))) - (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    arr_7 [i_1] = ((/* implicit */long long int) (unsigned short)14336);
                    var_13 = ((/* implicit */signed char) var_7);
                    var_14 = ((/* implicit */signed char) ((min((((/* implicit */long long int) (_Bool)1)), (var_9))) / (((long long int) (unsigned short)22785))));
                }
                for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) max(((_Bool)1), (arr_6 [i_0] [i_3] [i_1])))) >= (((/* implicit */int) arr_2 [i_0 + 1])))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
                    {
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            {
                                arr_18 [i_0 + 1] [i_3] [i_3] [i_4] [i_1] = ((/* implicit */unsigned short) arr_12 [i_1] [i_1] [i_1] [i_4]);
                                var_15 = ((/* implicit */unsigned short) max((var_15), ((unsigned short)22794)));
                                arr_19 [i_0] [i_1] = ((/* implicit */long long int) arr_0 [i_0 - 1] [i_0 - 1]);
                                arr_20 [i_5] [i_1] = ((/* implicit */unsigned short) (((_Bool)1) ? (70093866270720LL) : (6523745528725688867LL)));
                                arr_21 [(unsigned short)3] [(signed char)10] [(signed char)10] [i_4] [i_1] = ((/* implicit */long long int) var_11);
                            }
                        } 
                    } 
                    arr_22 [i_0 + 1] [i_1] [i_1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-101))));
                    /* LoopSeq 3 */
                    for (signed char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        arr_27 [i_0] [i_0] [i_1] [(unsigned short)11] [i_6] = ((/* implicit */unsigned short) min((min((arr_25 [i_0] [i_0] [i_1] [i_3] [i_6]), (min((-70093866270709LL), (((/* implicit */long long int) (signed char)53)))))), (((/* implicit */long long int) max(((_Bool)1), ((_Bool)1))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_8 [i_0 - 1] [i_1] [i_0 - 1] [i_0 + 1]) - (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_3])) - (((/* implicit */int) (unsigned short)17479)))))))) ? (min((((((/* implicit */long long int) ((/* implicit */int) (signed char)86))) + (1125831187365888LL))), (((/* implicit */long long int) (~(((/* implicit */int) arr_12 [i_1] [i_1] [0LL] [0LL]))))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                    }
                    for (signed char i_7 = 0; i_7 < 16; i_7 += 2) 
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_3 [i_0] [i_1] [i_3]);
                        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_7] [i_7])) - (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (arr_10 [i_0 - 1] [i_0] [i_7] [i_1])))))))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            var_18 = (unsigned short)57344;
                            arr_37 [i_1] = ((/* implicit */_Bool) (unsigned short)43905);
                            arr_38 [i_0] [3LL] [i_1] = ((/* implicit */_Bool) (signed char)94);
                            var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)480)) + (((/* implicit */int) (unsigned short)31))))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (unsigned short)22785))));
                            var_20 = ((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_1] [i_9]);
                        }
                        for (long long int i_10 = 1; i_10 < 13; i_10 += 2) 
                        {
                            arr_42 [i_1] [i_1] [i_1] [i_8] [i_10] [i_3] [i_10] = ((/* implicit */unsigned short) arr_3 [i_10 + 3] [i_1] [i_10 + 3]);
                            var_21 = ((arr_15 [i_1] [10LL] [i_10 + 1] [i_10] [i_10 - 1] [i_10]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 562675075514368LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_28 [i_1] [i_1] [i_10] [i_8])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_31 [i_1] [i_1] [i_3]), (((/* implicit */signed char) arr_12 [i_1] [i_8] [i_3] [i_1])))))) : ((-(4035225266123964416LL))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_4))))))));
                            arr_43 [i_0] [i_1] [i_1] [i_8] [i_1] [i_8] [i_10 - 1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_1] [(signed char)10] [i_3] [i_0 - 1] [i_0] [i_1])) ? (((/* implicit */int) arr_17 [i_1] [10LL] [4LL] [i_0 + 1] [i_0] [i_1])) : (((/* implicit */int) arr_17 [i_1] [i_10 + 2] [i_10] [i_0 + 1] [i_0 + 1] [i_1]))))) != (18014398509350912LL)));
                            var_22 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_13 [i_1] [i_1])), (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_3] [i_8] [i_1])) ? (arr_14 [i_1] [i_8] [i_8] [i_3] [(_Bool)1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2016))))))) >> (((arr_28 [i_1] [i_1] [i_3] [(signed char)11]) + (5159659607475780679LL)))))) : (((/* implicit */unsigned short) ((((min((((/* implicit */long long int) arr_13 [i_1] [i_1])), (((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_1] [i_3] [i_8] [i_1])) ? (arr_14 [i_1] [i_8] [i_8] [i_3] [(_Bool)1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)2016))))))) + (9223372036854775807LL))) >> (((((arr_28 [i_1] [i_1] [i_3] [(signed char)11]) + (5159659607475780679LL))) + (2161343901194858838LL))))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_47 [i_11] [i_1] [i_8] [(_Bool)0] [i_3] [i_1] [i_0] = ((/* implicit */signed char) -2719348465813777107LL);
                            arr_48 [i_1] [i_1] [i_3] [i_3] [i_11] = ((/* implicit */_Bool) (unsigned short)248);
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                        {
                            var_23 &= ((/* implicit */unsigned short) arr_25 [i_12] [i_3] [i_3] [i_12] [i_12]);
                            arr_51 [i_0 + 1] [i_1] [i_3] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max(((signed char)96), (((/* implicit */signed char) min(((_Bool)1), (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))))));
                            var_24 = min((arr_8 [i_0 - 1] [i_1] [i_0 + 1] [i_0 - 1]), (((/* implicit */long long int) ((_Bool) arr_8 [i_0 + 1] [i_1] [i_0] [i_0 + 1]))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_33 [i_0 - 1] [i_1] [i_1]), (arr_33 [i_0 - 1] [11LL] [i_1])))) ? (((((/* implicit */_Bool) arr_33 [i_0 + 1] [i_0 + 1] [i_1])) ? (((/* implicit */int) arr_33 [i_0 + 1] [i_1] [i_1])) : (((/* implicit */int) arr_33 [i_0 + 1] [i_1] [i_1])))) : (((/* implicit */int) max((arr_33 [i_0 - 1] [i_13] [i_1]), (arr_33 [i_0 - 1] [i_1] [i_1]))))));
                            var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) ((signed char) (_Bool)0)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_50 [i_3] [(signed char)0])))))));
                            var_27 |= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_3])) : (((/* implicit */int) var_11))))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), ((unsigned short)42065)));
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            arr_56 [i_1] [i_1] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((arr_36 [i_0] [i_1] [15LL] [i_1] [i_8] [i_14] [i_14]) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_14]) && (((/* implicit */_Bool) arr_16 [i_1])))))) : (arr_28 [i_1] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-16))))) ? (arr_5 [i_3] [i_1] [i_8]) : (arr_35 [i_14] [i_8] [i_1] [i_1] [i_0])));
                        }
                        for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
                        {
                            arr_60 [i_0] [i_1] [i_3] [i_8] [i_8] [i_15] |= ((/* implicit */_Bool) ((long long int) max((((((/* implicit */_Bool) (signed char)-104)) ? (-4355917741883953698LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)57))))), (4389456576512LL))));
                            arr_61 [(signed char)10] [i_3] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -268674655886521717LL)) ? (((/* implicit */int) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) != (643761624845700870LL))))) : (((/* implicit */int) (_Bool)1))));
                        }
                    }
                    /* LoopNest 2 */
                    for (long long int i_16 = 2; i_16 < 13; i_16 += 4) 
                    {
                        for (unsigned short i_17 = 0; i_17 < 16; i_17 += 3) 
                        {
                            {
                                arr_68 [i_1] [i_1] = ((((/* implicit */_Bool) max(((signed char)28), ((signed char)124)))) ? (((-6668910329954599145LL) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_67 [i_0] [i_1] [i_3] [i_1] [i_17]))));
                                var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) (((~((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-119)))))) & (((((((/* implicit */_Bool) arr_28 [i_16] [i_1] [i_3] [i_1])) ? (((/* implicit */int) arr_59 [i_3] [i_17] [i_3] [i_16 + 2] [i_17] [i_1])) : (((/* implicit */int) (signed char)72)))) ^ (((((/* implicit */int) var_11)) >> (((((/* implicit */int) (signed char)124)) - (109))))))))))));
                            }
                        } 
                    } 
                }
                var_31 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)24576))) ? (((/* implicit */int) min((var_5), (((/* implicit */signed char) arr_1 [i_0 + 1]))))) : (((/* implicit */int) arr_1 [i_0 + 1]))));
            }
        } 
    } 
}
