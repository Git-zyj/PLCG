/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24153
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_12 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) ((var_4) > (arr_0 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_3))));
        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (-(min(((~(var_7))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_8)) : (var_4))))))))));
        arr_3 [(short)0] [i_0] |= ((unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)7405)) : (arr_1 [i_0])));
    }
    for (short i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_14 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
        var_15 = ((/* implicit */long long int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) var_1))));
    }
    for (short i_2 = 0; i_2 < 12; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((8505755684151734389ULL), (((/* implicit */unsigned long long int) -5453860515513001079LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25698)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_1)))) : (((arr_0 [i_2] [i_2]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
        var_16 |= var_0;
        var_17 = ((/* implicit */unsigned long long int) max((((511LL) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-23064))) : (var_0))))));
    }
    var_18 = (~(6473799757580859332LL));
    var_19 = var_5;
    var_20 |= ((/* implicit */long long int) var_3);
}
