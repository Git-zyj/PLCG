/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213897
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
    var_17 = (+(var_3));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */long long int) 2614243474U)))) : (((((/* implicit */_Bool) 1385544440)) ? (((/* implicit */long long int) 4121516343U)) : (-473256911234526766LL))))), (((/* implicit */long long int) max((arr_3 [i_1 + 1] [i_0 - 1]), (((/* implicit */short) var_11)))))));
                arr_6 [i_0] = ((/* implicit */unsigned long long int) ((((int) (~(4121516343U)))) << ((((((~(((((/* implicit */long long int) arr_1 [i_1])) + (var_6))))) + (76401692928229981LL))) - (19LL)))));
                var_19 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_12)))) ? ((~(var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((173450953U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54534)))))))))), ((-((+(var_10)))))));
            }
        } 
    } 
}
