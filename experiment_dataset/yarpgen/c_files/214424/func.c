/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214424
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214424 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214424
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (-(((/* implicit */int) arr_3 [i_0 + 1] [i_2])))))));
                    arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0] [i_2]);
                    var_14 |= ((/* implicit */unsigned short) ((((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) (short)32757)) ? (arr_6 [i_0] [i_0] [i_2] [i_2]) : (arr_1 [i_0] [i_2]))) - (668008795))))) % (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_2])) ? (((/* implicit */int) arr_3 [i_1 - 1] [i_2])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_2]))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */short) var_12);
}
