/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219654
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
    var_13 = ((1219578962U) << (((851602179) - (851602166))));
    var_14 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) var_9)), (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_5)) : (var_8))) | (((/* implicit */unsigned int) var_4))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        var_15 = ((((((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)57054)) - (-851602179)))) : (var_6))) > (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (arr_1 [i_0 + 2]))));
        arr_2 [(unsigned char)0] [(unsigned short)6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) >= (arr_1 [i_0]))) ? (((/* implicit */int) min((var_9), (((/* implicit */short) var_7))))) : (((/* implicit */int) (unsigned short)56451))))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 3]))) % (arr_1 [i_0 - 2])))));
        arr_3 [i_0] [i_0] &= ((/* implicit */signed char) (short)13640);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_16 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_1 [i_0 + 3]) : (arr_1 [i_0 + 2]))) % (((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [i_1]) : (arr_1 [i_0 + 4])))));
                    var_17 = ((/* implicit */unsigned char) arr_5 [i_0]);
                    arr_8 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) var_2))) == (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)17713)) >> (((var_8) - (3710001910U)))))) : (max((((/* implicit */unsigned long long int) arr_0 [i_0])), (var_0)))))));
                }
            } 
        } 
    }
}
