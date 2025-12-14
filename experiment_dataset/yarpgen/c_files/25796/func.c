/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25796
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
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */_Bool) arr_0 [i_1] [i_0]);
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (long long int i_4 = 3; i_4 < 13; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_11)) != (((/* implicit */int) arr_3 [i_4 - 3] [i_1] [i_4 - 2]))));
                                arr_15 [i_2] [14ULL] [i_1] [(signed char)4] [i_2] = ((/* implicit */unsigned long long int) arr_9 [i_1]);
                                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0]))));
                            }
                        } 
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (short)15411)) : (((/* implicit */int) (signed char)104))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (var_14)))))) || (((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)125)) : (((/* implicit */int) var_6)))) * (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-78)), (var_11)))))))));
}
