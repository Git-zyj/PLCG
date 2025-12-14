/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192638
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
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 17; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? ((-(var_10))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_16)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 19; i_2 += 1) 
                {
                    for (unsigned short i_3 = 3; i_3 < 19; i_3 += 3) 
                    {
                        {
                            var_21 ^= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_5)) ? (var_18) : (((/* implicit */int) var_4))))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_13)), (var_3)))), (max((((/* implicit */long long int) var_6)), (var_11)))))), (max((min((16707901298478920488ULL), (var_17))), (((/* implicit */unsigned long long int) var_6)))))))));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned int) max((((long long int) (unsigned short)56470)), (((/* implicit */long long int) max((var_3), (((/* implicit */unsigned int) (-(((/* implicit */int) var_7))))))))));
                arr_11 [i_0] [i_1] = ((/* implicit */long long int) var_14);
            }
        } 
    } 
    var_24 = var_6;
    var_25 = ((/* implicit */short) var_11);
}
