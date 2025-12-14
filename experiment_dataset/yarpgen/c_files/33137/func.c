/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33137
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
    var_13 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((1432175243U) << (((((/* implicit */int) (unsigned char)91)) - (69)))))) ? (((unsigned long long int) var_6)) : (min((var_5), (((/* implicit */unsigned long long int) (signed char)-127))))))));
    var_14 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (min((((/* implicit */unsigned long long int) var_9)), (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((arr_0 [i_0 - 1] [i_0]) == (((arr_1 [i_0]) / (648038584U)))));
        var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((648038584U) & (3646928728U))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) arr_4 [i_1 + 2]))));
        var_17 = ((/* implicit */signed char) (unsigned short)55582);
    }
    for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) arr_4 [i_2 - 2]))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (max(((+((~(1916299681U))))), ((~(3646928703U)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_20 = (unsigned char)214;
        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_3] [i_3])) % (((/* implicit */int) arr_9 [i_3] [i_3])))))));
    }
}
