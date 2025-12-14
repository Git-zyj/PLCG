/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201877
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
    var_12 = ((/* implicit */unsigned char) var_1);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] |= ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)10889))) + (arr_1 [i_0])));
        arr_4 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) 2147483647)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
        arr_5 [i_0] [i_0] |= ((/* implicit */signed char) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        arr_8 [i_1] [2LL] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_1 - 2]))));
        arr_9 [(unsigned short)15] = ((/* implicit */long long int) (+(var_4)));
    }
    var_13 = ((/* implicit */unsigned int) ((unsigned short) var_11));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) -2147483630)) < (6ULL)));
        arr_14 [i_2] = ((/* implicit */unsigned short) -2147483630);
        arr_15 [i_2] [(signed char)18] &= ((/* implicit */unsigned long long int) ((_Bool) arr_12 [14U]));
    }
}
