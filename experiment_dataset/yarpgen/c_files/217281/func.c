/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217281
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
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) arr_0 [i_1]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                arr_13 [i_4] [i_1] [i_3] [i_0] [(unsigned char)1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
                                arr_14 [i_1] [4U] [i_2] [(unsigned char)8] [i_1] = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (var_6)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [11])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_3 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_1] [i_3])) ? (1559505310U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_4]))))))));
                                var_15 = ((/* implicit */int) min((var_15), ((~(((int) var_0))))));
                                arr_15 [i_4] [i_0] [i_0] [i_0] &= var_1;
                                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) (~(arr_6 [i_1] [i_1])))) : (((long long int) (~(((/* implicit */int) var_4))))))))));
                            }
                        } 
                    } 
                    arr_16 [i_1] = ((/* implicit */unsigned int) arr_10 [i_0] [i_1] [9U] [i_1] [i_1] [i_0] [i_1]);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (~(var_13))))));
    var_18 = ((/* implicit */int) max((((/* implicit */long long int) var_8)), (((((/* implicit */long long int) ((/* implicit */int) var_9))) | (max((var_11), (((/* implicit */long long int) 1920560856))))))));
    /* LoopNest 2 */
    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) arr_20 [i_5] [10]);
                var_20 -= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_19 [(short)2] [i_6 + 1] [i_6 + 1])))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) <= (var_6)))) : (((/* implicit */int) ((var_9) && (((/* implicit */_Bool) arr_20 [i_6] [i_6 + 1])))))));
                var_21 ^= ((/* implicit */unsigned char) (~(((max((var_3), (var_3))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_17 [3U])))));
            }
        } 
    } 
    var_22 = (-(((/* implicit */int) var_1)));
}
