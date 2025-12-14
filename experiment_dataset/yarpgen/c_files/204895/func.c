/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204895
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = (~(((((/* implicit */int) ((_Bool) var_13))) + (((/* implicit */int) arr_0 [i_0])))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 21; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_1] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-32))));
                            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (short)-26169))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((528482304LL) < (((/* implicit */long long int) ((/* implicit */int) var_13)))));
}
