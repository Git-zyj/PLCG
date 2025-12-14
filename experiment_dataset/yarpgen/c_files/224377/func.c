/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224377
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (var_3)))) ^ (((/* implicit */int) var_12))))) * (var_6)));
    var_18 = ((/* implicit */unsigned short) var_8);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_1]);
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_8 [i_0] [i_0] [(unsigned short)18] [(_Bool)1] = ((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_2]);
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) arr_3 [i_0]);
                    arr_10 [20LL] [i_1] [i_0] = ((/* implicit */int) arr_5 [i_0] [i_1] [i_2]);
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        arr_15 [i_1] [10U] = ((((((/* implicit */int) arr_0 [20LL])) >> (((((/* implicit */int) arr_3 [6LL])) - (12306))))) | (((/* implicit */int) arr_5 [i_3] [i_2] [i_0])));
                        arr_16 [i_0] [i_1] [i_2] [4] = ((/* implicit */unsigned char) arr_6 [i_0] [i_3]);
                    }
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_2)) + (106)))));
}
