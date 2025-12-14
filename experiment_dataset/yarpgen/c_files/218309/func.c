/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218309
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 22; i_2 += 3) 
                {
                    var_15 = ((unsigned int) ((arr_4 [i_2 + 1] [i_2 + 1] [i_2 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32006)) ? (((/* implicit */int) (unsigned short)32018)) : (((/* implicit */int) (unsigned char)247))));
                    arr_9 [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) ((((/* implicit */int) var_13)) != (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)32026)))))))));
                    arr_10 [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((int) var_10))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) > (arr_3 [i_1]))))) : (((arr_2 [i_0]) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) > (var_8))))));
                }
                /* LoopNest 3 */
                for (long long int i_3 = 0; i_3 < 23; i_3 += 1) 
                {
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 23; i_5 += 4) 
                        {
                            {
                                arr_20 [i_5] [i_5] [i_3] [i_4] [i_5] &= ((/* implicit */long long int) var_0);
                                var_16 = ((/* implicit */unsigned int) var_10);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = var_8;
}
