/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197543
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
    var_18 = ((/* implicit */signed char) var_11);
    var_19 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0 + 1] [i_0])), (var_8))))))));
                    var_21 = max((((/* implicit */unsigned long long int) var_13)), (max((max((var_1), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) max((var_16), (((/* implicit */int) var_17))))))));
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_5)), (min((var_11), (((/* implicit */unsigned long long int) var_3)))))))));
                }
            } 
        } 
    } 
}
