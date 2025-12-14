/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37653
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
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 = (~((+((~(((/* implicit */int) arr_5 [i_1])))))));
                arr_6 [i_0] [i_1] [i_0] &= ((/* implicit */unsigned int) (-((-(((/* implicit */int) var_15))))));
                var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)4645)) ? (arr_0 [i_1 + 1] [i_1 + 2]) : (((/* implicit */int) arr_2 [i_1 - 2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned short) var_11))))) || (((/* implicit */_Bool) max((2176067726U), (var_7))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_1]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) ((max((min((var_8), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_14))))))) >> ((((+(((((/* implicit */_Bool) (unsigned short)65535)) ? (2666178638U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) - (2666178613U)))));
}
