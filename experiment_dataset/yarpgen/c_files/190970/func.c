/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190970
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_6 [i_0] [(unsigned char)0] &= ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)12)) << (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)251)) || (((/* implicit */_Bool) arr_1 [i_0] [i_1]))))))) + (((((/* implicit */int) (unsigned char)15)) - (((/* implicit */int) arr_3 [i_0] [i_1]))))));
                /* LoopSeq 1 */
                for (int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    var_17 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned char)2))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_2 + 3] [i_2 + 3])) && (((/* implicit */_Bool) ((unsigned char) arr_5 [i_2 - 1] [i_2])))));
                }
                var_19 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0]))));
            }
        } 
    } 
    var_20 ^= ((/* implicit */unsigned char) var_16);
}
