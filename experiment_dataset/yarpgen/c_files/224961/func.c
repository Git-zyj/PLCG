/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224961
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_13 = ((/* implicit */signed char) var_4);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [(_Bool)0] = ((/* implicit */_Bool) arr_4 [i_0] [i_1]);
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((((((/* implicit */int) (short)-23543)) + (2147483647))) << (((((/* implicit */int) (unsigned char)68)) - (68))))), (((((/* implicit */int) (unsigned char)68)) << (((/* implicit */int) (_Bool)0)))))))));
                var_15 = ((/* implicit */signed char) var_8);
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) 4294967281U);
}
