/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36266
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
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((var_12) | (var_3))), (((var_8) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_10)))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) > (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (((/* implicit */int) var_1))));
    var_14 = ((/* implicit */unsigned char) (-(var_11)));
    var_15 = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) && (((-316243681) == (316243671))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_13 [i_0] [(short)4] [i_2] [1] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_4 [i_1] [(short)1] [(short)1])), (arr_12 [i_3] [i_2] [i_1] [i_0]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2]))))))));
                            arr_14 [i_1] = ((((/* implicit */_Bool) max(((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_3] [9] [i_1])))), (((/* implicit */int) arr_8 [i_1] [i_1]))))) ? (((/* implicit */int) ((var_3) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) == (arr_10 [i_3])))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_0]))))));
                            var_16 = ((/* implicit */long long int) arr_2 [i_0]);
                        }
                    } 
                } 
            }
        } 
    } 
}
