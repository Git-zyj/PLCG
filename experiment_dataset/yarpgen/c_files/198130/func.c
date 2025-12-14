/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198130
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
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */int) ((1U) >> (((min((arr_0 [i_0]), (((/* implicit */int) (signed char)126)))) - (101)))));
        var_19 ^= ((/* implicit */signed char) min((((arr_0 [i_0 + 1]) - (arr_0 [i_0 - 1]))), ((~(arr_0 [i_0 + 1])))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_20 = ((/* implicit */short) (~((-(((/* implicit */int) arr_3 [i_1] [i_1]))))));
        var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-100))))), (((int) arr_3 [i_1] [i_1]))))) == (((unsigned int) var_10))));
        arr_4 [i_1] = ((/* implicit */short) (signed char)-125);
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-73)) ? (6681925218507087903ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-6)))));
    }
    for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
    {
        var_23 = ((/* implicit */short) min(((+(arr_7 [i_2 + 2]))), (((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (arr_7 [i_2 + 2]) : (arr_7 [i_2 + 3])))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) min((min((2367520120U), (((/* implicit */unsigned int) arr_6 [i_2 + 3])))), (((((/* implicit */_Bool) min((var_14), (var_2)))) ? (127U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126)))))));
        arr_9 [i_2] = ((/* implicit */long long int) ((short) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967281U)) ? (((/* implicit */int) arr_1 [(unsigned short)0])) : (((/* implicit */int) arr_5 [i_2]))))), ((~(-2345594226938512215LL))))));
    }
    var_24 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */unsigned int) var_2)), (var_16))))) ? ((~(((/* implicit */int) ((11) >= (((/* implicit */int) (short)-9662))))))) : (((/* implicit */int) (short)-27226))));
    var_25 = ((/* implicit */long long int) min((((/* implicit */int) (signed char)-6)), (min((((/* implicit */int) ((((/* implicit */int) var_9)) < (((/* implicit */int) var_2))))), (((int) var_10))))));
}
