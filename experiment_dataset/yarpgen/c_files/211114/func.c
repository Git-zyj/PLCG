/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211114
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
    var_14 |= ((((/* implicit */long long int) ((/* implicit */int) var_2))) - (((max((-3374773246296685743LL), (((/* implicit */long long int) (signed char)40)))) - (((/* implicit */long long int) ((/* implicit */int) (signed char)40))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (int i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])), (((arr_10 [i_3] [i_3] [i_0] [i_0] [i_0] [i_3]) ? (((((/* implicit */int) var_2)) >> (((-317654137) + (317654167))))) : (((/* implicit */int) max((arr_11 [i_0] [i_0] [i_2]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0])))))))));
                                arr_15 [i_1] = min((((/* implicit */unsigned long long int) arr_7 [i_1] [i_1] [i_3] [i_4])), (((((/* implicit */_Bool) arr_4 [i_3 + 1] [i_4 - 2] [i_4 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1))));
                            }
                        } 
                    } 
                } 
                var_16 = (!(((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_0] [i_0])));
                arr_16 [i_1] [i_1] [i_1] = (((((~(((((/* implicit */int) arr_8 [i_0] [i_0])) % (((/* implicit */int) arr_8 [i_0] [i_0])))))) + (2147483647))) >> (((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) - (86))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        for (signed char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            {
                var_17 = ((/* implicit */_Bool) var_11);
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_18 = (_Bool)1;
                            arr_28 [i_7] [i_7] [i_6] [i_7] = var_13;
                            arr_29 [i_5] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */unsigned long long int) arr_25 [i_7] [i_7] [i_7] [i_7]);
                            arr_30 [i_5] [i_7] [i_7] [i_7] = ((var_9) == (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 3678954877U)), (9223372036854775783LL)))));
                        }
                    } 
                } 
                arr_31 [i_5] = ((((/* implicit */_Bool) arr_8 [i_5] [i_5])) ? (((((/* implicit */_Bool) max((arr_11 [i_5] [i_5] [i_6]), (((/* implicit */unsigned short) arr_4 [i_5] [i_5] [i_5]))))) ? (min((((/* implicit */unsigned long long int) var_4)), (arr_23 [i_6] [10LL]))) : (((/* implicit */unsigned long long int) var_13)))) : (((((/* implicit */_Bool) arr_7 [i_5] [i_6] [i_5] [i_5])) ? (arr_13 [i_5] [i_5] [i_5] [i_5] [i_6] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_6] [i_6] [i_5]))))));
                arr_32 [i_6] = ((/* implicit */short) min((((/* implicit */int) ((((arr_20 [i_5]) ? (var_9) : (arr_18 [i_5]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_5] [i_5] [i_5] [i_5] [i_5])) : (((/* implicit */int) var_2)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)189)) <= (((/* implicit */int) var_2)))))))));
                var_19 &= ((/* implicit */unsigned char) (-(((/* implicit */int) var_7))));
            }
        } 
    } 
}
