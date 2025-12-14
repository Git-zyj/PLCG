/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239682
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (short)-15319)) > (((/* implicit */int) (short)-13049)))))) ? (((((_Bool) var_6)) ? (((/* implicit */int) ((unsigned short) var_7))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (signed char)-88)) : (((/* implicit */int) var_5)))))) : (var_7)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) var_4)), (arr_5 [i_2] [i_0])))) ^ (((/* implicit */int) arr_6 [i_2 + 1] [i_2 + 3] [i_0]))))) || (((/* implicit */_Bool) ((((var_7) - (((/* implicit */int) var_10)))) - ((+(((/* implicit */int) arr_2 [i_0] [i_0])))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_1 [i_0]);
                    arr_9 [i_2] = ((((/* implicit */_Bool) min((((((/* implicit */int) var_15)) + (((/* implicit */int) (unsigned short)51560)))), ((-(((/* implicit */int) (short)-13048))))))) ? (((/* implicit */long long int) ((((((/* implicit */int) var_5)) * (((/* implicit */int) (short)13048)))) * (((((/* implicit */_Bool) arr_3 [i_0] [(unsigned short)3] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))))) : (((((/* implicit */long long int) ((((/* implicit */int) (short)13065)) - (((/* implicit */int) arr_6 [i_0] [i_1] [i_2 - 1]))))) / (var_6))));
                    var_19 = ((/* implicit */short) ((((int) arr_6 [i_2 + 3] [i_2 + 3] [i_2 + 1])) - (((/* implicit */int) max((arr_6 [i_2 + 4] [i_2 + 2] [i_2 + 4]), (arr_6 [i_2 - 1] [i_2 + 1] [i_2 + 2]))))));
                }
            } 
        } 
    } 
}
