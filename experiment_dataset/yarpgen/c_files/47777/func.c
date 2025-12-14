/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47777
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
    var_12 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)45))));
    var_13 ^= ((/* implicit */int) (-(var_8)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */short) max(((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)16063))))))), (((/* implicit */int) ((short) arr_9 [i_0 + 1] [i_1] [i_2])))));
                    arr_10 [i_2] = ((/* implicit */unsigned char) (-((-(1590226842U)))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned long long int) (-((-(arr_3 [i_0 + 1] [i_0 - 1])))));
                                arr_18 [i_0] [i_0] [i_3] [i_0 + 1] [i_0] [i_0] [i_0 - 1] |= ((/* implicit */unsigned int) ((_Bool) (_Bool)1));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
