/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51049
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
    var_20 = ((/* implicit */unsigned int) var_7);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (1777467725U)))));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_0 - 1] [5ULL] [i_0] [i_0 + 1]))))) ? (((((/* implicit */int) (unsigned char)78)) % (((/* implicit */int) arr_7 [i_0 + 1] [i_1] [i_0] [i_0 + 1])))) : (((/* implicit */int) (unsigned char)21))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (+(arr_1 [i_0] [(unsigned char)9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((unsigned int) var_8)))), (((/* implicit */unsigned int) (short)-250)))))));
                                var_23 = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */_Bool) 1777467725U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_0 [i_0]))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_7))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_2))))));
}
