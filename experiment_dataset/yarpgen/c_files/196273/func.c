/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196273
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
    var_13 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-14270)) + (-693112754)))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) var_8)))))));
        arr_5 [i_0] [i_0] = arr_0 [i_0] [i_0];
        arr_6 [7] = ((/* implicit */long long int) (unsigned char)101);
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (short i_2 = 1; i_2 < 18; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
                        {
                            {
                                arr_19 [i_1] [i_2] [i_3] = ((/* implicit */unsigned char) var_5);
                                arr_20 [i_4] [i_4] [i_3] [i_4] [i_4] = ((/* implicit */_Bool) (((-(var_2))) + (((/* implicit */long long int) (+(((/* implicit */int) (short)14242)))))));
                            }
                        } 
                    } 
                    arr_21 [i_3] [i_2] [i_2] [9U] = ((/* implicit */_Bool) (short)-14270);
                }
            } 
        } 
        arr_22 [i_1] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) arr_11 [i_1])))));
    }
}
