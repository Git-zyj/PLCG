/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24351
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24351 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24351
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        var_12 ^= 3409036460U;
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            var_13 = ((((((/* implicit */int) var_0)) != (((/* implicit */int) var_0)))) ? (((885930852U) << (((((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1])) + (28))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))));
            arr_4 [(_Bool)1] = ((/* implicit */long long int) max(((+(((/* implicit */int) var_1)))), (((/* implicit */int) arr_3 [i_0] [i_1]))));
            var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((4695990319733126805LL) / (((/* implicit */long long int) arr_1 [i_1 + 3]))))))))) & (min((((/* implicit */long long int) var_6)), (4695990319733126805LL)))));
        }
        for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_15 = ((((/* implicit */_Bool) arr_1 [i_2])) ? (((long long int) 885930835U)) : (((/* implicit */long long int) ((max((((/* implicit */unsigned int) var_1)), (1039614746U))) >> (((((/* implicit */int) (short)-16384)) + (16400)))))));
            var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)71)) * (((/* implicit */int) var_0))))) : (3915540342444445461ULL)))))))));
            var_17 = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (signed char)-98)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1527682797)))), (((/* implicit */unsigned long long int) (short)-9588)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            arr_8 [(short)15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_2)) >> (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (short)20626)))))))) ? (3581473858U) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_2])) : (((/* implicit */int) (short)-16384)))))))));
        }
        /* vectorizable */
        for (long long int i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            arr_11 [(short)19] [i_3] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)221))));
            arr_12 [i_0] [i_0] = arr_7 [i_0] [i_0] [i_0];
        }
    }
    var_18 = ((/* implicit */long long int) max((0ULL), (((/* implicit */unsigned long long int) ((((var_6) - (var_10))) - (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 16; i_4 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_4] [i_4])) + (((/* implicit */int) (signed char)-98))))) <= (((885930831U) >> (((18446744073709551615ULL) - (18446744073709551586ULL)))))));
        arr_15 [i_4] [i_4] = ((/* implicit */signed char) var_3);
        /* LoopSeq 2 */
        for (int i_5 = 2; i_5 < 14; i_5 += 2) /* same iter space */
        {
            arr_18 [10LL] [i_5] = ((/* implicit */unsigned long long int) -5563330597336886091LL);
            arr_19 [9ULL] = ((/* implicit */long long int) ((var_11) <= (-4695990319733126806LL)));
            var_20 = (unsigned char)211;
        }
        for (int i_6 = 2; i_6 < 14; i_6 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */signed char) var_5);
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)4289)) ? (arr_22 [i_6 - 2] [i_6 + 2]) : (((/* implicit */int) var_1))));
            var_23 = arr_17 [i_4];
            arr_23 [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (16362582075244759833ULL) : (((/* implicit */unsigned long long int) var_4)))))));
        }
        var_24 = ((/* implicit */long long int) var_7);
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (unsigned char)7))));
    }
    var_26 ^= ((/* implicit */int) ((unsigned long long int) var_0));
}
