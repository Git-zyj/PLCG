/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203683
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_10 [i_1] [i_0] [i_1] [7ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_2])) ? (max((0LL), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_5 [i_2 + 1] [i_1 - 1]))))))));
                    arr_11 [i_1 + 3] [i_1] [(unsigned char)8] [i_0] = ((/* implicit */signed char) arr_2 [i_1 + 3] [i_2]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) var_11);
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) -23LL))));
}
