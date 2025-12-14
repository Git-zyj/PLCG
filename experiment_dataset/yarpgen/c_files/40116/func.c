/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40116
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40116 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40116
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
    var_12 = (short)-9579;
    var_13 -= (short)(-32767 - 1);
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 14; i_0 += 4) 
    {
        var_14 = (short)-32750;
        arr_2 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32765)) ? (((/* implicit */int) (short)24501)) : (((/* implicit */int) (short)504)))))));
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */short) (+(((/* implicit */int) min(((short)29079), (arr_0 [i_0 + 1]))))));
    }
    for (short i_1 = 1; i_1 < 7; i_1 += 2) 
    {
        arr_6 [(short)4] &= ((/* implicit */short) max((((((/* implicit */int) (short)-2906)) * (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) max(((short)-15558), ((short)-29142))))));
        var_15 -= ((/* implicit */short) min((((/* implicit */int) (short)-16600)), ((+(((/* implicit */int) (short)-17524))))));
        var_16 = ((/* implicit */short) (+((-(((/* implicit */int) (short)(-32767 - 1)))))));
        var_17 = ((/* implicit */short) (+((-(((/* implicit */int) (short)-15539))))));
    }
}
