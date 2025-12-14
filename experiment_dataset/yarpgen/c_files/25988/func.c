/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25988
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
    var_10 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((~(2656528780U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32761))))))));
    var_11 = ((/* implicit */unsigned char) (+((~(-1781384360)))));
    var_12 = min((min((((/* implicit */unsigned int) (unsigned char)62)), (var_6))), (((/* implicit */unsigned int) ((int) min((var_5), (((/* implicit */long long int) var_1)))))));
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_13 *= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (arr_3 [(short)5])))))) ? (arr_1 [i_0]) : (((/* implicit */long long int) (((-(arr_2 [i_1] [i_0] [i_1]))) << (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0] [5LL])) || (((/* implicit */_Bool) arr_1 [i_0]))))))))));
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_3] |= ((/* implicit */signed char) var_4);
                            var_14 += ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [22])) ? (-2147483635) : (1781384360)))) & (4294967295U)))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */long long int) var_3);
            }
        } 
    } 
}
