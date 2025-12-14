/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27426
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_6))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)65)), (arr_9 [i_0] [i_1] [i_0]))))));
                    var_22 ^= (~(min(((-(((/* implicit */int) (unsigned short)29667)))), (((/* implicit */int) var_18)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))) : (arr_0 [i_0] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0]))) : (min((arr_8 [i_0] [i_3] [i_4]), (((/* implicit */unsigned int) var_2))))))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (arr_11 [i_4 - 2] [i_4 - 1] [i_4] [i_4 - 1] [i_4 + 1] [i_4 - 1])))) : (((/* implicit */int) (signed char)71)))))));
                                var_24 *= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) (signed char)-74)), (max((((/* implicit */long long int) arr_6 [i_0] [i_1])), (-9223372036854775792LL))))) & (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_1] [i_3] [i_3] [i_4 - 2]))) <= (var_5)))))))));
                                var_25 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_1)), (var_16)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) min((((/* implicit */unsigned int) var_13)), (var_9)));
    var_27 = ((/* implicit */long long int) ((unsigned long long int) var_16));
}
