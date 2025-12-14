/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216888
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */_Bool) ((max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1 - 1]))) ^ (max((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1 - 1])))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((max((var_14), (arr_1 [i_1 + 2] [i_1 + 1]))), (((/* implicit */int) arr_3 [i_0] [i_0] [i_1]))));
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 9; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 13; i_4 += 4) 
                        {
                            {
                                arr_14 [i_3] [i_1] = ((/* implicit */short) 3645770646U);
                                arr_15 [(short)5] [i_1] [i_3] = ((/* implicit */long long int) ((max((((/* implicit */int) arr_4 [i_1 + 1] [i_3 - 1])), (var_14))) & (max((((((/* implicit */int) var_17)) | (((/* implicit */int) (unsigned char)254)))), (((/* implicit */int) arr_3 [i_1 + 2] [i_3 - 1] [i_3 + 1]))))));
                            }
                        } 
                    } 
                } 
                var_21 = ((/* implicit */long long int) (unsigned char)254);
                var_22 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_3)), (min((arr_11 [i_1 + 2] [i_1] [i_0] [i_1 - 1]), (arr_11 [i_1 - 1] [i_1 - 1] [i_0] [i_1 + 2])))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned short) max((var_12), (var_7))))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)10580))))));
    var_24 *= ((/* implicit */unsigned long long int) max((max((-9104780205065381387LL), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned short)54932)) : (((/* implicit */int) var_5))))))), (((/* implicit */long long int) var_18))));
    var_25 = var_11;
}
