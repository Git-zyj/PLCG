/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218965
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
    for (signed char i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((max(((~(arr_1 [i_0] [i_0]))), (((/* implicit */long long int) var_9)))) / (min((((long long int) arr_1 [i_0] [(unsigned char)1])), ((~(var_0))))))))));
        var_18 = ((max((arr_1 [i_0 - 3] [i_0]), (arr_1 [i_0 - 1] [i_0]))) & (min((((/* implicit */long long int) var_15)), (var_0))));
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned char) (~(((var_10) / (var_0)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((2692913690959314230LL) & ((~(arr_1 [i_1] [i_1]))))))));
        arr_5 [i_1] = ((signed char) ((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
        var_21 = ((/* implicit */long long int) max((((((/* implicit */int) arr_4 [i_1] [i_1])) ^ (((/* implicit */int) arr_4 [i_1] [i_1])))), (min((((/* implicit */int) (unsigned char)254)), ((~(((/* implicit */int) (signed char)126))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) var_3))));
    }
    var_22 = ((/* implicit */signed char) (~(((/* implicit */int) var_7))));
    var_23 = ((/* implicit */unsigned char) ((signed char) (((~(((/* implicit */int) var_4)))) ^ (((var_9) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (unsigned char)1)))))));
    var_24 *= ((/* implicit */_Bool) ((((max((((/* implicit */long long int) (signed char)-84)), (5229274121640071120LL))) / (var_0))) * (((long long int) ((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13)))))));
}
