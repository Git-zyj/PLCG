/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46058
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
    for (short i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [5ULL]))));
        var_15 = ((/* implicit */signed char) arr_0 [i_0 - 4]);
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 11; i_1 += 1) 
    {
        var_16 = -1819372095;
        var_17 *= ((/* implicit */short) (+(((((/* implicit */_Bool) 1819372094)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130))) : (10707217630441295462ULL)))));
        arr_5 [i_1 + 1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) ((var_4) < (var_14)))) << (((((((/* implicit */int) (unsigned short)16383)) | (((/* implicit */int) (unsigned short)49149)))) - (49122)))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 4; i_2 < 9; i_2 += 1) 
    {
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        arr_8 [i_2] = ((/* implicit */short) 3);
    }
    var_19 = min((5U), (5U));
}
