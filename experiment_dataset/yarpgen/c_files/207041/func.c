/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207041
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
    var_12 |= ((/* implicit */unsigned long long int) ((_Bool) max((max((((/* implicit */int) (_Bool)1)), (var_3))), (((/* implicit */int) var_4)))));
    var_13 = max((((/* implicit */unsigned int) max((((/* implicit */short) var_0)), ((short)10303)))), (max((min((var_5), (((/* implicit */unsigned int) var_0)))), (((/* implicit */unsigned int) var_9)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_1] [i_2 + 1] [i_2 + 1]);
                            arr_13 [i_0] [i_0] [i_0 + 2] [i_0 + 2] [i_0] [(signed char)13] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 2])) ? (var_10) : (((/* implicit */int) min(((short)-17400), (((/* implicit */short) var_6)))))))));
                            arr_14 [i_0 + 1] [i_0 + 1] [i_2] [i_2] = ((/* implicit */long long int) ((unsigned char) (unsigned char)35));
                            arr_15 [i_0] [i_1] [i_2 + 1] [i_3] = ((/* implicit */_Bool) arr_9 [i_0 - 2] [i_1] [9U] [i_3]);
                        }
                    } 
                } 
                arr_16 [i_0 + 1] = ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) == (((min((arr_1 [i_0]), (arr_1 [i_1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0 + 1]))))));
                arr_17 [i_0] [i_1] = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_1] [i_1]);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((var_8) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))), (var_5))) << (((((/* implicit */int) var_11)) - (55)))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned int) (short)-17391)), (1820357088U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_6)) - (((/* implicit */int) (short)17400)))))))));
}
