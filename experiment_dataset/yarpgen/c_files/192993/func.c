/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192993
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
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_19 -= ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-96))));
                    arr_11 [i_1] [i_1 + 1] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned char)25);
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_16 [i_1] [i_1] [i_2] [(short)0] [i_3] [i_1] = ((/* implicit */unsigned char) var_10);
                                var_20 = ((/* implicit */_Bool) (-(((((((/* implicit */long long int) 3217052504U)) / (-6498488276160212027LL))) * (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max((((/* implicit */short) var_10)), ((short)-5419))))));
                            }
                        } 
                    } 
                    var_22 = var_6;
                    var_23 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 19; i_5 += 1) 
    {
        for (unsigned short i_6 = 3; i_6 < 17; i_6 += 2) 
        {
            {
                arr_22 [i_5] = ((/* implicit */unsigned short) min((max((var_9), (((/* implicit */signed char) (_Bool)1)))), (var_5)));
                var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((4294967295U) * (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
                var_25 = ((/* implicit */_Bool) (~(((((/* implicit */int) (short)21998)) * (((/* implicit */int) (_Bool)1))))));
                arr_23 [i_5] [i_5] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */int) (_Bool)0)), (((((/* implicit */_Bool) (unsigned short)58777)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
            }
        } 
    } 
    var_26 |= ((/* implicit */unsigned int) var_10);
}
