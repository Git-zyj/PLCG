/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232398
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
    var_11 = ((((long long int) var_4)) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_7), (var_4)))) && (((/* implicit */_Bool) 4872298970925391534LL)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [2LL] [i_0] [i_0] = ((long long int) ((-5659179086204324980LL) & (arr_4 [i_0] [i_1] [i_1 - 4] [i_0])));
                    arr_8 [i_1] [11LL] = ((long long int) arr_5 [9LL] [i_0 + 1]);
                }
                for (long long int i_3 = 0; i_3 < 15; i_3 += 1) /* same iter space */
                {
                    var_12 = ((/* implicit */long long int) max((var_12), (min((-8059757223158790164LL), (((max((-3021619273683665647LL), (-9223372036854775801LL))) * (((arr_3 [i_3] [5LL] [i_3]) / (arr_6 [i_3] [i_1])))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 3; i_4 < 12; i_4 += 1) 
                    {
                        for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (((+(((/* implicit */int) (!(((/* implicit */_Bool) -1147154620347756965LL))))))) & (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_4 [i_5] [i_1] [i_3] [i_5]), (var_6)))))))));
                                arr_19 [i_0] [i_0] [14LL] [i_4] [i_0] = ((min((arr_14 [i_1 - 1] [i_1 - 2] [i_1 - 2] [i_4 - 3] [14LL]), (arr_13 [i_1 - 2] [i_1 - 3] [i_3] [i_4 - 2] [3LL]))) / (min((((((/* implicit */_Bool) var_1)) ? (var_4) : (-8149637446323232166LL))), (((var_8) % (var_7))))));
                            }
                        } 
                    } 
                    arr_20 [i_1] = ((/* implicit */long long int) ((var_1) <= (min((8149637446323232166LL), (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0] [i_1 - 4] [i_3] [i_3]) : (arr_3 [i_0] [i_0] [i_3])))))));
                }
                for (long long int i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                {
                    var_14 = ((((/* implicit */_Bool) (((~(8149637446323232185LL))) - ((+(var_1)))))) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_0 - 1] [10LL])) ? (((((/* implicit */_Bool) arr_3 [i_0] [i_1 - 4] [i_6])) ? (var_6) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((var_2) > (var_5))))))) : (var_0));
                    /* LoopNest 2 */
                    for (long long int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
                        {
                            {
                                var_15 = -7018768002929703284LL;
                                var_16 = ((/* implicit */long long int) max((var_16), (arr_21 [i_0] [i_0] [2LL])));
                                arr_30 [i_0] [i_0] [i_0] [i_6] [i_6] [i_8] [i_8] = var_5;
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_9 = 0; i_9 < 15; i_9 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */long long int) min((var_17), ((~(((-6554434230587523949LL) / (var_3)))))));
                    arr_33 [i_9] [i_9] = ((((((long long int) -666969364093337955LL)) + (9223372036854775807LL))) << (((((arr_3 [i_0] [i_0] [12LL]) + (2130428624590410035LL))) - (39LL))));
                }
                var_18 = ((/* implicit */long long int) min((var_18), (arr_23 [i_0] [10LL])));
                var_19 ^= ((long long int) ((((/* implicit */_Bool) ((long long int) 7456976600615060418LL))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_9) < (arr_12 [i_0] [i_0] [i_1] [i_1 - 4]))))) : (((((/* implicit */_Bool) var_5)) ? (-1205749342017151325LL) : (var_10)))));
            }
        } 
    } 
}
