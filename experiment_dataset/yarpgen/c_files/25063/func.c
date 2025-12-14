/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25063
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
    var_13 = ((/* implicit */long long int) var_12);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */unsigned long long int) -470213687593125404LL)) : (max(((+(arr_2 [i_0]))), (18446744073709551615ULL)))));
        arr_4 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)122))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            arr_8 [i_1] = ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)131)), (-260945930)))) ? (1ULL) : (14172010841992680852ULL));
            arr_9 [i_1] [0ULL] = ((/* implicit */long long int) max((549755813887ULL), (((/* implicit */unsigned long long int) -3107748791606463688LL))));
            arr_10 [i_0] [(signed char)6] [(signed char)6] = ((/* implicit */unsigned char) ((int) min((((((/* implicit */_Bool) (-2147483647 - 1))) ? (13433694993478655011ULL) : (((/* implicit */unsigned long long int) -8783593377368286279LL)))), (((/* implicit */unsigned long long int) var_6)))));
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_13 [(unsigned char)8] [(unsigned char)8] = ((/* implicit */unsigned char) var_7);
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned long long int) -1159665912);
    }
}
