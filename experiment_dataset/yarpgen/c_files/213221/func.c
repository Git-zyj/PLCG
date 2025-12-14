/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213221
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = -3700462;
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) var_6))));
                arr_4 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)71))) / (max((var_12), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)16)))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned short) 656674814U);
    var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))), (var_0)));
    var_24 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_2)), (var_7))))))), (var_13)));
}
