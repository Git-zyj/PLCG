/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224992
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */short) min((var_11), (((/* implicit */short) ((((((((/* implicit */int) (short)-9879)) & (((/* implicit */int) (unsigned char)122)))) & (((((/* implicit */_Bool) (short)32747)) ? (((/* implicit */int) (short)20499)) : (((/* implicit */int) (short)3203)))))) & (((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) max((arr_3 [i_0]), (arr_0 [i_0])))) - (((((/* implicit */_Bool) arr_4 [i_1] [(unsigned short)10])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_1]))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((unsigned int) -7689956411105799991LL)) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((unsigned short) var_6))), (max((var_0), (((/* implicit */int) var_8))))))) : (max((max((((/* implicit */unsigned int) var_7)), (3556069900U))), (((/* implicit */unsigned int) max((var_2), (var_5))))))));
}
