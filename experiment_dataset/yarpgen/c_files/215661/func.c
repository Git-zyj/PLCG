/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215661
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215661 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215661
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (short)11177)) : (((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_8 [8] [i_1] [i_0])), (arr_4 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_7 [i_1] [i_2]), (arr_7 [i_2] [i_2]))))) : (((((/* implicit */_Bool) var_1)) ? (arr_9 [i_1]) : (arr_6 [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                    arr_11 [i_0] [i_2] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) * (((/* implicit */int) arr_2 [i_2] [i_0]))))) / (((((/* implicit */unsigned long long int) var_10)) / (arr_6 [i_2]))))) / (((/* implicit */unsigned long long int) (-(((arr_4 [i_0] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))))))));
                    arr_12 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~((~(var_3)))))) >= (arr_6 [i_1])));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (((/* implicit */int) var_5)))) + (((/* implicit */int) var_7))))) + (var_4)));
    /* LoopSeq 1 */
    for (short i_3 = 2; i_3 < 10; i_3 += 3) 
    {
        var_14 = ((/* implicit */long long int) arr_3 [8] [8]);
        var_15 = ((/* implicit */unsigned short) ((((((unsigned long long int) arr_5 [i_3 - 1])) >> (((var_6) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3 + 2] [i_3 + 2]))))))) - (((/* implicit */unsigned long long int) var_6))));
    }
    var_16 = ((/* implicit */unsigned short) (+(var_6)));
}
