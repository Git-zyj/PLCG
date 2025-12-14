/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45379
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) (_Bool)1);
        var_17 ^= ((/* implicit */unsigned char) ((((((/* implicit */long long int) (-2147483647 - 1))) | (arr_1 [i_1] [i_1]))) & (((/* implicit */long long int) ((/* implicit */int) ((signed char) 3LL))))));
    }
    for (int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((-13LL) + (9223372036854775807LL))) << (((((-12LL) + (52LL))) - (40LL)))))) ? ((+(arr_6 [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) arr_5 [i_2])) >= (var_8)))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2]))))) >> ((((_Bool)1) ? (12LL) : (-30LL)))));
            arr_12 [i_3] [i_2] [i_2] = ((/* implicit */unsigned int) -12LL);
        }
    }
    var_19 = ((/* implicit */short) var_13);
    var_20 = ((/* implicit */unsigned short) (_Bool)1);
}
