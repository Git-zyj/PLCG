/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212387
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_5);
                    arr_9 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((int) (unsigned short)40539)) : (((/* implicit */int) ((short) var_2)))));
                    var_13 &= ((/* implicit */_Bool) ((short) (-(((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_1 [i_0])))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((85873099) >> (((((/* implicit */int) (short)-25149)) + (25176))))) : (((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)24996)) : (((/* implicit */int) var_5)))))));
}
