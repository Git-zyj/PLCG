/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27970
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
    var_11 = ((((/* implicit */_Bool) (~((-(18446744073709551607ULL)))))) ? (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_9)) : (2ULL))) >> (((((/* implicit */int) var_6)) - (189))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)82)) ? (-1963726350) : (-643199261)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-89)) && (((/* implicit */_Bool) var_7)))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) arr_2 [i_0]);
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) arr_2 [i_0]))));
        /* LoopSeq 1 */
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-13524)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))) & (2356011375U))))));
            var_15 &= ((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)17858));
            var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 65535ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1938955920U))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */unsigned int) var_10)) : (arr_2 [i_0])))) : (((long long int) arr_4 [i_0] [i_0] [i_0]))));
        }
        var_17 ^= ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
        arr_5 [i_0] &= ((/* implicit */unsigned long long int) (-(var_4)));
    }
    var_18 = ((long long int) ((signed char) 1938955920U));
    var_19 &= ((/* implicit */unsigned long long int) var_10);
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) var_7)) / ((~(var_4)))));
}
