/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238178
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */_Bool) ((arr_2 [i_1 - 1]) >> (((min((var_1), (((/* implicit */unsigned int) var_4)))) - (549234652U)))));
                    arr_7 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_4 [i_1 - 2] [i_1 + 2] [i_2 + 1] [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_1 - 2] [i_1 - 2])))) : (var_1)));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned char) var_4);
    var_13 = ((/* implicit */unsigned long long int) ((signed char) ((short) var_7)));
    var_14 = ((/* implicit */unsigned long long int) ((var_1) != (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_3] [i_3]) > (((/* implicit */long long int) var_2)))))) - (arr_9 [i_3])));
        var_16 = ((/* implicit */signed char) ((arr_9 [i_3]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
        var_17 = ((/* implicit */unsigned long long int) (short)25050);
    }
}
