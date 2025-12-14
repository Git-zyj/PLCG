/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217721
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_13 += ((/* implicit */unsigned long long int) ((8796093022207LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-47)))));
        var_14 = ((/* implicit */signed char) ((var_2) | (((/* implicit */long long int) ((int) arr_1 [i_0])))));
        var_15 = ((/* implicit */long long int) min((var_15), (arr_0 [19LL] [i_0])));
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)1966)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_0]) : (var_5)))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned short) var_1);
            var_18 = ((/* implicit */long long int) arr_8 [i_2]);
        }
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_19 = arr_9 [i_3] [i_3];
            var_20 = ((/* implicit */unsigned short) var_12);
            var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */unsigned long long int) arr_9 [i_1] [i_3])) : (16706039162612796164ULL)));
        }
        arr_13 [i_1] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_1 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))));
        var_22 = ((/* implicit */long long int) -1115870744);
        var_23 ^= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -8796093022227LL)))) : (((long long int) var_2)))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_10 [i_4] [i_4] [i_4])) ? (((/* implicit */long long int) arr_10 [13] [i_4] [i_4])) : (arr_11 [i_4] [i_4] [i_4]))) : ((-(8623397070019354793LL))))))));
        var_25 = ((/* implicit */unsigned long long int) var_6);
        var_26 = ((/* implicit */long long int) (~(16706039162612796184ULL)));
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (9223372036854775805LL) : (((/* implicit */long long int) ((int) var_1))))))));
        var_28 = ((/* implicit */int) (~(arr_5 [i_4] [i_4])));
    }
}
