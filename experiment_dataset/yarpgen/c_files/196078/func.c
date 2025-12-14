/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196078
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 3) 
    {
        var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [0])) || (((/* implicit */_Bool) arr_2 [i_0])))))));
        var_15 = ((/* implicit */unsigned int) (+(((int) arr_3 [i_0] [i_0]))));
    }
    for (signed char i_1 = 2; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((long long int) arr_5 [i_1 + 1])) / (var_2))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) var_9));
    }
    for (signed char i_2 = 2; i_2 < 22; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_6 [i_2 + 1])))) & (((((/* implicit */_Bool) 18091980212685225308ULL)) ? (16273563166620637359ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54545)))))));
        arr_12 [i_2] [i_2] = ((/* implicit */signed char) (~(((/* implicit */int) max(((signed char)61), (arr_8 [i_2 + 2]))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2 - 2]))))))))));
    }
    for (signed char i_3 = 2; i_3 < 22; i_3 += 2) /* same iter space */
    {
        arr_17 [i_3] [i_3] = ((/* implicit */int) ((18446744073709551594ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */int) (short)15104)), (var_8))) < (((/* implicit */int) (unsigned short)31582))))))));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((((arr_6 [i_3]) && ((_Bool)1))) && (((/* implicit */_Bool) arr_5 [i_3 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) arr_9 [i_3 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_3]))) : (var_2))))))));
    }
    var_19 = ((/* implicit */unsigned short) ((unsigned int) (signed char)-110));
}
