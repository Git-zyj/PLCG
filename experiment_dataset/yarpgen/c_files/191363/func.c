/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191363
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [(short)3] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)124)) << (((((/* implicit */int) arr_0 [i_0])) - (27919)))));
        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) % (arr_1 [i_0] [i_0]))))));
        var_18 = ((/* implicit */signed char) ((941554406) - (arr_1 [i_0] [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) arr_3 [i_1]))));
        var_20 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) & (((4176326316695594522ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 17; i_2 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) (_Bool)1);
            var_22 = ((/* implicit */short) ((unsigned long long int) 2188522093884628247ULL));
            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) -334580097))));
        }
    }
    for (signed char i_3 = 3; i_3 < 6; i_3 += 2) 
    {
        arr_11 [2LL] |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 + 3]))))) >> (((((var_1) ? (((/* implicit */long long int) arr_1 [i_3 + 4] [i_3 - 3])) : (var_4))) - (414994076LL)))));
        var_24 ^= ((/* implicit */unsigned short) arr_8 [i_3 + 4] [(_Bool)1]);
        var_25 = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) arr_4 [i_3])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_3 - 2]))))))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)57261))) != (arr_9 [i_3] [i_3 + 4]))))));
        var_26 = ((/* implicit */_Bool) -8765666776202628627LL);
    }
    var_27 = ((/* implicit */signed char) var_4);
    var_28 = -4466328240899311962LL;
}
