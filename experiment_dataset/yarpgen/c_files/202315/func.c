/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202315
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_2 [i_0]) : ((-9223372036854775807LL - 1LL)))));
        var_13 = var_12;
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                for (long long int i_3 = 3; i_3 < 20; i_3 += 4) 
                {
                    {
                        arr_11 [18LL] [i_1] [i_0] [i_3 + 3] = arr_4 [i_0] [i_2];
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            var_14 = (+(arr_1 [i_3 + 3] [i_3 + 3]));
                            var_15 = var_11;
                        }
                        for (long long int i_5 = 2; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            var_16 = (+((-9223372036854775807LL - 1LL)));
                            var_17 = ((long long int) (!(((/* implicit */_Bool) var_1))));
                            var_18 = ((/* implicit */long long int) max((var_18), (((long long int) arr_13 [i_0] [i_2] [i_2] [i_3] [i_5 + 1]))));
                        }
                        for (long long int i_6 = 2; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            arr_18 [i_0] = ((((/* implicit */_Bool) var_9)) ? (arr_14 [i_6 - 2] [i_1] [i_3 + 2] [i_2] [i_6 + 1] [0LL]) : (arr_14 [i_6 - 2] [i_1] [i_3 + 3] [i_6] [i_1] [i_6]));
                            arr_19 [i_0] [i_1] [i_1] [i_0] [i_0] = ((arr_16 [i_1] [i_2] [i_6]) | (((long long int) -5626709336575864796LL)));
                            var_19 ^= ((((/* implicit */_Bool) var_5)) ? (var_3) : (var_1));
                            var_20 = ((arr_16 [i_3 + 1] [i_3] [i_6 - 1]) << (((arr_16 [i_3 - 2] [i_6 - 1] [i_6 - 2]) - (1748468234643217354LL))));
                            arr_20 [i_0] [i_0] [i_0] [12LL] [12LL] = ((((/* implicit */_Bool) 7382613053836646305LL)) ? (arr_7 [i_6] [i_0] [i_0] [i_3]) : ((-9223372036854775807LL - 1LL)));
                        }
                        for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [5LL] [i_0] = 9223372036854775807LL;
                            var_21 = ((long long int) arr_15 [i_0] [i_3]);
                            var_22 = ((long long int) var_12);
                        }
                    }
                } 
            } 
        } 
        arr_25 [i_0] = ((((/* implicit */_Bool) arr_1 [i_0] [13LL])) ? (((((/* implicit */_Bool) 5626709336575864795LL)) ? (arr_13 [7LL] [i_0] [i_0] [i_0] [1LL]) : (arr_16 [2LL] [i_0] [4LL]))) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]));
    }
    var_23 = ((((/* implicit */_Bool) 0LL)) ? (var_5) : (((var_4) / ((+(var_11))))));
    var_24 = var_3;
    var_25 = ((((/* implicit */_Bool) var_9)) ? (min((min((-4128062379422231599LL), (-8559993690586322528LL))), (var_9))) : (min((9223372036854775807LL), (9223372036854775797LL))));
}
