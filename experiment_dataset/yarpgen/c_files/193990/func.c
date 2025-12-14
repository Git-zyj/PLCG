/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193990
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 17; i_2 += 1) 
                {
                    for (unsigned short i_3 = 2; i_3 < 15; i_3 += 3) 
                    {
                        for (signed char i_4 = 2; i_4 < 16; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_13 [i_0] [i_4] [i_2] [i_3] [i_4] [i_2]), (-1268873706)))))))));
                                var_12 &= ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)53888)), (-1268873706)));
                                arr_16 [i_2] [i_1] [i_2] [i_3] [i_3] [i_4] [i_2] = ((/* implicit */unsigned long long int) 1332937639);
                            }
                        } 
                    } 
                } 
                var_13 += ((/* implicit */short) var_0);
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 1268873705)) ? (((/* implicit */int) (short)-13417)) : (((/* implicit */int) (unsigned short)1560))))));
    var_15 = ((/* implicit */unsigned char) ((((var_6) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (893915215))) : (303675819))) & (-2147483642)));
}
