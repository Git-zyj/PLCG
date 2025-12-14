/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39084
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
    var_17 |= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) (short)28946))) : (var_5))) << ((((((_Bool)0) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_16)))) - (62482))))) * (((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_6))) >> ((((~(((/* implicit */int) var_13)))) + (60377))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */short) ((((arr_0 [i_0 + 1]) <= (arr_0 [i_0 - 3]))) ? ((~(arr_0 [i_0 + 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 - 4])) >= (((/* implicit */int) (short)-32765))))))));
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */int) ((arr_0 [i_0 - 2]) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) & (((/* implicit */int) ((unsigned short) var_9)))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (2475419424U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15))))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_6)))) | (min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))), (max((var_15), (((/* implicit */long long int) 1069175860U))))))));
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_0 [i_0 - 2]) : (var_8)))) ? (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) < (((/* implicit */long long int) arr_0 [i_0 - 4])))))));
    }
    for (signed char i_1 = 4; i_1 < 15; i_1 += 3) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((signed char) min((((short) 9223372036854775807LL)), (((/* implicit */short) (signed char)-72)))));
        var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_12)), (var_6))) * (var_6)))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_7)), ((unsigned short)46501)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)1197)), (var_16)))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */int) (short)-4096)) : (((/* implicit */int) arr_4 [i_1 + 2] [i_1])))))) : ((((+(((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1)))))))));
    }
}
