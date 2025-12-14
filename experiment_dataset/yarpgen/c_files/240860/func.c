/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240860
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
    var_10 |= ((/* implicit */_Bool) (unsigned short)28672);
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 = (unsigned short)36848;
                    arr_8 [i_0 - 2] [i_0] = ((((/* implicit */int) (unsigned short)36864)) / (((/* implicit */int) (unsigned short)31744)));
                    var_12 = ((/* implicit */short) (unsigned short)36867);
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-2371))) * ((+(var_1)))));
}
