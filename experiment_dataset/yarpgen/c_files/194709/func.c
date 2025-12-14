/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194709
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
    for (unsigned long long int i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_1] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (8388607) : (((/* implicit */int) (unsigned short)51826))));
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */int) max(((~(((((/* implicit */_Bool) arr_3 [i_1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(signed char)19] [i_0]))) : (var_10))))), (((/* implicit */unsigned long long int) (unsigned short)14336))));
                arr_6 [i_1] = ((/* implicit */_Bool) (unsigned short)51813);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) var_10);
    var_21 = var_7;
}
