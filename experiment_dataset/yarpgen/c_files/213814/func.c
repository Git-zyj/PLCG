/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213814
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(min((((/* implicit */int) (signed char)85)), (var_12))))))));
    var_19 = ((/* implicit */signed char) var_7);
    var_20 += ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_21 ^= ((/* implicit */signed char) ((min((804143509U), (4294967295U))) >> (((/* implicit */int) ((_Bool) var_11)))));
                var_22 = (-(min((max((804143505U), (((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_0])))), (((/* implicit */unsigned int) ((signed char) arr_1 [i_1]))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_0])))) | (((/* implicit */int) arr_1 [i_0 - 2]))))));
                var_23 *= ((/* implicit */unsigned int) arr_1 [i_0]);
                var_24 = ((/* implicit */signed char) ((((min((3490823791U), (((/* implicit */unsigned int) (unsigned char)254)))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2)))))) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) (unsigned char)254))));
            }
        } 
    } 
    var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
}
