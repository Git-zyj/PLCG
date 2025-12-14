/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221091
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
    var_18 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (-(var_2)))) || (((/* implicit */_Bool) ((var_12) >> (((/* implicit */int) var_4))))))));
    var_19 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_0 [i_0] [(signed char)4])), (((((((/* implicit */unsigned long long int) var_17)) * (var_13))) ^ (((/* implicit */unsigned long long int) var_0)))))))));
        var_21 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 137998576U)) ? (137998592U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8867)))))));
        var_22 -= ((/* implicit */_Bool) ((long long int) (((_Bool)1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) > (arr_0 [i_1] [2]))))));
        var_24 = ((/* implicit */unsigned char) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) <= (arr_3 [i_1])))));
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_3 [i_1]))) ? (var_12) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)8867))) - (arr_0 [i_1 - 1] [i_1])))));
    }
    var_26 = ((/* implicit */signed char) var_4);
    var_27 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))), (((((/* implicit */_Bool) (short)-8868)) ? (6457731770863374147ULL) : (((/* implicit */unsigned long long int) 2207130974U))))));
}
