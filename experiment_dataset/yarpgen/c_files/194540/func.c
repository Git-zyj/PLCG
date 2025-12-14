/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194540
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_14 -= ((/* implicit */unsigned short) (~(((/* implicit */int) var_1))));
                arr_7 [i_0] = ((((_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((((/* implicit */int) max((arr_0 [i_1] [i_0]), (arr_0 [17U] [i_0])))) | (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) arr_0 [i_1] [i_0]))))) ? (((/* implicit */int) arr_6 [i_0] [i_1])) : (((/* implicit */int) (unsigned short)60330)))));
            }
        } 
    } 
    var_15 = var_2;
    var_16 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)5206)) : (((/* implicit */int) (short)15075))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) var_1))))) : (((((/* implicit */int) min((var_13), (var_13)))) - (((/* implicit */int) var_4))))));
}
