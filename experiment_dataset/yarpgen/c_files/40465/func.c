/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40465
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
    var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) max((((/* implicit */long long int) (~((+(((/* implicit */int) var_5))))))), ((-(-2491606486572104353LL))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_0]);
                    arr_8 [i_0] [i_1] [i_1] [(short)12] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) (short)-3034)) + (3042)))))) ? (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))), ((+(arr_4 [i_0] [i_0]))))) : (min((max((var_6), (((/* implicit */unsigned long long int) arr_0 [10U])))), (((/* implicit */unsigned long long int) var_2))))));
                }
            } 
        } 
    } 
}
