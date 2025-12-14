/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26286
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
    /* LoopSeq 4 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0 + 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 3] [i_0 - 2])) && (((/* implicit */_Bool) 18446744073709551615ULL))))) : (((/* implicit */int) ((_Bool) arr_1 [i_0 + 1] [i_0 + 1])))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (((!((_Bool)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(6ULL))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_7)))) : (((/* implicit */int) (unsigned short)52802))))));
    }
    for (int i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_11 = ((short) max((((/* implicit */unsigned long long int) ((var_4) << (((((/* implicit */int) (signed char)75)) - (75)))))), (arr_6 [i_1])));
        arr_8 [i_1] = ((/* implicit */unsigned char) arr_0 [i_1]);
        var_12 = ((/* implicit */_Bool) arr_1 [(unsigned short)7] [i_1]);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_13 = ((/* implicit */_Bool) arr_1 [i_2] [(signed char)13]);
        arr_11 [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_2 [i_2])), (0ULL)));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_2 [i_2]))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        var_15 *= ((/* implicit */int) ((0ULL) < (((/* implicit */unsigned long long int) arr_12 [i_3 - 1]))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) - (((/* implicit */int) (_Bool)0)))))));
        arr_14 [i_3 - 1] = ((/* implicit */unsigned char) arr_3 [i_3 - 1]);
    }
    /* LoopSeq 2 */
    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) arr_3 [i_4])) ? (arr_3 [i_4]) : (arr_3 [i_4]))));
        var_18 = ((/* implicit */_Bool) min((max((arr_3 [i_4]), (arr_3 [i_4]))), (arr_3 [i_4])));
    }
    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 4) /* same iter space */
    {
        arr_21 [i_5] = ((/* implicit */int) arr_19 [i_5]);
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-(arr_16 [i_5]))))));
    }
    var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (min((((var_4) / (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) ((signed char) var_7))))))))));
    var_21 = ((/* implicit */long long int) ((2866138189U) | (((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_4))))))));
    var_22 += ((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_3))) ^ (((/* implicit */int) ((unsigned char) var_3))))))));
}
