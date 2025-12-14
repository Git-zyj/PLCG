/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207035
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) ((long long int) var_8)))) ? (((long long int) ((((/* implicit */_Bool) var_11)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) : (((/* implicit */long long int) ((/* implicit */int) ((max((var_8), (((/* implicit */long long int) var_18)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_4)))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_21 *= ((short) (~(max((var_7), (((/* implicit */long long int) var_13))))));
                                arr_14 [i_4] [(short)18] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) max((max((max((var_19), (((/* implicit */long long int) var_18)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_15))))))), (((long long int) max((-6460212320354938773LL), (31LL))))));
                                arr_15 [i_0] [i_0] [i_0] [0LL] [(short)12] &= ((/* implicit */short) min((((long long int) (!(((/* implicit */_Bool) var_0))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) arr_4 [i_4] [i_3] [i_1]))) && (((/* implicit */_Bool) var_8)))))));
                                arr_16 [i_0] [i_1] [i_2 + 2] [i_3] [i_1] = arr_4 [i_0] [i_0] [i_0];
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_5)))))) ? ((~(min((arr_5 [i_0] [i_1] [i_1]), (((/* implicit */long long int) arr_1 [i_1])))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) (!(((/* implicit */_Bool) var_12)))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) ((short) max((6460212320354938773LL), (1125899906842623LL))));
}
