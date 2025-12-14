/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240373
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
    var_13 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-13755)) ? (((((/* implicit */int) (short)13780)) * (((/* implicit */int) var_9)))) : ((~(((/* implicit */int) (short)13754))))))) ? (max((((/* implicit */unsigned int) (unsigned short)26100)), (var_12))) : (min((max((((/* implicit */unsigned int) var_0)), (var_1))), (((/* implicit */unsigned int) var_11)))));
    var_14 = ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_12 [i_2] [(signed char)13] = ((/* implicit */_Bool) (~(1000977129)));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) 1000977142)) <= (max((min((var_2), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_3)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) max((min((arr_2 [i_1] [i_2]), (((/* implicit */long long int) arr_3 [i_0])))), (((/* implicit */long long int) ((var_2) + (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0]))))))))) ? (((((/* implicit */_Bool) arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) (unsigned char)33)));
                }
            } 
        } 
    } 
}
