/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51841
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
    var_10 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */long long int) (~((~(((/* implicit */int) var_8))))))) : ((-((+(var_2)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_15 [i_4] [i_1] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */short) var_8))))) ? (((/* implicit */int) (!(var_8)))) : (arr_13 [i_3] [i_2])));
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_2] = ((/* implicit */signed char) (+((+((-(var_0)))))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) arr_1 [i_0])))) || (((/* implicit */_Bool) arr_13 [i_0] [i_1]))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) var_4);
}
