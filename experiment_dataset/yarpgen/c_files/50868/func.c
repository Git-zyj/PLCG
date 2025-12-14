/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50868
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) arr_4 [i_0] [i_1]);
                var_17 &= ((/* implicit */short) (+(((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)25526)), (1796785259U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [(short)7]), (arr_0 [i_1]))))) : (((((/* implicit */_Bool) var_15)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)7560)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -1324244140)) : (var_6))) * (((/* implicit */unsigned long long int) max((((/* implicit */int) var_0)), (var_5)))))) % (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((-1324244140) / (((/* implicit */int) (unsigned short)1820))))), (3757605019223288454LL))))));
    var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) 1324244141)) || (((/* implicit */_Bool) var_11)))))))), (((((/* implicit */_Bool) ((short) var_11))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((var_3), (((/* implicit */short) var_7)))))) : (max((((/* implicit */unsigned int) var_3)), (var_10)))))));
}
