/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2054
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
    var_16 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_13)), ((~(max((((/* implicit */long long int) var_15)), (6626460577211935124LL)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))) | (arr_1 [i_0]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 22; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_10 [15ULL] [i_0] [i_1 + 2] [i_1] [(unsigned char)11] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2 - 1] [i_1] [i_2] [i_3] [i_2])) ? (((/* implicit */unsigned long long int) arr_3 [i_0])) : (var_11)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1] [i_3] [i_2]))))) : (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_8 [i_0] [(_Bool)1] [i_2] [i_3 + 1] [i_3 - 1]))))));
                            arr_11 [i_3] [i_2] [(signed char)1] [i_0] = ((/* implicit */long long int) arr_8 [i_0] [(signed char)15] [i_1] [7] [i_3]);
                            arr_12 [i_0] [i_0] [i_0] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((signed char) arr_0 [(_Bool)1]));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) var_15);
}
