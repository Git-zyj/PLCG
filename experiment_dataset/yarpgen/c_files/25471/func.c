/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25471
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
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 3; i_2 < 11; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */unsigned long long int) (short)-10159);
                            arr_9 [i_0 - 1] [i_1] [i_1] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_1 + 1] [i_1 + 1] [i_1]), (arr_6 [i_0] [i_0] [i_3]))))) / ((-(var_0)))));
                            arr_10 [i_1] [i_1] [i_1 - 1] [i_1 + 2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1])) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_1] [i_2] [i_1]))))) * (arr_2 [i_1] [i_1 + 2]))))));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
                            {
                                arr_14 [i_1] [i_3] [i_3] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) 647810424);
                                var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((long long int) (-(((/* implicit */int) (short)-24557))))))));
                                arr_15 [i_1] [i_0 + 4] [(short)6] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_1] [i_0 + 2] [i_1 - 1])) ? (var_3) : (((/* implicit */long long int) var_10)))))));
                            }
                        }
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)5482)) ? (((/* implicit */int) (short)5482)) : (((/* implicit */int) (short)13772))));
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned short) var_0);
}
