/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229438
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
    var_20 = ((/* implicit */unsigned short) var_15);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) arr_1 [i_1])))))) ? (((arr_4 [i_0 - 2] [i_1] [i_0 + 1]) | (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_1] [i_1])) - (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)13)) ^ (((/* implicit */int) (signed char)-16)))))))));
                arr_6 [i_1] = ((/* implicit */short) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)14)) ? (3LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)22)))))) || ((!(var_14)))))));
            }
        } 
    } 
}
