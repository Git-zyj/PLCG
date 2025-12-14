/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46155
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 19; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 |= ((/* implicit */long long int) max(((+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [(signed char)14] [(signed char)15] [i_3])) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                                var_19 |= min((((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) / ((+(5082257231524357256LL))))), (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)9))) : (4294967295U))), (((/* implicit */unsigned int) (+((-2147483647 - 1)))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) arr_9 [i_0] [i_0] [i_0] [i_0]);
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 4294967295U)) ? (4294967295U) : (0U)))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) 3870444834U))));
}
