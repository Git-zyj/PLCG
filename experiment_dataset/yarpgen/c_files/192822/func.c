/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192822
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_14 += ((/* implicit */unsigned int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */signed char) (+((+(((((/* implicit */_Bool) arr_1 [i_0])) ? (10980091915170911734ULL) : (((/* implicit */unsigned long long int) var_11))))))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1))));
        arr_4 [i_0] [i_0] = ((/* implicit */int) ((((unsigned long long int) var_11)) / (((/* implicit */unsigned long long int) (+(var_11))))));
        arr_5 [i_0] = ((/* implicit */int) ((unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) (short)10472)) >> (((233143212) - (233143185)))))), (arr_0 [i_0]))));
    }
    for (signed char i_1 = 3; i_1 < 19; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (short)10472)) ? (((/* implicit */int) arr_7 [i_1 - 3] [i_1])) : (((/* implicit */int) (unsigned short)65535))))))), (((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_1])))))) : (((((/* implicit */_Bool) (short)-10472)) ? (var_13) : (((/* implicit */unsigned long long int) var_3))))))));
        var_15 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)32767)), (var_13)))) ? (((((/* implicit */_Bool) 281474976710655ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-10473))) : (18446462598732840981ULL))) : (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) var_7)))))))) ? (var_13) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-10472))) : (7628084330075909173LL))), (((/* implicit */long long int) arr_7 [i_1] [i_1]))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_2 = 1; i_2 < 23; i_2 += 3) /* same iter space */
    {
        arr_11 [i_2 - 1] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_9 [i_2 + 2] [i_2 - 1]))));
        var_16 = ((/* implicit */unsigned char) var_2);
        var_17 |= ((/* implicit */int) ((unsigned short) arr_9 [i_2 - 1] [i_2]));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)33176)) ? (-1519333367) : (((/* implicit */int) (unsigned short)65535))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 23; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -1464387076)) ? (max((((/* implicit */unsigned int) (_Bool)0)), (var_10))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))));
        var_19 = ((/* implicit */long long int) var_5);
        var_20 ^= ((/* implicit */_Bool) var_5);
        arr_16 [i_3] = ((/* implicit */int) 1421823672579674980LL);
    }
}
