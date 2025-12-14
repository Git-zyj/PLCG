/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230209
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
    for (int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_16 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1 + 2] [i_1 + 2] [i_4 + 3])) ? (((/* implicit */int) arr_9 [i_0 - 2] [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_1 - 2] [i_4 + 1])) : (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_1 - 2] [i_4 + 4]))))) ? (((((/* implicit */_Bool) (short)6656)) ? (((/* implicit */int) arr_9 [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_1 + 1] [i_4 + 4])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_1 - 1] [i_1 - 1] [i_4 - 1])))) : (((((/* implicit */_Bool) arr_9 [i_0 + 1] [i_0 - 2] [i_0 - 2] [i_1 + 2] [i_1 + 1] [i_4 + 3])) ? (((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_1 + 2] [i_1 - 1] [i_4 + 1])) : (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_1 + 1] [i_1 - 1] [i_4 + 3]))))));
                                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) (short)-6656))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_0 [i_3])) : (var_3))) > (((/* implicit */unsigned long long int) ((var_1) | (var_1)))))))) : ((-(min((arr_6 [(short)6] [(short)6] [i_2] [i_3]), (16350598909718697849ULL)))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */int) var_10);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) var_8);
}
