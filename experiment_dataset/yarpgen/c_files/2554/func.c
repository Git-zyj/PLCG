/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2554
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
    var_16 = ((/* implicit */signed char) (unsigned short)15872);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */long long int) 0);
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) >= (min(((+(((/* implicit */int) (unsigned short)22662)))), (((/* implicit */int) (unsigned short)40782))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */int) var_12)) == ((~(((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */_Bool) ((15251602186397925655ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-90)))))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (unsigned short)40782)) : (-21502186)))))));
}
