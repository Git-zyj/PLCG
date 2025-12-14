/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50117
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
    var_12 ^= ((/* implicit */unsigned short) max((-3228486187149293769LL), (((/* implicit */long long int) var_4))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned int i_1 = 4; i_1 < 24; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (arr_1 [i_1])))), (min((((/* implicit */unsigned long long int) arr_5 [i_1 - 2] [i_1] [i_1 + 1])), (min((4844246277821797169ULL), (((/* implicit */unsigned long long int) var_4))))))));
                arr_7 [i_0] [i_1 + 1] = arr_2 [i_1] [2LL] [2LL];
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (short i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_13 = -3228486187149293769LL;
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4 + 1] = ((/* implicit */int) (-(((long long int) arr_2 [i_1 + 1] [i_1 - 4] [i_4 + 2]))));
                                var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_10 [i_1] [i_1 + 1])))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_11 [7ULL])) & (arr_0 [i_1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_16 |= ((/* implicit */unsigned int) var_1);
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
