/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216375
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
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) (-(7008112864066081897LL))))));
    var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(16022220501538392743ULL)))) ? (2424523572171158873ULL) : (((/* implicit */unsigned long long int) min((3663720408U), (((/* implicit */unsigned int) var_8)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 631246883U)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_4))) : (((var_16) | (((/* implicit */long long int) ((/* implicit */int) var_5))))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3))))));
    var_20 = ((/* implicit */int) max((var_20), ((-(((/* implicit */int) ((unsigned char) max((631246875U), (((/* implicit */unsigned int) (short)23282))))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_21 = ((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_3))) | (var_10))), (((/* implicit */long long int) var_3))));
        arr_3 [i_0] &= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (short)23282)) ? (7008112864066081909LL) : (((/* implicit */long long int) ((/* implicit */int) ((3663720429U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))))))))), (1948678385823527073LL)));
        arr_4 [i_0] = ((/* implicit */unsigned short) var_13);
        arr_5 [i_0] = ((/* implicit */unsigned char) var_2);
        var_22 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) (unsigned short)3968)) : (1259403967)))) ? ((~(631246875U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 322406472U)) ? ((~(((/* implicit */int) var_13)))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)3944)) : (((/* implicit */int) (unsigned short)9)))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_10 [(unsigned short)12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
        arr_11 [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */long long int) arr_8 [9ULL]))))) ? (arr_0 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)192)))));
        var_23 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)8))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_14 [(short)14] = ((/* implicit */int) min(((!(((/* implicit */_Bool) (short)-15001)))), (((((/* implicit */_Bool) min((2424523572171158871ULL), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2]))))) || (((/* implicit */_Bool) ((short) var_17)))))));
        var_24 ^= ((/* implicit */int) var_1);
        var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7884))) : (var_0)))))) / ((+(((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_1 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [(unsigned short)8] [i_2])))))))));
    }
}
