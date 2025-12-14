/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190902
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_13 ^= ((/* implicit */unsigned char) max((((/* implicit */int) arr_3 [(_Bool)1])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_0 [6LL]))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [(short)8])) : (((/* implicit */int) arr_3 [6U]))))))));
        var_14 = ((/* implicit */unsigned int) max((((long long int) arr_1 [i_0])), (((/* implicit */long long int) ((arr_3 [i_0]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
        arr_6 [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((short) (unsigned char)182))), (max((((/* implicit */int) arr_5 [i_1])), (((int) arr_4 [i_1] [i_1]))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        for (short i_3 = 0; i_3 < 13; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_3] = max((arr_5 [i_2]), (((_Bool) arr_4 [i_3] [i_2])));
                var_16 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) arr_8 [(short)3])), (((long long int) var_11)))), (((long long int) (unsigned char)214))));
                var_17 = ((/* implicit */long long int) ((int) max((arr_9 [i_2] [i_2] [i_3]), (arr_4 [i_2] [i_2]))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 3; i_4 < 11; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned char) arr_12 [i_2] [i_2] [i_2]);
                        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((long long int) var_7))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11))))) : (((unsigned int) var_6)))), (((/* implicit */unsigned int) ((unsigned char) arr_9 [i_4 + 1] [i_4 - 2] [i_4 - 2])))));
                        var_20 = ((/* implicit */short) ((signed char) min((((unsigned char) arr_17 [i_2])), (arr_18 [i_4 + 1] [i_3] [9] [i_3] [i_3] [i_3]))));
                        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) arr_11 [(_Bool)1] [(_Bool)1])) ? (max((var_8), (((/* implicit */long long int) var_11)))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) arr_17 [i_4 + 1])), (var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((arr_10 [i_5]), (((/* implicit */long long int) var_4)))))))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_22 = ((/* implicit */_Bool) arr_7 [8LL] [(unsigned char)5]);
                            var_23 = ((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_19 [8LL] [8LL] [i_7] [i_7])), (var_0))))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [(unsigned char)3] [i_4 + 1] [i_4 - 2] [i_4 - 1]))) : (max((arr_11 [i_2] [i_2]), (((/* implicit */unsigned int) var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_0)))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 12; i_8 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) min((var_24), (max((((/* implicit */short) var_5)), (max((min((arr_21 [i_8] [i_3] [i_4 - 3] [(short)10]), (((/* implicit */short) arr_4 [i_8] [i_4 - 1])))), (((/* implicit */short) ((_Bool) var_3)))))))));
                            arr_29 [6U] [8] [i_3] [i_2] [i_6] = ((/* implicit */unsigned char) max((((arr_20 [i_2] [i_4 + 2] [8U] [i_8 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_8)))) : (((unsigned int) var_7)))), (((/* implicit */unsigned int) var_1))));
                        }
                        for (unsigned int i_9 = 2; i_9 < 12; i_9 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) var_11);
                            var_26 -= ((/* implicit */_Bool) min((((unsigned int) ((_Bool) var_7))), (((((/* implicit */_Bool) ((int) arr_11 [(short)4] [(short)4]))) ? (arr_25 [i_2] [i_9] [i_9 - 2] [(short)10] [i_2] [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (arr_16 [i_9 + 1])))))))));
                            arr_33 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_24 [i_9 - 1] [i_6] [6LL] [i_4 + 2] [i_4 - 1]), (arr_24 [i_9 + 1] [i_9] [i_4] [i_4 - 3] [i_4 - 2])))) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_2] [i_4] [i_4] [1LL] [i_2])) : (((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) (unsigned char)178)) : (-89441585)))));
                        }
                        var_27 = ((/* implicit */unsigned int) ((short) max((((/* implicit */long long int) max((arr_15 [i_2] [i_2] [i_2] [i_2]), (var_0)))), (min((arr_30 [i_3] [i_3] [(unsigned char)1] [i_6] [i_3] [i_6]), (((/* implicit */long long int) arr_8 [i_2])))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_10 = 1; i_10 < 10; i_10 += 1) 
                        {
                            arr_37 [i_2] [(unsigned char)8] [i_10] [i_6] [(_Bool)1] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)9)) : (((/* implicit */int) (_Bool)1))));
                            arr_38 [i_10] [(unsigned char)8] [i_4 - 1] [i_4 - 1] = ((/* implicit */short) min((var_9), (((/* implicit */unsigned int) max((((int) arr_20 [(_Bool)1] [(_Bool)1] [i_6] [i_10])), (((/* implicit */int) min((var_7), (((/* implicit */short) var_10))))))))));
                        }
                        for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
                        {
                            var_28 = ((short) max(((unsigned char)31), (((/* implicit */unsigned char) (_Bool)1))));
                            arr_41 [i_11] [i_11] [i_4] [i_11] [i_11] = ((unsigned char) ((int) arr_19 [(unsigned short)8] [i_6] [i_4] [i_3]));
                            var_29 += ((/* implicit */unsigned char) max((arr_30 [(unsigned char)9] [(unsigned char)6] [(unsigned char)9] [i_4] [i_6] [i_11]), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_36 [i_4 - 3] [i_4 - 3] [i_4 - 2] [i_4 - 3] [i_4 + 2] [i_4 + 2] [i_4])), (var_9))))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_23 [i_4 + 2] [i_4 + 2] [i_4 - 2] [i_4 - 3]), (arr_23 [i_4 + 2] [i_4 + 1] [i_4 - 2] [i_4 - 3])))) ? (arr_23 [i_4 - 1] [i_4 + 2] [i_4 - 3] [i_4 - 1]) : (arr_23 [i_4 - 1] [i_4 + 1] [i_4 - 2] [i_4 - 3])));
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            var_31 |= ((/* implicit */int) ((arr_5 [i_6]) ? (arr_25 [i_4 + 2] [i_4 - 3] [i_4 - 1] [i_4 + 2] [i_4 - 3] [(unsigned char)0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_3] [i_3] [i_4 - 1] [i_4 - 3] [i_12] [i_12])))));
                            var_32 = ((/* implicit */_Bool) arr_43 [i_3] [i_4] [i_4 - 2]);
                        }
                    }
                    for (short i_13 = 1; i_13 < 9; i_13 += 4) 
                    {
                        var_33 += ((/* implicit */unsigned int) ((unsigned char) ((unsigned int) var_2)));
                        arr_47 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) min((((/* implicit */int) min((((/* implicit */short) var_11)), (max((arr_7 [i_2] [i_3]), (((/* implicit */short) var_1))))))), (((((/* implicit */_Bool) max((4294967269U), (((/* implicit */unsigned int) (_Bool)0))))) ? (((/* implicit */int) arr_26 [12U] [i_13] [i_13 + 1] [(unsigned char)5] [i_13 + 1] [i_4 - 2] [i_3])) : (((/* implicit */int) max((((/* implicit */short) arr_20 [i_2] [1U] [i_4 + 1] [i_4])), (arr_26 [i_2] [i_3] [i_3] [i_3] [i_3] [i_13] [i_13]))))))));
                        var_34 = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) arr_10 [i_4 + 2]))), (arr_10 [i_4 + 2])));
                        var_35 = ((/* implicit */signed char) ((int) (_Bool)1));
                    }
                    var_36 = ((/* implicit */int) arr_26 [i_2] [11] [i_3] [i_3] [i_3] [8] [(unsigned short)1]);
                    arr_48 [i_2] = ((/* implicit */unsigned long long int) arr_36 [(_Bool)1] [6LL] [(unsigned char)5] [(_Bool)1] [i_3] [i_4] [i_4]);
                }
                for (unsigned int i_14 = 3; i_14 < 11; i_14 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_15 = 0; i_15 < 13; i_15 += 2) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                arr_59 [i_14] [i_3] [0LL] [i_3] [i_3] = ((/* implicit */short) min((((/* implicit */long long int) arr_15 [i_3] [i_14 - 1] [i_14 - 1] [0])), (max((((/* implicit */long long int) var_10)), (min((arr_10 [(short)4]), (((/* implicit */long long int) var_6))))))));
                                var_37 -= ((_Bool) max((((_Bool) var_12)), (((_Bool) var_11))));
                                var_38 = ((/* implicit */long long int) min((var_38), (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (11U)))), (max((((((/* implicit */_Bool) var_10)) ? (arr_57 [i_2] [i_3] [i_2] [i_15] [i_2]) : (((/* implicit */long long int) arr_51 [i_3] [i_14] [i_16])))), (((/* implicit */long long int) ((_Bool) arr_31 [i_3] [i_3] [i_3] [(unsigned char)6] [(_Bool)1] [(unsigned char)6] [6LL])))))))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */unsigned int) max((max((arr_23 [i_2] [i_2] [i_14 - 3] [i_14]), (((/* implicit */int) arr_46 [i_14 - 2] [i_14 - 3] [i_14 + 2] [i_14 + 1])))), (((/* implicit */int) ((_Bool) ((unsigned char) arr_51 [i_3] [i_3] [i_2]))))));
                    var_40 = ((_Bool) max((((/* implicit */long long int) arr_4 [i_3] [i_14])), (((long long int) arr_55 [i_14] [i_3] [i_3] [i_3]))));
                }
                var_41 = ((/* implicit */int) min((max((((/* implicit */unsigned int) ((unsigned char) arr_14 [i_2] [i_2]))), (((unsigned int) var_4)))), (((/* implicit */unsigned int) max((((/* implicit */int) ((short) var_11))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_45 [(unsigned char)4] [(unsigned char)4] [i_2] [i_3] [i_3] [i_3])) : (((/* implicit */int) var_4)))))))));
            }
        } 
    } 
}
