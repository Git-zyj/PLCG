/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204206
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)127);
                arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(3580445557U))))))) >= (((/* implicit */int) arr_5 [i_0]))));
                var_11 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((((/* implicit */_Bool) (short)15597)) && ((_Bool)1)))) | (((/* implicit */int) ((_Bool) var_3)))))));
                arr_10 [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned short) ((int) ((9212991545547536610LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))))));
    var_13 = ((/* implicit */short) var_0);
    var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) >= (min(((-(var_8))), (((/* implicit */unsigned int) ((-284972234) > (((/* implicit */int) (signed char)27)))))))));
    var_15 = ((/* implicit */unsigned long long int) (unsigned short)6691);
}
