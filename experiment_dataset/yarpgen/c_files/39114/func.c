/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39114
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
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) (short)24946)) : (((/* implicit */int) (unsigned char)113)))) >= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_2))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32606)) ? (((/* implicit */int) (unsigned char)124)) : (((/* implicit */int) (short)-4159))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 19; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)124)) && (((/* implicit */_Bool) (unsigned char)251))));
                                arr_14 [(short)10] [i_1] [i_4] [i_3] [i_4] [i_0] = ((/* implicit */short) max((((/* implicit */int) arr_9 [(unsigned char)19] [i_0] [i_0] [i_2 + 1])), (((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1] [i_2 - 3])) ? (((/* implicit */int) arr_9 [i_2] [i_2] [i_2] [i_2 - 2])) : (((/* implicit */int) var_0))))));
                            }
                        } 
                    } 
                } 
                arr_15 [(short)18] [(short)17] [i_1] = ((/* implicit */short) arr_4 [i_0] [i_0]);
            }
        } 
    } 
}
