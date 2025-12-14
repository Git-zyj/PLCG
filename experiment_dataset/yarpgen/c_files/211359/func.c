/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211359
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
    var_19 = var_13;
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) min(((-(((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1]))))), (((/* implicit */int) arr_3 [(unsigned char)1] [i_1]))));
                arr_7 [i_1] = ((unsigned char) max((arr_3 [i_0] [i_0]), (arr_3 [i_1] [i_0])));
                /* LoopNest 3 */
                for (unsigned char i_2 = 3; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 3; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] = var_5;
                                arr_16 [i_0] [(unsigned char)7] [i_3] [i_2] [i_3] [(unsigned char)7] [i_4] = (unsigned char)223;
                                var_20 = arr_5 [i_2 - 3] [i_2 - 3] [i_2 - 2];
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
