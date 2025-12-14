/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22013
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
    var_10 *= ((/* implicit */unsigned int) (-(var_3)));
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_2)))) < (((((/* implicit */_Bool) 3964403206750233485LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_3)))))) / ((-(((/* implicit */int) (signed char)127))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 7; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) arr_3 [i_0] [i_2] [i_3]);
                            var_13 ^= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */long long int) arr_5 [i_0] [i_1 + 2] [i_1 - 3])) : (((((/* implicit */_Bool) 4911021560063091387LL)) ? (-4911021560063091388LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                            var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) 361554183U)) ? (0U) : (1625873316U)))) != (((((/* implicit */long long int) max((arr_5 [i_0] [i_1] [i_2]), (((/* implicit */unsigned int) var_5))))) - (4911021560063091387LL)))));
                        }
                    } 
                } 
                arr_11 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) < (524288U))))) && (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) + (18446744073709551615ULL))) / (((/* implicit */unsigned long long int) ((unsigned int) var_9))))))));
                var_15 = var_0;
            }
        } 
    } 
    var_16 = ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) - (3402603913U));
}
