/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232111
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232111 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232111
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
    var_18 = ((/* implicit */unsigned long long int) var_12);
    var_19 = ((/* implicit */unsigned short) 8723931118654657878LL);
    var_20 = ((/* implicit */unsigned int) max((((/* implicit */long long int) var_17)), (min((((/* implicit */long long int) var_11)), (min((-8723931118654657864LL), (((/* implicit */long long int) (signed char)-1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */signed char) max((((unsigned char) (_Bool)1)), (((/* implicit */unsigned char) (signed char)-2))));
                var_22 &= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (4249376377U))))));
                var_23 = ((/* implicit */unsigned int) ((int) 260412174534128901ULL));
            }
        } 
    } 
}
