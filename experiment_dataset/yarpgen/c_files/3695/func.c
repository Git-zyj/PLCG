/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3695
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
    var_16 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)38)) > (((/* implicit */int) (unsigned short)1595))));
                var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_3 [11ULL] [i_1])))) ? (((/* implicit */unsigned int) arr_3 [i_0] [i_0])) : (((var_10) ^ (((/* implicit */unsigned int) arr_3 [i_1] [i_0]))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (short)20);
                var_19 = ((/* implicit */_Bool) (((((!(((/* implicit */_Bool) (short)31)))) ? (((/* implicit */int) max((var_14), (((/* implicit */unsigned short) arr_0 [i_0] [i_1]))))) : (((/* implicit */int) (unsigned short)0)))) - (((/* implicit */int) ((short) ((((/* implicit */int) (signed char)105)) - (((/* implicit */int) (short)34))))))));
            }
        } 
    } 
}
