/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249369
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
    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) max((((/* implicit */int) var_2)), (max(((-(((/* implicit */int) var_2)))), (((/* implicit */int) var_4)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) max((((_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12))))), (((_Bool) max((((/* implicit */unsigned char) var_18)), (arr_0 [i_0]))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) arr_4 [i_0 - 1])) | (((/* implicit */int) arr_4 [i_0 - 1])))));
                var_22 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) min(((+(((/* implicit */int) ((signed char) var_3))))), (((/* implicit */int) var_18))));
}
