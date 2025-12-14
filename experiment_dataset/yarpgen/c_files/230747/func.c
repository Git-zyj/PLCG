/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230747
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
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [(short)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1489))) : (4590322719555838577LL)))))) ? (((long long int) 4294967293U)) : ((-((((_Bool)1) ? (245691026656865085LL) : (((/* implicit */long long int) 3310212048U))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_4] = ((/* implicit */short) max((((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)36)) - (((/* implicit */int) (unsigned short)63819)))) * (((((/* implicit */int) var_13)) / (((/* implicit */int) (short)-11293))))))), (884336452U)));
                                var_16 *= (short)-13433;
                            }
                        } 
                    } 
                    arr_15 [i_0 + 1] [11LL] [i_1] = ((/* implicit */int) var_15);
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) < (1514666441U)))))));
    var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)16404)), (var_11)));
}
