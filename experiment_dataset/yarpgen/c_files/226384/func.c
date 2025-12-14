/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226384
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
    var_14 = min((((unsigned long long int) ((unsigned long long int) var_3))), (((/* implicit */unsigned long long int) var_10)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) 2147483647)) : (18446744073709551603ULL)))) ? (max((((/* implicit */unsigned long long int) -2061646922)), (var_11))) : ((-(var_11))))));
        var_15 = (~((+(arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 4; i_1 < 11; i_1 += 1) 
        {
            arr_7 [i_1 - 3] = ((/* implicit */unsigned long long int) ((int) var_4));
            arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -1883914469)) && (((/* implicit */_Bool) (~(2061646932))))));
            var_16 = ((/* implicit */int) var_13);
        }
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            arr_11 [7] [i_0] [i_2] = ((/* implicit */unsigned long long int) 58720256);
            arr_12 [i_0] [i_2] = ((/* implicit */int) 16175439258829124201ULL);
        }
    }
    var_17 = (~(2147483647));
}
