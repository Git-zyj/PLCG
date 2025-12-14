/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19649
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) var_0))));
                    var_12 = ((/* implicit */signed char) min((var_12), (((signed char) ((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 - 2] [i_2 + 1])) || (((/* implicit */_Bool) arr_4 [i_2 - 1] [i_2 - 1] [i_2 - 2])))))));
                }
            } 
        } 
    } 
    var_13 += ((/* implicit */unsigned char) var_6);
    var_14 = ((/* implicit */unsigned char) (unsigned short)26396);
}
