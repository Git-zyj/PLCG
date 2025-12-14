/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48113
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
    var_20 = ((/* implicit */unsigned int) ((unsigned char) (((_Bool)0) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_7))) : (((((/* implicit */_Bool) 2115167954U)) ? (var_7) : (2179799341U))))));
    var_21 = ((/* implicit */unsigned char) (+(2147483647)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_22 = arr_1 [i_0];
        var_23 = (-((+(((int) arr_2 [i_0])))));
    }
    var_24 = ((/* implicit */short) ((int) var_7));
    /* LoopNest 2 */
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            {
                var_25 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)91))));
                var_26 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)16)), ((unsigned char)165)))) ? (((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)0)), (arr_6 [i_1])))) : (((2115167954U) / (((/* implicit */unsigned int) arr_6 [i_2])))))));
            }
        } 
    } 
}
