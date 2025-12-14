/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23916
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) ? (var_2) : (1137560876)))) ? (((/* implicit */int) ((_Bool) var_14))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_15)))))))) ? (max((var_15), (((((/* implicit */_Bool) 1048575)) ? (var_7) : (var_14))))) : (((/* implicit */int) var_6))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_15 [i_0] [i_1 - 1] [i_1 + 1] [i_1] [i_1 + 1] = max((((((/* implicit */int) var_17)) >> (((((arr_4 [i_0] [i_0]) ^ (1048556))) - (40336369))))), (((/* implicit */int) max(((_Bool)1), (((_Bool) var_15))))));
                                arr_16 [i_0] = ((_Bool) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_3 [i_0])) : (arr_2 [i_1] [i_0] [i_4])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) min((max(((!(((/* implicit */_Bool) arr_0 [i_2])))), (arr_1 [i_1]))), (var_17))))));
                                var_20 -= arr_17 [i_0] [i_6 - 1] [i_0] [i_0] [i_0] [i_0];
                                arr_22 [i_6] [i_6] [i_0] [i_5] [i_0] [i_0] [i_0] = (((-(((/* implicit */int) min((var_13), ((_Bool)1)))))) - (((arr_5 [i_5] [i_1 + 1] [i_0]) + ((+(1137560876))))));
                            }
                        } 
                    } 
                    var_21 ^= (((_Bool)0) || (((/* implicit */_Bool) ((((var_17) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_0] [i_1])))) - (((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    } 
}
