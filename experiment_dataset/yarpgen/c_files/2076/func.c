/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2076
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
    var_13 = ((/* implicit */long long int) ((signed char) var_6));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 23; i_4 += 1) 
                        {
                            {
                                var_14 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) < (((/* implicit */int) ((11607369537820540477ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)96))))))));
                                var_15 = ((/* implicit */long long int) var_1);
                                var_16 -= ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_7))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_1))));
                    arr_12 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((short) (((((-(9223372036854775807LL))) + (9223372036854775807LL))) >> (((var_2) + (6294797602780481414LL))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)18))) % (((unsigned int) var_6))))) ? (((((/* implicit */unsigned long long int) -1962085827)) & (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                                arr_20 [i_6] [i_1] [i_2 + 2] [i_2 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 312522545)) ? (((/* implicit */int) ((signed char) 0ULL))) : (arr_6 [i_0] [i_0 - 1] [i_0] [i_0 + 2])));
                                arr_21 [i_0 + 1] [i_1] [i_6] [i_6] [i_6] = max((arr_9 [i_2 + 2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1]), (((arr_9 [i_2] [i_2 - 1] [i_2 + 2] [i_2] [i_2 + 1] [i_2 - 1]) * (arr_9 [i_2] [i_2 + 2] [21ULL] [i_2] [3LL] [i_2 + 2]))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
