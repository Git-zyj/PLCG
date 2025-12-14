/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236540
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = (-((((!(((/* implicit */_Bool) arr_3 [i_0])))) ? ((-(arr_3 [i_0]))) : ((~(15501166771784246884ULL))))));
        var_14 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_1 [i_0]) : (var_11))))));
        arr_5 [8ULL] [i_0] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_3 [10ULL]), (arr_2 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        var_15 *= var_3;
        var_16 = (+((-(var_0))));
        arr_8 [2ULL] [i_1] |= (~(arr_7 [i_1] [i_1]));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        var_17 = arr_7 [i_2] [i_2];
        var_18 ^= (~(15501166771784246870ULL));
    }
    var_19 = var_8;
    var_20 = var_1;
    var_21 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    var_22 = max((var_0), ((-(var_8))));
}
