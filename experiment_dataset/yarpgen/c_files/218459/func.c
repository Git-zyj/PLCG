/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218459
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
    var_13 ^= ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (+(((/* implicit */int) var_11)))))))));
    var_14 = ((/* implicit */_Bool) var_2);
    var_15 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)136))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_3 + 1] [i_3 + 1]))));
                                var_16 -= ((/* implicit */long long int) ((unsigned short) arr_6 [i_1] [i_1] [i_2]));
                                var_17 += ((/* implicit */short) max((((/* implicit */int) min((arr_11 [i_3 + 1] [i_3 + 1] [i_1] [i_3 + 1]), (arr_11 [i_3 + 1] [i_3 + 1] [i_1] [i_3 + 1])))), ((-(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3 + 1] [i_3]))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned long long int) arr_11 [(short)8] [(short)8] [i_1] [i_1]);
            }
        } 
    } 
    var_19 = max((var_9), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (unsigned char)135)))))))));
}
