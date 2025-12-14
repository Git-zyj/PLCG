/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197491
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
    var_18 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_8) : (((/* implicit */int) arr_0 [i_0 + 1] [i_1]))))) ? ((~(((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((arr_3 [i_0] [(signed char)5] [i_1]) == (arr_3 [i_0 - 1] [i_0 - 2] [(signed char)8]))))))), (((((/* implicit */_Bool) (-(arr_4 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_1])) : (max((((/* implicit */unsigned long long int) var_14)), (arr_1 [i_0 + 1])))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) 2121721156U))));
            }
        } 
    } 
}
