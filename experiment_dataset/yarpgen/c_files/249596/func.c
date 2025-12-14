/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249596
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
    var_20 = ((/* implicit */unsigned short) var_5);
    var_21 ^= min((4193280U), (((/* implicit */unsigned int) (unsigned char)20)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) var_4)) : (arr_2 [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_2 [i_0]));
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)15549)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_5)))) : (((long long int) var_8)))), (((/* implicit */long long int) ((274861129728LL) == (((/* implicit */long long int) var_6)))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) arr_0 [i_1] [i_1]))));
        arr_8 [i_1] = arr_0 [i_1] [i_1];
        var_23 = max((max((3756602993U), (((/* implicit */unsigned int) var_18)))), (max((((unsigned int) 1844776714)), ((~(2373071824U))))));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) ((int) 2373071824U));
        var_24 = ((/* implicit */int) var_19);
        var_25 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_2] [i_2])) ^ (1844776728))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
    {
        var_26 = (unsigned short)14923;
        arr_15 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_3])) ? (arr_2 [i_3]) : (arr_2 [i_3])));
    }
    var_27 = ((/* implicit */unsigned char) max((var_27), (var_11)));
    /* LoopSeq 1 */
    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        var_28 = ((/* implicit */unsigned char) ((arr_10 [i_4]) >> (((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4] [i_4]))) - (4290774015U))) - (4193270U)))));
        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)45884)) ? (((/* implicit */int) ((unsigned short) arr_14 [i_4] [i_4]))) : (((/* implicit */int) arr_9 [i_4]))));
        var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) max(((~(-274861129728LL))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4] [i_4]))) & (2893428598U))))))))));
    }
}
