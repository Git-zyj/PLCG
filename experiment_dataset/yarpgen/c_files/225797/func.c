/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225797
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
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */int) var_2)) * (((/* implicit */int) var_17))))))) ? ((-(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */long long int) var_10))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_3))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (-((~(((/* implicit */int) var_4))))));
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6))))), (((arr_2 [i_1] [i_1]) * (((/* implicit */unsigned long long int) arr_1 [i_0]))))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1] [i_2]))) : (arr_8 [i_0] [(short)3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_2] [i_2])))));
                    arr_10 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) -5240526131460343575LL);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_21 *= ((/* implicit */_Bool) var_4);
                                var_22 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) max(((short)1252), (((/* implicit */short) (unsigned char)62))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_3 + 1]))) : (1309776885U)))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) || ((_Bool)1)))), (min((((/* implicit */unsigned long long int) arr_12 [i_3] [i_3] [i_2] [i_2] [i_1] [i_0])), (var_0)))))) || (max((arr_9 [i_3] [i_3 + 1] [i_1 + 2]), (arr_9 [i_4] [i_3 + 1] [i_1 + 2])))));
                                var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((((((/* implicit */int) var_17)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))))) | (((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) ^ (((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (short i_5 = 0; i_5 < 22; i_5 += 3) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_9 [2] [i_1 + 1] [i_1 + 1])), ((+(((long long int) (short)1252))))));
                        var_26 *= ((/* implicit */signed char) ((int) max((max((var_8), (((/* implicit */long long int) var_9)))), (((/* implicit */long long int) var_5)))));
                        var_27 |= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)21849))));
                    }
                    for (short i_6 = 0; i_6 < 22; i_6 += 3) /* same iter space */
                    {
                        var_28 = ((_Bool) (+(((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1 - 2] [i_1] [i_1]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_6))));
                            var_30 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_1 - 2] [i_7])) ? (arr_11 [i_1 - 1] [i_7]) : (arr_11 [i_1 - 1] [i_7])));
                        }
                        for (short i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            arr_26 [7] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)57613)) ? (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1])) : (((/* implicit */int) (_Bool)1))))) : (((long long int) arr_6 [i_1 + 2] [i_1 + 2]))));
                            var_31 = ((/* implicit */unsigned int) arr_18 [(short)14] [i_0] [i_2] [(short)14] [i_0] [i_0]);
                        }
                        var_32 = min((((13430527895508418152ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21850))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) var_12)), (arr_3 [i_0] [i_2])))));
                    }
                    for (int i_9 = 3; i_9 < 20; i_9 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned char) var_3);
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 4; i_10 < 21; i_10 += 1) 
                        {
                            arr_34 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) max(((unsigned short)57582), (((/* implicit */unsigned short) var_15))))) & (((/* implicit */int) (short)-13885))))) ? (((/* implicit */int) var_15)) : ((~(arr_11 [i_0] [i_0])))));
                            var_34 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)21849)) ? (((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_15))))) : (max((((/* implicit */int) (signed char)-125)), ((+(((/* implicit */int) var_12))))))));
                            var_35 = ((/* implicit */short) var_7);
                        }
                        for (unsigned long long int i_11 = 3; i_11 < 18; i_11 += 2) 
                        {
                            var_36 = ((/* implicit */unsigned int) ((short) ((((/* implicit */int) arr_33 [i_1 + 2])) / (((/* implicit */int) arr_33 [i_1 - 1])))));
                            arr_38 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) arr_24 [i_11] [i_9] [19] [i_0] [i_1 - 1] [i_0] [(_Bool)1])), (2280532286U))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((short) var_10))) == (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_8)))))))))));
                            arr_39 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10976)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)1248))))) > (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0]))) : (13430527895508418160ULL)))));
                            var_37 |= ((/* implicit */int) (-(18446744073709551609ULL)));
                        }
                    }
                }
            } 
        } 
        var_38 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) min((((/* implicit */signed char) var_14)), (var_17)))) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)6])))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_0])) ? (var_0) : (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) (short)20324))))));
    }
    for (short i_12 = 4; i_12 < 21; i_12 += 4) 
    {
        var_39 -= ((/* implicit */signed char) (-(((((/* implicit */int) var_6)) ^ (((/* implicit */int) (unsigned short)43698))))));
        var_40 = ((/* implicit */long long int) ((min((arr_41 [i_12 - 3]), (arr_42 [i_12 - 4]))) ? ((-(((/* implicit */int) var_4)))) : (((/* implicit */int) max((arr_41 [i_12 - 4]), (arr_42 [i_12 + 1]))))));
        var_41 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((arr_42 [i_12 - 2]), (var_12)))), (min((((/* implicit */unsigned int) arr_42 [i_12 - 3])), (2014435010U)))));
        var_42 = ((/* implicit */unsigned int) arr_41 [i_12]);
    }
}
