/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39894
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
    var_10 = ((/* implicit */unsigned short) var_9);
    var_11 = 5438567270296128187LL;
    var_12 &= ((/* implicit */unsigned short) max(((-(((12530820698007500986ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))) : (var_2))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) var_0);
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) 17724420832463960935ULL));
                var_14 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)31146)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (2225114211U)));
            }
        } 
    } 
}
