/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37363
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
    var_14 = ((/* implicit */unsigned long long int) min((((unsigned int) (short)32767)), (((/* implicit */unsigned int) var_5))));
    var_15 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 - 4] = ((/* implicit */unsigned char) var_10);
        var_16 = ((/* implicit */unsigned int) (_Bool)0);
    }
    for (int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) (-2147483647 - 1));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_2 = 3; i_2 < 9; i_2 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */_Bool) (~(arr_6 [i_2 + 3] [i_2 + 3])));
            arr_9 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))));
            arr_10 [i_1] [2ULL] = ((unsigned int) (+(((/* implicit */int) var_8))));
        }
        for (int i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((-1260215332) - (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 2 */
            for (signed char i_4 = 0; i_4 < 12; i_4 += 3) 
            {
                arr_17 [(_Bool)1] [i_4] = ((/* implicit */unsigned int) (((-(var_10))) != (((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_4])))))));
                arr_18 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (-((+(637167080U)))));
            }
            for (int i_5 = 0; i_5 < 12; i_5 += 4) 
            {
                arr_23 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((unsigned char) min((var_1), (((/* implicit */int) arr_11 [i_1] [i_3] [i_5]))))))));
                arr_24 [0ULL] [i_3] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_5 [i_1] [i_3]);
                arr_25 [i_1] [i_3] [i_5] = ((/* implicit */long long int) var_2);
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    arr_29 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((int) arr_26 [i_6]))))) ? (((((/* implicit */int) ((unsigned char) (signed char)-125))) - (((/* implicit */int) (!(((/* implicit */_Bool) 432915028U))))))) : (((/* implicit */int) (signed char)-126))));
                    var_19 = ((/* implicit */unsigned long long int) (((~(4294967295U))) > (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-46)) && ((_Bool)1)))))))));
                    arr_30 [i_6] [i_6] [i_6] [i_1] = ((/* implicit */_Bool) (((-((-(((/* implicit */int) arr_20 [(unsigned char)0])))))) * (((/* implicit */int) (_Bool)1))));
                }
                for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) (signed char)107);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_1]))))) != ((~(var_2)))))))))));
                        var_22 |= ((/* implicit */long long int) (short)19407);
                        var_23 = ((/* implicit */short) ((unsigned char) arr_35 [i_1] [i_3] [i_5] [i_7] [i_8]));
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (0ULL)));
                    }
                    for (unsigned long long int i_9 = 4; i_9 < 11; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned int) max(((+(max((((/* implicit */unsigned long long int) 245680855U)), (arr_37 [i_3] [i_5] [i_7] [i_9 - 2]))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (866591090U))))));
                        var_26 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) var_7)))))) ? (((unsigned int) arr_39 [(signed char)3] [i_9] [i_9 - 3] [i_9 + 1] [i_9 - 4] [i_9 - 3])) : (((/* implicit */unsigned int) (-(1559162399))))));
                    }
                    var_27 = ((/* implicit */int) max((((/* implicit */long long int) ((18446744073709551615ULL) <= (18446744073709551608ULL)))), (arr_4 [i_1])));
                    arr_40 [i_5] [i_5] [0] [6U] = ((/* implicit */signed char) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)163)));
                }
                for (short i_10 = 2; i_10 < 10; i_10 += 4) 
                {
                    arr_43 [(signed char)2] [i_3] [(_Bool)1] [i_5] [i_5] [i_10 - 2] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)0))));
                    arr_44 [1U] [(unsigned char)8] [(signed char)7] [i_10] [(unsigned short)4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23857)) ? (4294967295U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (!((_Bool)0)))))))));
                    arr_45 [i_1] [i_5] = ((/* implicit */long long int) 4294967295U);
                }
            }
        }
        for (signed char i_11 = 3; i_11 < 10; i_11 += 3) 
        {
            arr_48 [i_11 + 2] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) arr_39 [i_1] [i_1] [7ULL] [i_11] [i_11 - 3] [i_11 + 1])) : (var_10))));
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 1) 
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) max(((short)28318), (((/* implicit */short) ((((/* implicit */unsigned int) (+(2147483647)))) <= (((((/* implicit */_Bool) 2753619426U)) ? (arr_22 [5U]) : (((/* implicit */unsigned int) 2147483647))))))))))));
                arr_52 [i_11] [i_11 - 2] [i_11 + 2] = ((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) == (((/* implicit */int) ((signed char) (+(var_3)))))));
                arr_53 [i_12] [i_11] [i_1] = ((/* implicit */int) ((unsigned int) min((((((/* implicit */_Bool) var_9)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2977))))), (((/* implicit */unsigned int) max((-222572972), (((/* implicit */int) var_13))))))));
                arr_54 [3ULL] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)(-127 - 1)))));
            }
        }
        var_29 = ((/* implicit */unsigned short) min((((/* implicit */signed char) ((_Bool) arr_46 [i_1] [i_1]))), (max((arr_46 [(short)11] [i_1]), (arr_46 [i_1] [i_1])))));
        arr_55 [i_1] = ((/* implicit */unsigned long long int) min(((unsigned short)37031), (((/* implicit */unsigned short) (unsigned char)19))));
    }
}
