/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50042
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 3; i_3 < 9; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((((/* implicit */_Bool) (short)-7017)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_4))) <= (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) var_6)), ((short)-7023)))))))))))));
                                var_14 = ((/* implicit */unsigned int) (+(min((((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11459)))))), (((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned char)79))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_5 = 0; i_5 < 12; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */int) max((var_15), ((-(var_8)))));
                                arr_22 [i_0] [i_0] [i_5] [(short)11] [i_5] = ((/* implicit */short) min((min((arr_21 [i_7 + 2]), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) (+(var_3))))));
                                var_16 = ((/* implicit */unsigned long long int) (~(-1185404281166704377LL)));
                                arr_23 [i_7] = ((/* implicit */long long int) ((var_3) != (((/* implicit */unsigned int) (+(16383))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 = (-(((/* implicit */int) (signed char)113)));
}
