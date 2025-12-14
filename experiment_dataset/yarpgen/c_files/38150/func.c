/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38150
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [16LL]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))) >= (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_2)))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) & (arr_3 [i_1 - 1])))));
                var_18 += ((/* implicit */_Bool) (-(min((-1153393376118308799LL), (arr_5 [i_1 + 1] [i_1 - 1] [i_1 - 1])))));
                arr_6 [i_0] = max((((/* implicit */unsigned int) arr_2 [i_0])), (min((arr_3 [i_1]), (((((/* implicit */_Bool) 2664733130U)) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_19 = min((var_5), (((/* implicit */unsigned int) min((var_12), (((/* implicit */int) var_1))))));
    var_20 = ((/* implicit */unsigned int) var_10);
}
