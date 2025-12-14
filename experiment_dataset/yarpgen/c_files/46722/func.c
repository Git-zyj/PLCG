/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46722
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
    var_19 = ((/* implicit */unsigned short) min((var_19), (var_7)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 18; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        var_20 = ((max((((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [6U] [i_0] [i_0])), (arr_4 [i_0] [i_0] [i_0]))) % (((/* implicit */long long int) arr_5 [i_1 + 3] [i_1 - 2] [i_0])));
                        arr_11 [i_0] [i_1 - 2] [6LL] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1 - 2] [i_1] [i_1] [i_1] [i_0] [i_1 - 1]))) : (min((2355907874U), (((/* implicit */unsigned int) arr_2 [i_0]))))))) ? (max((((/* implicit */unsigned int) arr_6 [(signed char)5] [i_1 - 2] [i_1] [i_1 + 1])), (((((/* implicit */_Bool) 2355907874U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (2355907884U))))) : (max((((unsigned int) arr_6 [i_0] [i_1] [i_2] [i_3])), (((/* implicit */unsigned int) ((short) 1939059419U)))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_0] [i_2] [0] [i_0])) ^ (((/* implicit */int) arr_9 [i_0] [i_1] [i_1 - 1] [i_1]))))) ? (((/* implicit */unsigned int) arr_1 [i_0])) : ((+(max((1939059402U), (2355907876U)))))));
                        var_22 *= ((/* implicit */short) ((((/* implicit */_Bool) 1939059419U)) ? (1939059419U) : (2355907872U)));
                        /* LoopSeq 3 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                        {
                            var_23 -= ((/* implicit */signed char) min((max((arr_3 [i_1 + 1] [i_1 - 2] [i_1 + 2]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [(signed char)10]))))))), (((/* implicit */unsigned int) ((min((1939059422U), (((/* implicit */unsigned int) arr_6 [i_0] [i_1] [i_2] [i_3])))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_1 + 2] [i_1] [12LL] [i_1 - 2] [i_1 - 2]))))))));
                            var_24 = ((/* implicit */unsigned char) min((max((((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_1])), (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_3] [3])) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_9 [i_0] [i_3] [i_2] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(arr_8 [i_1 - 2] [i_1 - 2] [i_1] [i_3] [18] [i_4])))) ? (((((/* implicit */unsigned int) arr_5 [i_0] [i_1 - 1] [8])) / (2355907848U))) : (1939059423U))))));
                        }
                        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) (~(((int) arr_6 [i_1 + 2] [(unsigned short)15] [i_1 + 1] [i_1 + 3]))));
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) <= (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
                            var_28 = ((/* implicit */unsigned long long int) max((var_28), (max((((unsigned long long int) ((((/* implicit */_Bool) arr_0 [2U])) ? (((/* implicit */unsigned int) arr_2 [8U])) : (arr_3 [i_0] [i_1] [2LL])))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_1 - 1] [i_1] [i_1] [11LL] [(_Bool)0] [i_1 - 2])))))))));
                        }
                        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_17 [i_1 + 3]), (arr_17 [i_1 + 3])))) ? (((/* implicit */int) arr_17 [i_1 - 2])) : (((/* implicit */int) ((signed char) arr_17 [i_1 + 3])))));
                            var_30 = ((/* implicit */short) (!(((/* implicit */_Bool) 2355907877U))));
                        }
                    }
                    arr_18 [i_0] [i_1] = ((/* implicit */int) (~(2355907876U)));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        for (int i_8 = 2; i_8 < 19; i_8 += 1) 
                        {
                            {
                                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [3U])) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_2] [i_2] [i_2])) : (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [10])))) ? (arr_23 [i_1] [i_1] [i_1] [9U] [i_8 - 1] [i_8] [i_1]) : (((arr_7 [i_0] [i_1 + 2] [i_2] [2ULL] [i_8] [i_0]) ? (2355907876U) : (2355907873U)))))) ? ((+(((arr_7 [i_0] [i_0] [i_2] [i_7] [14] [11LL]) ? (2355907859U) : (arr_23 [(unsigned short)14] [i_8] [i_2] [i_2] [i_2] [i_1] [(unsigned short)14]))))) : ((~(1939059437U)))));
                                arr_25 [i_0] [i_1 - 1] [i_2] [i_0] [i_8] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_14 [i_8 + 2] [i_1 + 1] [i_1 + 1] [i_1 + 1])) ? (arr_14 [i_8 - 2] [i_8] [i_1 - 1] [i_0]) : (arr_14 [i_8 + 2] [i_7] [i_1 - 2] [i_0])))));
                            }
                        } 
                    } 
                    var_32 -= (-(arr_14 [i_0] [i_0] [i_0] [i_0]));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_9 = 1; i_9 < 8; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 4; i_10 < 8; i_10 += 1) 
        {
            {
                arr_30 [i_9 + 1] [i_10] [i_9] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2355907860U)) ? (2355907867U) : (1939059423U))))));
                arr_31 [i_9] [i_10] [i_9] = ((/* implicit */_Bool) max((max((arr_3 [i_9] [i_10 - 2] [i_10 - 3]), (((1939059431U) | (arr_27 [i_9 - 1] [i_9 - 1]))))), (((/* implicit */unsigned int) arr_9 [i_10] [i_10] [i_9 - 1] [i_10]))));
                /* LoopNest 2 */
                for (unsigned int i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_35 [i_10 + 1] [i_10 - 2] [i_10 - 1])) ? (arr_35 [i_10 + 1] [i_10 + 1] [i_9 + 2]) : (((/* implicit */long long int) 2355907873U)))), (((arr_35 [i_10 - 1] [i_10] [(unsigned char)5]) | (arr_35 [i_10 - 1] [i_11] [i_11]))))))));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((arr_7 [i_9] [i_9 + 1] [i_9 + 2] [(unsigned short)7] [i_9] [i_9 - 1]) ? (((((/* implicit */_Bool) arr_37 [i_9 - 1] [i_9 + 1] [(_Bool)1] [i_10 - 4])) ? (arr_20 [i_9 + 2] [i_10] [i_10 - 3] [i_10 - 3]) : (((/* implicit */long long int) arr_37 [i_9 + 1] [i_9 + 1] [8ULL] [i_10 - 4])))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_26 [i_9])) ? (((/* implicit */int) arr_13 [i_9] [(unsigned short)8] [i_10] [15ULL] [i_12])) : (((/* implicit */int) arr_19 [(unsigned char)14] [i_11] [i_10] [(unsigned char)14])))), ((+(((/* implicit */int) arr_12 [i_9] [i_10] [i_11] [16LL] [i_12] [i_12]))))))))))));
                        }
                    } 
                } 
                arr_38 [i_10] [i_10 - 3] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_13 [i_10] [(signed char)9] [i_10 - 3] [i_9] [(signed char)9])) ? (((/* implicit */int) min((arr_21 [i_9] [9] [i_9 + 2] [i_10] [i_10]), (((/* implicit */short) arr_6 [i_9] [i_10] [(unsigned short)11] [i_10]))))) : (((/* implicit */int) ((2355907873U) < (1939059422U))))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                {
                    var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) min((max((min((arr_29 [(unsigned char)5] [i_10]), (((/* implicit */unsigned short) arr_6 [i_9] [i_9] [i_9] [i_9])))), (((/* implicit */unsigned short) arr_40 [i_9 + 2])))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_20 [i_10 - 4] [i_10] [i_10 + 1] [i_10 - 4]))))))))));
                    arr_41 [i_10] [i_10] [i_13] = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_0 [i_10]), (arr_0 [i_10]))));
                    var_36 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [(short)6] [i_9])) ? (((/* implicit */int) var_14)) : (arr_22 [i_10] [i_9] [i_9] [i_9] [i_9])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) arr_22 [i_10] [i_10] [i_10 + 2] [i_10] [(unsigned short)3])) | (2355907869U)))) : (arr_20 [i_9 + 1] [i_10 + 2] [i_13] [i_13])))));
                }
                /* vectorizable */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_37 = ((/* implicit */short) (+(arr_23 [i_14] [i_9] [(signed char)17] [i_10] [i_9] [i_9] [i_9])));
                    arr_45 [i_10] = ((/* implicit */short) arr_39 [i_9] [i_9 + 2]);
                }
                for (long long int i_15 = 2; i_15 < 8; i_15 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned int) max((var_38), (min(((~(1939059432U))), (((/* implicit */unsigned int) min((arr_48 [i_9 - 1] [i_10 - 4] [i_9 - 1] [i_15 + 1]), (arr_48 [i_9 + 1] [i_10 - 2] [(unsigned short)6] [i_15 - 2]))))))));
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_15 - 2] [i_15 + 2] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (1939059417U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9 - 1] [i_10] [i_15 + 1] [i_10 - 1] [i_10 - 1])))))) ? (((/* implicit */long long int) ((unsigned int) 2355907883U))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) 1939059422U)) && (((/* implicit */_Bool) 1939059432U))))), (max((((/* implicit */long long int) arr_9 [i_10] [i_10] [i_10] [i_10])), (arr_24 [i_9] [i_10 - 4] [i_10 - 4] [i_10 - 4] [i_15] [i_15 + 2] [i_10 - 4])))))));
                    var_40 = ((/* implicit */int) min((var_40), (arr_5 [i_9 + 2] [i_9 + 2] [20U])));
                    arr_50 [i_9] [i_10] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2355907882U)) ? (((((/* implicit */_Bool) arr_19 [i_10] [i_15 - 1] [i_10 - 2] [i_10])) ? (((/* implicit */unsigned int) max((arr_28 [i_10] [i_10 - 1]), (arr_0 [i_10])))) : (min((((/* implicit */unsigned int) arr_2 [i_10])), (arr_23 [i_9] [i_9] [i_9 + 2] [i_10] [i_10] [i_15 + 1] [i_15]))))) : ((+(((1939059406U) + (2355907874U)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 10; i_16 += 1) 
                    {
                        arr_53 [i_10] [i_10] [i_15] [i_15] = ((/* implicit */unsigned char) (+((-(arr_16 [(_Bool)1] [i_10 - 4] [i_10 - 2])))));
                        /* LoopSeq 1 */
                        for (unsigned short i_17 = 1; i_17 < 7; i_17 += 1) 
                        {
                            var_41 += ((/* implicit */unsigned char) min((arr_4 [i_9 - 1] [i_9] [8U]), (((/* implicit */long long int) arr_1 [(_Bool)1]))));
                            var_42 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 2355907873U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_16] [10ULL] [i_15 - 1] [i_16] [i_17 + 1] [i_10 + 1]))) : (((var_16) ? (((/* implicit */unsigned int) arr_22 [i_10] [i_16] [i_16] [i_16] [i_17])) : (arr_27 [i_10] [i_16]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_10] [i_15] [i_10] [i_10])))));
                        }
                    }
                    for (unsigned long long int i_18 = 4; i_18 < 6; i_18 += 1) 
                    {
                        var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_29 [i_9] [i_9])) - (((/* implicit */int) arr_40 [i_9]))))))));
                        arr_62 [i_9 + 1] [i_9 + 2] [i_10 - 4] [i_10] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_44 [i_9 - 1] [i_10 - 4] [i_15 + 1]) | (arr_44 [i_9 + 1] [i_10 + 1] [i_15 - 2])))) ? (((((/* implicit */_Bool) arr_49 [i_18] [i_18] [i_18] [i_18 + 2])) ? ((~(arr_8 [16ULL] [16ULL] [16ULL] [i_10] [i_10] [i_18]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [6ULL] [6ULL] [6ULL] [i_18])) ? (1939059422U) : (((/* implicit */unsigned int) arr_36 [i_15] [i_15] [i_15] [i_15]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2355907848U)) ? (2355907859U) : (1939059406U))))));
                        var_44 = ((/* implicit */signed char) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) 1939059421U)))) && (((/* implicit */_Bool) 2355907874U))))), (max((arr_57 [i_10] [i_10 - 3] [i_10 - 4] [0LL] [i_10 - 1] [i_10 - 4] [i_10 + 2]), (((/* implicit */long long int) 1939059419U))))));
                        var_45 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_12 [i_10] [i_10 - 1] [i_10] [i_10] [i_10 - 4] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_10] [i_10 - 1] [i_10 - 4] [i_10] [i_10 - 4] [i_10]))) : (1939059419U))) != ((~(arr_14 [i_18 - 3] [i_18 - 1] [i_10] [i_9])))));
                        arr_63 [8] [i_10] [i_10] = ((/* implicit */signed char) arr_1 [i_10]);
                    }
                }
                for (long long int i_19 = 2; i_19 < 8; i_19 += 1) /* same iter space */
                {
                    var_46 = ((/* implicit */short) min((((((/* implicit */int) arr_15 [i_9 + 2] [i_19 + 1] [i_9 + 1] [i_10] [i_9] [i_10])) | (((/* implicit */int) arr_15 [i_9] [i_19 - 2] [i_9 + 1] [i_10 - 1] [i_19 - 2] [i_19 - 2])))), ((-(((/* implicit */int) arr_17 [i_10 + 1]))))));
                    arr_66 [i_10] [i_10] [i_10] = ((/* implicit */int) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_9] [i_9] [i_10 + 1] [i_19 - 1] [18U] [i_19]))))) ? (2355907889U) : (1939059428U))), (((/* implicit */unsigned int) arr_21 [i_9] [i_9] [i_10 + 1] [i_10] [i_19]))));
                    /* LoopSeq 1 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_69 [i_9 + 2] [i_10] [i_19] = ((/* implicit */signed char) max((max((1939059437U), (((/* implicit */unsigned int) arr_48 [i_9 + 1] [i_10 - 2] [i_19 + 2] [i_10 - 2])))), (max((((((/* implicit */_Bool) 2355907859U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [(signed char)9] [i_10]))) : (2355907852U))), (((((/* implicit */_Bool) 2355907870U)) ? (1939059421U) : (1939059422U)))))));
                        var_47 = ((/* implicit */short) ((((/* implicit */_Bool) 1939059422U)) ? (1939059422U) : (1939059422U)));
                        var_48 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((var_17) >= (2355907854U))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_9] [i_9] [i_19] [i_20])) ? (((/* implicit */int) var_7)) : (arr_54 [7U] [i_10] [i_19])))) ? (arr_35 [i_10] [i_10 - 3] [i_10 - 4]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_48 [i_9] [5ULL] [i_19] [i_20])) != (((/* implicit */int) arr_29 [i_10] [i_20])))))))) : (arr_4 [i_10] [i_10] [i_10])));
                    }
                    var_49 = ((/* implicit */int) 2355907873U);
                }
            }
        } 
    } 
}
