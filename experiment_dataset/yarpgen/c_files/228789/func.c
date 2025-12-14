/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228789
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
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_2))))));
        /* LoopNest 3 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_14 |= var_4;
                        var_15 = ((/* implicit */signed char) min(((-((-(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25466)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (unsigned short)25476)) : (((/* implicit */int) var_6))))));
                        var_16 ^= ((/* implicit */unsigned short) (_Bool)0);
                    }
                } 
            } 
        } 
    }
    var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) 2109617114U))));
}
