/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48255
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    arr_7 [i_0] = ((/* implicit */unsigned long long int) (unsigned char)134);
                    arr_8 [i_0] [0ULL] [i_2] = ((signed char) arr_4 [i_2 + 1] [i_2 - 1]);
                    var_13 = ((/* implicit */unsigned char) (-(var_7)));
                }
                arr_9 [i_0] = ((/* implicit */short) ((unsigned int) ((((/* implicit */int) (unsigned char)144)) >> (((((/* implicit */int) (unsigned char)121)) - (92))))));
                arr_10 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)126)), (((((/* implicit */_Bool) (short)32512)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)32512))))));
                arr_11 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (short)-6789);
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_6);
    var_15 = ((/* implicit */int) (unsigned char)149);
}
