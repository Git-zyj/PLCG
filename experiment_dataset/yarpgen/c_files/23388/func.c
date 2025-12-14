/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23388
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)218))))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) ((max((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_7) : (5392398116770670371ULL))), (((/* implicit */unsigned long long int) arr_4 [i_1 - 3] [i_1] [i_1])))) | (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_1]))));
                var_11 &= ((/* implicit */int) ((min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_0]))) - (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((unsigned char) (unsigned short)25520))))) / (max((1ULL), (((/* implicit */unsigned long long int) var_0))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned char) (short)-12943);
                var_13 *= ((/* implicit */unsigned char) arr_8 [i_2]);
                var_14 += ((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) arr_11 [i_2] [i_2])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_3])) || (((/* implicit */_Bool) var_0))))))))));
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        {
                            arr_18 [i_5] [i_3] [i_4] [(short)6] [i_4] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) var_3))))));
                            arr_19 [i_2] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */short) (~(((min((7), (((/* implicit */int) var_1)))) & (min((-8), (-7)))))));
                            var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) 18446744073709551615ULL))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) min((2200808352209079493LL), (((/* implicit */long long int) (unsigned short)40712))));
            }
        } 
    } 
    var_17 &= ((/* implicit */short) ((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_0)) : (var_7))), (((/* implicit */unsigned long long int) (unsigned char)52)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
}
