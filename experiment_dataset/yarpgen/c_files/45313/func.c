/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45313
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
    var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? ((-((-(((/* implicit */int) var_12)))))) : (((/* implicit */int) (unsigned short)15))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        arr_3 [5ULL] = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_15)))));
    }
    var_19 = var_9;
    var_20 &= ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((~(16952410506190764719ULL))) > (((unsigned long long int) var_7)))))) : ((-(11038548703750392938ULL))));
}
