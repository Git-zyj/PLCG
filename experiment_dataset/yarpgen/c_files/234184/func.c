/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234184
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
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_8)) ? (-6398505255761995231LL) : (((/* implicit */long long int) ((/* implicit */int) var_18))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-14572)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 -= ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                var_21 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */int) arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1])) * (((/* implicit */int) arr_4 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((signed char) arr_4 [i_0] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((var_17) % (3913759334765636031LL)))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) / (arr_3 [i_0] [i_0]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_2)))))))));
                var_23 = ((((/* implicit */_Bool) ((arr_1 [i_1 + 1]) ? (((/* implicit */int) arr_1 [i_1 - 2])) : (((/* implicit */int) (short)-8089))))) ? (((/* implicit */long long int) ((arr_1 [i_1 - 2]) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 1]))))) : (((long long int) -3913759334765636029LL)));
                var_24 |= max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) (signed char)112)));
            }
        } 
    } 
}
