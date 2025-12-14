/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235899
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
    var_16 &= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned short) (unsigned short)47402))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned short) var_1))))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (var_3)));
                    arr_6 [i_0] [i_0] = var_4;
                    var_18 = ((/* implicit */unsigned short) (-(min(((+(((/* implicit */int) (unsigned short)2886)))), (((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((/* implicit */int) (unsigned short)18135)) : (((/* implicit */int) var_0))))))));
                    arr_7 [i_2] [i_0] = arr_5 [i_0] [i_0] [i_2] [i_2];
                }
            } 
        } 
    } 
}
