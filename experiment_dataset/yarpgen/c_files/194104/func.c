/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194104
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
    var_14 = ((/* implicit */unsigned short) var_6);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 24; i_1 += 4) 
        {
            {
                var_15 = (~(((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))));
                var_16 = ((/* implicit */unsigned int) ((((var_6) << (((((/* implicit */int) max((((/* implicit */short) (_Bool)0)), ((short)3531)))) - (3530))))) - (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)-3550))) | (3164509278U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((9671537808986303681ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_8)), (((8775206264723247936ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66)))))));
}
