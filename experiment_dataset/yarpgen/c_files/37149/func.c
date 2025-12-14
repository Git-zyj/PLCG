/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37149
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37149 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37149
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
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [(unsigned char)12] = ((/* implicit */signed char) (_Bool)1);
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) -3205407784465548345LL))));
            }
        } 
    } 
    var_16 |= ((/* implicit */long long int) ((var_12) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_12) != (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))))))));
}
