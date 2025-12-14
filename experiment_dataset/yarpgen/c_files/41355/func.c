/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41355
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((int) var_11))) ? (var_0) : (((/* implicit */unsigned long long int) ((1787127312807571314LL) / (((/* implicit */long long int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == (-1787127312807571314LL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_17 &= ((/* implicit */unsigned long long int) ((unsigned int) ((arr_1 [(short)4]) ^ (((/* implicit */int) var_2)))));
        var_18 = ((_Bool) ((_Bool) (short)20731));
        var_19 = ((/* implicit */short) arr_2 [(short)0]);
    }
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((unsigned long long int) 17886306422641367787ULL)))));
    /* LoopSeq 2 */
    for (short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1])))), (((int) arr_3 [i_1]))));
        var_22 = ((/* implicit */unsigned short) arr_4 [i_1] [i_1]);
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20725))) | (((10620165158952805674ULL) ^ (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]))))));
    }
    for (int i_2 = 2; i_2 < 17; i_2 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) ((int) ((short) arr_8 [11ULL] [i_2 + 1])));
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((unsigned int) 16744448)), (((/* implicit */unsigned int) ((short) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [i_2 - 1]), (arr_6 [i_2 + 2]))))) : (arr_7 [(signed char)0] [i_2])));
    }
}
