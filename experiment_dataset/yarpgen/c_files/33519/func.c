/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33519
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
    var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) var_2)))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        var_19 |= ((/* implicit */short) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)7936))))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_2 [i_0])))));
        var_20 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0]))))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (557017580657031049ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_1 [i_0])), (var_9))))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) max((var_16), (((((/* implicit */_Bool) 17889726493052520567ULL)) ? (((/* implicit */unsigned long long int) -2147483645)) : (557017580657031062ULL)))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) 557017580657031049ULL);
    }
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) var_3)))))));
        arr_10 [i_1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) min((arr_7 [i_1 - 1]), (arr_7 [i_1 - 1])))), (((((/* implicit */_Bool) (unsigned char)246)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1])))))));
    }
    var_22 = ((/* implicit */short) (-(var_7)));
    var_23 = ((/* implicit */unsigned char) var_7);
    var_24 = ((/* implicit */unsigned short) var_8);
}
