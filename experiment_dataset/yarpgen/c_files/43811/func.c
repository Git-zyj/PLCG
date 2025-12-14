/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43811
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
    var_10 -= ((/* implicit */unsigned char) (~(((/* implicit */int) max((var_7), (((/* implicit */unsigned short) (short)-9135)))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? ((+(2147483646))) : ((~(arr_0 [i_0]))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((4713081572058160161ULL) * (11115636470284616232ULL)))) ? (min((18446744073709551609ULL), (((/* implicit */unsigned long long int) (_Bool)1)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43)))));
        arr_2 [(short)20] = ((((/* implicit */_Bool) (short)-28036)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) + (((/* implicit */int) arr_1 [i_0]))))) : (((unsigned long long int) arr_1 [i_0])));
        var_13 = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 2) 
                {
                    {
                        var_14 = ((/* implicit */unsigned char) ((unsigned long long int) arr_0 [(_Bool)1]));
                        var_15 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_1 - 1])) <= (arr_9 [i_1] [i_1 - 1] [i_1] [i_1 - 1])));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (11374436682917490473ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                    }
                } 
            } 
        } 
        var_17 = ((((unsigned long long int) var_3)) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_0)))));
    }
}
