/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226498
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
    var_12 = ((/* implicit */long long int) var_1);
    var_13 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (9223372036854775787LL)))) ? (((/* implicit */int) min((var_3), ((short)-17681)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))) : (((var_6) ? (((/* implicit */int) min(((short)-6028), (var_8)))) : (((/* implicit */int) var_2))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_14 ^= ((/* implicit */int) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))), (min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))));
        var_15 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)127))));
        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(3185709728U)))))))) : (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-89))) : (1416530204744018899LL)))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_4 [i_1]) : (arr_2 [i_1] [i_1])))), (min((((/* implicit */long long int) arr_1 [i_1])), (-3432705205871609211LL))))) : (((/* implicit */long long int) arr_2 [i_1] [i_1]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) 3039873829U))));
            var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)230)) ? (17556391843221727226ULL) : (1868420751852516072ULL))))));
        }
        for (int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) arr_4 [i_3]);
            var_20 = ((/* implicit */unsigned long long int) (short)-20503);
        }
        for (unsigned int i_4 = 0; i_4 < 23; i_4 += 2) 
        {
            arr_17 [i_4] [i_1] = ((/* implicit */short) (-(((/* implicit */int) max(((unsigned char)2), (((/* implicit */unsigned char) (_Bool)1)))))));
            arr_18 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_4])) ? (((/* implicit */long long int) arr_12 [i_1] [i_1] [i_4])) : (9223372036854775807LL)));
        }
    }
}
