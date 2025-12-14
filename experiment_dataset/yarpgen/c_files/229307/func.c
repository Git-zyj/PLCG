/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229307
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [(signed char)16] [i_2] [i_2] [11] = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_4 [i_1 + 2] [i_2 - 1])) >> (((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) arr_0 [i_0])))))))));
                    var_14 += ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_3 [i_1 - 2] [i_1 - 3])))) + (((/* implicit */int) arr_3 [i_1 - 1] [i_1 + 2]))));
                    arr_9 [i_2] [i_1 - 1] [i_1 - 1] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_2]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) (+((+((-(((/* implicit */int) var_2))))))));
}
