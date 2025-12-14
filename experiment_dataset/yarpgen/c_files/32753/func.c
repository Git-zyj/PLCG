/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32753
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
    var_16 = ((/* implicit */unsigned long long int) max((var_15), (var_15)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])), (arr_0 [i_2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-8485), (((/* implicit */short) arr_2 [i_0])))))) : (arr_5 [i_0] [i_1] [i_2])))), (arr_4 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_18 ^= (~(min((arr_8 [(short)4] [i_4] [i_4] [(short)2] [i_4 + 1] [i_4 - 1]), (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1] [i_2] [i_4 + 4] [i_4 - 1] [i_4 - 2])))));
                                var_19 += ((/* implicit */signed char) (-(9101727433985303744ULL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5))))))) - (min((((/* implicit */unsigned int) var_10)), (0U)))));
    var_21 = ((/* implicit */signed char) ((unsigned char) var_5));
}
