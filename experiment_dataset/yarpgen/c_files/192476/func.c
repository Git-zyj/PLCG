/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192476
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */unsigned short) var_7);
                var_16 = ((/* implicit */long long int) var_12);
                var_17 &= ((/* implicit */long long int) var_13);
                var_18 &= ((/* implicit */unsigned int) var_9);
                arr_6 [i_0] [i_0] [i_0] &= var_14;
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_10);
    var_20 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 2; i_2 < 8; i_2 += 1) 
    {
        var_21 = ((/* implicit */signed char) var_14);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_10))));
        arr_11 [i_2] = ((/* implicit */unsigned long long int) var_14);
        arr_12 [i_2] = ((/* implicit */unsigned long long int) var_13);
    }
}
