/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212942
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
    var_10 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 22; i_3 += 2) 
                    {
                        for (signed char i_4 = 3; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_11 = ((/* implicit */_Bool) max((var_11), (((((/* implicit */unsigned int) ((((4095) >> (((((/* implicit */int) var_4)) - (30569))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (var_3))))))) < (var_9)))));
                                arr_14 [i_4] [i_1 - 1] [i_2] [i_4] [(short)1] [i_1 - 1] [(short)1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) - (((((/* implicit */unsigned long long int) var_0)) ^ (var_3)))));
                                var_12 = ((/* implicit */signed char) var_4);
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) var_2)) > (((((/* implicit */int) var_6)) - (((/* implicit */int) (_Bool)1))))))) - (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) <= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) != (var_3))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (_Bool)1))));
    var_16 = ((/* implicit */unsigned char) var_5);
}
