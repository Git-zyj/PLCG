/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39811
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] [(signed char)4] = ((/* implicit */unsigned long long int) var_16);
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_1 [i_0]))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))))) : ((~(((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (var_5)))))));
        arr_5 [(unsigned short)16] &= ((/* implicit */short) (-(min((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [(unsigned char)14]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (var_2) : (5932410033458244203LL)))))));
        arr_6 [i_0] = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)2451)) : (((/* implicit */int) arr_2 [i_0])))))) ? (((arr_1 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) ((-5932410033458244207LL) < (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (-5932410033458244202LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)9])) ? (1123609245U) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)65531)))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_9 [i_1] [i_1]))));
        arr_11 [i_1] [i_1] = ((/* implicit */long long int) 3171358054U);
        arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((+(2245493361U))) : (1123609252U)));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_15 [i_2] = ((unsigned char) (short)2045);
        /* LoopSeq 1 */
        for (unsigned int i_3 = 3; i_3 < 6; i_3 += 4) 
        {
            arr_18 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 + 3] [i_3 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_3 + 1] [i_3 + 1]))) : (5063604647128470677ULL)))) ? (((/* implicit */int) arr_2 [(short)10])) : (((/* implicit */int) arr_9 [i_3 + 1] [i_3]))));
            arr_19 [i_2] = ((/* implicit */unsigned short) (short)29097);
        }
    }
    var_20 = ((/* implicit */short) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_15))));
}
