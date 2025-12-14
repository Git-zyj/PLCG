/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196147
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
    var_12 = ((/* implicit */_Bool) ((unsigned short) min((((((/* implicit */_Bool) var_9)) ? (15762598695796736ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (var_6))));
    var_13 = ((/* implicit */unsigned char) ((signed char) ((var_6) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)6)) | (((/* implicit */int) var_5))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) arr_1 [i_0]))) + (((/* implicit */int) ((short) arr_1 [i_0])))))) ? (((/* implicit */int) ((unsigned short) (unsigned short)51540))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 2U)) : (arr_1 [i_0]))))) + (((((/* implicit */_Bool) -1LL)) ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 - 2])))));
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            var_15 = (signed char)-30;
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                var_16 = ((/* implicit */_Bool) (unsigned char)255);
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 1] [i_0 + 1])) ? (arr_7 [i_0 + 1] [i_0 - 2] [i_0 + 1]) : (arr_7 [i_0 + 1] [i_0 + 2] [i_0 - 2]))))))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 1) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] [(unsigned char)3] = ((/* implicit */unsigned long long int) var_2);
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 3; i_4 < 12; i_4 += 1) 
                    {
                        arr_15 [i_0] [i_3] [i_0] [i_0] [(unsigned char)8] = ((/* implicit */int) ((signed char) ((((_Bool) arr_7 [(_Bool)1] [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_2] [i_3])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8192))) >= (4494619526783152166ULL)))))));
                        var_18 = ((/* implicit */signed char) var_7);
                    }
                    arr_16 [i_3] [i_3] = ((/* implicit */unsigned short) ((long long int) (((_Bool)0) ? (((/* implicit */int) arr_3 [i_0 - 2] [9LL] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_3] [i_1 - 2])))));
                }
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 1) /* same iter space */
                {
                    arr_19 [i_5] [i_5] [i_2] [6ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 1])) ? (arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 2]) : (arr_7 [i_0 + 1] [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) max((arr_7 [i_0 - 1] [i_0 - 1] [i_0 + 2]), (arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 1])))) : (((((/* implicit */_Bool) -1843174467)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) : (16431519066863496605ULL)))));
                    var_19 = ((/* implicit */signed char) (_Bool)1);
                    /* LoopSeq 2 */
                    for (long long int i_6 = 2; i_6 < 11; i_6 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned int) ((-1843174466) | (((/* implicit */int) arr_10 [i_5] [i_6]))));
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0 + 2]), (((/* implicit */unsigned long long int) arr_10 [i_5] [i_6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_5] [i_2])) - (((/* implicit */int) arr_10 [i_5] [i_6 - 1]))))) : (arr_1 [(_Bool)1])));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) arr_7 [i_2] [i_5] [i_6 - 1]))));
                        var_23 = var_3;
                    }
                    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        arr_26 [i_0] [i_5] [i_0] [i_5] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)43268))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_5] [i_7])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) arr_24 [i_5] [i_2]))))) ? (((((/* implicit */int) arr_3 [i_0] [i_2] [i_5])) * (((/* implicit */int) arr_25 [i_0] [i_1] [i_2] [i_5] [i_7])))) : (((((/* implicit */int) ((unsigned char) var_6))) + (((/* implicit */int) arr_14 [8] [i_5] [i_5] [i_5] [i_1] [i_0 + 2]))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_21 [i_0] [0] [(unsigned short)4] [8LL] [8LL] [(unsigned short)12] [i_7])), (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5307))) / (-9223372036854775807LL)))) ? (((/* implicit */int) min(((signed char)64), (((/* implicit */signed char) arr_5 [i_0] [i_0] [i_2]))))) : (((((/* implicit */int) (signed char)-40)) % (((/* implicit */int) (signed char)-116)))))))))));
                        var_25 = ((/* implicit */unsigned long long int) arr_8 [i_1] [i_2] [i_5]);
                    }
                }
            }
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 11; i_9 += 1) 
                {
                    for (signed char i_10 = 2; i_10 < 12; i_10 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned char) ((unsigned long long int) max((((((/* implicit */_Bool) arr_4 [i_10] [i_9] [i_0])) ? (8199513247042814370ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) var_10)))));
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((arr_6 [i_0 + 2] [i_1] [(unsigned short)11]) * (9554084037323710484ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1] [(signed char)6])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)104))) : (arr_20 [i_10] [1U] [i_9 + 2] [i_8] [i_1] [(signed char)5] [i_0])))) : (((((/* implicit */_Bool) var_7)) ? (arr_1 [5LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_10] [i_1] [i_0]))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_12 [i_0] [i_1] [i_8] [i_8] [i_9 + 1] [(signed char)10])) + (2147483647))) >> (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9)))) : (max((9223372036854775807LL), (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_1] [i_8] [i_9] [(signed char)6] [i_10]))))))))))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0 + 2] [i_1] [i_8])) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_29 [i_0] [i_0] [(unsigned char)12] [i_1] [i_8] [i_8])) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)233)))) & (((/* implicit */int) max((((/* implicit */unsigned short) arr_23 [(signed char)9] [i_1] [i_1] [i_8])), (arr_28 [i_0 + 1] [i_1] [i_8]))))))) : (((((/* implicit */_Bool) ((int) arr_20 [i_0] [i_1] [i_1 - 2] [9ULL] [i_8] [(signed char)0] [i_8]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_29 [i_1 - 1] [i_1 + 1] [13] [i_0 + 2] [11] [6ULL]))))))));
            }
            var_29 = ((/* implicit */unsigned char) ((signed char) ((unsigned short) (((-9223372036854775807LL - 1LL)) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        }
    }
    /* LoopSeq 1 */
    for (signed char i_11 = 0; i_11 < 17; i_11 += 1) 
    {
        arr_37 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_34 [i_11] [i_11]), ((-(var_4)))))) ? (arr_34 [i_11] [i_11]) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65535)) / (((/* implicit */int) (signed char)98))))) / ((+(var_11))))))));
        arr_38 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned long long int) 1369404672U)) : (((arr_34 [i_11] [i_11]) - (((/* implicit */unsigned long long int) arr_36 [i_11]))))))) && (((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)233))) % (13952124546926399450ULL))), (((((/* implicit */unsigned long long int) arr_36 [i_11])) - (arr_34 [i_11] [i_11]))))))));
        /* LoopSeq 1 */
        for (unsigned short i_12 = 0; i_12 < 17; i_12 += 1) 
        {
            var_30 = ((/* implicit */unsigned int) arr_35 [(unsigned short)15]);
            var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_34 [i_11] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [1U] [i_11] [i_12]))) : (arr_34 [i_11] [i_11]))) > (((((/* implicit */_Bool) arr_34 [(_Bool)1] [i_11])) ? (arr_34 [i_11] [i_11]) : (arr_34 [i_11] [i_11])))));
        }
    }
    var_32 = ((/* implicit */signed char) var_3);
}
