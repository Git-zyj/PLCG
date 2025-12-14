/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21515
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
    for (short i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 21; i_4 += 4) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_3 [i_0] [(short)21]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))))))) ? (min((min((arr_9 [(unsigned char)5] [(unsigned char)5] [(unsigned short)20] [19]), (((/* implicit */long long int) 3784778017U)))), (((/* implicit */long long int) ((var_0) + (arr_8 [i_2])))))) : (var_3)));
                                var_15 = ((/* implicit */unsigned short) ((int) (+(min((((/* implicit */long long int) var_9)), (arr_0 [i_1]))))));
                                var_16 *= ((/* implicit */unsigned long long int) arr_4 [i_1 + 2] [(short)17] [(short)17]);
                            }
                        } 
                    } 
                } 
                arr_15 [(unsigned short)9] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (((-(arr_10 [i_0]))) + (((/* implicit */long long int) arr_8 [i_1]))))) ? (arr_13 [i_1 + 3] [i_1] [i_1] [(unsigned char)11] [i_1] [i_1 - 1]) : (((/* implicit */int) arr_2 [i_0] [9]))));
            }
        } 
    } 
    var_17 = ((/* implicit */short) ((min((((/* implicit */int) var_9)), ((+(((/* implicit */int) var_7)))))) >= ((+(((/* implicit */int) var_14))))));
}
