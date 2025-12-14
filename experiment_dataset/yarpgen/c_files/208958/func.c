/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208958
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208958 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208958
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
    var_18 = ((/* implicit */unsigned int) ((((((((/* implicit */int) var_0)) + (((/* implicit */int) var_0)))) + ((+(((/* implicit */int) var_7)))))) + (((/* implicit */int) var_4))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 4; i_1 < 17; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (max((min((arr_7 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_1])))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1]))))));
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-66)), ((unsigned short)45828)))) * (((/* implicit */int) arr_0 [i_0] [i_0]))))) / ((((~(4050551190U))) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [i_1])))))))));
                    var_21 *= (!(((/* implicit */_Bool) var_12)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)200))))));
    var_23 = ((/* implicit */unsigned int) var_16);
}
