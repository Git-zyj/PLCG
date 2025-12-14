/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19414
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [13ULL] [i_2] [i_3] [i_2] = ((/* implicit */long long int) arr_11 [i_0] [i_2] [i_2] [i_2] [i_4]);
                                arr_16 [i_0] [i_1] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_13 [i_2] [i_1] [i_1] [(short)15] [i_1])), (min((((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_2] [i_0])) ? (4486053687753977194ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_2] [i_2]))))), (((/* implicit */unsigned long long int) 8997220730841771983LL))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) ((unsigned char) ((int) ((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (arr_12 [i_0] [(unsigned char)4] [i_0] [i_0] [i_0] [i_0] [18LL]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((long long int) (_Bool)1));
    var_20 = ((/* implicit */unsigned short) ((var_14) * (((/* implicit */int) (!(((/* implicit */_Bool) 800913881U)))))));
    var_21 ^= ((/* implicit */unsigned char) var_15);
}
