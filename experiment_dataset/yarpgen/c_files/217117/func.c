/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217117
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) && (((max((var_2), (((/* implicit */unsigned long long int) (unsigned short)0)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            for (int i_2 = 4; i_2 < 14; i_2 += 2) 
            {
                {
                    var_21 |= ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)19231)) << (((((/* implicit */int) (short)-19236)) + (19242))))))) << (((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) + (25)))));
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_5 [i_0 + 1] [i_2 - 4] [i_2] [i_2]), (((/* implicit */short) var_5)))))));
                    var_23 = ((/* implicit */_Bool) ((arr_6 [i_0] [i_0] [i_2] [i_1 - 1]) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) ((_Bool) (short)-19232))), (min((((/* implicit */int) var_16)), (var_6)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)49792))))), (max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2])), (var_7)))))));
                }
            } 
        } 
    } 
}
