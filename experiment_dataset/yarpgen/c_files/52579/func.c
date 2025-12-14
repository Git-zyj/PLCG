/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52579
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52579 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52579
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
    var_12 = (short)-28580;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) var_6))));
                var_14 = ((unsigned char) min((((/* implicit */short) var_11)), ((short)-28580)));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)236))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(2972957240210140227ULL)))) ? (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 1])), (15473786833499411389ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-125))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_6 [i_0] [i_1] [i_0]) : (((/* implicit */int) (signed char)125)))))));
                var_16 += ((/* implicit */unsigned short) 15473786833499411389ULL);
            }
        } 
    } 
}
