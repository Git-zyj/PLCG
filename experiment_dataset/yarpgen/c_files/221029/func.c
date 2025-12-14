/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221029
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
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [8] [i_1] = var_2;
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                var_10 = ((/* implicit */int) var_8);
                var_11 = ((/* implicit */unsigned char) var_8);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = max((((/* implicit */int) var_6)), (arr_4 [i_0] [i_0] [i_0]));
                                var_12 = ((/* implicit */_Bool) arr_12 [0ULL] [i_1] [0ULL] [i_1] [i_4]);
                                var_13 = ((/* implicit */int) var_6);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) var_0);
    var_15 = ((/* implicit */unsigned short) min((var_4), (((/* implicit */int) max((((/* implicit */unsigned short) var_5)), (var_7))))));
    var_16 -= var_2;
}
