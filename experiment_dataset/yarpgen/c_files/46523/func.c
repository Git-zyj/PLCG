/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46523
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
    var_20 = ((/* implicit */short) min((var_2), (((/* implicit */int) (signed char)-66))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) var_1))));
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) var_13))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1478672722U)))))) : (((((((/* implicit */_Bool) var_3)) ? (arr_6 [i_0] [i_1] [(unsigned short)14] [i_2]) : (((/* implicit */unsigned int) -776169531)))) + (max((((/* implicit */unsigned int) var_0)), (arr_7 [i_1] [i_2] [i_1] [i_0])))))));
                }
                var_23 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (signed char)96))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) var_17);
}
