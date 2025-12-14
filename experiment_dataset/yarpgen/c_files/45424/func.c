/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45424
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
    var_18 = ((/* implicit */short) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_19 -= ((/* implicit */unsigned long long int) var_12);
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) var_4))), (((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_0)))))) ? (((/* implicit */int) ((signed char) (unsigned short)30451))) : (((/* implicit */int) arr_4 [i_0] [i_0] [(signed char)7]))));
                var_21 = ((/* implicit */signed char) (-(min((((/* implicit */int) ((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0])))))), ((-(((/* implicit */int) var_6))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */short) var_4);
    var_23 = ((/* implicit */unsigned char) var_0);
}
