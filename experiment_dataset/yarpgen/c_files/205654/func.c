/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205654
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
    var_12 = ((/* implicit */unsigned short) ((short) var_11));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [4U] &= ((/* implicit */long long int) var_1);
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned short) var_8))))) ? (((/* implicit */int) arr_12 [i_4] [i_0] [i_4 + 3] [(unsigned short)11] [i_4])) : (((/* implicit */int) var_3)))) ^ (((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [2U]))))) ? ((~(-1572477751))) : (((/* implicit */int) arr_10 [12] [i_1] [i_2] [i_1]))))));
                                var_14 = ((/* implicit */_Bool) var_6);
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_0 + 1] [3U])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_0 - 2] [i_0] [i_1] [8ULL] [i_1])) : (((/* implicit */int) var_4)))) : (((/* implicit */int) arr_7 [i_1] [i_1] [i_0 + 1] [i_0 + 2])))));
                arr_15 [i_0] = ((/* implicit */unsigned char) (+((((!(((/* implicit */_Bool) var_10)))) ? (var_10) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_4)))))))));
            }
        } 
    } 
}
