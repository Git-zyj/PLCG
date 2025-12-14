/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224582
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 2; i_2 < 23; i_2 += 3) 
                {
                    for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) arr_7 [i_0] [i_0] [i_0] [(unsigned short)13] [i_0] [i_0]);
                                var_14 = ((/* implicit */unsigned long long int) var_5);
                            }
                        } 
                    } 
                } 
                var_15 ^= ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_12)))));
                var_16 += ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) var_2))), (max((arr_6 [i_0] [i_0] [i_1]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1])) || (((/* implicit */_Bool) var_11)))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) (unsigned char)14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_12)))) : (max((((/* implicit */unsigned int) (unsigned short)6026)), (var_11)))))) ? (var_2) : (((/* implicit */unsigned long long int) var_0)))))));
}
