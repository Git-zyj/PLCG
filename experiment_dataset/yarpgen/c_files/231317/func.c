/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231317
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 4; i_2 < 14; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) 
                        {
                            {
                                var_17 ^= ((/* implicit */signed char) min((var_0), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_2] [i_3] [i_4]) / (((/* implicit */unsigned int) ((/* implicit */int) (short)18298)))))) ? (((((/* implicit */_Bool) 31ULL)) ? (((/* implicit */int) (unsigned short)42061)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)-83)) : (1262337290))))))));
                                arr_14 [i_4] [i_4] [i_4] [i_3] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_0] [i_2 - 3] [i_2])) * (((/* implicit */int) arr_6 [i_0] [i_2 - 1] [i_2 - 1]))))) ? ((-(((/* implicit */int) arr_6 [i_0] [i_2 - 2] [i_2 - 2])))) : ((-(((/* implicit */int) arr_6 [i_0] [i_2 - 2] [i_2]))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */long long int) 16383);
                var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) arr_9 [i_0] [i_1 - 1] [i_1 - 1] [i_1 + 1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)40))))) : (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [i_0] [i_1] [i_0]))))) - (((((/* implicit */_Bool) -2112889998)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_1 + 1])))))))));
            }
        } 
    } 
    var_20 = ((((/* implicit */_Bool) var_4)) ? ((+(var_0))) : (((/* implicit */unsigned long long int) var_4)));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) (unsigned short)1792))));
}
