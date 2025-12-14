/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209048
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
    var_17 = ((/* implicit */_Bool) (unsigned char)169);
    var_18 = ((/* implicit */long long int) var_7);
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)20660))))) ? (var_1) : (((/* implicit */unsigned long long int) 203906806U))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (short)-20632)) & (((/* implicit */int) (_Bool)1))))))) : (max((203906820U), (((/* implicit */unsigned int) (unsigned char)97)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((203906806U) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1 + 1] [(short)0])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_1 + 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))))))));
                var_21 ^= max((max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) (unsigned char)158)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)8217)))))), (((/* implicit */int) ((short) var_7))));
                var_22 ^= ((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0] [i_0]))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_13)))) ? (((((/* implicit */_Bool) arr_3 [i_1] [8ULL] [i_0])) ? (var_5) : (((/* implicit */int) var_15)))) : (((/* implicit */int) (signed char)38)))) : (((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) ((short) arr_1 [i_0]))) : (((((/* implicit */int) (signed char)38)) - (((/* implicit */int) (unsigned short)8228)))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((-615224914) + (2147483647))) << (((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 4091060475U)) ? (((/* implicit */int) var_6)) : (arr_7 [i_2] [i_1 + 1] [i_1 + 1] [i_3]))))) - (12462)))));
                            arr_11 [i_0] [i_0] [i_0] [i_3] = var_4;
                        }
                    } 
                } 
            }
        } 
    } 
}
