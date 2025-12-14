/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210140
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
    var_20 = ((/* implicit */int) max((((/* implicit */long long int) ((((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_9)))) >> (0)))), (var_4)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [3] [3] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_12)))) ? ((+(1034010740334074611ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned short)8503)))))))) << (((((/* implicit */int) var_15)) - (15595)))));
                    var_21 += ((((/* implicit */_Bool) ((unsigned long long int) -7442795188859273141LL))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (var_7))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 0))))));
                    arr_11 [i_1] [i_2 - 3] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (((~(var_3))) >= (((/* implicit */unsigned long long int) arr_3 [(unsigned short)15]))))), (arr_3 [i_1])));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 4; i_3 < 22; i_3 += 4) 
                    {
                        arr_16 [i_0] [i_1] [i_1] [i_1] [i_3] = ((/* implicit */int) max((min((((((var_18) + (9223372036854775807LL))) << (((((/* implicit */int) var_5)) - (38050))))), (var_13))), (((/* implicit */long long int) 526987421))));
                        var_22 = 17412733333375476991ULL;
                        arr_17 [2] [(unsigned short)14] [i_2] [i_3 - 4] = ((/* implicit */int) (+((-(min((-5194198329145371195LL), (((/* implicit */long long int) 0))))))));
                    }
                }
            } 
        } 
    } 
}
