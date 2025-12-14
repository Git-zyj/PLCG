/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195808
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        for (unsigned int i_1 = 3; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */signed char) arr_0 [i_0]);
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) var_5)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) var_7)))) : (((/* implicit */int) arr_1 [i_1 + 1]))))) ? (((/* implicit */unsigned int) ((arr_6 [i_0 + 1] [i_1 - 2] [(unsigned short)7] [i_2]) ? (((/* implicit */int) arr_6 [i_0 + 2] [i_1 + 3] [i_2] [i_1 - 3])) : (((/* implicit */int) arr_6 [i_0] [i_0 + 2] [i_0 + 2] [i_0 + 1]))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((((_Bool)1) ? (arr_2 [i_0 - 1]) : (524287U)))))));
                    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((72057594037927935ULL), (((/* implicit */unsigned long long int) arr_1 [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_0] [i_1 - 3] [i_2] [i_2]) != (((/* implicit */unsigned int) var_5)))))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_6)) : (var_10))))) != (((/* implicit */long long int) min((arr_5 [i_1] [i_1] [i_1 - 3] [i_1 - 3]), (((/* implicit */unsigned int) arr_3 [i_1] [i_1] [i_1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned int) min((((var_11) ? ((~(8163136636405368602ULL))) : (min((var_0), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) var_8))));
    var_17 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (unsigned char)130)))) : (((/* implicit */int) var_9))));
}
