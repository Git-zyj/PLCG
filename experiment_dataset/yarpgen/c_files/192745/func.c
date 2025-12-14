/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192745
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
    var_20 = var_11;
    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (+((~(((/* implicit */int) max((var_13), (var_14)))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_22 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_3 [(signed char)0] [i_0 - 2])) ? ((+(((/* implicit */int) var_5)))) : ((+(((/* implicit */int) (signed char)-1)))))), (max((((/* implicit */int) arr_3 [i_2] [i_0 - 2])), (((((((/* implicit */int) arr_3 [i_1] [i_2])) + (2147483647))) << (((((((/* implicit */int) arr_3 [(signed char)1] [i_1 + 1])) + (79))) - (30)))))))));
                    var_23 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [(signed char)9] [i_1])) | (((/* implicit */int) arr_1 [i_0 - 1])))))));
                    var_24 += var_15;
                    var_25 = ((/* implicit */signed char) max((min((((/* implicit */int) min(((signed char)-124), (var_6)))), (((((/* implicit */_Bool) (signed char)-124)) ? (((/* implicit */int) arr_5 [i_0 - 2] [i_0] [i_0])) : (((/* implicit */int) var_13)))))), (min(((-(((/* implicit */int) (signed char)-104)))), (((/* implicit */int) (signed char)123))))));
                }
            } 
        } 
    } 
    var_26 = var_4;
    var_27 = ((/* implicit */signed char) max((var_27), ((signed char)41)));
}
