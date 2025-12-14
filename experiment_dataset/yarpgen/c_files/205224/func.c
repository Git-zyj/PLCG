/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205224
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
    var_19 ^= ((/* implicit */unsigned long long int) ((_Bool) ((((1414623293) <= (((/* implicit */int) var_11)))) ? (((((/* implicit */_Bool) -1LL)) ? (var_9) : (1291972786550572992ULL))) : (max((var_0), (((/* implicit */unsigned long long int) var_11)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) var_9);
        var_20 = ((/* implicit */signed char) max((((/* implicit */long long int) (+(((/* implicit */int) ((arr_2 [i_0] [(unsigned short)7]) > (((/* implicit */long long int) ((/* implicit */int) var_3))))))))), (max(((-(arr_1 [i_0] [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)236)))))))));
        arr_4 [i_0] [(_Bool)1] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
        arr_5 [i_0] [(_Bool)0] &= ((/* implicit */long long int) max(((_Bool)1), ((_Bool)0)));
    }
    for (unsigned int i_1 = 2; i_1 < 13; i_1 += 3) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) (-(((((/* implicit */int) arr_0 [i_1] [i_1 + 1])) & ((~(((/* implicit */int) (_Bool)1))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (197919893U)))) ? (var_17) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 4097047403U)))))))));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)18050)) << (((((/* implicit */int) arr_0 [i_1] [i_1])) - (23985))))))));
        arr_10 [i_1] = ((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) (signed char)117))));
    }
    for (long long int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_23 -= ((/* implicit */long long int) 2147483647);
        arr_13 [i_2] = ((/* implicit */long long int) ((((((/* implicit */int) var_14)) + (2147483647))) >> (((/* implicit */int) min((arr_11 [i_2]), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25620))) != (0ULL)))))))));
    }
    var_24 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 4097047403U)) ? (((35184367894528ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))));
    var_25 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (~(2147483647)))) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) var_12)))) & (((/* implicit */int) (short)19580))));
}
