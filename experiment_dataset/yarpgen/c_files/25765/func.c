/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25765
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)30375))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))))) ? (((66977792) ^ (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */int) (short)-6158)))))) : (var_7)));
                    arr_9 [i_0] [(unsigned short)3] = ((((/* implicit */_Bool) 13443467197765227229ULL)) ? (8551764327120184074LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32240))));
                    arr_10 [3ULL] [i_1] [i_1] [i_1] = ((/* implicit */short) min((var_5), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52487))) & (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) arr_5 [i_0]))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)14866)) ? (((/* implicit */int) (unsigned short)7777)) : (((/* implicit */int) (unsigned short)14856))))) - (((var_3) + (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (var_8) : ((-((-(((/* implicit */int) var_2))))))));
    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) var_9))));
    var_16 = ((/* implicit */unsigned short) (((-(((/* implicit */int) var_2)))) - (((((/* implicit */int) (unsigned short)25269)) - (8126464)))));
}
