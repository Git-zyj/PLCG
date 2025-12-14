/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29445
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
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            {
                arr_4 [(unsigned short)8] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(var_8)))), (max((var_4), (((/* implicit */unsigned long long int) var_12))))));
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))))), (var_12))), (((/* implicit */long long int) min((((/* implicit */int) (short)20015)), (-625896555))))));
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) var_4);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 1; i_2 < 12; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) min((max((((/* implicit */long long int) var_2)), (var_12))), (((/* implicit */long long int) var_6)))))));
                /* LoopNest 3 */
                for (signed char i_4 = 1; i_4 < 14; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))), (min(((+(var_4))), (((/* implicit */unsigned long long int) min((var_11), (var_11))))))));
                                arr_20 [i_2] [i_3] [i_2] [i_2] [i_6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)168)), (4294967295U))))));
                                arr_21 [i_6] [i_5] [(short)12] [i_3] [i_2] [i_6] = ((/* implicit */unsigned int) max((var_12), (((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) var_3)))))));
                                var_16 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */unsigned int) var_11))))), (max((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) var_0))))), (max((var_4), (((/* implicit */unsigned long long int) var_11))))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_3)), (var_12))), (((/* implicit */long long int) (-(((/* implicit */int) (short)-16)))))));
                arr_22 [i_2] [i_2 + 4] [i_3] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((var_2), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (1527323754) : (-1441588744))))))), (max((((/* implicit */long long int) (-(var_9)))), (min((var_8), (((/* implicit */long long int) var_1))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (max((((/* implicit */long long int) var_3)), (min((var_8), (((/* implicit */long long int) var_11)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_8)))) ? (max((var_7), (((/* implicit */int) var_5)))) : ((-(var_11))))))));
    var_19 = ((/* implicit */long long int) var_0);
}
