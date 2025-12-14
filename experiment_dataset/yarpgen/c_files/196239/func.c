/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196239
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) var_2);
        var_14 = (-(var_1));
        /* LoopNest 3 */
        for (short i_1 = 3; i_1 < 16; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 15; i_2 += 4) 
            {
                for (short i_3 = 2; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_15 = ((-9031718448383524938LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_1 + 2]))));
                        var_16 = (+(((((/* implicit */_Bool) (short)-15519)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0]))) : (arr_2 [i_0]))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (arr_4 [i_0] [i_0]) : (((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))));
        arr_13 [i_0] = ((/* implicit */long long int) arr_1 [i_0] [i_0]);
    }
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) /* same iter space */
    {
        var_18 = min((1388335789384299676LL), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_4] [2LL]))) + (min((1388335789384299676LL), (arr_4 [i_4] [i_4]))))));
        var_19 = ((/* implicit */long long int) ((short) arr_1 [i_4] [i_4]));
    }
    for (long long int i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
    {
        arr_19 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_5] [i_5])) ? (max((((/* implicit */long long int) arr_8 [i_5] [i_5] [i_5])), (min((-1388335789384299676LL), (1311082397998575237LL))))) : (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) 8363333546029519612LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-15279))) : (2966914276809930124LL))) : (-2966914276809930124LL)))));
        arr_20 [i_5] = ((/* implicit */short) ((var_6) - (((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) var_7))))) ? (((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (arr_4 [i_5] [i_5]) : (-6706763195916517332LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-13975)))))));
    }
    var_20 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((var_7), ((short)8191))))) / (var_11)));
}
