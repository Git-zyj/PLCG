/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231941
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
    var_19 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_14))))) ? (((/* implicit */long long int) min((var_18), (((/* implicit */unsigned int) var_9))))) : (min((var_0), (((/* implicit */long long int) var_16))))))));
    var_20 = ((/* implicit */unsigned char) var_17);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (-((-(arr_2 [i_0] [i_1]))))))));
                arr_6 [(unsigned char)0] = ((/* implicit */_Bool) arr_3 [i_0]);
                arr_7 [i_1] [i_0] = ((/* implicit */signed char) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)0)))))))));
                var_22 = ((/* implicit */unsigned char) var_3);
            }
        } 
    } 
}
