/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229675
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
    var_17 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) ((int) var_6)))) - ((-((-(((/* implicit */int) var_16))))))));
    var_18 |= ((/* implicit */unsigned char) (((-((-(-5736153101607342595LL))))) + (((/* implicit */long long int) ((((152549134) + (((/* implicit */int) (unsigned short)65535)))) - (((((/* implicit */int) (unsigned char)247)) - (((/* implicit */int) var_15)))))))));
    var_19 = ((/* implicit */unsigned int) var_15);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) (unsigned short)0);
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_1 [i_1] [i_0]))));
            }
        } 
    } 
}
