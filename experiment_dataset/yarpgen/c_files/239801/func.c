/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239801
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
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned short i_2 = 3; i_2 < 9; i_2 += 3) 
            {
                {
                    var_10 = ((/* implicit */int) ((short) min((arr_2 [i_2 - 2] [i_2 + 3]), (((/* implicit */unsigned long long int) var_8)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) ((long long int) min((((/* implicit */unsigned long long int) var_8)), (arr_6 [i_2 + 2]))));
                                var_12 = ((/* implicit */unsigned char) arr_5 [i_2 + 2] [i_2 + 3]);
                                var_13 &= ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned long long int) (!((_Bool)1)))), (0ULL)))));
                            }
                        } 
                    } 
                    arr_12 [i_1] [(signed char)10] [i_2] [i_1] = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0]);
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((9645672559806640841ULL), (((/* implicit */unsigned long long int) -1017809555))));
}
