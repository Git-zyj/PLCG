/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247599
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(short)10] [i_0] |= ((/* implicit */_Bool) var_14);
                var_19 = ((/* implicit */unsigned short) var_5);
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 1) 
                        {
                            {
                                var_20 |= (~(min(((-(((/* implicit */int) var_1)))), (((/* implicit */int) var_7)))));
                                var_21 = ((/* implicit */short) (-(((/* implicit */int) var_1))));
                                var_22 = ((/* implicit */long long int) max((min(((~(((/* implicit */int) (unsigned short)63262)))), (((/* implicit */int) var_5)))), ((~(((/* implicit */int) (signed char)8))))));
                                var_23 |= ((/* implicit */unsigned short) min(((-(((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) min((max((((/* implicit */unsigned short) var_7)), (var_0))), (((/* implicit */unsigned short) (unsigned char)228)))))));
                                var_24 = ((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_10 [i_0] [i_1] [i_2] [i_3] [i_4])))), (min((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_16)))), (min((((/* implicit */int) (short)0)), (var_13)))))));
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */signed char) var_18);
                var_26 = ((/* implicit */unsigned short) var_10);
            }
        } 
    } 
    var_27 = ((/* implicit */int) min((((/* implicit */unsigned short) var_1)), (max((((/* implicit */unsigned short) (short)0)), (var_8)))));
}
