/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207596
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
    var_18 = ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */short) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((/* implicit */int) ((((((-4764150745133757245LL) + (9223372036854775807LL))) >> (((arr_0 [i_0] [i_1]) - (1619175586))))) != (((/* implicit */long long int) var_4)))))));
                var_20 = ((/* implicit */unsigned short) min((max((((/* implicit */int) arr_2 [i_1] [i_0] [i_1])), (((((/* implicit */_Bool) var_4)) ? (var_17) : (var_3))))), (((/* implicit */int) var_0))));
                var_21 = ((/* implicit */unsigned int) ((((var_8) + (((/* implicit */long long int) ((/* implicit */int) var_2))))) | (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) > (max((var_7), (((/* implicit */long long int) arr_4 [(short)19] [(short)19] [i_0]))))))))));
            }
        } 
    } 
}
