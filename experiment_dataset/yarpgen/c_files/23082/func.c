/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23082
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (unsigned char i_2 = 2; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_12 ^= ((/* implicit */unsigned char) 3535048303U);
                                arr_16 [i_0] [i_0] [i_1] [i_1] [i_2] [(unsigned char)13] [i_4] = ((/* implicit */unsigned char) -1965280762);
                                arr_17 [i_0] [i_1] [(unsigned char)12] [10] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2] [i_0] [i_2] [i_2 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned char)148)))) : (min((1726964246994747345LL), (((/* implicit */long long int) var_11)))))) != (((/* implicit */long long int) ((int) ((((-2090696088) + (2147483647))) >> (((-2036053795) + (2036053818)))))))));
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) <= (arr_11 [i_2] [i_1 + 1] [12LL] [i_2]))) ? (((489376172) + ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_2])))))) : ((+(((/* implicit */int) arr_2 [i_1] [i_1 - 1] [10])))))))));
                    var_14 += ((/* implicit */unsigned int) var_7);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (signed char)-1)))) <= (((/* implicit */int) var_10)))) ? ((+(3622367428U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_5))))))))));
    var_16 = ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)83))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) (unsigned char)132))));
    var_17 = ((/* implicit */unsigned short) ((unsigned char) var_4));
}
