/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220934
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
    var_11 = ((/* implicit */unsigned int) var_4);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [14ULL] [i_0] = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_3] [i_4]);
                                arr_16 [i_0] = ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_0] [i_3] [i_0]);
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) 65535);
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((arr_10 [i_0] [i_0] [i_0]), (((/* implicit */signed char) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            }
        } 
    } 
}
