/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42060
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42060 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42060
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] &= ((/* implicit */_Bool) arr_2 [(short)6]);
                var_12 = (-(max((arr_3 [i_0] [i_0 - 1]), (((/* implicit */int) var_2)))));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) var_0);
    /* LoopNest 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_2] [12U] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_3] [i_2]))) : (arr_7 [(_Bool)1]))) != (((/* implicit */unsigned long long int) arr_9 [i_4] [i_2])))))) <= (((((/* implicit */_Bool) arr_7 [i_3])) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_5 [i_2]))) : (((/* implicit */unsigned long long int) ((int) arr_10 [i_2] [(unsigned char)19])))))));
                    arr_14 [i_2] [i_2] [i_4] [i_4] = ((/* implicit */short) (((-(max((((/* implicit */unsigned long long int) (short)12639)), (arr_7 [(unsigned short)17]))))) < (((/* implicit */unsigned long long int) var_5))));
                    arr_15 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_2])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_9 [i_2] [i_2]))))))));
                }
            } 
        } 
    } 
    var_14 ^= ((/* implicit */int) var_4);
}
