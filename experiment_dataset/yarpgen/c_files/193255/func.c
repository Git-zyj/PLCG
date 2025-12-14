/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193255
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) max((1016362081), (314607707)))), (min((arr_2 [i_0]), (arr_2 [i_0])))));
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (arr_2 [i_0])));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -314607705)) ? (((/* implicit */int) (signed char)-29)) : (((/* implicit */int) (_Bool)1))));
                var_23 = 1536650026794225324LL;
            }
        } 
    } 
    var_24 -= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) 2590945213U)), (((unsigned long long int) 13642511785545920203ULL))));
    var_25 = max((((/* implicit */unsigned long long int) 6U)), (6650227597407801753ULL));
}
