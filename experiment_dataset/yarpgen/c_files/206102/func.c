/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206102
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_11 *= ((/* implicit */_Bool) (-(18446744073709551615ULL)));
                arr_4 [i_0] [i_0] &= ((/* implicit */short) ((arr_2 [i_0] [i_0]) || (((/* implicit */_Bool) ((int) arr_2 [i_1] [i_1])))));
                arr_5 [i_0] [i_0] [2U] |= (~(min((((/* implicit */int) arr_0 [i_1] [i_0])), (((arr_1 [i_1] [i_1]) ? (((/* implicit */int) (unsigned char)0)) : (var_10))))));
                var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((arr_2 [(signed char)8] [(signed char)8]) ? (137438953408LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))))), (-4689397030707021477LL)))) ? ((~(((long long int) arr_3 [i_0] [i_1])))) : (((/* implicit */long long int) -2102385417)))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) min((((((886700267844735473ULL) & (((/* implicit */unsigned long long int) -4689397030707021465LL)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) var_5)))))));
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((var_10) & (((/* implicit */int) var_0)))))));
}
