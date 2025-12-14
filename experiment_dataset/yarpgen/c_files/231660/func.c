/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231660
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 536793410U)) || (((/* implicit */_Bool) 536793434U)))) || (((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_1))), (((arr_3 [i_0] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
        var_19 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */unsigned int) var_11)) % (536793429U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_10), (((/* implicit */unsigned long long int) var_17)))) < (var_10)))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((min((max((arr_7 [i_1]), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) max(((unsigned short)9715), (((/* implicit */unsigned short) arr_2 [i_1]))))))) > ((-(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (536793410U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [9ULL])))))))));
        var_20 = ((/* implicit */_Bool) arr_6 [i_1]);
    }
    for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
    {
        var_21 &= ((/* implicit */unsigned char) ((long long int) max((((((/* implicit */_Bool) arr_5 [i_2])) || (((/* implicit */_Bool) arr_3 [i_2] [i_2])))), (((_Bool) 536793429U)))));
        var_22 *= arr_0 [i_2] [i_2];
    }
    /* vectorizable */
    for (signed char i_3 = 2; i_3 < 15; i_3 += 1) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 3; i_4 < 14; i_4 += 1) 
        {
            arr_20 [i_4] = ((/* implicit */signed char) var_8);
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((arr_14 [i_4 - 3]) <= (((/* implicit */int) arr_16 [i_3] [(unsigned char)6])))))));
            arr_21 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_3 + 1] [i_3 - 1])) < (((/* implicit */int) arr_1 [i_3 + 1] [i_3 - 1]))));
            arr_22 [i_3 - 2] [i_4 + 1] [i_4] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) var_13)))));
        }
        for (short i_5 = 0; i_5 < 16; i_5 += 4) 
        {
            var_24 ^= ((/* implicit */unsigned short) ((long long int) (unsigned short)42772));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_3 + 1])) ? (arr_19 [i_3 - 1] [i_3] [i_3 - 2]) : (arr_19 [i_3] [i_3] [i_3 - 2])));
            var_26 = ((/* implicit */unsigned int) var_2);
        }
        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 844087949430936349LL)) ? (((/* implicit */int) (unsigned short)42769)) : (970205738)));
    }
    /* LoopSeq 4 */
    for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        arr_28 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (arr_3 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_24 [i_6])) != (((/* implicit */int) arr_1 [i_6] [i_6])))))) : (((((/* implicit */_Bool) var_3)) ? (arr_11 [i_6]) : (arr_11 [i_6])))));
        var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_6])) ? (((/* implicit */int) arr_24 [i_6])) : (((/* implicit */int) arr_24 [i_6]))))), (max((((/* implicit */unsigned int) var_13)), (((((/* implicit */_Bool) 13067762159076079334ULL)) ? (3758173845U) : (3758173885U))))))))));
        arr_29 [i_6] = ((/* implicit */long long int) var_11);
        var_29 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */unsigned long long int) arr_7 [(short)9])) ^ (13067762159076079334ULL)))));
    }
    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) 
    {
        var_30 = ((/* implicit */unsigned int) var_9);
        arr_32 [i_7] = ((/* implicit */int) ((unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)42173)) ? (((/* implicit */int) (unsigned short)9712)) : (((/* implicit */int) var_0))))));
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        arr_35 [i_8] = ((/* implicit */long long int) (-(((unsigned int) max((arr_16 [i_8] [(unsigned char)6]), (arr_25 [i_8] [i_8]))))));
        var_31 = min(((unsigned char)9), (((/* implicit */unsigned char) ((((/* implicit */int) arr_9 [i_8])) > (((/* implicit */int) arr_9 [i_8]))))));
        var_32 = ((/* implicit */int) arr_5 [i_8]);
        var_33 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_8]))) : (9223372036854775807LL)))) ? (((long long int) arr_31 [i_8])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_31 [i_8])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)0)))))));
        var_34 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(var_1)))) / (max((max((((/* implicit */long long int) arr_0 [i_8] [3U])), (arr_3 [i_8] [i_8]))), (((/* implicit */long long int) arr_10 [i_8] [i_8]))))));
    }
    for (unsigned long long int i_9 = 2; i_9 < 20; i_9 += 2) 
    {
        var_35 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_37 [i_9] [i_9 - 1])), (var_4)))) ? (((unsigned int) var_5)) : (3758173853U)))), (((((18446744073709551615ULL) / (1368931101359403945ULL))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3758173853U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10))) : (3373940326U)))))));
        arr_38 [i_9 - 1] = ((/* implicit */int) ((unsigned long long int) 6703883414467730381LL));
    }
    var_36 = ((/* implicit */long long int) var_11);
    var_37 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((((/* implicit */long long int) ((short) var_15))), (min((var_3), (var_4)))))));
}
