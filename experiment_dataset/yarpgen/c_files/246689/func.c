/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246689
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
    var_13 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61128))) / (((unsigned int) var_12))))));
    var_14 = ((/* implicit */unsigned int) (-(((((/* implicit */int) ((-2098682559) == (((/* implicit */int) var_8))))) | (((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */int) (unsigned char)60)) : (2098682542)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_15 += ((/* implicit */short) (unsigned short)40040);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    var_16 *= ((/* implicit */short) (-(arr_0 [i_1 + 1] [i_0])));
                    var_17 = ((/* implicit */short) ((arr_6 [i_2] [i_1] [i_0] [i_0]) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (unsigned char)221))))));
                    var_18 = ((/* implicit */unsigned short) ((arr_4 [i_0] [(unsigned short)5]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_1 + 1] [i_0 + 1]))));
                    var_19 = var_9;
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    var_20 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */int) (((!((!(((/* implicit */_Bool) arr_15 [(unsigned short)6] [i_1] [i_3] [i_4] [i_5])))))) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) (unsigned short)65524)))), (((/* implicit */int) (!(((/* implicit */_Bool) 2098682559)))))))) : (((unsigned int) var_7))));
                                var_22 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */long long int) arr_9 [i_0] [i_0 - 1] [i_1 - 1])) : (var_7))), (((/* implicit */long long int) arr_9 [i_0 + 3] [i_0 + 4] [i_1 + 1]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_23 -= ((/* implicit */long long int) var_11);
}
