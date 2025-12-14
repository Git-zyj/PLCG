/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215003
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned char i_3 = 2; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                arr_14 [(signed char)4] [i_2] [i_2] = ((/* implicit */long long int) max((min((((/* implicit */int) var_16)), (min((1496684523), (((/* implicit */int) arr_13 [i_0] [(_Bool)1] [i_0] [i_0] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) 130944U)))))));
                                var_17 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (max((max((((/* implicit */unsigned long long int) -1496684524)), (arr_6 [i_0] [i_1] [i_0]))), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) (+(4040659105U)))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_2 [i_0]))))))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((var_9), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1496684523)) ? (var_0) : (0ULL)))) || (((/* implicit */_Bool) 4856759887345619756ULL))))))))));
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) min((arr_9 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3]), (arr_9 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3])))) == (((/* implicit */int) arr_9 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3]))));
                                var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) (signed char)15))))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_12 [i_0] [i_1 - 3] [i_1 - 1] [i_1 - 3] [i_1 - 1])) * (((/* implicit */int) arr_12 [i_1] [i_1 + 1] [i_1 - 3] [i_1] [i_1])))) > (751174035)));
                var_22 -= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) arr_7 [i_1]))))));
            }
        } 
    } 
    var_23 *= ((/* implicit */unsigned long long int) var_9);
    var_24 = ((/* implicit */unsigned char) 0U);
}
