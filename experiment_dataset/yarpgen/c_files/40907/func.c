/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40907
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) var_6);
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                        {
                            {
                                var_18 *= ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)30)), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */int) ((signed char) (unsigned char)106))) : (((/* implicit */int) ((short) (unsigned char)30)))));
                                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (max((((/* implicit */int) arr_8 [i_1 - 1] [i_1] [i_1] [i_4] [i_4] [i_4])), (var_3))) : (((/* implicit */int) max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned short) var_0)))))))))));
                                var_20 += ((/* implicit */unsigned int) var_10);
                                var_21 = ((/* implicit */signed char) (~(min((((/* implicit */int) arr_2 [i_1 + 1] [i_1 - 1] [i_1 - 2])), (594292903)))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1 - 2] [i_0] |= ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_1 [i_2])), (((long long int) (+(((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((unsigned long long int) var_16));
    var_23 = ((/* implicit */unsigned short) var_7);
}
