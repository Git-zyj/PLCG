/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200947
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
    var_10 *= ((/* implicit */short) (unsigned short)3516);
    var_11 = ((/* implicit */short) var_3);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (_Bool)1);
        var_12 = ((/* implicit */int) var_6);
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) (short)31395)) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-31395)))))));
        var_13 = ((/* implicit */int) max((var_13), (((arr_0 [i_1]) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) && (arr_0 [i_1 + 1]))))))));
    }
    var_14 = ((((/* implicit */int) (unsigned char)226)) << (((((((var_4) & (((/* implicit */long long int) ((/* implicit */int) var_3))))) + (6897044985264930838LL))) - (7LL))));
}
