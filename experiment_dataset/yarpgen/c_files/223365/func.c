/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223365
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) max((((/* implicit */long long int) (-(max((((/* implicit */unsigned int) var_10)), (3318460007U)))))), (min((((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (short)10851)))))))));
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (((+(((/* implicit */int) var_2)))) < (((((/* implicit */int) var_4)) * (((/* implicit */int) var_12)))))))) : (4142976382U)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0 + 1]))))) / (((((/* implicit */_Bool) ((arr_2 [i_1]) << (((((/* implicit */int) (unsigned short)46495)) - (46482)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1 + 1]))) : ((~(5483284927644232993LL))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (unsigned char)237)) ? (arr_13 [i_0 + 1] [(signed char)4] [i_2] [i_2 - 2] [i_1] [(unsigned short)6]) : (-353703474))) + (2147483647))) << (((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)46480))) & (arr_11 [i_0] [i_1] [0ULL] [i_2 + 1] [i_4]))) - (37888ULL)))));
                                var_18 = ((/* implicit */unsigned short) max((var_1), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_1 + 1] [i_2] [i_0 + 1])) || (((/* implicit */_Bool) arr_8 [i_2 + 1] [i_1 - 1] [i_4] [i_0 + 1])))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
