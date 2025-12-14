/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54238
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
    var_18 += ((/* implicit */unsigned int) var_13);
    var_19 += ((/* implicit */short) var_5);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_20 ^= arr_5 [i_0] [i_1] [i_0];
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        arr_12 [(_Bool)1] [i_1] [i_3] [i_3] = ((/* implicit */int) (unsigned short)36728);
                        arr_13 [i_3] = ((/* implicit */unsigned int) (unsigned short)36703);
                        arr_14 [i_0] [i_0] [11LL] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
                    }
                    arr_15 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) (short)32767);
                }
            } 
        } 
    } 
}
