/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240923
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
    var_17 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */unsigned long long int) var_2);
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) arr_12 [i_4] [i_3] [i_2] [i_1 + 1] [i_0]);
                                var_20 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1 - 1] [i_2] [i_3])))))));
                                arr_15 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_11 [i_4] [i_2] [i_1] [i_0])));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((var_15) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_4] [i_2] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (var_8))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_3] [i_2] [i_1] [i_0]))))))))))));
                                var_22 = ((/* implicit */_Bool) min((((var_15) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1 - 1] [i_1 + 1])) ? (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1])))))));
                            }
                        } 
                    } 
                } 
                var_23 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_12 [i_0] [i_0] [17U] [i_0 + 1] [i_1 + 1])) % ((~(((/* implicit */int) var_14)))))) / (((/* implicit */int) arr_7 [i_1] [i_1] [i_0]))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) var_5);
    var_25 = ((/* implicit */_Bool) var_9);
}
