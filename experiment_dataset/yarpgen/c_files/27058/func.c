/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27058
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    arr_8 [i_1] [i_1] [i_2] [i_2] = ((/* implicit */int) ((min(((!(((/* implicit */_Bool) (signed char)-13)))), (arr_1 [i_1]))) || (((/* implicit */_Bool) min((((/* implicit */int) (signed char)-26)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_1] [i_1] [i_1])))))))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_10 = ((/* implicit */short) var_3);
                        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (arr_0 [i_0])))) ? (((/* implicit */unsigned long long int) ((arr_0 [i_0]) / (arr_0 [i_0])))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (3059613807738165491ULL))))))));
                    }
                    for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_12 ^= ((/* implicit */short) var_1);
                        /* LoopSeq 1 */
                        for (short i_5 = 0; i_5 < 10; i_5 += 2) 
                        {
                            arr_18 [i_0] [i_1] [i_2] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((short) min((((/* implicit */long long int) (short)29994)), (5402073801457691392LL))));
                            var_13 = ((/* implicit */int) (short)-29994);
                            var_14 = ((/* implicit */int) (((+(((-5077944100281786945LL) - (((/* implicit */long long int) ((/* implicit */int) (short)-4324))))))) < (((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-75))))), (arr_4 [i_2] [i_1] [i_0]))))));
                        }
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_3)) : (var_7)))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) (unsigned char)178)))))) : ((~(((((/* implicit */_Bool) 3059613807738165476ULL)) ? (-1017045310) : (((/* implicit */int) arr_6 [(unsigned short)6] [(unsigned short)6] [i_1]))))))));
                        var_16 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) ((((/* implicit */int) arr_17 [(signed char)3] [i_2] [i_2] [i_1] [i_0])) <= (((/* implicit */int) arr_6 [i_1] [i_2] [i_1]))))))), (max((((/* implicit */int) (short)-4339)), (965061814)))));
                        var_17 = ((((/* implicit */_Bool) (signed char)-75)) || ((_Bool)1));
                    }
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned int) (signed char)12)), (var_1))), (((/* implicit */unsigned int) (short)-4324))))))))));
                    var_19 = ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)15))))) : (((/* implicit */int) arr_1 [i_0])))) >= ((+(((/* implicit */int) var_9)))));
                }
                for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    var_20 = ((/* implicit */unsigned int) var_7);
                    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_20 [6] [6] [i_6] [6]))))) && ((!(((/* implicit */_Bool) 566326206)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 2560373467U)))), (arr_5 [i_6] [(unsigned char)8] [i_0]))))) : (min((((/* implicit */unsigned int) (short)-4339)), (arr_3 [i_6]))))))));
                }
                var_22 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3740680037166869301LL)))))) < (((arr_2 [i_1] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (short)4324))) : (var_3)))));
                var_23 = var_0;
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)-1)))) ? (((((((/* implicit */int) var_8)) + (2147483647))) >> (((((/* implicit */int) var_0)) - (222))))) : ((~(((/* implicit */int) var_9)))))) : (((/* implicit */int) (((-(((/* implicit */int) (signed char)-17)))) == (((/* implicit */int) var_0)))))));
}
