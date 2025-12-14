/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218851
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
    var_14 = ((/* implicit */_Bool) ((((var_6) * ((-(var_6))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) var_5))))) ? ((+(var_0))) : (((((/* implicit */_Bool) 472261597081275771LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_5)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_3 [i_0] [i_1]))))))), (((unsigned long long int) arr_3 [i_0] [i_0]))));
                var_16 = ((/* implicit */signed char) (~(max((-8444749845630680300LL), (((/* implicit */long long int) (_Bool)1))))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [8])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))))));
                /* LoopNest 2 */
                for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        {
                            arr_14 [i_1] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)0))));
                            arr_15 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((+((~(-8236049677574157846LL))))) : (((/* implicit */long long int) ((/* implicit */int) min(((!(((/* implicit */_Bool) var_11)))), ((!((_Bool)1)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
