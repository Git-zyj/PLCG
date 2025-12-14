/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233613
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_10 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)27123)) < (arr_1 [i_0] [i_0])))) + ((+(((/* implicit */int) (short)-7117))))));
        var_11 -= ((((/* implicit */_Bool) arr_0 [i_0] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7117))) : (arr_0 [i_0] [i_0 - 1]));
    }
    var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((-5496374446597477822LL), (((/* implicit */long long int) (+(((/* implicit */int) var_0))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_6 [i_1] = ((arr_5 [i_1]) >> ((+(((/* implicit */int) (signed char)28)))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [17ULL] [6U]))));
        var_13 ^= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) 4177920U)) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) arr_4 [16LL]))))));
    }
}
