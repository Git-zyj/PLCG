/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34193
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
    var_14 = ((/* implicit */int) var_10);
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (1148417904979476480LL)));
        var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) * (arr_1 [i_0 - 1]))))));
        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (arr_2 [i_0 + 2]) : (var_13)));
        arr_5 [(short)8] [(short)8] = ((/* implicit */long long int) (!((_Bool)0)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_10 [(signed char)19] [i_1] = ((((/* implicit */_Bool) (+(0ULL)))) ? (arr_8 [(_Bool)1] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)-31128)))));
        arr_11 [i_1] = ((/* implicit */unsigned short) arr_8 [i_1] [i_1]);
    }
    for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        arr_14 [i_2] [i_2] = (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (arr_6 [i_2])))))));
        var_17 = ((/* implicit */short) ((1843163999) < (((/* implicit */int) max(((unsigned char)152), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)7)) <= (((/* implicit */int) var_2))))))))));
        arr_15 [i_2] = ((/* implicit */signed char) arr_6 [i_2]);
        arr_16 [i_2] [i_2] = ((/* implicit */_Bool) (+(max((((/* implicit */int) max((var_2), (arr_12 [i_2] [i_2])))), (arr_13 [i_2])))));
    }
}
