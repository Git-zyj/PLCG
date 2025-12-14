/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208055
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */long long int) (unsigned short)0);
                var_17 -= ((/* implicit */unsigned int) var_6);
                /* LoopNest 3 */
                for (signed char i_2 = 4; i_2 < 15; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 13; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_11 [i_0]))));
                                var_18 = ((/* implicit */unsigned short) ((((unsigned int) arr_9 [i_4 + 3] [i_4 + 2] [i_4] [i_4 - 1] [i_4 + 1] [i_4])) * (((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_4 + 3] [i_4 + 2] [i_4 + 3] [i_4] [i_4 - 1] [i_4])) * (((/* implicit */int) arr_13 [i_4 + 3] [i_0] [i_4] [i_4 + 1] [i_4] [i_4] [i_4 + 3])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = var_8;
}
