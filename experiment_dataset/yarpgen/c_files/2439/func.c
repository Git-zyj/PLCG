/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2439
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
    var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) min(((unsigned short)889), (((/* implicit */unsigned short) var_3))))) : ((~(((/* implicit */int) (unsigned short)889))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        var_16 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [(short)18])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_0))))) : (arr_0 [i_0 - 3])));
        arr_2 [i_0] = ((/* implicit */unsigned int) (unsigned short)64646);
        arr_3 [i_0 + 1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)-3817))));
        arr_4 [i_0 - 2] = ((/* implicit */unsigned short) (+(arr_1 [i_0 - 1])));
        var_17 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned char) (unsigned short)64646)))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 6; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) (~(((unsigned long long int) arr_1 [i_1]))));
        var_19 *= ((/* implicit */unsigned short) (-(arr_5 [i_1 + 2])));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1 + 4])) ? (((/* implicit */int) ((unsigned short) var_3))) : ((-(((/* implicit */int) var_10))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_12 [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28404))) : (var_7)))));
            var_21 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_2])))) == (((long long int) var_1))));
            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_1 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)889)))));
        }
        var_23 = (~(((int) arr_8 [i_1] [i_1])));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 14; i_3 += 4) 
    {
        var_24 = ((/* implicit */short) ((int) ((long long int) var_8)));
        arr_15 [(unsigned short)11] = ((/* implicit */short) ((arr_0 [i_3]) > (arr_0 [i_3])));
        var_25 &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_0 [i_3])))))));
    }
}
