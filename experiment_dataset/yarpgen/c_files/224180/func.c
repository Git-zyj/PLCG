/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224180
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
    var_19 |= ((/* implicit */long long int) var_15);
    var_20 = ((/* implicit */int) ((signed char) (+(((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [(unsigned short)21] [i_0] [i_0] = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_7 [i_1]))))));
                    var_21 = ((/* implicit */long long int) (+((-(((/* implicit */int) (signed char)71))))));
                    arr_11 [i_1] [i_0] [i_1] = ((/* implicit */signed char) -839841906);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(min((var_9), (4294967292U)))))), (((((/* implicit */_Bool) var_18)) ? (-29LL) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))));
    var_23 = (+(684680295));
}
