/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247644
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
    var_15 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (short)32767)), (((((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_14))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) var_10))))))))));
    var_16 = ((/* implicit */unsigned int) (~(var_3)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)0), (arr_1 [(short)9]))))) : (arr_0 [i_0 + 2] [i_0 + 2])))));
        arr_3 [2] &= ((/* implicit */int) (((!(((/* implicit */_Bool) arr_0 [12LL] [i_0])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)12), ((unsigned char)253))))) % ((~(var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1])))));
        arr_4 [i_0] = ((/* implicit */short) min(((!(((/* implicit */_Bool) min((arr_1 [i_0]), ((unsigned char)19)))))), (((arr_0 [i_0 + 3] [i_0 + 3]) >= (arr_0 [i_0 + 3] [i_0 + 3])))));
    }
}
