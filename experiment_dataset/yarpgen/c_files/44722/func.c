/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44722
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
    var_14 &= ((/* implicit */short) var_6);
    var_15 = ((/* implicit */unsigned long long int) var_12);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */long long int) ((/* implicit */int) ((min((arr_7 [i_1 - 1]), (((/* implicit */int) arr_4 [i_0] [i_0])))) != (((/* implicit */int) arr_4 [i_2] [i_0])))))) >= (max((arr_1 [i_1]), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_4 [i_0] [i_1 + 1])), (430783519U))))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 14; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */int) ((unsigned int) ((2147483647) / (((/* implicit */int) (_Bool)1)))));
                                arr_15 [i_4] [i_2] [i_4] = ((/* implicit */long long int) min((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(_Bool)1] [10LL] [i_3] [i_4]))) + (6199653247484736ULL))), (((/* implicit */unsigned long long int) (-(arr_2 [i_3])))))), (((/* implicit */unsigned long long int) min((min((3793609820U), (3793609829U))), (((((/* implicit */_Bool) arr_10 [i_1 + 1] [9U] [4LL])) ? (3793609829U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1]))))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_18 &= ((long long int) ((arr_16 [i_5] [i_1 - 1] [i_1 + 1] [14LL] [i_1 - 1] [i_1 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])))));
                                arr_20 [i_6] [i_5] [10] [(_Bool)1] [i_6] = max((max((arr_10 [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_0] [i_0]))), (((/* implicit */int) arr_19 [i_2] [i_6] [i_2] [i_5] [(short)9])));
                                var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_9 [i_0] [i_1 - 1] [6U] [i_1 - 1] [i_1 + 1] [i_1 - 1])) != (((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_9 [i_0] [12ULL] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_2]), (arr_9 [i_0] [(short)4] [13ULL] [i_1 - 1] [i_1 + 1] [i_1]))))) : (((unsigned int) arr_9 [i_0] [(short)13] [(unsigned short)3] [i_1 + 1] [i_1 + 1] [i_6]))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */_Bool) min((((unsigned long long int) ((unsigned short) arr_3 [(unsigned short)1] [i_0]))), (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (((/* implicit */int) (_Bool)1))))))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((arr_2 [i_1 - 1]) / (arr_2 [i_0])))))))));
                }
            } 
        } 
    } 
}
