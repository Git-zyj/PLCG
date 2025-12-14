/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35991
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
    var_12 |= ((/* implicit */int) (-(((long long int) (+(var_5))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_1 + 3])), ((unsigned char)3)))) : (((int) var_11))))) - ((~(var_9)))));
                var_14 += (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_6)), (5559209713884571071LL)))) ? (max((-5559209713884571071LL), (((/* implicit */long long int) (unsigned short)65535)))) : (arr_3 [i_1 + 3])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) max((max((((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_1 + 2] [i_1 + 2] [i_3 - 3]))), (min((((/* implicit */unsigned long long int) var_6)), (arr_6 [i_2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (5559209713884571056LL) : (arr_10 [i_1 + 2] [i_3 + 1] [i_2] [i_3 + 1] [i_2] [i_2]))))));
                            arr_11 [i_3 + 2] [(signed char)15] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */long long int) (short)-8311)), (var_11))))), (min((((((/* implicit */unsigned long long int) var_0)) / (var_5))), (((/* implicit */unsigned long long int) -6090907584865898307LL))))));
                        }
                    } 
                } 
                var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(var_1)))) ? (((((/* implicit */_Bool) var_0)) ? (arr_10 [i_1 + 3] [21LL] [4U] [i_1 - 1] [i_1 - 1] [i_1]) : (arr_10 [i_0] [i_0] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 3]))) : (max((((/* implicit */long long int) (~(-901435348)))), (((((/* implicit */_Bool) 109232485U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1])))))))));
                arr_12 [i_1 + 2] = ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) var_11)) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))));
            }
        } 
    } 
}
