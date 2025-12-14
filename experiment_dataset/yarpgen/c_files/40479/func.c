/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40479
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
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 13; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_4 + 2] [i_3]))) : (var_11)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) var_1)) >> (((10145375809496102256ULL) - (10145375809496102231ULL)))))), (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))))))));
                                arr_13 [i_0] [i_1] [i_4] [i_3] [i_3] [i_0] = ((4009460756795472243LL) >> (((((((/* implicit */_Bool) var_8)) ? (13722016878416213243ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_1] [i_2] [i_3] [i_4 - 1] [i_0] [(short)1]))))) - (13722016878416213223ULL))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((short) (-(var_12))))), (((((/* implicit */_Bool) arr_9 [i_0] [9] [i_2] [i_0])) ? (arr_9 [i_2] [i_2] [11ULL] [i_0]) : (arr_9 [i_1] [i_1] [i_2] [i_2])))));
                    arr_14 [i_0] [i_1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_0] [i_1])))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) var_8);
}
