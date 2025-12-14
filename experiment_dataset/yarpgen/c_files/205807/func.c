/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205807
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
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 19; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((min((((/* implicit */int) var_8)), (arr_9 [i_0 - 2] [i_0 - 2] [i_2] [i_1 - 2]))) >= (arr_9 [i_0 - 1] [i_1 - 1] [i_0 - 1] [i_2])));
                    arr_10 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */signed char) arr_6 [(short)4]);
                    var_21 = ((/* implicit */signed char) arr_4 [(_Bool)1] [i_0 - 1]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0 + 2] [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_8 [i_0 - 2] [i_0 - 2]), (arr_8 [i_0 - 1] [i_0 + 1])))) & (((/* implicit */int) max((arr_8 [i_0 - 2] [i_0 - 1]), (arr_8 [i_0 - 2] [i_0 + 2])))))))));
                                arr_16 [10] [10] [i_2] [i_2] [11] [i_2] [i_2] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0 - 2] [i_1 - 1]))))) ? (min((arr_11 [i_1 + 2] [i_0 + 2] [i_0 - 1]), (((/* implicit */int) arr_8 [i_0 + 1] [i_1 + 3])))) : (((/* implicit */int) arr_8 [i_0 + 2] [i_1 - 2]))));
                                var_23 |= ((/* implicit */unsigned int) var_5);
                                arr_17 [i_4] [i_0 + 1] = ((/* implicit */signed char) min((((/* implicit */int) var_6)), ((~(((/* implicit */int) (signed char)-44))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */signed char) min((((/* implicit */int) var_19)), (((int) min((((/* implicit */int) (unsigned char)93)), (var_15))))));
}
