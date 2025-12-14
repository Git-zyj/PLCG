/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41893
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
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((var_12) & (3298778495U))) & (((/* implicit */unsigned int) (~(-956367607)))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))))) : (var_4)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */long long int) (((-(arr_4 [i_1 + 1] [i_1 - 1] [i_1 + 1]))) + (((/* implicit */unsigned long long int) 3298778497U))));
                /* LoopSeq 4 */
                for (signed char i_2 = 2; i_2 < 9; i_2 += 2) 
                {
                    arr_8 [i_1] = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) var_5)), (((((/* implicit */_Bool) (short)25924)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned short)2]))) : (var_7))))) << (((((/* implicit */int) var_1)) - (9849)))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 2147483647))));
                    var_18 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_1 - 1] [i_2]);
                }
                for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_10 [(unsigned char)4] [i_1 + 1]))));
                    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_3])) ? (min((((/* implicit */unsigned long long int) var_12)), (arr_4 [i_0] [i_1 - 1] [i_3]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [(_Bool)1] [(_Bool)1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) 1437340221U)) ? (arr_6 [i_1 - 1] [i_1 - 1] [i_1] [i_1 + 1]) : (arr_6 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1]))) : (arr_6 [i_1 + 1] [i_1 - 1] [i_1] [i_1 + 1]))))));
                }
                for (unsigned int i_4 = 3; i_4 < 9; i_4 += 4) 
                {
                    var_22 = ((/* implicit */int) max((max((((/* implicit */long long int) (signed char)127)), (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((unsigned short) max((3761110157999818702ULL), (((/* implicit */unsigned long long int) var_9))))))));
                    var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_0] [i_1]))))) ^ (arr_11 [i_1 - 1] [i_1 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [(signed char)2] [i_1 + 1])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1]))))) : (max((((4611686018427387903LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)124))))), (((/* implicit */long long int) arr_12 [i_0] [i_1] [(_Bool)0]))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        arr_18 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1458136464U)))) ? (((/* implicit */unsigned long long int) 996188825U)) : (max((arr_9 [i_4 + 2] [i_1 + 1]), (((/* implicit */unsigned long long int) 2236631205U))))));
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) arr_5 [i_1 + 1] [i_5]))) ? ((~(((/* implicit */int) arr_5 [i_1 - 1] [i_1 - 1])))) : (((/* implicit */int) max((arr_5 [i_1 + 1] [i_1]), ((_Bool)0))))));
                        var_25 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_1])) || (((/* implicit */_Bool) arr_16 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [(unsigned short)10]))))), (((unsigned int) arr_16 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1]))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        arr_21 [2LL] [(_Bool)1] [10U] |= ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 2058336090U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_20 [i_0] [i_1 + 1] [(_Bool)0] [(_Bool)0] [(short)6])))));
                        var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((short) arr_0 [i_4 - 1]))) ? (((((/* implicit */_Bool) arr_0 [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)7))) : (arr_0 [i_4 + 1]))) : (((((/* implicit */_Bool) arr_0 [i_4 - 2])) ? (arr_0 [i_4 - 1]) : (arr_0 [i_4 - 1])))));
                        var_27 = ((/* implicit */_Bool) ((arr_9 [i_4 - 2] [i_4 - 1]) | (((/* implicit */unsigned long long int) (+(arr_0 [i_4 - 3]))))));
                        var_28 = ((/* implicit */unsigned int) (signed char)54);
                    }
                }
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        for (unsigned long long int i_9 = 4; i_9 < 9; i_9 += 1) 
                        {
                            {
                                arr_31 [i_1] [i_9] [10U] [i_7] [i_1] [i_1 + 1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (signed char)-53)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 133773117U)) : (((unsigned long long int) var_14))))));
                                arr_32 [i_9] [i_8] [8U] [i_1] [i_1] [i_1] [8U] = ((/* implicit */signed char) (~(max((min((arr_0 [i_0]), (2236631201U))), (((/* implicit */unsigned int) (short)25933))))));
                                var_29 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)-25924)) > (((/* implicit */int) (short)211))))) % (((/* implicit */int) min((arr_29 [i_1] [i_1] [(unsigned short)6] [i_8] [i_9]), ((signed char)-77)))))));
                                var_30 = ((/* implicit */signed char) min((var_30), (var_3)));
                                arr_33 [4U] [i_1] [4U] [i_8] [i_1] = ((/* implicit */long long int) min((max((var_12), (((/* implicit */unsigned int) (unsigned short)26809)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(1528321589U)))) ? (((/* implicit */int) (signed char)-127)) : (((((/* implicit */int) arr_27 [9U] [8] [i_7])) & (405451036))))))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_26 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1])))), (((/* implicit */int) max((arr_26 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1]), (arr_26 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]))))));
                }
                var_32 = ((/* implicit */long long int) ((var_7) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_13 [i_1] [i_1] [i_1 - 1] [i_1 + 1])))))));
                var_33 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_13 [i_1] [0LL] [i_1] [7LL])), (max((var_7), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_28 [(signed char)3] [i_0] [i_1] [i_1 - 1] [(short)7]) - (((/* implicit */int) (signed char)110)))))))) : (((((/* implicit */int) arr_13 [i_1] [i_1 + 1] [i_1 - 1] [i_1 + 1])) % (((/* implicit */int) (_Bool)1)))));
                var_34 = (i_1 % 2 == zero) ? (((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_6)) ? (0ULL) : (((/* implicit */unsigned long long int) var_0)))) << (min((((/* implicit */long long int) var_11)), (arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))))))) : (((/* implicit */long long int) (+(((((((/* implicit */_Bool) var_6)) ? (0ULL) : (((/* implicit */unsigned long long int) var_0)))) << (((min((((/* implicit */long long int) var_11)), (arr_19 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0]))) + (5190438154871872828LL))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) 
        {
            var_35 = ((/* implicit */long long int) 756098008);
            var_36 |= ((/* implicit */unsigned short) -756098008);
            var_37 = ((/* implicit */unsigned int) max((arr_37 [i_10 + 2]), (((/* implicit */short) (signed char)7))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                for (unsigned int i_13 = 1; i_13 < 11; i_13 += 2) 
                {
                    {
                        var_38 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_11] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) : (var_12)))) ^ (((((/* implicit */long long int) ((/* implicit */int) (short)7394))) ^ (var_0))))));
                        /* LoopSeq 4 */
                        for (unsigned short i_14 = 0; i_14 < 14; i_14 += 2) 
                        {
                            var_39 = ((/* implicit */short) arr_44 [i_10] [i_11] [i_10] [i_11] [i_14] [i_10 - 1]);
                            var_40 = arr_43 [i_10] [i_11] [i_11] [3U];
                        }
                        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
                        {
                            var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) (((((_Bool)1) ? (11916666492358466516ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_10] [i_10 + 2] [i_12] [11ULL] [i_15] [i_15] [i_13 + 2]))))) << (((((((/* implicit */_Bool) arr_47 [i_10] [i_10 - 1] [i_12] [i_13 + 1] [i_12] [(unsigned short)8] [i_13 + 2])) ? (16256U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-1266))))) - (16246U))))))));
                            var_42 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_10]))) : (var_4)))));
                            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) ((arr_44 [i_10 + 2] [(signed char)10] [i_10] [i_13] [i_15] [i_15]) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25794))))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_46 [i_10 + 2] [i_10 - 1] [(signed char)1] [i_10] [i_10])) : (((/* implicit */int) arr_47 [i_10 + 2] [i_10 - 1] [(unsigned char)8] [i_10 + 2] [i_13 - 1] [i_10 - 1] [i_13 + 2])))) : (min((((((/* implicit */_Bool) arr_49 [i_10] [i_10] [i_12] [i_13] [i_15])) ? (756098008) : (((/* implicit */int) (signed char)-5)))), (((((/* implicit */int) var_6)) * (((/* implicit */int) (short)11821))))))));
                            var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [i_13 + 1] [i_10])) ? ((+(arr_40 [i_13 + 2] [(_Bool)1] [i_13 + 2] [i_13 + 2] [i_13 + 2]))) : (max((arr_40 [i_13 - 1] [i_13 + 1] [13U] [i_13 + 1] [i_13 - 1]), (((/* implicit */unsigned long long int) arr_43 [i_10] [i_10 + 2] [i_10] [i_13 + 3]))))));
                        }
                        for (short i_16 = 0; i_16 < 14; i_16 += 3) 
                        {
                            var_45 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_13 - 1] [i_13 + 1] [i_13] [i_13 + 3] [8ULL] [i_13 + 2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_42 [i_13 + 1] [i_13] [i_13 + 2] [i_13 + 3] [i_13 + 2] [i_13 - 1]))))), (min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_16] [i_13] [i_10] [i_10] [i_11] [(_Bool)1]))) | (18446744073709551615ULL))), (((/* implicit */unsigned long long int) (short)-25811))))));
                            var_46 = ((/* implicit */int) arr_42 [i_16] [i_13] [i_12] [i_11] [i_10] [i_10]);
                            var_47 = ((/* implicit */short) max((arr_48 [i_11]), (((/* implicit */unsigned int) arr_38 [i_10]))));
                        }
                        for (unsigned int i_17 = 0; i_17 < 14; i_17 += 3) 
                        {
                            var_48 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_11] [i_12])) ? (((arr_49 [i_10 + 2] [i_10] [i_12] [(unsigned short)10] [i_17]) ^ (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)11821))) - (arr_45 [i_10 + 1] [i_10 + 2] [(_Bool)1] [i_12] [i_13] [i_10 + 1]))) : (((/* implicit */unsigned int) (((~(((/* implicit */int) arr_37 [(unsigned short)12])))) + (((/* implicit */int) max(((signed char)92), ((signed char)5)))))))));
                            var_49 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) (~(arr_51 [i_10] [i_10]))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */unsigned long long int) var_5)) : (19ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [(_Bool)1]))) : (arr_40 [i_13 + 2] [i_11] [i_10 + 1] [i_10 + 2] [i_10 + 2])))));
                            var_50 = ((/* implicit */unsigned int) (unsigned short)26525);
                        }
                    }
                } 
            } 
        }
        var_51 = ((/* implicit */signed char) min((((/* implicit */long long int) max((var_3), (((/* implicit */signed char) arr_35 [i_10]))))), (arr_36 [i_10] [i_10 + 2] [11LL])));
    }
    for (unsigned long long int i_18 = 1; i_18 < 12; i_18 += 1) /* same iter space */
    {
        var_52 = ((/* implicit */unsigned long long int) var_12);
        var_53 = ((/* implicit */unsigned long long int) ((signed char) min((max((var_9), (((/* implicit */long long int) (_Bool)0)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)77)), (var_4)))))));
    }
    var_54 = var_13;
}
