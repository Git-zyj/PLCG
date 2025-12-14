/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47085
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
    for (long long int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((/* implicit */_Bool) max(((short)-10122), (((/* implicit */short) var_0))));
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) max((((((/* implicit */long long int) ((/* implicit */int) (short)18370))) / (3903068003557587126LL))), (((/* implicit */long long int) var_1)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned char i_3 = 1; i_3 < 11; i_3 += 1) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_6 [i_3 + 3] [i_3])) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_6 [i_3 + 2] [i_2]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_6)), (var_7)))))), (((((/* implicit */unsigned long long int) max((arr_7 [13LL] [13LL]), (((/* implicit */long long int) arr_12 [i_2]))))) & (arr_11 [i_3] [i_3 - 1] [i_3])))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
                {
                    arr_17 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (((-(((/* implicit */int) (unsigned char)83)))) / (((/* implicit */int) ((unsigned char) arr_11 [i_3] [i_4] [i_4])))));
                    var_15 = (+(arr_6 [i_3 - 1] [i_3 + 3]));
                    arr_18 [i_2] &= ((/* implicit */short) ((long long int) arr_7 [i_2] [i_3]));
                }
            }
        } 
    } 
}
