/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4960
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
    var_10 = var_9;
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 6; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] = ((/* implicit */short) arr_2 [i_0] [i_0]);
                    arr_9 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [(_Bool)0] [i_0])) || (((/* implicit */_Bool) arr_4 [i_0 + 4]))))), (min((arr_5 [i_0] [(_Bool)1] [i_0]), (((/* implicit */unsigned int) (unsigned short)65515))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) var_2);
    var_12 |= ((/* implicit */unsigned short) (signed char)-9);
    var_13 = ((/* implicit */_Bool) 1282556849);
}
