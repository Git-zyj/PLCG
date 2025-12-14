/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30980
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
    var_19 = ((/* implicit */unsigned char) var_12);
    var_20 |= ((/* implicit */unsigned int) (unsigned char)8);
    var_21 = ((/* implicit */unsigned int) ((signed char) var_16));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (-(arr_0 [i_1])))) ? (-5180761724517810779LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))) <= (((/* implicit */long long int) ((unsigned int) arr_4 [i_1] [i_0])))));
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_2)), (524287U)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_1 [i_0] [i_0])))))) : (var_7)));
            }
        } 
    } 
}
