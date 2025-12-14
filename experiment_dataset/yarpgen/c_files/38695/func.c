/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38695
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
    var_14 = ((/* implicit */short) 0ULL);
    var_15 = var_9;
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) : (18446744073709551610ULL)));
    var_17 = 18446744073709551610ULL;
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned long long int) 4294967276U)) : (5ULL)))) ? (((/* implicit */int) (short)15048)) : (((/* implicit */int) (short)-15027))));
        /* LoopSeq 3 */
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            var_19 |= ((/* implicit */unsigned int) 18446744073709551602ULL);
            arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551610ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-12630))) : (4035731676U)))) ? (((/* implicit */int) (short)-24222)) : (((/* implicit */int) (short)15050))));
            var_20 -= (short)24222;
        }
        for (short i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            arr_10 [i_2] [i_2] = ((/* implicit */unsigned int) (short)15130);
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)15122)) ? (((/* implicit */int) (short)-24240)) : (((/* implicit */int) (short)24237))));
            arr_11 [(short)8] [i_0] |= ((/* implicit */unsigned long long int) (short)26373);
        }
        for (unsigned long long int i_3 = 1; i_3 < 12; i_3 += 4) 
        {
            arr_14 [i_0] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26364))) : (0ULL)))) ? (((/* implicit */int) (short)-26374)) : (((/* implicit */int) (short)-15060))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 259235603U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (0ULL)));
        }
        var_23 = (short)-15131;
    }
}
