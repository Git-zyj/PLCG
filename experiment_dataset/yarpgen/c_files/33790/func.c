/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33790
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 12; i_2 += 1) 
            {
                {
                    var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (((((/* implicit */long long int) var_7)) | (var_11)))))) ? (((((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [(short)10])) ^ (((/* implicit */int) var_1)))) : ((((+(((/* implicit */int) (short)10981)))) - (((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */int) arr_3 [i_0])) + (29968))) - (2)))))))));
                    var_15 = ((/* implicit */short) 0U);
                    var_16 = ((/* implicit */unsigned int) var_12);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (short)-32764))));
                                var_18 -= ((/* implicit */unsigned int) (short)7752);
                                var_19 |= (short)32753;
                                arr_15 [(_Bool)1] [i_1] [i_2] = var_7;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_20 -= var_0;
}
