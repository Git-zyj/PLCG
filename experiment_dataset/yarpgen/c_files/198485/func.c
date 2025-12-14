/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198485
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
    var_13 = ((/* implicit */int) var_0);
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = var_8;
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_3] [i_2] [i_2] [i_0] = ((/* implicit */long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (arr_3 [i_3] [i_3] [4U]) : (arr_11 [i_4] [5] [i_4] [(short)13] [i_4] [i_4] [i_4]))) <= (((/* implicit */long long int) ((var_8) | (var_5))))))), ((-((-(var_8)))))));
                                arr_15 [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((var_9), (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (var_1)))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65521)) || (((/* implicit */_Bool) var_8)))))))));
                                arr_16 [5] [i_2] [i_2] = ((/* implicit */int) min((((((/* implicit */_Bool) max((((/* implicit */signed char) arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_1] [i_0])), (var_6)))) ? (((((/* implicit */_Bool) (unsigned char)159)) ? (((/* implicit */long long int) var_7)) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned char)184)))))))), (((/* implicit */long long int) ((unsigned int) var_3)))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (-((+(((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3] [i_1] [i_1] [i_0]))) + (var_4))))))))));
                            }
                        } 
                    } 
                    arr_17 [6] [i_1] [(_Bool)1] [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */signed char) var_1)), (var_12)))) : (var_9))) <= (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_5);
    var_17 = ((/* implicit */int) ((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
}
