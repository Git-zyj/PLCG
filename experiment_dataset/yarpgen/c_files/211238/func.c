/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211238
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211238 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211238
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) var_6);
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_0)))))))));
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) var_10))));
    }
    for (signed char i_1 = 2; i_1 < 8; i_1 += 4) 
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((339967967537176790LL), (((/* implicit */long long int) 3))))) ? (((/* implicit */unsigned long long int) ((int) 56413233U))) : (((unsigned long long int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_1 [i_1])))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_0 [i_1])), (arr_4 [i_1 + 2] [i_1 - 2])))) >= (arr_1 [i_1 + 2])))));
        var_14 |= ((/* implicit */short) 18446744073709551615ULL);
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_0);
    }
    var_15 = ((/* implicit */int) max((((/* implicit */long long int) var_8)), ((((!(((/* implicit */_Bool) var_6)))) ? (var_7) : (var_5)))));
    var_16 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((signed char) max((var_4), (((/* implicit */unsigned short) var_1))))))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) var_5))));
}
