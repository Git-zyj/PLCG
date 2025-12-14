/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211805
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
    var_19 ^= var_16;
    var_20 = ((/* implicit */unsigned int) (-(min((((/* implicit */long long int) ((unsigned char) var_2))), (((((/* implicit */_Bool) 13343245802776992280ULL)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                {
                    var_21 = arr_6 [i_2 + 2] [i_2 - 1] [i_2 - 2];
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_1] = ((/* implicit */_Bool) min((max((arr_6 [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1] [i_2 - 1]))), (((((/* implicit */_Bool) arr_6 [i_2 + 3] [i_0] [i_0])) ? (arr_6 [i_3] [i_3] [i_2]) : (arr_6 [i_3] [i_2 + 1] [i_0])))));
                        arr_10 [i_0] [i_1] [(short)7] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) ((var_5) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_0]))))))))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */int) var_18);
}
