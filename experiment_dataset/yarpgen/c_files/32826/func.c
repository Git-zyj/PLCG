/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32826
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (-231343605)));
        var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 3]))) : (3895636207U)));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((signed char) (-(((/* implicit */int) (unsigned char)8)))));
                    arr_11 [i_1] [1U] [i_2] = ((((/* implicit */_Bool) arr_9 [i_0 - 2] [i_0])) ? (13322577973998079453ULL) : (9223372036854775744ULL));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        arr_14 [i_1 - 1] [(signed char)4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_12) : (8892923596806800700LL)))) ? (((/* implicit */int) arr_7 [i_3] [i_3 - 1] [i_3 - 1] [i_3])) : (((/* implicit */int) var_7))));
                        arr_15 [i_3] [(unsigned char)6] [i_2] [i_3] [i_1] [i_2] = ((/* implicit */unsigned char) (((-(arr_5 [i_0] [i_1] [i_2]))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -752144597))))))));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_18 [(unsigned short)14] = ((/* implicit */unsigned char) ((int) (unsigned char)179));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_1 - 2] [i_1] [i_1])) + (((/* implicit */int) arr_0 [i_0 + 3]))));
                        arr_19 [i_0 + 2] [i_0] [i_1] [i_1] [(unsigned char)0] [(unsigned char)17] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0 + 1] [i_0 - 2] [i_4]))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_9))) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_6 [i_0] [i_1])))))));
                    }
                }
            } 
        } 
        arr_20 [(unsigned short)18] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))));
        var_17 |= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0]))) % (((((/* implicit */_Bool) 399331089U)) ? (((/* implicit */unsigned long long int) var_3)) : (18446744073709551615ULL)))));
    }
    var_18 = ((/* implicit */short) ((signed char) var_7));
    var_19 = ((/* implicit */unsigned char) ((unsigned short) (-(var_2))));
    var_20 -= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) min((-752144597), (((/* implicit */int) (signed char)122)))))))), ((((-(7274986060331382056ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)252)))))));
}
