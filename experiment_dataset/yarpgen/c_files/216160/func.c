/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216160
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */int) max((arr_1 [i_0 - 1]), (max((arr_1 [i_0 - 2]), (arr_1 [i_0 - 2])))));
                arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]);
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */long long int) 2221250125U);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)252)) != (((/* implicit */int) (unsigned char)3))))) >> ((((~(((/* implicit */int) var_2)))) + (33)))))) ? ((~(var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_14))))));
    var_19 += ((/* implicit */long long int) var_10);
    var_20 = ((/* implicit */_Bool) min((var_9), (((/* implicit */int) max((((/* implicit */unsigned char) var_3)), (max(((unsigned char)124), (((/* implicit */unsigned char) var_3)))))))));
}
