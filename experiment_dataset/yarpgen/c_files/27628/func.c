/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27628
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
    var_20 = 2265287205U;
    var_21 = ((/* implicit */unsigned int) var_18);
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */signed char) (((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (unsigned short)29522)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))) < (((/* implicit */int) var_10))));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((arr_10 [i_0] [i_1] [i_1] [i_2] [(_Bool)1] [i_4 - 1] [i_4]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)36019))))) : (((arr_9 [i_0 - 1] [i_1] [i_1 + 1] [i_1 + 1] [i_0 - 1]) ? (((((/* implicit */_Bool) var_7)) ? (18446744073709551614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_11 [i_4] [i_3] [i_4]))))))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (!((!(((arr_2 [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */long long int) arr_11 [i_1] [i_1] [i_1]);
                    arr_15 [i_0 - 2] [i_0] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_7 [i_2]))));
                }
            } 
        } 
    } 
}
