/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19789
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
    var_15 = ((/* implicit */_Bool) 2349122932U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_2] [(unsigned char)18] [i_2] [i_0] = var_14;
                                arr_16 [i_0] [i_0] [i_2] [i_3] [(signed char)18] &= ((/* implicit */int) ((unsigned long long int) ((var_4) ? (((/* implicit */int) arr_3 [i_4 - 1] [i_4 - 1])) : (((/* implicit */int) arr_6 [i_2] [i_3] [i_4 + 1] [i_4])))));
                            }
                        } 
                    } 
                } 
                arr_17 [3ULL] [3ULL] = ((/* implicit */unsigned int) ((short) max(((+(((/* implicit */int) var_2)))), (((((/* implicit */int) (unsigned char)234)) ^ (((/* implicit */int) var_7)))))));
            }
        } 
    } 
}
