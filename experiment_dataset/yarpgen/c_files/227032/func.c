/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227032
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) ((((unsigned long long int) var_9)) & (((unsigned long long int) arr_0 [i_0 - 1]))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -839634457)) ? (((((/* implicit */int) arr_1 [i_0 + 2])) / (-585278356))) : (((/* implicit */int) max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 1]))))));
        var_21 += ((/* implicit */long long int) (~(var_3)));
    }
    for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_1])) ? (var_5) : (((/* implicit */int) (unsigned short)8959))))) ? (arr_8 [i_1]) : (((unsigned long long int) 0ULL))));
            var_23 = ((/* implicit */unsigned char) ((short) (unsigned short)16216));
            var_24 = ((/* implicit */unsigned short) ((int) 0ULL));
            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) max((-1443632433), (-1220084074)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (5989719305844907912LL)));
        }
        for (int i_3 = 1; i_3 < 7; i_3 += 3) 
        {
            var_26 = var_0;
            var_27 = ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((int) -5887501133002907040LL)));
            var_28 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) var_9))))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3])) << (((((/* implicit */int) var_11)) - (62572)))))) : (min((((/* implicit */long long int) var_1)), (arr_10 [i_1] [i_1]))))), (((/* implicit */long long int) (~(((/* implicit */int) var_4)))))));
            var_29 = ((/* implicit */unsigned char) arr_11 [i_3 + 2] [i_3 + 3]);
        }
        for (long long int i_4 = 0; i_4 < 11; i_4 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5989719305844907900LL)) ? (var_6) : (((/* implicit */int) ((((/* implicit */_Bool) (short)12099)) && (((/* implicit */_Bool) var_8)))))))) || (((/* implicit */_Bool) (((((-(var_6))) + (2147483647))) >> (((17188253588724241948ULL) - (17188253588724241942ULL))))))));
            var_31 = ((/* implicit */short) (-(var_16)));
        }
        for (long long int i_5 = 0; i_5 < 11; i_5 += 4) /* same iter space */
        {
            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(6596337147612460244LL)))) ? ((+(((/* implicit */int) ((var_2) != (((/* implicit */int) arr_0 [i_5]))))))) : (((/* implicit */int) max((((unsigned short) var_16)), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_17))))))))));
            var_33 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1])) && (((/* implicit */_Bool) arr_6 [i_1] [i_5]))))) != (((/* implicit */int) (unsigned char)200))))), (max((((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (6699835048737655646ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)23013)))))))));
            var_34 = ((/* implicit */short) ((int) var_5));
        }
        var_35 = ((/* implicit */long long int) min((max((arr_9 [i_1] [i_1] [i_1]), (arr_9 [i_1] [i_1] [i_1]))), (((/* implicit */short) ((unsigned char) var_17)))));
    }
    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_6)) : (var_16))))))) << ((((+(((((/* implicit */unsigned long long int) var_7)) * (var_17))))) - (8834549993422968224ULL))))))));
    var_37 = var_8;
}
