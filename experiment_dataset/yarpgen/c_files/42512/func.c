/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42512
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) | (arr_1 [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)12288)) > (((/* implicit */int) (short)30177)))))) : (arr_5 [i_0])))) ? ((-(((var_14) + (((/* implicit */long long int) ((/* implicit */int) var_17))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((arr_3 [i_1]) >> (((var_18) + (3676712612771006124LL))))) : (((/* implicit */int) ((arr_4 [i_0] [i_1] [i_1]) && (((/* implicit */_Bool) var_7))))))))));
                var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_5 [i_1]) + (9223372036854775807LL))) << (((/* implicit */int) arr_4 [i_1] [i_1] [i_0]))))) ? (((((/* implicit */int) var_4)) >> (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-30177)) ? (3997551493U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3056)))));
}
