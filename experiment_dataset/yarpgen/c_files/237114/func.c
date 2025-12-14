/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237114
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
    var_10 = ((/* implicit */unsigned short) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 8271777842050803979ULL)) ? (10174966231658747640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7264)))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 19; i_1 += 2) 
    {
        var_12 = ((/* implicit */_Bool) arr_4 [i_1]);
        var_13 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (8527303941852694135ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
        var_14 = ((/* implicit */unsigned short) ((short) arr_4 [i_1]));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (((/* implicit */int) arr_0 [(signed char)20] [(signed char)20]))));
            arr_8 [i_1] = ((/* implicit */signed char) arr_7 [i_1] [i_1]);
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            var_16 = ((/* implicit */unsigned long long int) (unsigned char)209);
            arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_4 [i_1]))));
        }
        arr_13 [i_1] = ((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 3] [i_1]);
    }
    var_17 = var_1;
}
