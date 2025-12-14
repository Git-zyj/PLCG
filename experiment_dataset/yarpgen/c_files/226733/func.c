/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226733
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
    var_19 = ((/* implicit */signed char) var_18);
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) : (var_15)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : ((~(var_3)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((unsigned long long int) var_7)))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */_Bool) var_12);
                    arr_11 [i_0] [i_2] = ((/* implicit */_Bool) 8613322034512932831ULL);
                }
            } 
        } 
    } 
}
