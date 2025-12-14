/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43233
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
    var_14 = var_5;
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_15 = min((((/* implicit */unsigned long long int) ((arr_1 [i_0] [i_0 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [8] [i_0])) && (arr_0 [i_0 - 1])))))))), (9988575536807912389ULL));
        var_16 = ((/* implicit */short) (-((-(arr_1 [i_0 - 2] [i_0 - 1])))));
        arr_2 [(short)0] [(unsigned char)4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [i_0] [i_0 - 1])) && (((/* implicit */_Bool) (-(arr_1 [i_0] [i_0])))))) ? (((/* implicit */int) (signed char)-30)) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) < ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3750949040U))))))));
        var_17 += ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((short) -789819457)))));
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8726365749463700ULL)) ? (((/* implicit */int) arr_5 [6LL])) : (((/* implicit */int) (unsigned char)34))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-19))) == (var_7))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [8LL]))) - (5667476714706539575ULL))))))));
    }
}
