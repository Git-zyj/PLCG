/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31487
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
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */short) (!(((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        var_21 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) == (15ULL))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            var_22 = ((/* implicit */signed char) arr_0 [i_0]);
            var_23 = ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))));
            var_24 ^= ((/* implicit */unsigned char) (+(arr_0 [i_1])));
            var_25 = ((/* implicit */signed char) (+(((/* implicit */int) (!((_Bool)1))))));
            var_26 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_12))));
        }
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_27 &= ((((/* implicit */int) (_Bool)1)) >= (-4));
            var_28 -= ((/* implicit */unsigned int) var_10);
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0])) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_2])))))));
        }
        for (unsigned char i_3 = 3; i_3 < 23; i_3 += 1) 
        {
            var_30 = ((((/* implicit */_Bool) -1989504933393276693LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)251)));
            var_31 = var_19;
        }
        var_32 = ((/* implicit */_Bool) var_16);
        var_33 = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_0])) * (((/* implicit */int) arr_10 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 3) 
    {
        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-32748)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1ULL)) ? (1989504933393276692LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (13ULL)));
        var_35 = ((/* implicit */int) ((arr_9 [i_4] [i_4]) == (arr_9 [i_4] [i_4])));
        var_36 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1LL)) >= (18446744073709551614ULL)))) - (((((/* implicit */_Bool) -394445114)) ? (887915989) : (((/* implicit */int) var_13))))));
    }
    var_37 = ((/* implicit */unsigned char) min((max(((-(((/* implicit */int) var_7)))), (((/* implicit */int) var_13)))), (((((/* implicit */int) var_17)) & ((+(((/* implicit */int) var_6))))))));
    var_38 = ((/* implicit */short) ((((int) var_3)) != (((/* implicit */int) var_15))));
    var_39 = var_4;
}
