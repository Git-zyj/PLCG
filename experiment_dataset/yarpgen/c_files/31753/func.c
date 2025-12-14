/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31753
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
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((arr_0 [i_0] [i_0 + 3]) ? (((/* implicit */int) arr_0 [i_0] [i_0 - 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 16; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0 + 2])) | (((/* implicit */int) arr_6 [i_0 + 1]))));
                    var_15 = ((/* implicit */signed char) 834614264);
                }
            } 
        } 
    }
    var_16 = ((/* implicit */unsigned long long int) var_6);
}
