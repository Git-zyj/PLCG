/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199779
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
    var_12 = ((/* implicit */int) ((var_9) && (((var_9) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2130706432U)) ? (4194303) : (((/* implicit */int) (signed char)-5)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                arr_7 [i_0] = ((/* implicit */signed char) var_2);
                /* LoopNest 3 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [(unsigned short)6] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) arr_6 [i_2]))))) | (max((((/* implicit */unsigned long long int) (-(var_4)))), (var_2)))));
                                arr_17 [i_0] [i_1] [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (var_5)))) ? (min((2147483647), (631315233))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) == (var_2)))))))));
                            }
                        } 
                    } 
                } 
                arr_18 [i_0] [i_0] = ((/* implicit */short) (unsigned char)0);
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) & (var_11)))) != (max((var_10), (var_2))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */unsigned int) 0))))) ? (((/* implicit */int) var_6)) : (-1))) : (((/* implicit */int) var_7))));
}
