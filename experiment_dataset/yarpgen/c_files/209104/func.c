/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209104
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
    var_14 = ((/* implicit */int) min((((/* implicit */long long int) ((max((var_3), (var_4))) << (((((((((/* implicit */_Bool) var_8)) ? (-5304130925161629945LL) : (((/* implicit */long long int) ((/* implicit */int) var_10))))) + (5304130925161629961LL))) - (15LL)))))), (((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_7)))) ? ((~(var_8))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)207)))))))));
    var_15 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_5 [i_1] [(unsigned short)17] [(unsigned short)17] = ((/* implicit */unsigned char) arr_2 [i_1]);
                /* LoopNest 2 */
                for (unsigned int i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) max((var_6), (var_6)))), (((unsigned short) 5304130925161629945LL))))) ? (var_13) : (((/* implicit */unsigned long long int) -6397682119355728232LL))));
                            var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_3] [i_3] [i_2])) / (max((var_7), (min((arr_4 [i_0] [i_1]), (((/* implicit */int) var_1))))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (-(var_8))))));
                var_19 = ((/* implicit */unsigned short) (-(max((((/* implicit */int) var_10)), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_0] [i_0] [20U])) : (((/* implicit */int) arr_0 [i_0]))))))));
                var_20 = ((/* implicit */long long int) arr_6 [i_0] [i_1] [i_0]);
            }
        } 
    } 
}
