/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192925
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
    var_16 = ((/* implicit */_Bool) var_12);
    var_17 = (~((+(var_1))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        var_18 -= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (-(var_14)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)35167))) == (1617868721670713232LL))))) : (arr_0 [i_0] [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_9);
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 1617868721670713209LL)) ? (((/* implicit */unsigned long long int) 1259398061U)) : (var_10))) << (((max((var_14), (((/* implicit */unsigned long long int) var_4)))) - (18446744073709551529ULL)))))) || (((/* implicit */_Bool) var_11))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        var_20 = ((/* implicit */_Bool) var_9);
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [2LL]))) ^ (var_5)))) ? ((-(((/* implicit */int) arr_4 [(signed char)2])))) : (((/* implicit */int) max((arr_4 [(short)6]), (arr_4 [8])))))))));
    }
    var_22 = ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (+(var_11))))))) : ((~(-460488753))));
}
