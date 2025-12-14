/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212965
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
    var_11 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) arr_2 [i_0 + 2])))))))));
                arr_5 [(signed char)9] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) ((1023) <= (((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) arr_4 [i_0 + 4]))))) ? (((/* implicit */int) ((signed char) arr_4 [14]))) : (((/* implicit */int) arr_0 [i_0]))))));
                var_13 = min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3156169393U)) ? (((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0 + 3])) : (268435455)))), (0ULL));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)7898)) : (min((1027), (((/* implicit */int) (!(((/* implicit */_Bool) 2559505704U)))))))));
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((var_4), ((signed char)-16)))), (min((((/* implicit */unsigned long long int) var_10)), (18446744073709551615ULL)))))) ? (max((((/* implicit */int) (signed char)19)), (((var_2) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)0)))))) : (-268435469))))));
    var_16 += ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_0)), ((+(var_9))))))));
}
