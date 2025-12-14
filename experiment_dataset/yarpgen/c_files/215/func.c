/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215
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
    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) max((max((((unsigned int) var_5)), (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))))))), (((/* implicit */unsigned int) var_10)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((arr_1 [i_0 + 1]) + (var_4))));
                    arr_8 [i_0] &= ((/* implicit */int) ((short) var_8));
                }
                var_15 = ((((/* implicit */_Bool) var_9)) ? (arr_0 [i_0] [i_0]) : (((var_12) << (((((unsigned int) var_7)) - (2983487371U))))));
                arr_9 [i_0] [i_0 - 1] [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */int) (!(arr_6 [i_0]))))))) ? (((/* implicit */int) max((var_6), (((signed char) var_5))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (var_11))))))));
            }
        } 
    } 
}
