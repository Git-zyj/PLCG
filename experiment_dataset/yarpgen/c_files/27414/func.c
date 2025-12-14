/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27414
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
    var_15 = ((/* implicit */int) (+(var_6)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((/* implicit */unsigned int) arr_2 [i_1])), (var_7))))));
                            arr_11 [i_0] [i_3] [i_0] [i_3] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3] [1LL] [i_3] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_7 [i_0] [i_3 + 1] [i_3 - 1] [i_0])) : (((/* implicit */int) arr_10 [i_3] [i_3 + 1] [i_3] [i_3 + 1] [i_3 + 1] [i_3]))))) + (max((((/* implicit */unsigned int) arr_7 [i_0] [i_3] [i_3 + 1] [i_0])), (var_11))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) arr_9 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0]);
            }
        } 
    } 
    var_18 = ((/* implicit */short) (signed char)7);
}
