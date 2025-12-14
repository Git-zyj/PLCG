/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200491
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
    var_18 = ((/* implicit */signed char) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) var_11);
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_1 [i_0] [15LL]))));
    }
    for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        arr_4 [i_1] = arr_1 [i_1 - 1] [i_1 - 1];
        arr_5 [i_1] = (+(((/* implicit */int) var_12)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_9 [i_2] [i_2] = max((((/* implicit */unsigned long long int) max((var_0), (((/* implicit */unsigned short) arr_0 [i_2] [(unsigned char)7]))))), (arr_1 [i_2] [i_2]));
        arr_10 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? (((/* implicit */int) min((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2])))) : (((/* implicit */int) (!(var_9))))));
        arr_11 [i_2] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) arr_8 [i_2])), (11979141357898557397ULL))))))));
    }
}
