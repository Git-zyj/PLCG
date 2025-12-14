/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48818
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
    var_12 = ((/* implicit */long long int) ((var_10) - (((/* implicit */unsigned long long int) (~(var_3))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((long long int) 4294967292U));
                arr_5 [i_0] [i_1] = ((/* implicit */_Bool) var_10);
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_0 [i_1]))));
                arr_6 [i_1] [i_0 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (arr_2 [i_0] [i_0] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (((((/* implicit */_Bool) (signed char)-1)) ? (4294967292U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)204)))))))) ? (((long long int) (+(((/* implicit */int) var_0))))) : (((/* implicit */long long int) var_9))));
                arr_7 [i_0] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) arr_4 [i_1] [i_0] [i_0 + 1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) (+((+((+(((/* implicit */int) (unsigned char)254))))))));
    var_16 = ((/* implicit */unsigned char) var_5);
}
