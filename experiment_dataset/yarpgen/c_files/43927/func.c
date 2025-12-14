/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43927
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
    var_11 ^= ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 584948450U)) ? (((/* implicit */int) var_8)) : (-1502886646)))), (var_10))) + (((/* implicit */unsigned int) (+(((/* implicit */int) ((unsigned short) 222951560U)))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((804786521) - (2147483637)))) ? (((arr_1 [i_0]) / (arr_1 [i_0]))) : (arr_1 [i_0])));
        var_13 ^= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((((/* implicit */unsigned int) -1613060777)), (2388822087U)))) ? (((((/* implicit */long long int) arr_1 [(short)8])) ^ (var_0))) : (((/* implicit */long long int) arr_1 [(unsigned short)0])))), (((/* implicit */long long int) (short)13070))));
        arr_2 [i_0] = ((/* implicit */int) (((((~(-8319395102099256904LL))) / (((/* implicit */long long int) min((628342347U), (((/* implicit */unsigned int) var_7))))))) << (((min((((/* implicit */unsigned int) (signed char)-107)), (245070168U))) - (245070164U)))));
        var_14 = min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (short)(-32767 - 1)))))), (max((((/* implicit */unsigned short) arr_0 [i_0])), ((unsigned short)27762))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        arr_5 [(signed char)4] = ((/* implicit */unsigned short) (_Bool)1);
        arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) arr_3 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_1]) : (((/* implicit */long long int) -7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [i_1])))));
    }
}
