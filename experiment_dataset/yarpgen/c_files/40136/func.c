/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40136
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
    var_16 &= ((/* implicit */unsigned char) min((min((((/* implicit */int) var_4)), (((((/* implicit */int) (short)-3466)) & (((/* implicit */int) var_8)))))), (((/* implicit */int) (signed char)8))));
    var_17 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_18 = ((((((/* implicit */_Bool) ((unsigned char) arr_2 [i_0]))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1])))) << (((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_3 [i_0 + 2] [i_1] [i_0 - 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_2 [i_0 + 2]))))))) - (548465576U))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (arr_6 [i_0] [i_0] [i_0] [i_0 - 1]))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (signed char)38)))) + (((/* implicit */int) ((short) var_0))))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (min((((/* implicit */int) (signed char)-4)), (arr_1 [i_1] [i_2]))) : (var_3)))) ? (max((((((/* implicit */int) var_15)) | (((/* implicit */int) arr_0 [i_0 + 1] [i_0])))), (((/* implicit */int) min(((short)28399), (((/* implicit */short) var_15))))))) : (((/* implicit */int) var_11))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((min(((((-2147483647 - 1)) / (-1957081125))), (((/* implicit */int) ((4026531840U) == (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63390)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (var_2)))) ? (var_3) : (((/* implicit */int) var_4))))));
    var_22 = (unsigned char)127;
}
