/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39558
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
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */short) var_4);
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0 + 3]);
        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)1023)) ? (arr_0 [i_0] [i_0]) : (((unsigned long long int) 62914560U))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) -1359778540)) ? (var_6) : (164364686U)))) : ((~(8428395382234410903LL))))) : (((/* implicit */long long int) arr_2 [i_0])));
        var_18 = ((/* implicit */unsigned long long int) var_4);
    }
    var_19 = ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) (~(var_8))))))) ? (((((/* implicit */_Bool) 11ULL)) ? (((/* implicit */unsigned long long int) 677524870U)) : (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))));
    var_20 -= ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        {
                            var_21 = ((/* implicit */_Bool) ((min(((!((_Bool)1))), (var_14))) ? (((/* implicit */long long int) var_6)) : (arr_9 [i_1] [(short)5] [i_4])));
                            arr_13 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_3 - 1] [i_4 + 3] [i_4 - 2])) ? (((/* implicit */unsigned long long int) arr_8 [i_2 - 1] [i_3 - 1] [i_4 + 2] [i_4 + 3])) : (arr_10 [i_1] [i_2 - 1] [i_3 - 1] [i_4 + 3])))));
                            arr_14 [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) min(((-(6339843468380480514ULL))), (((((/* implicit */_Bool) 7218302327760728604ULL)) ? (6155887813150815781ULL) : (7218302327760728590ULL)))));
                            arr_15 [16LL] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_7 [i_1] [i_1] [i_1])), ((~(arr_9 [i_3] [i_4] [i_4 + 1])))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 9164731184519432389ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) 4232052735U)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2 + 2])) ? (arr_9 [i_2] [i_2] [i_2 + 1]) : (arr_9 [i_2] [i_2] [i_2 - 1]))))));
                var_23 = ((/* implicit */_Bool) 7218302327760728585ULL);
                var_24 &= var_12;
                var_25 = ((/* implicit */unsigned int) arr_9 [i_2] [i_2] [i_1]);
            }
        } 
    } 
}
