/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244
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
    var_14 = ((/* implicit */unsigned long long int) var_13);
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) min((var_5), (((/* implicit */unsigned short) var_11)))))) << (((var_6) - (1915490053)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [(unsigned char)0]))));
                arr_6 [i_0] = min((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_1 [i_1 - 1]))));
            }
        } 
    } 
}
