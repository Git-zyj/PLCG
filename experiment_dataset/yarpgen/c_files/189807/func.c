/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189807
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
    var_16 *= ((/* implicit */unsigned short) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            {
                arr_6 [(unsigned short)0] [i_0] [6U] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [4U] [i_0])) && (((/* implicit */_Bool) arr_3 [i_0]))))) == (((/* implicit */int) (unsigned short)60959)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) arr_13 [i_3] [(unsigned short)9] [i_3] [i_3] [(unsigned short)9] [i_3] [(unsigned short)9]);
                                arr_15 [i_0] [i_1] [(short)2] [i_3] [i_3] &= ((/* implicit */unsigned short) 1007675014U);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
