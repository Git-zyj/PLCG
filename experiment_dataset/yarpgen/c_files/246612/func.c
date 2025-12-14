/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246612
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
    var_10 ^= ((/* implicit */unsigned long long int) ((signed char) ((5776526969799865700ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 23; i_2 += 2) 
            {
                {
                    var_11 ^= (~(((((/* implicit */unsigned long long int) arr_7 [i_2 - 1] [i_1] [i_0])) + (((unsigned long long int) -1102680378)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_0] [i_0] [(_Bool)1] = ((/* implicit */short) ((((/* implicit */int) max((arr_9 [i_3] [i_3 - 1] [i_3]), (arr_9 [i_4] [i_3 + 3] [i_2 - 2])))) <= ((+(((/* implicit */int) (unsigned char)174))))));
                                var_12 = ((/* implicit */unsigned short) min((((/* implicit */long long int) arr_9 [(_Bool)1] [i_3] [i_0 + 2])), (min((((/* implicit */long long int) (_Bool)1)), ((+(-5941212360584732784LL)))))));
                            }
                        } 
                    } 
                    var_13 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) min((arr_5 [i_0 - 1] [i_0 + 2] [i_0 + 2]), (arr_5 [i_0 - 2] [i_0 - 2] [i_0 + 1])))), (((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 2])) + (((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]))))));
                }
            } 
        } 
    } 
}
