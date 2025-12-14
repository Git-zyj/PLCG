/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54643
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
    var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_7)), (var_17)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)25977)) : (((/* implicit */int) (short)32181)))) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) (short)9319)) ? (((/* implicit */int) (short)-32163)) : (11827925)))));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 22; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 + 2] = ((/* implicit */unsigned int) min((((/* implicit */int) (short)-9690)), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 2])) ? (var_13) : (arr_1 [i_0 + 2] [i_0])))));
        var_20 = ((/* implicit */unsigned long long int) 4858712482827412070LL);
    }
    for (int i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_21 += ((/* implicit */signed char) (unsigned short)42898);
        var_22 = ((/* implicit */short) (~(max((((((/* implicit */_Bool) (unsigned char)105)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-24))) : (var_8))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)24609)) - (((/* implicit */int) (unsigned short)23772)))))))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        arr_9 [i_2] = (short)-9770;
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4233161642U)) | (arr_4 [i_2])))) ? (((((((/* implicit */int) arr_7 [0U] [11ULL])) + (2147483647))) >> (((22403804U) - (22403803U))))) : ((-(-650081728))))));
    }
    var_23 = ((/* implicit */signed char) ((long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_12))))))));
}
