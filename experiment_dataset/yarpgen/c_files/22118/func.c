/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22118
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
    var_15 = (short)-32765;
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32754)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)32756))) < (arr_1 [(unsigned char)3])))) : (((((/* implicit */_Bool) (unsigned char)84)) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((((/* implicit */int) (short)-32747)) / (((/* implicit */int) (short)-32754))))))));
        var_17 = ((/* implicit */signed char) (_Bool)1);
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) (((-(var_8))) * (((arr_2 [4] [i_1]) * (arr_2 [i_1] [i_1])))));
        arr_5 [5] = (-(((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32747))) - (0U)))) % (arr_3 [i_1] [i_1]))));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_19 = ((/* implicit */int) (short)-8376);
        arr_9 [8ULL] = ((/* implicit */short) arr_8 [(unsigned short)1] [3LL]);
        var_20 = ((/* implicit */int) arr_0 [i_2]);
    }
    for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32756)) >> (((/* implicit */int) ((var_11) <= (var_1))))))) ? (((arr_10 [i_3 - 1] [i_3 + 1]) << (((4443153661070543143ULL) - (4443153661070543119ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32747)))));
        arr_13 [i_3] [i_3] = ((/* implicit */long long int) (~(arr_10 [(unsigned short)17] [(signed char)2])));
        var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_3]))));
    }
}
