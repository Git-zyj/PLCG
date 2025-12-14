/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210864
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
    var_20 |= ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (max((((/* implicit */long long int) arr_1 [i_0] [i_0])), (274876858368LL)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_1]))))) : (((min((2871963641087447223LL), (((/* implicit */long long int) (unsigned char)255)))) | (((/* implicit */long long int) 2148357170U))))));
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_3 [i_1]))));
            }
        } 
    } 
}
