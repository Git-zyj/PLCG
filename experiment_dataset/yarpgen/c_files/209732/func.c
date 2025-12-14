/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209732
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209732 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209732
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((_Bool) (((((((~(2147483647))) + (2147483647))) + (2147483647))) << (((((/* implicit */int) arr_6 [i_1])) << (((var_5) - (2786598666313515668ULL))))))));
                            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((long long int) 7442718441376142286ULL));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1] [i_1]);
                arr_10 [i_1] [7ULL] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_4 [i_1] [i_1] [i_1]) + (9223372036854775807LL))) << ((((((~(arr_2 [i_0] [i_1] [i_1]))) + (2585638783930032118LL))) - (57LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (1975412701695145073ULL) : (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1] [i_0]))))) ? ((+(arr_7 [i_1] [(short)11] [i_1] [(short)11] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned long long int) (+((-2147483647 - 1)))))));
                arr_11 [i_0] [i_1] [i_1] = arr_1 [i_0];
                var_19 = ((/* implicit */unsigned short) min((((/* implicit */int) (!(((/* implicit */_Bool) min((2147483647), (((/* implicit */int) arr_6 [i_0])))))))), (arr_5 [i_0] [i_0] [i_1])));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (short)-740)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) ? (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_1)))) & ((-(((/* implicit */int) var_12))))))) : ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_4))))) : (max((var_8), (((/* implicit */long long int) var_4))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_3)) ? (var_3) : (((var_15) + (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (var_13)));
}
