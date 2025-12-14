/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26554
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) (unsigned short)33962)) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) var_6)))) : (((/* implicit */int) ((_Bool) 1996071153U))))) : ((~(((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) var_9);
                var_12 = ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) ((signed char) (unsigned short)31573))), ((short)25534))))) & (((((18446744073709551615ULL) >> (((((/* implicit */int) var_5)) + (181))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (var_3)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (1363769462U))) >> (((((/* implicit */int) (unsigned short)31573)) - (31554))))) & (((/* implicit */unsigned int) ((/* implicit */int) min((var_6), (((arr_3 [i_0] [i_0]) <= (((/* implicit */unsigned int) arr_1 [i_0]))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33962))) + (max((1996071153U), (((/* implicit */unsigned int) (_Bool)0)))))), (((/* implicit */unsigned int) var_1))));
}
