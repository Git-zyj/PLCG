/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209534
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
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 3) 
                {
                    for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) arr_1 [i_3 + 2]))));
                                var_11 = ((/* implicit */unsigned short) max((var_11), ((unsigned short)38624)));
                            }
                        } 
                    } 
                } 
                var_12 = ((/* implicit */_Bool) min((var_12), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)98))) == (var_4)))));
                arr_12 [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) 2865201689U))), (2865201687U)))) & (((((((/* implicit */_Bool) 2865201665U)) ? (8272111447046300119LL) : (((/* implicit */long long int) 2865201689U)))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_5))))))));
            }
        } 
    } 
    var_13 |= ((/* implicit */unsigned short) var_2);
    var_14 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */int) (short)4238)) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)115))))))), (var_5)));
}
