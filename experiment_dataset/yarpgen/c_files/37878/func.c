/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37878
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */short) ((min((((/* implicit */long long int) arr_4 [i_0 - 1] [i_0])), (((((/* implicit */_Bool) 1723634725)) ? (((/* implicit */long long int) -1806685481)) : (15LL))))) >= (-6LL)));
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) ((-7LL) >= (-7LL))))));
                var_22 = var_5;
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) | (((((/* implicit */_Bool) 14LL)) ? (10834429248906939335ULL) : (((/* implicit */unsigned long long int) 7LL)))))) - (((unsigned long long int) (unsigned short)41268))));
    /* LoopNest 2 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_4 = 4; i_4 < 8; i_4 += 2) 
                {
                    for (short i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_19))));
                                var_25 = ((/* implicit */unsigned short) ((int) max((var_17), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_19 [i_2])), ((short)-29357)))))));
                                var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) var_2))));
                                var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (unsigned char)200))));
                            }
                        } 
                    } 
                } 
                arr_22 [i_2] [11LL] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) -7LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_3] [i_3]))) : (3326772613U))), (((/* implicit */unsigned int) (unsigned short)24268))));
            }
        } 
    } 
}
