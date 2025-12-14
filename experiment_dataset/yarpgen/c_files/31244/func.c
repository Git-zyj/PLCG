/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31244
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0 - 1]);
        arr_4 [i_0] [15U] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 33554432U))));
        /* LoopSeq 2 */
        for (short i_1 = 3; i_1 < 23; i_1 += 1) 
        {
            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) 3293222693U))));
            arr_8 [i_1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((arr_7 [i_1] [i_1 - 2] [i_1 - 2]), (arr_7 [i_1] [i_1 + 1] [i_1 + 1]))))));
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3293222687U)) ? (1599726615U) : (arr_10 [i_0 + 1])))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3072))))))))))));
            arr_11 [i_0] [i_2] [i_2] = 1001744608U;
            arr_12 [i_0] [i_2] &= arr_1 [i_0 + 2];
        }
        arr_13 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2695240681U)) ? (((/* implicit */int) (unsigned short)18310)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)32463)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)47225)) ? (2981978164U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7920))))))))) : (((/* implicit */int) min((arr_9 [i_0 + 1] [i_0]), (arr_9 [i_0 + 1] [i_0]))))));
    }
    var_14 = ((/* implicit */unsigned short) 1675938205U);
    var_15 &= (+(((((/* implicit */_Bool) max((var_9), (1511355873U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_1))));
    var_16 = ((/* implicit */short) 2695240666U);
}
