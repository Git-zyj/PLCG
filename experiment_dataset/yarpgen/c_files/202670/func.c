/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202670
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202670 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202670
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
    var_12 = ((/* implicit */long long int) var_6);
    var_13 = ((/* implicit */unsigned char) var_4);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = (signed char)-12;
                var_14 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_0] [(short)4])) != (((/* implicit */int) (_Bool)1)))))))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [0])) ? (((/* implicit */int) arr_2 [(short)12] [i_1] [i_1 - 3])) : (((/* implicit */int) (signed char)102))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1]))) <= (268435455U)))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            {
                arr_11 [i_2] = ((/* implicit */long long int) 4294967277U);
                var_15 = ((/* implicit */unsigned char) arr_4 [i_2] [i_2]);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
}
