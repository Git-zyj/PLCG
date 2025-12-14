/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31068
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31068 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31068
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
    for (signed char i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1 + 1] [i_0 - 1] = ((/* implicit */unsigned char) ((min((7186182867582794078ULL), (((/* implicit */unsigned long long int) var_16)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_1 [i_0 - 3] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_1 + 1])))))));
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (signed char)125))));
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 16; i_4 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */int) 5U);
                                var_22 = ((/* implicit */unsigned int) arr_5 [i_0] [i_0 + 1] [i_0]);
                                var_23 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_10 [i_0 - 3] [i_0] [i_0 + 1] [i_0] [i_0])) != ((+(((/* implicit */int) (unsigned short)31025))))))), (max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) var_16)) : (5U))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) == (var_1))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */long long int) max((var_7), (var_1)));
    var_25 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_17) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))));
}
