/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22642
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
    var_17 = ((/* implicit */unsigned long long int) ((unsigned short) 3511992527U));
    var_18 |= ((/* implicit */unsigned char) var_11);
    var_19 = ((/* implicit */short) 2951370263U);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */signed char) (~(var_12)));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 18; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */long long int) var_14);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) ((unsigned char) 4294967289U))))) == (((min((var_12), (arr_12 [i_3] [i_3] [i_3]))) >> (((((((/* implicit */_Bool) var_4)) ? (782974796U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))))) - (782974792U)))))));
                                arr_16 [i_1] = ((/* implicit */unsigned char) var_2);
                                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((!(((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_0] [i_3] [i_3]))))))) / ((+(((/* implicit */int) var_3))))));
                            }
                        } 
                    } 
                    var_24 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_1] [i_2] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))))))))), (arr_6 [i_2]));
                }
            } 
        } 
    } 
}
