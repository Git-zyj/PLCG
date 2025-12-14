/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39197
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) max((((/* implicit */unsigned int) var_8)), (var_10)))))) : ((+(((unsigned int) (signed char)44))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */long long int) max((max((arr_2 [i_0 - 2]), (min((arr_2 [i_0]), (((/* implicit */unsigned char) var_3)))))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)-56)), (var_4)))))))));
                var_22 *= var_9;
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((63) / (((/* implicit */int) (signed char)-45))));
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-45)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)176), (((/* implicit */unsigned char) (signed char)-29))))))));
}
