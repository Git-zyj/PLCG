/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194629
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
    var_13 = ((/* implicit */signed char) var_12);
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) var_2))));
    var_15 = ((/* implicit */_Bool) ((var_0) ? (min((((/* implicit */long long int) 897514598U)), (5304315781500825002LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))) != (((/* implicit */int) var_0))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned short) ((arr_1 [i_0 + 1]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_1 [i_0 - 1]))));
            arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) < (((/* implicit */int) arr_1 [i_0 - 1]))));
        }
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 - 1])) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1]))));
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) -5304315781500825010LL))));
        }
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            var_19 = ((/* implicit */int) ((5304315781500824992LL) << (((4757850720972556472LL) - (4757850720972556472LL)))));
            arr_14 [i_0 + 1] [(short)15] [4ULL] = ((((((/* implicit */int) (signed char)59)) < (((/* implicit */int) var_4)))) || (((/* implicit */_Bool) (+(var_3)))));
            var_20 = (!(((/* implicit */_Bool) arr_12 [i_0 + 1] [(short)2] [i_3])));
        }
        for (short i_4 = 0; i_4 < 23; i_4 += 3) 
        {
            var_21 *= ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_4] [i_4])) ? (arr_12 [i_0] [0U] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)113))) / (-5304315781500825003LL)))));
            var_22 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (short)-10574)) + (2147483647))) >> (((/* implicit */int) var_1))));
        }
        var_23 = (~(((5304315781500824986LL) / (452402641100463350LL))));
        arr_17 [i_0] = ((/* implicit */long long int) arr_11 [i_0] [i_0 - 1]);
    }
}
