/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231623
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    var_10 *= ((/* implicit */unsigned int) ((int) min((((var_5) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) arr_1 [i_1] [i_0])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_7)), (arr_8 [i_0] [i_1] [i_2] [i_3 + 2] [i_4] [i_2])))), (((((/* implicit */_Bool) (signed char)-60)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 + 1] [i_1] [i_2] [i_3 + 1] [i_4])))))));
                                arr_14 [i_3] [i_3] [i_1] = (short)-30504;
                                arr_15 [i_0] [i_1] [i_1] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) max((var_7), (arr_2 [i_0] [i_1])))) + (2147483647))) >> (((((/* implicit */int) max(((short)19665), (arr_2 [i_0] [i_0])))) - (19662)))))) || (((/* implicit */_Bool) arr_3 [i_0]))));
                                var_12 &= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_3)), (7642236123063851314ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_0);
}
