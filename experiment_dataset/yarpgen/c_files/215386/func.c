/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215386
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) ((((((/* implicit */int) arr_0 [i_0])) << (((((/* implicit */int) (short)-17281)) + (17287))))) < (((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)65518))))));
        var_16 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28672)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            arr_5 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)60)) << (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
            arr_6 [i_0] [i_1] = ((/* implicit */short) ((arr_2 [i_0] [i_0] [i_1]) / (((/* implicit */int) (signed char)2))));
            arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0]))));
        }
        for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
        {
            var_17 = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
            arr_11 [i_0] [i_2] = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_3 [i_2 - 2] [i_2])) : (((/* implicit */int) arr_3 [i_2 - 2] [i_2])));
        }
        for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
        {
            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43))) != (536870400U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)31)) || (((/* implicit */_Bool) var_5))))))))));
            arr_14 [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_9 [i_0] [i_0] [i_3]))) ? (((((/* implicit */_Bool) arr_1 [i_3] [i_3])) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8))));
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_12 [i_3] [i_3] [i_3]))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) var_2)) / (((/* implicit */int) arr_3 [i_0] [i_3]))))));
            arr_15 [i_3] [i_3] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_10 [i_0] [i_3] [i_0]))));
            arr_16 [i_0] [i_3] = ((/* implicit */long long int) ((short) ((unsigned char) (signed char)36)));
        }
        arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-28673))));
    }
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) arr_12 [i_4] [i_4] [i_4]);
        var_21 += ((/* implicit */unsigned short) arr_18 [i_4]);
        arr_20 [i_4] = ((/* implicit */unsigned long long int) ((((var_4) + (2147483647))) << (((((((/* implicit */int) (short)(-32767 - 1))) + (32770))) - (1)))));
    }
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) var_14))))) <= (((((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) var_11))))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_5)) : (9223372036854775807LL)))))));
}
