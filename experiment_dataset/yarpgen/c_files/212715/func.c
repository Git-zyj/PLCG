/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212715
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
    var_12 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            for (unsigned short i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    var_13 += ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_1)) * (6803518296755478201ULL)));
                    var_14 = ((var_7) >> (((((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_2 + 1])) * (var_0))) - (18323650397475290412ULL))));
                    var_15 |= arr_0 [i_0];
                    var_16 = var_9;
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) << (((/* implicit */int) var_11))));
    }
    var_17 = ((/* implicit */unsigned short) var_11);
}
