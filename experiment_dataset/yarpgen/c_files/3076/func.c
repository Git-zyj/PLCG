/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3076
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
    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) var_9)) % (((/* implicit */int) (unsigned char)245)))))));
    var_20 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned char) (signed char)-47))) : (((/* implicit */int) var_9))))));
    var_21 *= ((/* implicit */unsigned int) var_2);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_22 = (~(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255))))))));
                    var_23 = ((/* implicit */int) (+(min((4074364235U), (((/* implicit */unsigned int) var_16))))));
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_24 = (+((~(var_7))));
                                var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_9 [i_4 + 1])) ? (max((var_11), (((/* implicit */unsigned long long int) 220603082U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 220603059U)) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_3] [i_4 - 3]))))))) << (max((((220603061U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55296))))), (((/* implicit */unsigned int) (_Bool)1))))));
                                var_26 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                                var_27 = ((/* implicit */signed char) (-(((max((220603061U), (220603061U))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)63714)))))))));
                                arr_13 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */int) var_3)), ((-(min((var_4), (((/* implicit */int) (unsigned short)12288))))))));
                            }
                        } 
                    } 
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (var_11)));
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */_Bool) var_4);
}
