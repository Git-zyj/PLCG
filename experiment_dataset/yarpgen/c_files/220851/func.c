/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220851
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
    var_17 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7)))) ? (((/* implicit */int) ((var_9) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))) : (((/* implicit */int) var_14)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */_Bool) var_10);
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) min((arr_4 [7U] [i_1]), (arr_0 [(_Bool)1])))), (var_5)))) >> (((((/* implicit */int) min((arr_2 [i_1] [i_1 - 1]), (((/* implicit */unsigned short) var_12))))) - (7846)))));
                var_20 += ((/* implicit */long long int) min((arr_2 [i_0] [i_1]), ((unsigned short)6747)));
            }
        } 
    } 
}
