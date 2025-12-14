/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28291
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-26869)) >= (((/* implicit */int) (unsigned short)50465))));
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)43)), (var_1)))))))) : (((((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)7)), ((unsigned short)15068)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)-61)))) : (((arr_1 [i_0]) % (arr_1 [i_1]))))))));
                var_15 = ((/* implicit */unsigned short) (((~(arr_1 [i_1]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))));
                var_16 = ((((/* implicit */_Bool) (unsigned short)15068)) ? (min((max((((/* implicit */unsigned int) var_8)), (var_10))), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (arr_1 [(unsigned char)9]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 387127504U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_10)))) ? (min((var_4), (arr_4 [i_2] [(short)10] [i_2 - 2] [(unsigned short)8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 - 2] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) arr_7 [i_2] [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2])))))));
                        arr_8 [i_0] [(short)9] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */int) (unsigned char)237);
                        var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) (short)17741)) && (((/* implicit */_Bool) (unsigned char)175)))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)2699)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_4))))))));
                        arr_9 [i_0] [i_1] [i_2] [i_3 + 1] = ((/* implicit */short) arr_5 [i_0] [i_1] [i_2] [i_3]);
                        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                    }
                    arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) (signed char)5)) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) var_8)))), (((((/* implicit */int) arr_2 [i_0])) / (((/* implicit */int) var_1)))))), (((/* implicit */int) var_11))));
                    arr_12 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned long long int) var_6))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */int) arr_5 [(unsigned char)9] [i_1] [i_2 - 1] [i_1])) + (((/* implicit */int) (unsigned char)48)))))), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (arr_4 [i_2] [i_1] [i_0] [i_0])))) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) var_8)), (arr_6 [i_2] [(unsigned char)5] [i_1] [i_1] [i_0])))))))));
                }
                for (signed char i_4 = 2; i_4 < 10; i_4 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 10; i_5 += 1) 
                    {
                        arr_18 [(signed char)5] [i_0] [i_4] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2002788407)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32803))) : (3499916186U)));
                        var_19 &= ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [7U] [(unsigned char)2] [i_4 - 2] [i_4 - 1] [i_5] [i_5 + 1])) - (((/* implicit */int) (short)-24625)))) - (((/* implicit */int) ((unsigned char) 0U)))));
                        arr_19 [i_5] [i_4 - 1] [i_1] [(unsigned char)3] [i_0] [i_0] = 4294967295U;
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                        {
                            {
                                arr_26 [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) max((((((/* implicit */int) min((var_1), (((/* implicit */unsigned char) var_0))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)50239))) | (2946532676U))) - (2946549107U))))), (((/* implicit */int) (unsigned char)177))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_7] [i_0] = ((/* implicit */signed char) ((((((0) - (((/* implicit */int) var_1)))) + (2147483647))) << (((var_4) - (9330959880193643908ULL)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 2; i_8 < 9; i_8 += 3) 
                    {
                        arr_30 [i_8] [5U] [i_0] = ((/* implicit */unsigned int) arr_17 [i_8] [i_8 + 1] [i_4] [i_0] [i_0]);
                        var_20 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_2))));
                    }
                }
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (1378303998U) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1))))));
}
