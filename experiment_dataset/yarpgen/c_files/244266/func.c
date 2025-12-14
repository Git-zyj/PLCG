/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244266
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
    var_10 = ((/* implicit */unsigned int) var_4);
    var_11 = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */long long int) 0U)), ((-(-9223372036854775792LL))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [(unsigned short)4] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [(short)6] [(signed char)14])) ? (((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)13)) ? (((/* implicit */int) arr_7 [i_0] [(_Bool)1])) : (((/* implicit */int) var_8))))) : (min((((/* implicit */long long int) 18U)), (9223372036854775801LL))))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) - (((/* implicit */int) arr_5 [(_Bool)1] [i_2 + 3] [i_2 + 4] [(_Bool)1])))))));
                    arr_9 [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) * (((/* implicit */int) ((signed char) var_9)))))) ? ((~(min((((/* implicit */int) arr_6 [i_0] [(unsigned short)2] [i_0] [(_Bool)1])), (var_9))))) : (251658240)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
}
