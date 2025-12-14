/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207385
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
    var_10 = (short)-4;
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */signed char) var_6);
                arr_6 [i_0] = ((/* implicit */short) var_0);
                arr_7 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -318049057)) ? (((/* implicit */int) ((min((((/* implicit */unsigned int) (unsigned short)36187)), (1016407363U))) > (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)21544)) + (318049056))))))) : (318049056)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((-318049057) - (318049054)));
                arr_13 [(short)8] [(unsigned char)6] &= ((/* implicit */int) (~(var_9)));
            }
        } 
    } 
}
