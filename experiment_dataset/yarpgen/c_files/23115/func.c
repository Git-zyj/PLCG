/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23115
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
    var_18 = ((/* implicit */short) (~((+((-(13331839828813189216ULL)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (long long int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((unsigned long long int) (+(arr_5 [i_1 + 2] [i_1 + 1]))));
                var_20 = (-((((-(5114904244896362417ULL))) + ((+(var_15))))));
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        {
                            arr_10 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)26907)))))))));
                            var_21 |= ((/* implicit */_Bool) max((((unsigned long long int) ((unsigned long long int) (unsigned short)25189))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (max((5114904244896362400ULL), (((/* implicit */unsigned long long int) 4278190080U))))))));
                            arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] [i_3] = ((/* implicit */long long int) max((min((((/* implicit */unsigned int) arr_6 [i_0] [i_2])), (max((((/* implicit */unsigned int) var_4)), (8U))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_0] [i_0])))))));
                            var_22 = ((((unsigned int) (+(((/* implicit */int) arr_0 [i_1]))))) - (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)12021), ((unsigned short)12021))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) ((long long int) (+(5114904244896362378ULL))));
}
