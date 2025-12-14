/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45710
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
    var_14 = ((/* implicit */long long int) (short)-21175);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_4 [i_3 - 1] [i_3 - 1] [i_3 + 1]) : (arr_4 [i_3 + 2] [i_3 - 1] [(unsigned short)2])))), (((((/* implicit */_Bool) arr_0 [i_3 - 1])) ? (var_1) : (0ULL))))))));
                                var_16 = ((/* implicit */_Bool) var_12);
                            }
                        } 
                    } 
                    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) arr_7 [i_1] [i_1] [(signed char)8] [i_2]))))) ? (((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) var_13))))) : (((((/* implicit */unsigned long long int) ((var_8) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) & (((((/* implicit */_Bool) var_13)) ? (18446744073709551615ULL) : (var_1))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-(min((min((((/* implicit */int) var_2)), (var_7))), (((((/* implicit */_Bool) 8ULL)) ? (var_7) : (((/* implicit */int) var_8))))))));
}
