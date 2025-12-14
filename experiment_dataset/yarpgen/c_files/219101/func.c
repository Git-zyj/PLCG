/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219101
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
    var_11 = ((/* implicit */short) (-(((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)4202)))) + (((/* implicit */int) (unsigned short)60137))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        arr_4 [4] = ((/* implicit */long long int) var_10);
        var_12 = ((/* implicit */short) ((int) var_8));
    }
    var_13 = ((/* implicit */signed char) var_2);
    /* LoopSeq 1 */
    for (short i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        arr_7 [i_1 - 1] = ((/* implicit */_Bool) var_10);
        arr_8 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)255))));
        arr_9 [i_1 + 1] = var_8;
    }
}
