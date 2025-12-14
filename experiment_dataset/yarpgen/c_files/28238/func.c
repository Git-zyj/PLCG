/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28238
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */int) (-((~((+(3366001480U)))))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (+((-((~(3366001480U)))))));
                var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (signed char)-25)))))))));
                var_21 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_4 [i_0] [i_1])))))))));
                var_22 = ((/* implicit */int) (~((~((~(8388607ULL)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) (+((+((~(((/* implicit */int) (unsigned char)0))))))));
    var_24 = ((/* implicit */long long int) (-((+(3925055048U)))));
}
