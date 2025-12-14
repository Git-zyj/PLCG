/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197383
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [8U] [i_0] = ((/* implicit */short) (+(arr_2 [i_0])));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 324559695U)) || (((/* implicit */_Bool) arr_6 [10U] [i_2 - 2] [i_2 - 2] [i_1]))));
                    arr_9 [i_2 + 3] [i_1] [i_0] = ((/* implicit */short) (+(var_2)));
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((unsigned long long int) 324559695U));
                }
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */long long int) 1546002052U);
    }
    var_18 = ((/* implicit */int) var_4);
    var_19 = ((/* implicit */short) var_1);
}
