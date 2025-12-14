/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245717
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        arr_4 [i_0] = ((/* implicit */_Bool) ((((-7687103707699251611LL) + (9223372036854775807LL))) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 3708336243657602641LL))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (unsigned short)65535))));
        var_19 ^= ((/* implicit */signed char) ((var_7) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [2U] [i_1])))));
        arr_8 [i_1] = ((signed char) arr_6 [i_1] [i_1]);
    }
    /* vectorizable */
    for (short i_2 = 2; i_2 < 18; i_2 += 4) 
    {
        var_20 = ((/* implicit */unsigned int) arr_9 [i_2] [i_2]);
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [(_Bool)0] [i_2 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [5ULL] [i_2 + 1]))) : (arr_9 [i_2 - 2] [i_2 - 2])));
    }
    var_22 = ((/* implicit */short) (~(((/* implicit */int) ((((var_10) ? (((/* implicit */int) (unsigned char)196)) : (((/* implicit */int) var_15)))) <= (((/* implicit */int) (!(var_6)))))))));
}
