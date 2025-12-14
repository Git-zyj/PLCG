/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202843
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
    var_15 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-16)), ((unsigned char)6))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_11))))), (((/* implicit */long long int) var_9))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)0))))) : (var_7)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */signed char) var_13);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((_Bool) var_14)))))));
                                arr_16 [i_0] [i_1] [i_1] [i_2 + 1] [i_3] [i_1] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)24873)) : (((/* implicit */int) (_Bool)1))));
                                var_19 = ((/* implicit */unsigned short) arr_8 [i_1]);
                                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (short)-19421)) == (((/* implicit */int) (unsigned short)48490))))) * (((/* implicit */int) ((short) arr_2 [i_0] [i_1] [i_3]))))))));
                                var_21 = ((/* implicit */int) (short)19399);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) var_12);
                }
            } 
        } 
    } 
    var_23 -= ((/* implicit */unsigned short) ((int) var_7));
    var_24 *= ((/* implicit */unsigned long long int) 131071U);
}
