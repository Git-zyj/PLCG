/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230653
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
    var_12 = ((/* implicit */short) ((unsigned int) var_11));
    var_13 = ((/* implicit */short) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            {
                arr_6 [i_0] [7ULL] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1 - 2]))) | (var_6)))));
                arr_7 [i_0] [i_0] [16] |= ((/* implicit */unsigned short) (+((~(((/* implicit */int) ((((/* implicit */int) (short)13603)) != (1985201546))))))));
                arr_8 [i_0] [i_1] = ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned int) (short)-9790)), (arr_4 [i_1 - 2] [i_1 - 2]))));
            }
        } 
    } 
    var_14 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)182))))), (var_1)));
    var_15 = ((var_2) | (((((/* implicit */_Bool) var_11)) ? ((+(var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))));
}
