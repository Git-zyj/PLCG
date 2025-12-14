/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213718
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
    var_16 = var_7;
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) (unsigned short)14606);
                var_18 = ((/* implicit */_Bool) 4071501545U);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) var_13);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_19 -= ((/* implicit */unsigned short) -1804572178);
                                var_20 = ((/* implicit */unsigned short) max((((unsigned long long int) arr_3 [i_0])), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0 + 2] [i_2 + 1] [i_2 + 1] [i_2])) ? (80970750) : (((/* implicit */int) arr_3 [i_0])))))));
                                var_21 = var_9;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_22 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (-892706879)))))))) ? (((var_2) | (var_12))) : (var_4)));
    var_23 = ((/* implicit */unsigned char) -1);
    var_24 |= var_4;
}
