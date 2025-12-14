/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29159
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29159 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29159
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
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_14 = min((((/* implicit */int) ((max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_2 [i_1])))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) var_13)))))))), (arr_1 [i_1]));
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2]))));
                }
            } 
        } 
    } 
    var_16 = ((unsigned short) var_13);
    var_17 = ((/* implicit */unsigned short) var_10);
}
