/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196553
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
    var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) ((short) (unsigned char)26)))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_6 [(short)2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)0))));
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 7; i_4 += 3) 
                        {
                            {
                                var_21 = var_9;
                                arr_14 [5U] [7U] [(unsigned char)7] [i_2] [6U] = (unsigned char)109;
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
