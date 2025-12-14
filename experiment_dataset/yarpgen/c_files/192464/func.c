/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192464
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
    var_15 = ((/* implicit */unsigned int) ((long long int) var_6));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_16 += ((/* implicit */long long int) (-(((unsigned int) var_7))));
                arr_4 [i_1] = max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~(((/* implicit */int) var_3))))) | (var_13)))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0] [i_1])))) ^ (max((var_8), (((/* implicit */unsigned long long int) 3588506863U)))))));
                var_17 = ((/* implicit */_Bool) arr_3 [i_0] [i_1]);
                var_18 = ((/* implicit */long long int) max((var_18), (arr_0 [i_0])));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 7; i_3 += 1) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 1) 
            {
                {
                    arr_13 [3LL] [i_3 + 1] [i_2] [i_2] = ((/* implicit */signed char) (-(((long long int) var_10))));
                    var_19 = ((/* implicit */unsigned int) var_3);
                    var_20 = ((/* implicit */unsigned int) (+(9223372036854775794LL)));
                    var_21 ^= ((/* implicit */long long int) (-((-(arr_11 [i_3 + 1] [i_3 + 1] [i_4])))));
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 0U))));
                                arr_20 [i_2] [i_3 + 3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) var_2);
                                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_4] [i_5] [i_2])) ? (((/* implicit */unsigned long long int) 0U)) : (arr_3 [i_2] [i_2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
