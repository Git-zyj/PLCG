/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207372
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
    var_18 |= ((/* implicit */short) var_2);
    var_19 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (_Bool)1)), (392598757U)));
    var_20 -= ((/* implicit */unsigned char) var_13);
    var_21 = ((/* implicit */_Bool) (signed char)-1);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned char) (signed char)-1)), (((unsigned char) arr_13 [i_3 - 1] [i_1] [(_Bool)1] [i_2] [(short)18] [(_Bool)1]))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)12514)) : (((/* implicit */int) (_Bool)1))))), (4294967295U)))) : (((min((((/* implicit */long long int) var_8)), (-8814973953824581257LL))) * (((/* implicit */long long int) ((((/* implicit */int) var_13)) | (((/* implicit */int) arr_9 [i_1] [i_3] [i_2])))))))));
                                var_24 = ((/* implicit */signed char) var_5);
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)36)) ? (((int) ((unsigned short) 2150479215040074670ULL))) : (((/* implicit */int) var_0))));
                    arr_14 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) ((long long int) ((signed char) 4294967295U)));
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) arr_5 [(short)6] [i_1]))));
                }
            } 
        } 
    } 
}
