/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209385
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
    var_18 = ((/* implicit */_Bool) max((var_18), ((((-(((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) var_8))))));
    var_19 |= ((/* implicit */_Bool) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [i_2] = (i_0 % 2 == zero) ? (((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)65024)))) + (2147483647))) << (((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0])))) : (((/* implicit */int) arr_2 [i_0] [i_0])))) - (16891)))))) : (((/* implicit */unsigned short) (((((~(((/* implicit */int) (unsigned short)65024)))) + (2147483647))) << (((((((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_0])))) : (((/* implicit */int) arr_2 [i_0] [i_0])))) - (16891))) - (9949))))));
                    var_20 = ((/* implicit */unsigned short) max((var_20), ((unsigned short)42830)));
                }
            } 
        } 
    } 
    var_21 = (unsigned short)0;
}
