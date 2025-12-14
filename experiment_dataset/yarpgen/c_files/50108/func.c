/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50108
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
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned int) var_0);
                var_15 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */short) var_8))))) == (((/* implicit */int) var_3))))), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) < (arr_4 [i_1]))) ? ((+(var_7))) : (arr_4 [i_0])))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */int) 17005560482264344144ULL);
                var_16 ^= ((/* implicit */short) max((((281474976710656ULL) != (((/* implicit */unsigned long long int) arr_1 [i_1 - 4] [i_1 + 1])))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_9)) * (((/* implicit */int) var_5))))) != (var_7)))));
            }
        } 
    } 
    var_17 = (-(max((((281474976710680ULL) - (((/* implicit */unsigned long long int) 647235477U)))), (((18446462598732840945ULL) - (281474976710658ULL))))));
    var_18 += ((/* implicit */_Bool) max((((/* implicit */int) var_5)), (max((((/* implicit */int) var_2)), (((((/* implicit */int) var_8)) - (((/* implicit */int) var_3))))))));
}
