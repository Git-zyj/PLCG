/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36329
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_15 &= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17740))) < (arr_0 [i_0 + 1] [i_0 + 1]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            arr_14 [i_3] [i_2] [i_1] [i_3] = ((/* implicit */unsigned char) ((unsigned short) ((unsigned short) (short)-17734)));
                            var_16 += ((/* implicit */unsigned long long int) arr_5 [i_3] [i_3]);
                            var_17 = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [14] [i_0 - 2] [i_0 + 3] [i_2])) * (((/* implicit */int) arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 3]))));
                            var_18 = ((/* implicit */short) var_3);
                        }
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((long long int) arr_13 [i_0 - 1] [i_1] [(signed char)15] [i_0 - 1]));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)91)) : (((/* implicit */int) (_Bool)0))));
                        var_21 = ((/* implicit */short) (~((~(((/* implicit */int) var_3))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                        {
                            arr_19 [i_2] [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned char) ((((long long int) var_3)) * (((/* implicit */long long int) ((arr_13 [i_0] [i_2] [i_5] [i_6]) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_0)))))));
                            var_22 = ((/* implicit */unsigned long long int) arr_17 [i_0 - 1] [i_0 - 3] [i_0 - 1] [i_0] [i_0 - 3]);
                            var_23 = ((/* implicit */unsigned char) arr_11 [i_5] [i_5]);
                        }
                    }
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        arr_22 [i_0 + 2] [i_1] [i_1] [4LL] [i_2] [i_7] &= ((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_0] [i_7] [i_2] [0ULL])) | (((/* implicit */int) var_9))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) var_11);
                            arr_25 [i_0] [i_1] [i_1] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((arr_7 [i_7] [i_8] [(unsigned char)6] [i_0 + 3]) != (arr_7 [i_7] [i_7] [i_2] [i_0 - 1])))) : (((/* implicit */int) ((((/* implicit */int) ((65535) == (((/* implicit */int) arr_15 [(unsigned char)16] [i_2] [i_7] [i_8]))))) <= ((+(((/* implicit */int) var_12)))))))));
                            var_25 = ((/* implicit */signed char) arr_0 [i_0 + 3] [i_0 - 1]);
                            var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_23 [i_0] [i_0] [i_0]))))) ? (arr_0 [i_7] [i_8]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) * (((18446744073709551615ULL) / (4856808377856791937ULL)))))));
                        }
                        for (int i_9 = 2; i_9 < 21; i_9 += 4) 
                        {
                            var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(arr_18 [i_1] [i_7] [i_0 - 2] [i_0 + 3] [17U] [i_1] [i_9]))))));
                            var_28 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((_Bool) arr_21 [i_0] [i_0 - 1] [i_0 + 2] [i_9 - 2] [i_0 - 1] [i_9])))));
                            var_29 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(-204713884)))) ? (arr_7 [i_9] [i_0] [i_9 + 2] [i_1]) : (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) arr_3 [i_9] [i_0])) || (var_0)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 2; i_10 < 23; i_10 += 4) 
                        {
                            arr_30 [i_10] [i_10] [i_10] [i_1] &= ((/* implicit */signed char) var_0);
                            var_30 += ((/* implicit */long long int) (~(((unsigned long long int) arr_5 [i_10 - 2] [i_2]))));
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)3))));
                            var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0 - 3] [i_0] [i_10 - 1]))));
                        }
                        for (short i_11 = 0; i_11 < 24; i_11 += 3) 
                        {
                            var_33 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 2])) ? (arr_3 [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) min((var_11), (((/* implicit */unsigned char) (signed char)(-127 - 1))))))));
                            var_34 -= ((/* implicit */short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_31 [i_0 - 1] [i_1] [(signed char)14] [i_7] [i_7] [i_1]) < (((/* implicit */long long int) ((/* implicit */int) (short)16068))))))) | (((unsigned long long int) var_12))))));
                            var_35 = (+(min((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (-879767361) : (((/* implicit */int) arr_24 [i_11] [i_7] [i_7] [i_2] [i_7] [i_1] [i_0]))))), ((-(arr_28 [i_7] [i_7] [i_7] [i_0]))))));
                            arr_33 [i_1] [i_7] [i_7] = ((/* implicit */short) max((((/* implicit */unsigned int) (~(((/* implicit */int) min((var_10), (((/* implicit */unsigned short) (signed char)121)))))))), (((unsigned int) ((unsigned short) arr_8 [(short)9] [(signed char)4] [i_7] [(short)9])))));
                            var_36 = (((~(((/* implicit */int) var_7)))) & (((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (arr_17 [i_7] [i_7] [i_2] [i_1] [i_0]) : (arr_17 [i_0 + 2] [i_1] [(unsigned char)22] [i_7] [i_11]))));
                        }
                        var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) max((((/* implicit */short) arr_32 [i_7] [i_2] [i_7] [i_0 - 2] [i_7])), (arr_2 [i_1])))) != ((+(((/* implicit */int) (signed char)-1)))))))));
                        arr_34 [9ULL] [i_7] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2003061331763340888ULL)) ? (((/* implicit */int) arr_27 [i_0 - 2] [i_1] [i_2] [i_2] [i_7])) : (((/* implicit */int) (signed char)-127))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_11 [i_7] [13])), (arr_8 [i_0] [(short)20] [i_2] [i_7])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-117)) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_7] [i_1] [i_2])) : (0)))))))) : (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_2)) ? (arr_8 [i_1] [i_1] [i_1] [(short)4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(_Bool)1] [i_7] [i_1])))))))));
                    }
                    for (short i_12 = 1; i_12 < 22; i_12 += 4) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_13 = 0; i_13 < 24; i_13 += 2) 
                        {
                            arr_40 [i_2] [i_2] [i_2] [i_2] [i_2] [(unsigned char)4] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_24 [i_12 + 2] [i_0 - 3] [i_0 + 2] [i_0] [i_2] [i_12] [i_2]))));
                            var_38 *= (!((!(((/* implicit */_Bool) 998421168)))));
                            var_39 = ((/* implicit */unsigned short) ((unsigned char) arr_37 [i_12 - 1] [i_0 + 1] [i_12]));
                            var_40 += ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)61488)))));
                            var_41 &= ((/* implicit */unsigned char) ((((((/* implicit */int) arr_37 [i_0] [i_12] [i_13])) == (((/* implicit */int) arr_32 [i_2] [(_Bool)1] [i_12 + 2] [10U] [i_12 + 2])))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) arr_5 [i_0] [i_12 + 2]))))))));
                        }
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(11128567411043331703ULL)))) ? (((((/* implicit */_Bool) arr_24 [i_0] [i_0 - 1] [i_12 - 1] [i_0 - 1] [i_1] [i_12 - 1] [i_12 + 2])) ? (((/* implicit */int) arr_24 [(signed char)16] [i_0 + 2] [i_12 + 1] [i_12] [i_1] [i_12 + 1] [i_12 + 1])) : (((/* implicit */int) arr_24 [i_0] [i_0 + 1] [i_12 + 2] [i_0] [i_2] [i_12 + 1] [i_12 + 1])))) : (((((/* implicit */_Bool) arr_17 [21U] [(signed char)22] [i_12] [i_12] [i_12 + 2])) ? (arr_17 [i_2] [i_2] [(signed char)0] [i_1] [i_2]) : (arr_17 [(_Bool)1] [i_12] [i_12] [i_12 - 1] [i_12])))));
                        arr_41 [i_1] [i_2] [(short)16] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_12 - 1] [i_0 + 3])) ? ((+(((/* implicit */int) arr_2 [i_2])))) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) 204713875))));
                    }
                    for (short i_14 = 1; i_14 < 22; i_14 += 4) /* same iter space */
                    {
                        var_43 &= ((/* implicit */_Bool) 25);
                        arr_44 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (((unsigned long long int) (+(arr_16 [(_Bool)1] [i_1] [i_2] [(_Bool)1]))))));
                        var_44 = ((/* implicit */unsigned char) ((_Bool) (!(((/* implicit */_Bool) max((var_5), (((/* implicit */short) (signed char)92))))))));
                    }
                    arr_45 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1]))))))))));
                }
            } 
        } 
    } 
    var_45 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)122)) * (((/* implicit */int) (signed char)122))))) ? (7886718546001054768LL) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)125)))))))));
}
