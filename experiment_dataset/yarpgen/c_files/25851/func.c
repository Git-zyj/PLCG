/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25851
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
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)28338)) ? (((/* implicit */int) (unsigned short)39504)) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (short)29815)))))));
                arr_5 [i_1] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [i_0 + 1] [i_1])), (var_14)))) >= (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_1] [i_1])), ((unsigned char)115))))));
            }
        } 
    } 
    var_17 |= ((/* implicit */short) max(((-(((/* implicit */int) var_14)))), (((((((/* implicit */int) (short)-29816)) * (((/* implicit */int) var_6)))) + (((/* implicit */int) var_13))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-29816)) ? (((/* implicit */int) (short)20909)) : (((/* implicit */int) (unsigned short)13109)))) + (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_13)))))))) ? ((~(((/* implicit */int) (unsigned short)26031)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
}
