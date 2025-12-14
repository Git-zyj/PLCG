/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203601
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
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_16 = ((((var_6) ? (arr_3 [i_1]) : (arr_3 [i_1]))) * (0U));
                var_17 = ((/* implicit */unsigned short) max((var_3), (((/* implicit */unsigned int) arr_2 [i_1]))));
                arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) arr_4 [i_0] [i_1])) * (((4294967288U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (unsigned char)231))));
}
