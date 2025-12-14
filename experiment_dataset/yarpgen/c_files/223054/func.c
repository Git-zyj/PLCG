/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223054
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) / (min((max((((/* implicit */unsigned int) var_6)), (var_7))), (var_13)))));
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) -7919419209978289467LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((var_7) / (var_0)))) : (((28ULL) / (5739322080966891418ULL))))));
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_8)), (2362493310U))), (2871345758U)))) / ((((!(((/* implicit */_Bool) 17062782154526648264ULL)))) ? (((/* implicit */unsigned long long int) max((8015803593637123569LL), (((/* implicit */long long int) (unsigned short)65535))))) : (arr_1 [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
    {
        var_19 = ((/* implicit */long long int) min((3284130762312110262ULL), (((/* implicit */unsigned long long int) (unsigned short)65530))));
        var_20 += ((/* implicit */signed char) min(((-(3242632723U))), (var_7)));
        var_21 = ((/* implicit */_Bool) min((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) + (arr_5 [(signed char)5]))) + (((/* implicit */unsigned long long int) arr_6 [i_1])))), (((/* implicit */unsigned long long int) 3512023272U))));
    }
    var_22 += ((/* implicit */signed char) ((((/* implicit */_Bool) -271868672193674325LL)) ? (((((/* implicit */_Bool) min((var_3), (((/* implicit */short) (signed char)(-127 - 1)))))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-6644)), (var_1)))))) : ((~(((((/* implicit */int) var_9)) / (((/* implicit */int) var_1))))))));
    var_23 = ((/* implicit */int) var_8);
}
