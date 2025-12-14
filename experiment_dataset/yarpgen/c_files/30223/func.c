/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30223
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
    var_15 = ((/* implicit */short) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? ((-((+(arr_1 [i_0]))))) : (((/* implicit */unsigned int) arr_0 [i_0])))))));
        var_17 = ((/* implicit */int) arr_1 [9]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */int) var_9);
        var_19 &= ((/* implicit */int) arr_1 [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned long long int) arr_2 [i_2]);
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_4 [i_2]))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_14))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                {
                    arr_13 [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [i_4]))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 3; i_5 < 22; i_5 += 1) 
                    {
                        for (int i_6 = 0; i_6 < 23; i_6 += 2) 
                        {
                            {
                                arr_19 [i_2] [i_3] [i_4] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) ((int) arr_5 [i_2]));
                                arr_20 [i_2] [6U] = ((/* implicit */unsigned short) (~(arr_1 [i_4])));
                                arr_21 [i_2] [i_3] [i_4] [i_4] [i_5 + 1] [i_5] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)94))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
