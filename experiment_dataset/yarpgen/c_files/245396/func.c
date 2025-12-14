/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245396
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
    for (signed char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((1251052012U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) & (((/* implicit */unsigned int) arr_0 [i_0 - 2]))))) & (((arr_2 [i_0]) & (arr_2 [i_0])))));
        var_12 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned char)251))));
        var_13 -= (((!(((/* implicit */_Bool) arr_3 [i_0 - 2])))) ? (max((((((/* implicit */unsigned int) var_1)) % (4294967295U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0 + 2])) : (var_1)))))) : (((/* implicit */unsigned int) max((arr_0 [i_0 + 1]), (((/* implicit */int) arr_1 [i_0 + 1]))))));
        var_14 = ((/* implicit */signed char) arr_2 [i_0]);
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) ? (max((((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_5))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 + 1]))))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) var_0)) & (1U))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) (~(((int) var_9))));
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) -6628093705981556454LL))));
        var_18 = ((/* implicit */unsigned long long int) ((arr_5 [i_1]) + (((/* implicit */long long int) arr_4 [i_1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) 4294967295U);
    }
    var_19 = ((/* implicit */unsigned int) var_4);
    var_20 |= ((/* implicit */int) ((((/* implicit */_Bool) 1251052012U)) ? (((/* implicit */unsigned long long int) max((max((((/* implicit */long long int) var_0)), (-6628093705981556454LL))), (((/* implicit */long long int) var_9))))) : ((-(var_5)))));
}
