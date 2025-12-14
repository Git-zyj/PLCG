/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201022
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
    var_20 += ((/* implicit */unsigned short) var_14);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_17)) / (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))), (min((arr_0 [i_1]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_2] [i_0])))))));
                                arr_13 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) max(((+(var_6))), ((~(max((arr_8 [i_0] [i_0] [i_1] [i_2]), (((/* implicit */unsigned long long int) var_16))))))));
                    arr_14 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (((((arr_8 [i_1] [i_0] [i_2] [i_1 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) - (max((var_6), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((int) (~(min((var_15), (((/* implicit */unsigned int) var_3)))))));
    var_24 = ((/* implicit */unsigned short) var_16);
}
