/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191728
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((-1708821800) | (((/* implicit */int) var_11))))) | ((-(1008U)))))) ? (((var_12) & ((~(((/* implicit */int) var_11)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_6))))))))));
    var_15 = ((/* implicit */unsigned char) max((max((((/* implicit */long long int) (_Bool)1)), (max((((/* implicit */long long int) var_6)), (var_0))))), (((/* implicit */long long int) var_7))));
    var_16 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((((/* implicit */int) (short)-7250)) | (((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))) + (2147483647))) << (((((arr_3 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 1] [i_1]))) : (4285156709774562830LL))) - (1LL)))))) ? (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) 698146335)) : (18073751221955618054ULL))) << (max((-1LL), (((/* implicit */long long int) arr_2 [i_0] [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45239)))));
                    arr_9 [i_2] [i_1] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((arr_5 [i_0] [i_0]) ? (arr_7 [i_1]) : (((/* implicit */int) (_Bool)1))))))) ? ((-(((/* implicit */int) arr_2 [i_2 - 1] [i_1 - 1])))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_0])), (arr_6 [i_0] [i_0 - 1] [i_0] [i_0 - 1]))))));
                    var_17 = (~(((((/* implicit */int) arr_0 [i_0 - 1])) | (((/* implicit */int) arr_0 [i_0 - 1])))));
                }
            } 
        } 
    } 
}
