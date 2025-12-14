/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44651
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
    var_16 = ((/* implicit */unsigned long long int) var_12);
    var_17 = ((/* implicit */signed char) 7637309594136312900ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) ((long long int) var_0));
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) 7637309594136312900ULL)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            arr_9 [6ULL] [i_0] [6ULL] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_4)) : (7637309594136312900ULL)));
            arr_10 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_13)));
            arr_11 [i_1] = ((/* implicit */unsigned int) ((long long int) var_14));
        }
    }
    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
}
