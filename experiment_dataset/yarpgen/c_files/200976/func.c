/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200976
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
    var_15 = var_10;
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_0] [7LL] = arr_3 [i_2 - 1] [5LL] [5LL];
                    var_16 = var_12;
                    /* LoopSeq 4 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        var_17 = (+(min((-4205695866345080395LL), (8885636664199023913LL))));
                        var_18 = min((min((var_8), (arr_2 [i_2 - 1] [i_2 + 1]))), (((((/* implicit */_Bool) var_3)) ? (7850425478262317051LL) : (arr_2 [i_2 + 1] [i_2 + 1]))));
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min(((~(var_2))), (min((arr_2 [i_1] [i_3]), (6211773778381658348LL))))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                    {
                        var_20 &= ((((/* implicit */_Bool) (~(6211773778381658348LL)))) ? (144115188075855871LL) : ((+(arr_11 [i_0] [i_0] [11LL] [i_2] [i_2 - 1] [i_4]))));
                        arr_13 [i_4] = ((((/* implicit */_Bool) (+(var_2)))) ? (((((/* implicit */_Bool) -9161857651357528209LL)) ? (var_5) : (arr_12 [i_0] [i_1] [i_4] [i_4]))) : ((+(var_2))));
                        arr_14 [i_0] [i_4] [6LL] [i_2 - 1] [i_4] = arr_10 [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1];
                        var_21 = var_11;
                    }
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
                    {
                        var_22 = ((((/* implicit */_Bool) var_9)) ? ((~(5514670589349183191LL))) : (-4451773841009599747LL));
                        var_23 &= ((((/* implicit */_Bool) ((var_3) >> (((-6211773778381658348LL) + (6211773778381658387LL)))))) ? (arr_5 [i_2 - 1] [i_2 + 1] [i_2 + 1] [7LL]) : (((((/* implicit */_Bool) var_14)) ? (-6211773778381658351LL) : (arr_16 [6LL] [i_1] [12LL] [i_1] [3LL] [i_5]))));
                    }
                    for (long long int i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        var_24 = max((var_12), (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [10LL] [i_0] [i_0] [i_0])) ? (-6211773778381658324LL) : (var_0))));
                        arr_19 [i_1] = ((((/* implicit */_Bool) var_0)) ? (min((min((var_14), (-6211773778381658361LL))), (((/* implicit */long long int) ((var_4) >= (var_14)))))) : ((-9223372036854775807LL - 1LL)));
                    }
                    var_25 = ((/* implicit */long long int) ((var_4) == (((((/* implicit */_Bool) 6211773778381658336LL)) ? (arr_12 [i_2] [i_0] [i_0] [i_2 - 1]) : (arr_12 [i_2] [i_0] [i_0] [i_2 - 1])))));
                }
            } 
        } 
    } 
}
