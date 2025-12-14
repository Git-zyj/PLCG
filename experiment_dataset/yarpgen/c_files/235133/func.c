/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235133
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
    var_14 ^= ((/* implicit */signed char) ((var_9) + (((/* implicit */unsigned long long int) 16777212U))));
    var_15 = ((/* implicit */unsigned long long int) var_12);
    var_16 = ((/* implicit */_Bool) min((((unsigned char) var_0)), (((/* implicit */unsigned char) ((-952381772) <= (((/* implicit */int) (unsigned char)29)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 13; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1] = var_3;
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                var_17 *= ((/* implicit */_Bool) ((short) ((((/* implicit */long long int) 952381777)) - (-8508755325677978333LL))));
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) max((((1879048192U) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)214)) <= (952381792))))))), (((/* implicit */unsigned int) 952381771)))))));
                                arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)1792))) - ((+((-(-8508755325677978333LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
