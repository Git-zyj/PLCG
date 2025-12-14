/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208787
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
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */int) (((-(((((-1) + (2147483647))) >> (25))))) < ((-(((/* implicit */int) arr_5 [i_1] [i_0]))))));
                    var_15 = ((((/* implicit */_Bool) (~(min((var_11), (((/* implicit */unsigned long long int) (unsigned char)155))))))) ? ((~(((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0] [4U])) ? (((/* implicit */int) (unsigned char)22)) : (-31))))) : ((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_3 [i_2])) : (((/* implicit */int) (short)-26631)))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned short) var_5);
}
