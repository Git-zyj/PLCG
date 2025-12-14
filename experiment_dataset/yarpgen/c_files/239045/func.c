/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239045
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239045 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239045
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
    var_18 = ((/* implicit */unsigned short) var_14);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_3] [2LL] [i_3] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_10);
                                arr_17 [13] [i_1 - 3] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */long long int) 22258331U)) / (min((((/* implicit */long long int) (+(22258331U)))), (var_4)))));
                                arr_18 [i_0] [i_1 - 2] [2] [i_3] [i_0] [i_0] = ((/* implicit */int) 1070163791U);
                                arr_19 [i_0] [i_1] [i_0] [i_0] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_4) + (9223372036854775807LL))) >> (((((/* implicit */int) ((unsigned short) var_12))) - (69)))))) || (((/* implicit */_Bool) arr_14 [i_4] [i_3] [(_Bool)1] [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] [i_0] = ((/* implicit */unsigned int) (((+(((((/* implicit */_Bool) (unsigned short)12964)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -3037807248827615516LL)))))) + (((((/* implicit */_Bool) max((4272708953U), (((/* implicit */unsigned int) var_13))))) ? (((var_7) / (var_2))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)0)), (2147483647))))))));
                arr_21 [i_0] [i_1 + 1] = ((max((min((0LL), (((/* implicit */long long int) (unsigned short)39309)))), (((/* implicit */long long int) ((((-822476173) + (2147483647))) >> (((var_9) - (1082658803U)))))))) & (((/* implicit */long long int) ((/* implicit */int) var_15))));
                arr_22 [3ULL] [3ULL] = ((/* implicit */short) var_15);
            }
        } 
    } 
}
