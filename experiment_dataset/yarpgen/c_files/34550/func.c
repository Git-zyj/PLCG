/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34550
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
    var_17 = ((/* implicit */unsigned int) var_5);
    var_18 = ((/* implicit */unsigned long long int) ((var_11) - (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_16))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */int) arr_2 [i_0]);
        var_20 = ((/* implicit */unsigned long long int) 370836466);
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) 65011712)))));
        arr_5 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 3; i_1 < 10; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((min((-18868323), (((int) (short)-12220)))), (((((((/* implicit */int) min((var_13), (arr_7 [i_1])))) + (2147483647))) >> (((((/* implicit */int) var_0)) - (461)))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) (unsigned char)0)), (arr_2 [i_1]))), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)12219)))), (((/* implicit */int) (short)-12220)))))));
                    arr_14 [i_1 + 2] [i_1] [i_1 + 2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_12 [i_1]))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1])) ? (((arr_2 [i_1]) >> (((((/* implicit */int) arr_11 [i_1 - 1] [i_1] [i_1 + 2])) - (33995))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [(short)7]))))), (min((((((/* implicit */unsigned long long int) arr_0 [i_1])) & (arr_2 [i_1]))), (min((((/* implicit */unsigned long long int) arr_9 [i_1])), (9078035400683400016ULL)))))));
    }
}
