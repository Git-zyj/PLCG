/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211926
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
    var_17 = ((/* implicit */int) min((((/* implicit */long long int) var_16)), (max((min((-2116664199883373811LL), (2116664199883373811LL))), (max((((/* implicit */long long int) var_8)), (2116664199883373812LL)))))));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_0]))))), ((-(max((((/* implicit */long long int) (unsigned short)49743)), (4194303LL)))))));
        var_19 = ((/* implicit */short) -5877194352783330447LL);
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) var_3);
        var_20 = ((/* implicit */_Bool) min((var_20), (((min((((/* implicit */int) arr_1 [(short)12])), (arr_2 [2LL]))) >= (var_13)))));
        var_21 = ((/* implicit */_Bool) arr_4 [(unsigned short)13] [i_1]);
    }
}
