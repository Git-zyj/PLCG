/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238048
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_19)) : (((((/* implicit */_Bool) (unsigned short)15341)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15341))) : (var_2)))))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_6) : (var_14)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_11);
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (((((/* implicit */_Bool) (-(var_1)))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (277076930199552LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) : (var_14)))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 9; i_1 += 2) 
    {
        var_22 = ((/* implicit */signed char) var_1);
        var_23 = ((/* implicit */int) var_12);
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_24 = ((/* implicit */signed char) var_0);
            var_25 = ((/* implicit */long long int) var_12);
            var_26 = ((/* implicit */_Bool) var_4);
        }
        for (unsigned long long int i_3 = 2; i_3 < 7; i_3 += 4) 
        {
            arr_12 [(short)3] = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (signed char)105)) ? (3108564092U) : (101630048U))) : (((/* implicit */unsigned int) var_7))));
            var_27 = ((/* implicit */short) var_16);
        }
        for (short i_4 = 1; i_4 < 10; i_4 += 4) 
        {
            arr_17 [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) var_17)) ? ((-(var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))))));
            var_28 &= (~(var_0));
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 13; i_5 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_6 = 1; i_6 < 13; i_6 += 4) 
        {
            var_29 += ((/* implicit */signed char) ((((/* implicit */_Bool) (+(var_16)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) var_5))));
        }
        for (int i_7 = 4; i_7 < 13; i_7 += 4) 
        {
            var_31 = ((/* implicit */int) var_11);
            var_32 = ((/* implicit */unsigned int) var_19);
            var_33 = ((/* implicit */signed char) (-(var_19)));
        }
        var_34 = ((/* implicit */_Bool) var_0);
    }
    var_35 = ((/* implicit */signed char) var_19);
}
