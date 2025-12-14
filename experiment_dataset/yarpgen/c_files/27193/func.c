/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27193
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
    var_18 = ((/* implicit */short) var_6);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) arr_1 [i_1 - 2] [i_1 - 2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (((long long int) (short)-683))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) arr_6 [i_1 - 3] [i_1 - 3] [i_1 + 2]))))) ? (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 3] [i_1 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 + 1] [i_1 + 1])))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned short) -3992979713388435869LL)))));
    var_21 = ((/* implicit */unsigned short) var_14);
}
