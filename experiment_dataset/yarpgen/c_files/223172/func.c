/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223172
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) var_3);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) var_17);
                                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_15)))) && (((/* implicit */_Bool) (unsigned short)45323))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((((/* implicit */int) var_15)) & (((((/* implicit */int) var_12)) ^ (((/* implicit */int) var_4)))))) >> (((max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_16)), (var_10)))), (((unsigned int) var_11)))) - (65508U))))))));
                    arr_12 [i_0] [i_0] [i_2] = ((/* implicit */signed char) var_7);
                }
            } 
        } 
    } 
    var_24 = var_6;
}
