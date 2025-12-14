/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197754
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
    var_10 = ((/* implicit */unsigned int) (-((~(((/* implicit */int) var_0))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(var_7)));
                                var_11 *= ((/* implicit */_Bool) (~(((long long int) (-(arr_11 [i_4] [i_3] [i_2] [i_1] [i_0]))))));
                                arr_13 [i_0] [i_0 - 2] [(unsigned short)9] [i_1] [i_2] [i_3] [(unsigned short)9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_7)) ^ (var_3)))) ? (var_4) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0 + 1])))))));
                                arr_14 [i_2] [i_1] [i_2] [i_1] [(signed char)4] = ((/* implicit */_Bool) ((unsigned long long int) (~(arr_1 [i_0] [i_0 - 2]))));
                            }
                        } 
                    } 
                    var_12 = ((/* implicit */signed char) var_4);
                }
            } 
        } 
    } 
    var_13 &= ((((_Bool) ((signed char) var_8))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) / (var_2)))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned long long int) var_2)))))))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) var_7)))))) ? ((-(((unsigned long long int) var_8)))) : (var_9)));
}
