/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210887
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
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
                arr_5 [i_1] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) 4162220673U)), (7837176807154503381ULL)));
                arr_6 [i_1] = ((/* implicit */signed char) ((max((((/* implicit */long long int) arr_2 [i_1 - 1] [i_0])), (var_1))) * (((/* implicit */long long int) -1))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) var_6);
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */_Bool) var_1)) ? (var_4) : (var_1)))))) ? (((var_9) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) var_4)))))))) : (((/* implicit */unsigned long long int) var_10))));
}
