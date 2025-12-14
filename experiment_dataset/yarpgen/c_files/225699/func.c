/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225699
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
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) (short)-28783)))) && (((/* implicit */_Bool) ((unsigned short) (short)21298))))))));
                var_10 = var_2;
                /* LoopSeq 1 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
                {
                    arr_12 [i_0] [i_0] [i_2] [i_0] &= ((/* implicit */unsigned int) ((((int) (short)21288)) < (min((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (short)21308))))), ((~(((/* implicit */int) (short)28795))))))));
                    arr_13 [i_0] [i_2] &= ((unsigned short) var_2);
                }
            }
        } 
    } 
    var_11 &= ((/* implicit */signed char) var_7);
}
