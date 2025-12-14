/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238527
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238527 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238527
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
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_8)), ((short)1897))))) % (var_14))) > (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_5)), (var_13))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_1] [i_2] &= var_4;
                    var_16 = ((/* implicit */unsigned char) min((((((/* implicit */int) (short)1883)) & (((/* implicit */int) (unsigned short)5569)))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)38)) || (((/* implicit */_Bool) 5798826221335274187LL)))))));
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) var_11);
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */short) (_Bool)0)), (min(((short)1883), (((/* implicit */short) (signed char)33))))));
                }
            } 
        } 
    } 
}
