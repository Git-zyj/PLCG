/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2000
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
    var_17 = ((/* implicit */unsigned short) -2842642295373036985LL);
    var_18 = ((/* implicit */long long int) ((unsigned long long int) var_10));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_8 [i_0 + 4] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_5 [(short)11] [12LL]))));
                var_19 = ((/* implicit */long long int) var_9);
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [i_0] [i_0] [i_2] [i_3] [i_4 - 1] [i_4] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_2] [i_4])) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) ((unsigned short) -2842642295373036985LL)))))));
                                var_20 = ((/* implicit */_Bool) ((long long int) arr_10 [i_0 + 1] [i_0] [i_0 + 1] [i_0]));
                                var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)2072))) * (arr_9 [i_0] [i_1] [i_0 + 3] [i_3]))))));
                                arr_18 [i_0] [i_0] [i_4] [i_0] [i_0] = ((/* implicit */int) ((unsigned int) ((arr_5 [i_0 + 3] [i_3 + 1]) + (((/* implicit */long long int) ((/* implicit */int) max(((short)2072), ((short)-2072))))))));
                            }
                        } 
                    } 
                } 
                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 + 4])) : (((/* implicit */int) arr_3 [i_0 - 1]))))) ? (((/* implicit */int) arr_12 [12LL] [i_1] [7ULL] [20LL] [i_0])) : (((/* implicit */int) ((511U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)31262))))))));
            }
        } 
    } 
    var_23 = var_8;
}
