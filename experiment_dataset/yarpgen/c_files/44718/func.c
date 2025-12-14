/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44718
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_1))) | (var_6)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) 13U))));
                var_13 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)60)))))) ? (((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (9964665953650363650ULL))) : (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_1 + 1]) ? (var_9) : (4294967276U))))));
                arr_6 [i_1] [(unsigned char)8] = ((/* implicit */unsigned char) (-(arr_5 [i_0] [i_0])));
                var_14 ^= ((/* implicit */unsigned char) var_6);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned char) var_10);
}
