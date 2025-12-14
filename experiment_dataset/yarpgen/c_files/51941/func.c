/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51941
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? (min((((/* implicit */unsigned long long int) (unsigned short)14061)), (max((((/* implicit */unsigned long long int) var_5)), (var_2))))) : (((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) (unsigned char)150)), (1400229058U)))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = (unsigned short)1053;
                var_16 += (unsigned short)59606;
            }
        } 
    } 
}
