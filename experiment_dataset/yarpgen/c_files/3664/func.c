/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3664
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) ((((0U) - (((/* implicit */unsigned int) var_1)))) != (var_10)));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_2)), (var_15))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) (short)-32758)), (-4)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_18)) >= (var_15))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) 0)) : (848637322U))))))));
        arr_9 [i_1] = ((/* implicit */short) arr_0 [9ULL]);
        arr_10 [23ULL] &= ((((/* implicit */int) var_11)) % (((min((arr_7 [i_1]), (((/* implicit */int) var_9)))) + (max((((/* implicit */int) arr_1 [i_1])), (2))))));
        arr_11 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_10) : (0U)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) + (2836237426716146997ULL)))) ? (min((0ULL), (((/* implicit */unsigned long long int) var_15)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_5 [i_1]))))));
        arr_12 [i_1] [i_1] = ((/* implicit */long long int) (~(((arr_0 [i_1]) % ((+(848637326U)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        arr_15 [i_2] = ((/* implicit */unsigned int) var_5);
        arr_16 [11LL] = (((!(((/* implicit */_Bool) var_6)))) ? (((((/* implicit */_Bool) var_13)) ? (arr_0 [i_2]) : (3806293091U))) : (var_13));
        arr_17 [(unsigned short)5] = ((/* implicit */short) ((((/* implicit */_Bool) 4294967282U)) && ((_Bool)1)));
        arr_18 [i_2] = ((/* implicit */long long int) (+(arr_14 [i_2] [i_2])));
        arr_19 [i_2] |= ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_2] [i_2])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))));
    }
    var_19 = ((/* implicit */int) var_9);
}
