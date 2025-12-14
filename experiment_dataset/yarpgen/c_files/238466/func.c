/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238466
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
    var_13 = ((/* implicit */unsigned long long int) min((max((0U), (((/* implicit */unsigned int) (_Bool)1)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_3) << (((var_5) - (7332216146667298252LL)))))) && (((/* implicit */_Bool) var_7)))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_0] = var_1;
                arr_8 [i_0] [i_1] = ((/* implicit */int) arr_2 [i_0]);
                var_14 = (-(arr_3 [i_0] [i_0]));
                var_15 = ((/* implicit */unsigned char) arr_6 [i_0] [(signed char)8]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_1))));
    var_17 = ((/* implicit */int) var_2);
}
