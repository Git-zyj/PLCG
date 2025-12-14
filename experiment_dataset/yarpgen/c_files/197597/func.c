/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197597
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned short) 870050037U);
                arr_5 [i_0 + 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_0 + 1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) && (((/* implicit */_Bool) (short)13167)))))))) ? ((-(((/* implicit */int) (short)13167)))) : (((((/* implicit */_Bool) (short)-13176)) ? (10) : (((/* implicit */int) (short)-13167))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */short) ((arr_3 [i_0 + 1]) < (arr_3 [i_0 + 1])))), (max((((/* implicit */short) (signed char)64)), ((short)31)))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (short)13149)) + (((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13167)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((signed char) (short)9329)))))) : ((~((((_Bool)1) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13184)))))))));
    var_19 = (short)-13159;
}
