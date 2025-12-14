/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23693
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
    var_15 ^= ((/* implicit */long long int) (signed char)7);
    var_16 ^= var_2;
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))), (((arr_1 [i_0 + 2]) ? (((/* implicit */unsigned long long int) var_13)) : (arr_2 [i_0 + 1])))));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-8)) ? (((/* implicit */int) (short)-22256)) : (((/* implicit */int) (unsigned char)1))));
        var_19 |= ((/* implicit */unsigned long long int) var_9);
        var_20 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */long long int) var_13))));
        var_21 = ((/* implicit */signed char) ((var_14) ? (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_14))))) : (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_22 = ((/* implicit */unsigned char) var_4);
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                {
                    arr_10 [i_3] [i_3 + 1] [i_2] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                    var_23 = ((/* implicit */unsigned char) (-(arr_5 [i_3 - 1])));
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((unsigned int) -1LL)))));
                }
            } 
        } 
    }
    var_25 ^= ((/* implicit */_Bool) var_1);
}
