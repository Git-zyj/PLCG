/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19856
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
    for (long long int i_0 = 3; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
                {
                    arr_8 [(signed char)0] [i_1] [9U] [i_0] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) var_5))))));
                    arr_9 [i_0] [i_1] [6] = ((/* implicit */unsigned char) ((arr_7 [i_0 - 3] [i_0 - 2] [i_0] [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0 - 3] [i_0 - 2])))));
                    arr_10 [i_0] [i_1] = ((/* implicit */long long int) (short)10572);
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    for (unsigned int i_4 = 2; i_4 < 24; i_4 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */short) var_6);
                            var_13 = ((/* implicit */short) (-(arr_11 [(signed char)2] [i_1] [i_1] [i_4])));
                        }
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned int) var_6)), (var_8))));
    var_15 = ((/* implicit */int) ((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9)));
    var_16 = ((/* implicit */long long int) var_10);
}
