/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208491
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) min((((((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_0])) == (((/* implicit */int) var_11)))), (var_3))))));
                    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */int) var_5)) + (((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (short)32767))))) <= (((/* implicit */int) arr_4 [i_0])))))));
                }
            } 
        } 
    } 
    var_17 = (short)32764;
}
