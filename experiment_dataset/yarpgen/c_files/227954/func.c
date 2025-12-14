/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227954
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
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) var_0))));
    /* LoopSeq 4 */
    for (int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned long long int) (-(1238513024)));
    }
    /* vectorizable */
    for (signed char i_1 = 4; i_1 < 13; i_1 += 3) 
    {
        var_18 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
        arr_5 [i_1 - 4] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
        var_19 = ((/* implicit */int) arr_3 [i_1 + 1]);
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        var_20 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (arr_3 [i_2]));
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_2 [i_2]))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_4 = 2; i_4 < 8; i_4 += 4) 
        {
            for (int i_5 = 0; i_5 < 11; i_5 += 3) 
            {
                {
                    arr_19 [0ULL] [i_5] [i_3] [2U] = ((/* implicit */unsigned char) arr_8 [i_3] [i_3]);
                    var_22 *= ((/* implicit */unsigned short) arr_4 [i_3] [i_3]);
                    var_23 |= ((/* implicit */long long int) (+(18446744073709551615ULL)));
                    arr_20 [i_5] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) ((var_1) == (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                }
            } 
        } 
        arr_21 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3]))))) ? ((~(var_8))) : (arr_0 [i_3]));
        arr_22 [i_3] = ((/* implicit */unsigned int) (-(var_8)));
        var_24 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_3]))));
        var_25 |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_3] [i_3]))));
    }
}
