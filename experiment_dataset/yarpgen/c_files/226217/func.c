/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226217
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) max((((unsigned int) arr_4 [i_0])), (((/* implicit */unsigned int) ((short) arr_4 [i_0])))));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_1])) | (((/* implicit */int) (short)-26920))))) || (((/* implicit */_Bool) min((((/* implicit */short) (!(arr_0 [i_1])))), (arr_2 [i_1])))))))));
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (-(arr_3 [i_1] [5LL] [i_0]))))) ? (min((((unsigned int) (signed char)0)), (((unsigned int) arr_3 [i_1] [i_1] [i_0])))) : (min((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) 2008484439)) ? (arr_3 [i_0] [i_1] [i_0]) : (((/* implicit */unsigned int) arr_4 [i_0]))))))));
            }
        } 
    } 
    var_13 = (~(var_1));
}
