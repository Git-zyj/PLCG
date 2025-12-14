/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211864
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        {
                            arr_10 [i_1] = ((/* implicit */int) arr_3 [i_0]);
                            arr_11 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) max((min((((/* implicit */unsigned char) ((((/* implicit */int) var_7)) != (var_8)))), (arr_5 [i_1 - 1] [i_1 + 1] [i_1 + 1]))), (var_0)));
                            /* LoopSeq 1 */
                            for (signed char i_4 = 0; i_4 < 25; i_4 += 3) 
                            {
                                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) var_1))));
                                arr_15 [i_0] [i_1 - 1] [i_1] [i_3] [i_4] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2] [i_1 + 1]))) : (max((((/* implicit */long long int) var_9)), (var_6)))))));
                                var_11 = arr_5 [i_2] [i_3] [i_4];
                                arr_16 [i_1] [(signed char)18] [i_2 + 1] [i_0] [i_0] [i_1] = arr_8 [i_0] [i_2] [0LL] [i_1] [i_4] [i_0];
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        {
                            arr_23 [i_0] [i_0] [i_5] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (min((2246751907903906510ULL), (((((/* implicit */_Bool) var_1)) ? (arr_9 [i_0] [i_1 - 1] [i_5] [0]) : (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1 + 1] [i_5] [i_6]))))))));
                            var_12 = ((/* implicit */short) 9223372036854775807LL);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) (unsigned short)32083)) ? (15377548991550463414ULL) : (((/* implicit */unsigned long long int) -1668531734)))))) - (((/* implicit */unsigned long long int) ((long long int) (unsigned short)4551)))));
}
