/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246013
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0]))));
                    arr_8 [i_2 - 1] [i_2] [i_2 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) & (((((/* implicit */int) (short)-24668)) ^ (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 22U)))) : (((min((-1554248699986079963LL), (((/* implicit */long long int) arr_3 [i_0])))) | (min((((/* implicit */long long int) var_5)), (-2672443876653137982LL)))))));
                    /* LoopSeq 2 */
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
                    {
                        arr_11 [i_3] [i_1 - 1] [i_2] [2U] = -7420452082882058340LL;
                        arr_12 [i_0] [i_1 - 1] [i_2] [i_3] = max((-4790484562327635152LL), (((((/* implicit */_Bool) arr_4 [i_0] [20LL])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)101)) - (((/* implicit */int) (short)4095))))))));
                        var_19 = ((/* implicit */unsigned char) ((max((7337064036255696030LL), (((/* implicit */long long int) 3893909862U)))) & (((((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_2]) / (((/* implicit */long long int) ((/* implicit */int) (short)18243)))))) ? (((long long int) (short)24663)) : (((((var_1) + (9223372036854775807LL))) << (((((/* implicit */int) (signed char)19)) - (19)))))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)24661)) << (((424771761U) - (424771756U)))));
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) 3125339158785007457LL))));
                    }
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) 3125339158785007470LL);
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2)))))));
}
