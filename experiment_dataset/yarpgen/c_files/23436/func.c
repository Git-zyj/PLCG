/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23436
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
    var_17 = ((((/* implicit */_Bool) (-(((var_11) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) (!(((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)252))))))) : (((/* implicit */int) (((+(528482304))) == (((/* implicit */int) var_1))))));
    var_18 = ((/* implicit */int) var_6);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) (-((+((-(-528482324))))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            {
                                var_20 = ((((/* implicit */_Bool) ((var_3) ? (((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) var_15)))) : (((/* implicit */int) max((var_1), (((/* implicit */short) (unsigned char)127)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : ((~(min((((/* implicit */unsigned int) var_13)), (1668521136U))))));
                                var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned int) 528482296)) > (4294967295U)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
