/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26425
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(short)11] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (signed char)46))) / (arr_3 [i_0])))) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192))) * (var_11))))) : (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14)))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_4 [i_0] [i_0])), (var_2)))) ? ((-(((unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32763)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (short)7290))))) || (((/* implicit */_Bool) min((((/* implicit */signed char) var_1)), (var_17))))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (max((((/* implicit */int) arr_1 [i_0] [i_1])), (var_4))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_7))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (62)))) ? (min((var_0), (0ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) << (((((/* implicit */int) var_15)) + (96)))))))) << ((((-(var_11))) - (3956970067U)))));
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_11)) > (min((((/* implicit */unsigned long long int) 62)), (min((((/* implicit */unsigned long long int) (short)-32759)), (var_0)))))));
}
