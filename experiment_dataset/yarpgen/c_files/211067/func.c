/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211067
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_5 [i_0] = max((((/* implicit */long long int) (_Bool)1)), (min((((/* implicit */long long int) min((arr_4 [15LL] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0] [i_0]))))), (63050394783186944LL))));
                var_20 ^= ((/* implicit */unsigned char) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4)) ? (((int) var_1)) : (((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (signed char)11))))) >> (((((((/* implicit */_Bool) 2891895890390679816ULL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))) + (100)))))));
    var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_18)))))));
}
