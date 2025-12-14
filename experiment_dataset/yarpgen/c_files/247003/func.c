/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247003
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((var_8) > (((/* implicit */long long int) var_0)));
                    var_15 += ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), ((-(((((/* implicit */int) (short)0)) >> (((/* implicit */int) (signed char)7))))))));
                }
            } 
        } 
    } 
}
