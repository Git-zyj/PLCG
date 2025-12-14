/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26728
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
    var_19 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_16)))) : (((/* implicit */int) var_15))))));
    var_20 -= ((/* implicit */unsigned short) min((max((4294967295U), (((/* implicit */unsigned int) var_14)))), (((/* implicit */unsigned int) var_0))));
    var_21 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)12083)) << (((648701227235919360LL) - (648701227235919346LL)))));
        arr_4 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 3; i_1 < 16; i_1 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) (~(((/* implicit */int) var_11)))))));
        arr_8 [i_1] = ((/* implicit */unsigned char) (~(var_12)));
        arr_9 [i_1] [18U] |= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 4582118535265210427LL)), (18446744073709551604ULL)));
    }
    for (unsigned short i_2 = 3; i_2 < 16; i_2 += 4) 
    {
        arr_14 [(_Bool)1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [8U] [i_2 + 1])) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2 + 1] [i_2 - 1])))) ? ((~(arr_7 [i_2 - 3] [i_2 + 3]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_12 [(unsigned char)16] [i_2 + 1])))))));
        arr_15 [i_2] [i_2 + 1] = ((/* implicit */signed char) ((((((/* implicit */int) arr_12 [i_2] [i_2 - 1])) <= (((/* implicit */int) arr_12 [i_2] [i_2 - 1])))) && (((/* implicit */_Bool) min((arr_12 [i_2] [i_2 - 1]), (arr_12 [i_2] [i_2 - 1]))))));
        arr_16 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned short) (unsigned char)255)), ((unsigned short)26182)));
    }
    for (signed char i_3 = 2; i_3 < 13; i_3 += 2) 
    {
        arr_19 [i_3 + 3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-30))) <= (1557164054440146285ULL)));
        arr_20 [4U] [4U] = ((/* implicit */unsigned char) arr_7 [i_3 + 1] [i_3 + 2]);
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) (signed char)35))))))));
    }
    var_25 -= ((/* implicit */signed char) var_6);
}
