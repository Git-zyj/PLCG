/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211695
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) var_0);
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_4 [i_1] [i_1 + 1] [i_1 + 1]) / (max((arr_4 [i_1] [i_1 - 1] [i_1]), (((/* implicit */long long int) -1536288480))))));
                var_19 = ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_4 [i_0] [i_0] [i_0])))) : (arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1])))) || (((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_0])))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (+(var_1)));
    var_21 = ((/* implicit */unsigned short) ((var_18) / (min((var_13), (((/* implicit */int) var_15))))));
}
