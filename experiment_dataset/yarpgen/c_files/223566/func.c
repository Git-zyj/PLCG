/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223566
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            arr_5 [i_0 + 1] = ((33554368U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)-14701))));
            arr_6 [(unsigned char)19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) -2147483622)) : (6861125948754168196LL)));
        }
        arr_7 [i_0] = ((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1]))))) == (((/* implicit */int) min((((((/* implicit */int) var_17)) == (((/* implicit */int) arr_0 [(short)9])))), (arr_2 [i_0 - 1])))));
        arr_8 [i_0 - 3] = ((/* implicit */unsigned short) var_7);
    }
    var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) 131056U)) && (((/* implicit */_Bool) (short)-20687)))))));
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((2147483628) == (-2147483634)))), ((unsigned short)35883)));
}
