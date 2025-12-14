/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229099
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned char) max((var_17), (var_15)));
                var_18 = ((/* implicit */_Bool) ((arr_3 [i_0 + 2] [i_1]) ? (((unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0])) / (((/* implicit */int) var_16))))) : (((((/* implicit */_Bool) max((2370813610U), (((/* implicit */unsigned int) arr_4 [i_0] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2]))) : (2587178282U)))));
                arr_6 [15] [15] = ((/* implicit */unsigned short) ((2370813623U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)186)))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))));
                arr_8 [i_1] [i_1] [i_1] = ((/* implicit */int) max((arr_3 [i_0] [(unsigned short)18]), (arr_2 [i_0 + 1] [i_0 + 2])));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) var_5);
                arr_14 [i_3] = ((unsigned short) ((_Bool) arr_12 [i_2] [i_3 - 1]));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) (unsigned char)69);
}
