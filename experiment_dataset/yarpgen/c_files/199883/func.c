/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199883
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
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) var_16)), (var_12)));
    var_21 *= ((/* implicit */_Bool) var_17);
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 3) 
        {
            {
                arr_6 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1])))) > (((/* implicit */int) max((arr_1 [i_1 + 2]), (arr_1 [i_0]))))));
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-8)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0 + 1])) && (((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1])))) ? (((/* implicit */int) var_19)) : ((-(((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_4])) && (((/* implicit */_Bool) var_10)))))))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) (~(arr_4 [i_1 - 1]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_25 = ((/* implicit */int) var_14);
}
