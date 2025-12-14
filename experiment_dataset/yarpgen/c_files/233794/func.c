/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233794
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233794 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233794
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (((-(-7342610488103222389LL))) & (((/* implicit */long long int) ((/* implicit */int) (short)-18023)))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((long long int) 4983067913716185584ULL)))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
    {
        var_11 = (+(10282997507133598360ULL));
        var_12 = ((/* implicit */unsigned int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1])))));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)77)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_7)))) && (((/* implicit */_Bool) var_0))));
        arr_9 [i_1] = ((/* implicit */signed char) (+(arr_6 [17ULL] [i_1])));
        arr_10 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    }
    for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        var_13 = ((/* implicit */long long int) arr_7 [i_2]);
        var_14 = var_3;
        arr_15 [i_2] = ((/* implicit */long long int) (((((-(((/* implicit */int) (short)18024)))) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_2] [i_2])) - (166)))));
    }
    var_15 = ((/* implicit */long long int) ((signed char) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)-21874)) : (((/* implicit */int) (short)-31546)))), (((((/* implicit */int) (short)18024)) / (((/* implicit */int) (short)-1)))))));
}
