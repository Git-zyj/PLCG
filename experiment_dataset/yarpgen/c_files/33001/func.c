/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33001
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 8; i_2 += 2) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_2 [i_0] [i_2]), (((/* implicit */int) arr_4 [i_2 - 1]))))) ? (max((arr_2 [i_0] [i_0]), (((/* implicit */int) arr_4 [i_2 + 2])))) : (((arr_2 [i_0] [i_1]) ^ (((/* implicit */int) arr_4 [i_0]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10; i_3 += 3) 
                    {
                        arr_11 [i_1] = ((/* implicit */unsigned long long int) ((arr_10 [i_2] [i_2 + 2] [7] [i_2]) >= (arr_9 [i_1] [i_2] [i_1] [i_2 + 1] [i_2 + 2] [i_2])));
                        arr_12 [i_0] [i_1] [i_2] = ((/* implicit */int) ((unsigned int) arr_3 [i_2 + 2] [i_2 + 1]));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) min((var_15), (((/* implicit */unsigned long long int) var_12))))))));
}
