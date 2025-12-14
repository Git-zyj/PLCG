/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248837
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))) ? (2094089161) : (((/* implicit */int) (unsigned char)33))));
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)7541)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) arr_2 [i_0 + 1] [i_0] [i_0 + 1]))))) ? (((unsigned long long int) arr_2 [i_0 + 1] [i_0] [i_0 + 1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_2 [i_0 + 1] [i_0] [i_0 + 1]), (arr_2 [i_0 + 1] [i_0] [i_0 + 1])))))));
            var_16 |= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (short)25704)) ? (arr_0 [i_0]) : (arr_0 [i_0 + 1])))));
        }
        arr_6 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) * (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_0 [i_0])))) ? (arr_1 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
        arr_7 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)33))) : (72057576858058752LL))) - (((/* implicit */long long int) (((~(((/* implicit */int) (short)-22706)))) * (((/* implicit */int) (_Bool)1)))))));
    }
    var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) & (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32704)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (short)20726))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)20727))) : (var_14)))))));
    var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (short)25704)) == (((/* implicit */int) (short)-24))))) < (((/* implicit */int) var_8))));
}
