/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23872
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
    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (short)20908))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 3; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)159))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) arr_2 [i_0 + 3] [i_1])) ? (((/* implicit */int) (short)8878)) : (((((/* implicit */_Bool) (unsigned char)88)) ? (((/* implicit */int) (short)20907)) : (((/* implicit */int) (short)-8878))))))));
                            var_20 = ((/* implicit */unsigned char) ((max((var_14), (((/* implicit */int) min((((/* implicit */short) arr_4 [i_0] [i_1] [i_2 - 2] [i_0])), ((short)-26891)))))) | (((/* implicit */int) ((short) min(((short)-20914), (((/* implicit */short) var_12))))))));
                            var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (signed char)33)) : (((/* implicit */int) var_12))));
                            var_22 = (!(((/* implicit */_Bool) min((var_15), (arr_1 [i_0 + 1])))));
                            var_23 = ((/* implicit */_Bool) var_17);
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned short) ((((var_7) + (2147483647))) << (((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)20908)) : (((/* implicit */int) arr_7 [i_0 - 1])))) - (20908)))));
            }
        } 
    } 
}
