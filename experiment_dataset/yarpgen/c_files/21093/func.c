/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21093
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (long long int i_2 = 3; i_2 < 15; i_2 += 3) 
            {
                {
                    arr_6 [i_0] = min((arr_3 [i_2 - 3]), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775799LL)) ? (var_11) : (arr_4 [i_2])))) ? ((-(-9223372036854775786LL))) : ((~(var_11))))));
                    var_16 = 2305702271725338624LL;
                    arr_7 [i_0] [11LL] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_10)))))));
                    var_17 &= -1152921504606846976LL;
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (arr_9 [i_0] [i_0] [i_0])));
                        var_19 = ((((/* implicit */_Bool) -9223372036854775789LL)) ? (-9223372036854775797LL) : (2251799809490944LL));
                        arr_10 [3LL] [i_1] [i_1] [i_2] [15LL] = ((((14LL) != ((-9223372036854775807LL - 1LL)))) ? (((long long int) arr_4 [i_1])) : (((/* implicit */long long int) ((/* implicit */int) ((var_10) >= (-9223372036854775806LL))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (long long int i_4 = 1; i_4 < 8; i_4 += 3) 
    {
        var_20 = ((/* implicit */long long int) min((var_20), ((+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_1) : (var_12)))) ? (((9223372036854775807LL) & (var_0))) : (9223372036854775797LL)))))));
        var_21 -= arr_1 [i_4 + 3];
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        var_22 = max(((~(((((var_3) + (9223372036854775807LL))) << (((arr_9 [0LL] [4LL] [i_5]) - (3441641303113763057LL))))))), ((-(-9223372036854775797LL))));
        /* LoopNest 3 */
        for (long long int i_6 = 1; i_6 < 8; i_6 += 4) 
        {
            for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                {
                    {
                        var_23 = ((/* implicit */long long int) min((var_23), (9223372036854775807LL)));
                        var_24 *= ((/* implicit */long long int) (((~(arr_18 [i_6 + 1] [i_7] [i_8]))) == (max((arr_12 [i_6 + 1] [4LL]), (arr_18 [i_6 - 1] [i_7] [i_8])))));
                        var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_12 [i_6 - 1] [i_6 + 2]))))));
                        arr_22 [i_6] [5LL] [9LL] [1LL] = ((((((/* implicit */_Bool) arr_21 [3LL] [i_6 + 1] [i_6] [i_6 - 1])) ? (arr_21 [i_6 + 1] [i_6 + 2] [i_6 + 2] [i_6 + 1]) : (arr_9 [i_6 + 1] [i_6 + 2] [0LL]))) / (((var_1) & (var_13))));
                        var_26 = (-(var_14));
                    }
                } 
            } 
        } 
    }
    var_27 = var_5;
}
