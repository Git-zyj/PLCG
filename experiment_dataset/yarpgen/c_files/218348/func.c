/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218348
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
    var_18 = ((/* implicit */_Bool) min((var_12), (((/* implicit */int) ((var_8) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)24823)), (max((-1081225766), (-1081225775)))))) ? ((-(arr_3 [i_0 - 1] [i_0 - 3]))) : (((/* implicit */int) arr_0 [i_0])));
                    var_20 = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_1 [i_0 - 3] [i_0 - 1])) + (((/* implicit */int) (unsigned short)13383)))), (((((/* implicit */int) arr_6 [i_2] [i_2] [i_0 + 1] [i_0 - 1])) + (((/* implicit */int) arr_6 [i_2] [i_2] [i_0 - 2] [i_0]))))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)64)) ? (min(((((_Bool)0) ? (((/* implicit */int) arr_2 [i_1])) : (arr_3 [13] [i_1]))), (max((386442244), (((/* implicit */int) (signed char)127)))))) : (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)16] [i_1])) < (max((565649826), (((/* implicit */int) arr_6 [i_2] [i_2] [i_1] [i_0])))))))));
                }
            } 
        } 
    } 
}
