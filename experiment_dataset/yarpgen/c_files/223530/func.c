/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223530
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
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 2; i_3 < 13; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_10 = ((/* implicit */short) min((var_10), (((/* implicit */short) (+(((/* implicit */int) arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])))))));
                                var_11 = ((/* implicit */_Bool) (unsigned char)255);
                            }
                        } 
                    } 
                } 
                arr_13 [3U] [i_1 + 1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (short)-12875)))) - (((/* implicit */int) ((_Bool) (short)12875)))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) (!(var_1)));
}
