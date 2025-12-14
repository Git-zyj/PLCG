/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54854
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
    for (long long int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0 + 1] [i_0 + 2])), (9223372036854775804LL)))) && (((/* implicit */_Bool) (+(arr_2 [i_0] [i_0 + 1]))))));
        var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) var_0))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned char) (-(arr_4 [i_1])));
        arr_6 [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) ((var_1) < (((/* implicit */int) var_7))))) & (((/* implicit */int) ((unsigned char) 4294967288U)))))) <= (((((unsigned int) var_2)) << (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_4)) : (15360))) - (53)))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2 + 2])) ? (arr_7 [i_2 - 1]) : (arr_7 [i_2 + 1])));
        arr_9 [i_2] = ((/* implicit */unsigned short) ((long long int) ((long long int) (unsigned short)24672)));
        arr_10 [0U] &= ((/* implicit */signed char) ((((/* implicit */_Bool) -4460586625378084104LL)) ? (-7849210566771259845LL) : (7849210566771259844LL)));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 19; i_3 += 4) 
    {
        arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775801LL)) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_3]))))) : ((+(var_9)))));
        arr_14 [i_3 + 1] = ((/* implicit */short) (+(arr_7 [i_3 - 1])));
    }
    var_13 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (1743791886U))), (((/* implicit */unsigned int) var_5)))) : (((/* implicit */unsigned int) min((var_1), ((+(((/* implicit */int) (unsigned short)16401)))))))));
}
