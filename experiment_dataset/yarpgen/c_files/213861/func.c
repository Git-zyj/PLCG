/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213861
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
    var_15 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_0)), (max((min((var_4), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) max((var_9), (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((((/* implicit */int) arr_1 [i_0 + 1])), (max((((/* implicit */int) max(((unsigned char)38), ((unsigned char)208)))), (arr_3 [i_0] [6] [i_1])))));
                arr_5 [i_0] = ((/* implicit */int) var_4);
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) min((arr_2 [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_9)), (max((((/* implicit */unsigned int) -2060455434)), (var_4))))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 4; i_3 < 11; i_3 += 2) 
                    {
                        {
                            arr_14 [i_0 + 1] [i_0] [1] [i_2] [i_0] = max((max((((/* implicit */int) max((arr_4 [i_0] [i_0]), (((/* implicit */unsigned char) arr_7 [i_1] [i_2] [i_1]))))), (var_1))), (((/* implicit */int) ((unsigned char) arr_11 [i_1] [i_1] [1] [i_1] [i_2]))));
                            arr_15 [i_0 - 1] [i_2] = ((/* implicit */int) var_5);
                            var_17 = ((/* implicit */int) max((max((arr_2 [0] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0])))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_13 [i_0 + 1] [i_1] [i_2] [3])), (max((((/* implicit */int) arr_8 [i_0] [i_0] [i_2])), (var_9))))))));
                            arr_16 [2] [2] [2] [i_2] = ((/* implicit */int) var_13);
                        }
                    } 
                } 
            }
        } 
    } 
}
