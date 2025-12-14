/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25836
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25836 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25836
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
    var_19 = ((/* implicit */_Bool) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned int) 2024867130)) >= (var_13)))))) & (max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (var_15)))), (((unsigned long long int) (unsigned char)46))))));
                    var_21 = ((/* implicit */_Bool) max((max(((+(((/* implicit */int) (unsigned short)0)))), (((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) arr_5 [i_2] [i_1] [i_2])) : (((/* implicit */int) arr_6 [(_Bool)0] [i_0 + 1] [i_0])))))), ((-((+(((/* implicit */int) arr_6 [i_0] [i_1] [i_0]))))))));
                    var_22 *= ((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_12)), (var_9))) > (((long long int) arr_6 [i_0 + 1] [i_2] [i_2]))));
                    var_23 = ((/* implicit */unsigned char) var_6);
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) var_9);
}
