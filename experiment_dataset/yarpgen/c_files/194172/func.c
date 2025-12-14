/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194172
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
    var_20 = ((/* implicit */int) max((var_20), ((+((+(((/* implicit */int) var_0))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0 + 1] [i_0] = ((/* implicit */unsigned long long int) max((max((var_8), (((/* implicit */unsigned short) (unsigned char)16)))), (((/* implicit */unsigned short) ((short) arr_1 [i_0 + 1])))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 4; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_21 = min((((/* implicit */unsigned long long int) ((unsigned short) var_6))), (((unsigned long long int) arr_9 [i_0 - 1] [(signed char)2] [i_2] [i_0 - 1] [i_4 - 4] [18])));
                                var_22 = ((/* implicit */long long int) (+(var_19)));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
