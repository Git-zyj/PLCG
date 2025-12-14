/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198318
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198318 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198318
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_11 = ((/* implicit */long long int) min((var_11), ((-(((long long int) var_3))))));
        var_12 = ((((/* implicit */_Bool) -5797869810922241644LL)) ? (arr_2 [i_0] [15LL]) : (-4778613040886184741LL));
        arr_3 [13LL] = -154793472351665290LL;
    }
    for (long long int i_1 = 2; i_1 < 17; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 1; i_2 < 16; i_2 += 3) 
        {
            for (long long int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_2] [4LL] [i_2] = -154793472351665290LL;
                    var_13 = ((long long int) ((arr_10 [i_1 - 2] [i_2 + 2] [i_2]) != (max(((-9223372036854775807LL - 1LL)), (-4349047334568124754LL)))));
                    var_14 = ((/* implicit */long long int) min((var_14), (-872777326800151970LL)));
                    arr_14 [i_2] [i_2] = ((max((arr_10 [i_1] [i_1] [i_2]), (arr_6 [i_1 - 1] [i_2 + 2]))) >> ((((-((-(8161668347401661055LL))))) - (8161668347401661023LL))));
                }
            } 
        } 
        var_15 = max((((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (43809277994533219LL)))) ? (((4611685984067649536LL) - (-2546897940609230985LL))) : ((~(arr_1 [i_1]))))), (-1369817629272404890LL));
        var_16 ^= ((long long int) ((long long int) ((long long int) arr_7 [2LL])));
    }
    /* LoopNest 3 */
    for (long long int i_4 = 0; i_4 < 25; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 25; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 25; i_6 += 4) 
            {
                {
                    var_17 = ((long long int) ((4530363141365329905LL) << (((((-1LL) + (53LL))) - (52LL)))));
                    var_18 -= ((((/* implicit */_Bool) -4611685984067649536LL)) ? (((max(((-9223372036854775807LL - 1LL)), (0LL))) >> (((-348982607039152703LL) + (348982607039152735LL))))) : (((((/* implicit */_Bool) arr_16 [i_5] [i_6])) ? ((-9223372036854775807LL - 1LL)) : (arr_16 [i_6] [i_4]))));
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((arr_16 [i_4] [i_4]) / (154793472351665289LL))) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775768LL))) + (97LL)))))) || (((/* implicit */_Bool) ((long long int) -2643873365573058686LL)))));
                }
            } 
        } 
    } 
}
