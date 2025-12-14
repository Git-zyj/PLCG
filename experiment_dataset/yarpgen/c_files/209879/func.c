/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209879
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) arr_0 [7])))))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_12 [5] [(unsigned char)6] = ((/* implicit */long long int) (((~(arr_8 [i_1 + 1] [i_1 - 2]))) / (((unsigned int) arr_8 [i_1 + 1] [i_1 - 2]))));
                    arr_13 [i_0] = ((/* implicit */unsigned char) var_7);
                }
            } 
        } 
    }
    var_12 = ((/* implicit */short) var_4);
    var_13 = ((/* implicit */signed char) var_11);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_3 = 1; i_3 < 17; i_3 += 3) 
    {
        var_14 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
        var_15 = ((/* implicit */long long int) arr_14 [i_3]);
    }
}
