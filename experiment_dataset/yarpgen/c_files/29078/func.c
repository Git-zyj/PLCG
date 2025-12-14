/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29078
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
    var_19 = ((/* implicit */long long int) var_5);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 += ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) arr_0 [6LL])))));
                arr_6 [i_0] [(unsigned char)2] [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) arr_3 [i_1])))), (((/* implicit */int) ((short) var_6)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) var_0))) >= (((((/* implicit */_Bool) (unsigned short)26054)) ? (((/* implicit */int) (unsigned short)40)) : (((/* implicit */int) (unsigned short)65495)))))))) : (max((((/* implicit */unsigned long long int) var_9)), ((-(16966668560284599287ULL)))))));
            }
        } 
    } 
}
