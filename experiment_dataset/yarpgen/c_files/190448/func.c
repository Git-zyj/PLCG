/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190448
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) var_8);
                arr_8 [i_1] = ((/* implicit */unsigned long long int) var_1);
                var_13 = ((/* implicit */unsigned int) 2247401767174144LL);
                /* LoopNest 2 */
                for (unsigned int i_2 = 1; i_2 < 10; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 3; i_3 < 11; i_3 += 4) 
                    {
                        {
                            var_14 &= ((/* implicit */short) min((((((/* implicit */int) var_11)) >> (((7713954658092602976LL) - (7713954658092602952LL))))), (((/* implicit */int) arr_1 [i_0]))));
                            var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_0])) ? (max((((((/* implicit */_Bool) (short)-14904)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1 - 2] [i_2 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 - 1] [i_0])))));
                            arr_15 [i_0] [i_1] [i_2] [i_3 - 3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3] [i_1] [i_0])) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-4992)))))))) > (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_2]))) % (((arr_13 [i_3] [i_1] [i_2] [i_1] [i_0]) * (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_2]))))))));
                            var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) var_4)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) ((short) var_8))))));
}
