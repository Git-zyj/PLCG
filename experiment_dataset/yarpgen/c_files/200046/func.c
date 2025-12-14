/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200046
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_0 [i_0]))));
        arr_6 [i_0] = ((/* implicit */signed char) var_5);
        var_19 ^= ((/* implicit */short) ((2073403119749050452LL) + (((/* implicit */long long int) 4294967295U))));
        var_20 = ((/* implicit */_Bool) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    for (long long int i_1 = 2; i_1 < 7; i_1 += 3) 
    {
        var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-111)), (2669554333U)));
        var_22 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) var_3))) + (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_1]))))) ? (((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */unsigned long long int) var_10)) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) arr_8 [i_1 - 1])) : (((/* implicit */int) arr_9 [i_1])))))))));
        arr_11 [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_23 ^= ((signed char) ((signed char) (~(var_11))));
        var_24 = ((/* implicit */int) (-(((((/* implicit */_Bool) min((arr_3 [i_2]), (((/* implicit */unsigned long long int) arr_1 [i_2]))))) ? (arr_3 [9]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) / (arr_3 [i_2])))))));
        var_25 |= ((/* implicit */signed char) (+(((/* implicit */int) max((arr_0 [i_2]), (((/* implicit */signed char) ((-6458741793336077678LL) >= (((/* implicit */long long int) 1506576979U))))))))));
    }
    for (unsigned int i_3 = 3; i_3 < 19; i_3 += 3) 
    {
        arr_17 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(var_11)))))) && (((/* implicit */_Bool) var_10))));
        var_26 = min((((/* implicit */unsigned long long int) 11U)), (((((/* implicit */_Bool) 2669554333U)) ? (arr_14 [i_3 + 4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_0))));
    }
    var_28 = ((/* implicit */long long int) max((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_1))) + (((/* implicit */unsigned long long int) max((var_5), (var_16)))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (var_4) : (var_18))), (((((/* implicit */_Bool) var_6)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))))));
}
