/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247676
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_5 [i_2 - 2] [i_2 + 1] [i_2 - 1]) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44656)))))) ? (((/* implicit */int) min(((unsigned short)20880), ((unsigned short)44659)))) : (((524032) & ((-2147483647 - 1))))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) max((arr_2 [i_2 + 2]), (arr_2 [i_2 - 2])))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((var_6) + (((var_2) ^ (-1835138043))))) : (((var_8) * (((/* implicit */int) ((var_6) != (((/* implicit */int) (unsigned short)20737)))))))));
}
