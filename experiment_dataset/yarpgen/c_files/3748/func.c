/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3748
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
    var_11 = ((/* implicit */unsigned char) ((var_5) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)96)))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (((-(((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_2 [i_0]))))) != ((-(arr_7 [i_1] [i_1] [8U] [8U]))))))));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_0))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_13 = min((min((((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_0] [i_3] [i_0]))), (arr_8 [i_1] [i_2 + 1] [i_3] [i_4]))), (((/* implicit */unsigned long long int) var_9)));
                                var_14 += ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_2 + 1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
