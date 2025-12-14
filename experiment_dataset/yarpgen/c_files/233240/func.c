/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233240
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
    var_18 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (7340032) : (-813697928))));
    var_19 = ((/* implicit */long long int) ((unsigned char) var_0));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_5 [(unsigned char)5] [(unsigned char)5] [i_2 + 2])) ? (arr_3 [i_0] [i_2] [i_2 + 2]) : (((/* implicit */int) arr_6 [i_2 + 2] [i_2 + 1] [i_2 + 2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_16 [(unsigned char)14] [i_0] [i_1 - 1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((int) arr_15 [i_4] [i_3] [i_0] [(unsigned short)20] [i_0] [i_1] [i_0 - 1]))) ? (min((((/* implicit */int) arr_2 [i_0 + 1] [i_0])), (813697929))) : (((/* implicit */int) ((unsigned short) var_8))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_7))))) ? ((~(((/* implicit */int) var_0)))) : ((~(((/* implicit */int) var_10))))))));
                                var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? ((-(((/* implicit */int) arr_0 [i_4])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? ((~(((/* implicit */int) ((unsigned short) var_0))))) : (var_9)))));
                                var_22 ^= ((/* implicit */unsigned int) (-(((int) min((((/* implicit */unsigned char) var_7)), (var_0))))));
                                var_23 = ((/* implicit */int) min((var_23), (-813697928)));
                                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [6U] [i_2])) ? (((((-813697931) <= (var_6))) ? (((((/* implicit */_Bool) -321076366)) ? (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [(short)10] [i_3] [i_4] [i_1 + 1] [i_0 - 1])) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) var_12)) ? (var_11) : (arr_14 [i_4]))))) : (min((((((/* implicit */_Bool) -1170120092)) ? (var_6) : (-321076366))), (((((/* implicit */_Bool) var_8)) ? (var_12) : (var_9))))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_2] [(short)12] [i_0] [i_2] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30125)) ? (((/* implicit */unsigned int) (-2147483647 - 1))) : (4122105530U)))));
                        /* LoopSeq 2 */
                        for (int i_6 = 0; i_6 < 21; i_6 += 2) 
                        {
                            var_25 = ((/* implicit */short) ((((min((var_3), (((/* implicit */unsigned int) var_15)))) < (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) / (arr_17 [i_0] [i_2] [i_5])))))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)151)), (var_3)))) ? (((/* implicit */int) ((var_2) <= (arr_20 [i_0] [i_0] [i_5] [i_5] [i_0] [i_5] [i_1 - 2])))) : (((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))));
                            arr_23 [i_0] [18U] [12U] [i_5] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 813697930)), (arr_18 [18] [i_0] [i_0] [i_0])))) ? ((-(-813697912))) : (((/* implicit */int) var_5))))) > (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (arr_9 [i_2 + 2] [i_1] [i_0]))))) & (((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0])))))))));
                            var_26 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)30120)), (-321076366)));
                            arr_24 [i_6] [i_0] [i_5] [i_2] [i_0] [i_0 + 2] = ((((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)214)) - (arr_5 [i_5] [5] [i_0]))) - (max((((/* implicit */int) var_13)), (-813697912)))))) ? (((/* implicit */int) arr_21 [i_0])) : (((/* implicit */int) var_17)));
                        }
                        for (unsigned int i_7 = 0; i_7 < 21; i_7 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) var_15);
                            var_28 = ((/* implicit */unsigned char) ((2072172005) - (1477520140)));
                            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((1334435995) + (arr_5 [(unsigned char)10] [i_2 + 3] [i_0])))) ? (((((/* implicit */_Bool) arr_17 [12] [(unsigned short)4] [i_5])) ? (((/* implicit */int) var_1)) : (arr_12 [i_7] [i_0] [i_0] [i_0 - 1]))) : (max((var_9), (((/* implicit */int) var_5))))))) ? (min((((/* implicit */unsigned int) (+(var_9)))), (max((arr_10 [i_0] [i_2 + 3] [i_5]), (((/* implicit */unsigned int) arr_22 [(short)3] [i_1] [6] [i_5] [i_0] [i_5])))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) (unsigned short)30107)) % (((/* implicit */int) (short)-7537))))))));
                            var_30 = (i_0 % 2 == 0) ? (((/* implicit */long long int) ((((arr_13 [i_0] [i_0] [i_2 + 1] [i_5] [(unsigned short)9]) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_2 + 1])) + (29949)))))) : (((/* implicit */long long int) ((((((arr_13 [i_0] [i_0] [i_2 + 1] [i_5] [(unsigned short)9]) - (2147483647))) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_2 + 1])) + (29949))))));
                        }
                        arr_27 [i_0] = ((/* implicit */unsigned char) (~(min((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))), (((unsigned int) var_5))))));
                    }
                    for (int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_16)), (arr_5 [i_0] [i_1 - 3] [19])))) ? (((/* implicit */unsigned int) var_15)) : (((unsigned int) -1879631439))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) var_13)) / (arr_28 [i_0 + 1] [i_8])))))) : (arr_10 [i_8] [(short)16] [i_8]))))));
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
                        {
                            var_32 = min((((((/* implicit */_Bool) ((var_12) / (arr_3 [i_0] [i_1 + 1] [(unsigned short)11])))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) ((((/* implicit */int) arr_11 [i_0])) < (((/* implicit */int) var_7))))))), ((-(((/* implicit */int) var_16)))));
                            arr_32 [i_9] [i_0] [i_2] [i_0] [(unsigned short)0] = ((/* implicit */int) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((arr_10 [i_0] [i_1] [i_0]) ^ (((/* implicit */unsigned int) -813697903)))) : (((/* implicit */unsigned int) ((int) arr_10 [i_0] [i_8] [17U]))))), (((/* implicit */unsigned int) ((unsigned short) ((unsigned char) var_2))))));
                            var_33 = ((/* implicit */short) min((((int) (-(((/* implicit */int) var_5))))), (max((((((/* implicit */int) arr_29 [i_0 + 1] [i_2] [i_8] [i_9])) & (var_9))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_30 [i_9] [12U])) : (((/* implicit */int) var_5))))))));
                            arr_33 [i_9] [i_0] [i_1] [i_0] [i_0 + 2] = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)197)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_12 [(unsigned short)8] [i_0] [i_2 + 3] [i_1]) : (arr_3 [i_0] [i_2] [i_2])))) ? (min((((/* implicit */int) var_5)), (var_11))) : ((~(((/* implicit */int) var_13))))))));
                        }
                        for (int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
                        {
                            arr_37 [i_0] [i_0] [i_0] [i_0 + 2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) max((var_4), (arr_2 [i_0] [i_0])))), (((((/* implicit */_Bool) var_4)) ? (arr_14 [i_0]) : (((/* implicit */int) var_5))))))) ? (((/* implicit */int) max((arr_9 [i_1 - 2] [i_0 - 1] [i_0 + 1]), (((/* implicit */unsigned short) ((var_2) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) : ((+(var_12)))));
                            var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21124)) ? (-1) : (813697911))))));
                        }
                        for (int i_11 = 0; i_11 < 21; i_11 += 2) /* same iter space */
                        {
                            var_35 = arr_7 [i_0] [i_0 + 1] [i_0];
                            var_36 = ((/* implicit */unsigned char) min((var_36), (arr_31 [i_0] [(short)9] [i_2] [i_8] [i_11])));
                        }
                    }
                    /* vectorizable */
                    for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        arr_43 [i_2] [i_0] = ((((/* implicit */int) arr_31 [i_0] [i_0] [i_0 + 2] [i_1] [i_1])) - (((/* implicit */int) arr_31 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1])));
                        arr_44 [4] [i_0] [(unsigned short)2] [i_12] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) var_17))) - (((var_11) + (((/* implicit */int) arr_2 [i_0 - 1] [i_0]))))));
                        arr_45 [20] [8U] [i_0] [i_12] = ((/* implicit */int) var_14);
                        var_37 -= ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) arr_9 [3] [3] [i_12])) ? (((/* implicit */int) (unsigned char)158)) : (var_11))));
                    }
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) min((max((((/* implicit */int) ((short) var_17))), ((~(arr_28 [i_1] [0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_29 [i_0] [i_1 - 2] [i_2 + 2] [i_13 - 1]))))) ? ((+(((/* implicit */int) var_14)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_46 [(unsigned short)18] [i_1] [i_2] [(unsigned short)18]))))))))))));
                        arr_48 [i_0] [i_1] [(unsigned char)18] [i_13 - 1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_41 [i_0] [i_0] [i_1 - 2] [i_1 - 3] [i_2] [i_13])) ? (((/* implicit */int) arr_15 [i_13] [i_0] [i_0] [i_2] [i_0] [i_0 + 2] [i_0])) : (((/* implicit */int) var_10))))))) ? (((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_2 + 2] [i_2 + 2])) ? ((-(var_3))) : (((/* implicit */unsigned int) ((int) arr_20 [i_0 - 1] [i_0 - 1] [i_1 - 2] [i_2] [i_2 - 1] [i_2 + 3] [i_13]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) var_2))))))));
                        var_39 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_15)))) ? (arr_17 [i_1 - 3] [i_2] [i_13]) : (((((/* implicit */int) (unsigned short)30133)) << (((((/* implicit */int) var_13)) - (139)))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_1 [i_1] [i_2]), (((/* implicit */unsigned short) var_5)))))))) : (max((((/* implicit */unsigned int) ((arr_17 [i_0] [i_2] [i_13]) ^ (var_11)))), (((arr_47 [i_0 + 1] [i_1 - 1] [i_2 + 2] [i_13 - 1] [i_13 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
                    }
                }
            } 
        } 
    } 
}
