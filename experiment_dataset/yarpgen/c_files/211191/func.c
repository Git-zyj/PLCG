/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211191
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
    var_10 = ((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (var_5))));
    var_11 ^= ((/* implicit */unsigned char) var_3);
    var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((unsigned char) min((((/* implicit */unsigned long long int) var_6)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (11929516088053948680ULL)))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 3; i_2 < 17; i_2 += 2) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) 2297005706U)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_12 [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_2])) & (((/* implicit */int) ((unsigned char) min((arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) var_5))))))));
                                arr_13 [i_0] [i_2] [i_1] [i_2] [i_3] [i_3] = max((min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)116))) + (var_3))))), (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
                                var_14 += ((/* implicit */signed char) min((((((/* implicit */_Bool) (unsigned char)116)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3 - 1]))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_4))))))))));
                                var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) max((((/* implicit */long long int) arr_8 [i_0] [i_0 - 1] [i_0] [i_0])), (var_1))))) << (((/* implicit */int) min((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) (unsigned char)116)))), ((!(((/* implicit */_Bool) var_7)))))))));
                                var_16 = ((/* implicit */unsigned int) ((short) max((arr_5 [i_2] [i_0 - 3] [i_2 - 2] [i_3 + 2]), (((/* implicit */unsigned int) arr_4 [i_3 + 2] [i_0 - 1] [i_2 + 1])))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_0] [i_2] = (!(((/* implicit */_Bool) max((((/* implicit */short) ((var_5) <= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (min((var_2), (((/* implicit */short) arr_8 [i_2] [i_1] [i_2] [i_2]))))))));
                    arr_15 [i_2] [i_2] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) min((var_5), (4294967295U)))))));
                    var_17 = ((/* implicit */short) arr_4 [i_0 - 2] [i_0 + 1] [i_0 + 1]);
                }
            } 
        } 
    } 
}
