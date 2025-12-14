/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215764
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
    var_10 = ((/* implicit */unsigned int) var_2);
    var_11 = ((/* implicit */unsigned char) max((0ULL), (((/* implicit */unsigned long long int) (short)2))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_2))))))))) : ((((_Bool)0) ? (min((4ULL), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */int) min((var_3), (var_3)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)31)))))) : (((/* implicit */int) var_5))));
            }
        } 
    } 
}
