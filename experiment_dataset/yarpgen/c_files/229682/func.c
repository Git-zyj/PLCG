/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229682
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
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 3734223774U)) ? ((~(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (arr_5 [i_0] [i_0]) : (((/* implicit */int) (signed char)37))))))));
                arr_8 [3ULL] [3ULL] [i_1 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_6 [i_0] [i_0] [i_1 - 1]))) ? ((~(arr_5 [i_0] [i_1 - 1]))) : (((int) arr_6 [i_0] [i_0] [i_0]))));
                var_18 = ((/* implicit */signed char) (-(max(((+(867257420U))), (867257420U)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_16))));
}
