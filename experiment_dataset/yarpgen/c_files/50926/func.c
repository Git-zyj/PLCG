/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50926
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
    var_14 = ((/* implicit */short) (~((-(((/* implicit */int) var_11))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned char) (((-(var_5))) + (((/* implicit */unsigned int) (+((~(((/* implicit */int) arr_2 [i_0] [i_1])))))))));
                var_16 *= ((/* implicit */unsigned int) ((short) (~(((((/* implicit */_Bool) -1159282492)) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (var_10)))) ? (((unsigned int) (unsigned char)240)) : (((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)13018))) : (var_5))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-9340)))))));
    var_18 = var_13;
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) 4294967271U)))));
        var_20 = ((/* implicit */short) (~(var_9)));
    }
}
