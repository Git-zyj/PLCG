/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39597
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned short) (signed char)-23);
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_1])) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_0 [(signed char)11] [i_1]))))));
                var_18 += ((/* implicit */long long int) (+(((((/* implicit */_Bool) 886336224)) ? (((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned char)241)))) : (((/* implicit */int) arr_2 [i_1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_11))));
    var_20 = ((/* implicit */short) ((var_3) ? ((-(-886336214))) : (((/* implicit */int) var_11))));
}
