/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34992
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
    var_11 ^= ((/* implicit */short) (+(((/* implicit */int) ((unsigned char) var_8)))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65529))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31943)) ? (10U) : (var_6)))) ? (35184372088831ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) (unsigned short)6)))))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) -1181946246))) ? (((/* implicit */int) arr_1 [8])) : (((/* implicit */int) arr_0 [i_0 - 3])))))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+((~((+(((/* implicit */int) (short)32245)))))))))));
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0 + 2] [i_1] [i_0 + 1]))))) ? (max(((+(var_6))), (((/* implicit */unsigned int) arr_0 [i_0])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))));
        }
        for (long long int i_2 = 0; i_2 < 19; i_2 += 3) /* same iter space */
        {
            arr_10 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)31943)) ? ((~(((/* implicit */int) arr_4 [i_0] [i_2] [i_0 - 2])))) : (((((/* implicit */int) (unsigned short)19842)) * (((/* implicit */int) (unsigned short)12887))))));
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (0ULL)));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */short) ((((/* implicit */int) arr_7 [10ULL])) + (((((/* implicit */int) (signed char)-1)) & (((/* implicit */int) (signed char)106))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [(short)10])))))));
    }
}
