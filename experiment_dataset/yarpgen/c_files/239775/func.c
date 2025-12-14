/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239775
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_10))))), (((var_10) ? (var_5) : (((/* implicit */long long int) -651720342))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_8))));
    var_15 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_5 [i_0 - 2] = ((((/* implicit */_Bool) ((unsigned char) ((unsigned short) arr_4 [16] [i_1])))) ? ((-(67108863U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1]))));
                arr_6 [i_0] [i_0] [13] = ((/* implicit */int) var_13);
                var_16 &= ((/* implicit */short) (~(((((/* implicit */_Bool) arr_0 [i_0])) ? (min((((/* implicit */unsigned long long int) (unsigned short)224)), (arr_1 [i_0]))) : (3462259872545077480ULL)))));
            }
        } 
    } 
}
