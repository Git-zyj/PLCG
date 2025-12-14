/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24470
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
    var_10 = ((/* implicit */int) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_11 = ((/* implicit */unsigned char) ((int) arr_0 [i_1]));
            arr_4 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) var_4);
            arr_5 [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
            var_12 ^= ((/* implicit */_Bool) var_1);
        }
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            var_13 = ((/* implicit */unsigned short) var_6);
            var_14 *= arr_0 [i_2];
            var_15 += ((/* implicit */unsigned char) (short)21264);
            arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) arr_3 [i_0]));
        }
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) 10440575191612101846ULL))));
    }
}
