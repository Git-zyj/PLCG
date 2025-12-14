/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215493
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
    var_19 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(var_3)))) ? (min((var_18), (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)-16)) / (var_16))))))) / (((unsigned long long int) ((int) (short)15)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) min((arr_5 [i_0]), (((/* implicit */unsigned long long int) (+(min((var_1), (var_15))))))));
                    var_20 = ((/* implicit */int) ((unsigned long long int) min((arr_7 [i_2] [i_2 + 1] [i_2 + 2]), (arr_7 [i_2] [i_2 + 1] [i_2 + 1]))));
                    arr_9 [i_1] = ((/* implicit */signed char) arr_7 [i_0] [(signed char)12] [8ULL]);
                }
            } 
        } 
    } 
}
