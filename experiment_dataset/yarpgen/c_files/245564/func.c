/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245564
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
    for (long long int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                arr_7 [(short)16] [(signed char)8] [i_1] &= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2897971151384698863LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0] [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned char)240)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) 3235323770U)) : (arr_1 [i_1 + 1] [i_0 - 1])))));
                var_15 = ((/* implicit */int) ((signed char) var_11));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_16 ^= ((/* implicit */short) (+(((((/* implicit */_Bool) 536866816)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))) : (((((/* implicit */_Bool) (unsigned short)41672)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (7LL)))))));
                            var_17 = ((/* implicit */_Bool) arr_0 [i_0]);
                            var_18 = ((long long int) (short)-30652);
                        }
                    } 
                } 
                arr_14 [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((unsigned long long int) (short)9478)));
            }
        } 
    } 
    var_19 = ((/* implicit */short) (!(((_Bool) var_6))));
}
