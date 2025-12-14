/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241199
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
    var_13 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (var_3) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (short)22269)) || (((/* implicit */_Bool) var_6))));
                var_15 -= ((/* implicit */short) ((((/* implicit */_Bool) 3327970757U)) ? (((/* implicit */int) (short)-22269)) : (((/* implicit */int) (unsigned short)3131))));
                arr_7 [i_1] [i_1] [i_1] = var_2;
                var_16 = ((/* implicit */unsigned short) var_4);
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_1])) ? (((/* implicit */int) arr_2 [i_0 - 3] [(short)4])) : (((/* implicit */int) (short)32767))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_1] [i_0])), (arr_3 [i_0 + 2] [i_0 + 2] [i_1]))))));
            }
        } 
    } 
}
