/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27139
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
    for (short i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (short i_2 = 3; i_2 < 14; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0 + 2] [15U] [i_1] = ((/* implicit */unsigned long long int) (short)448);
                    var_11 = ((/* implicit */short) min((var_3), (((/* implicit */long long int) arr_3 [i_1]))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_8);
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65408)) : (((((/* implicit */int) ((signed char) -482950804))) + (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (33554176U))))))));
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
    {
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) var_8);
                var_15 = ((/* implicit */signed char) ((var_5) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) 4261413132U)) ? (2022756983U) : (((/* implicit */unsigned int) var_10)))))) : (((/* implicit */unsigned int) ((int) (-(((/* implicit */int) var_8))))))));
                var_16 -= ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */unsigned long long int) var_9)))))), (var_0)));
                var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) min((arr_1 [i_4 - 1] [i_4 - 1]), (arr_1 [i_4 - 1] [(short)2])))) ? (((unsigned long long int) 482950791)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_6))))))));
            }
        } 
    } 
    var_18 ^= ((/* implicit */_Bool) var_7);
}
