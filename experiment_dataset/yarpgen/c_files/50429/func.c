/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50429
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
    /* vectorizable */
    for (int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned char) var_10)))));
        arr_2 [(unsigned char)17] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 + 1])) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))));
    }
    for (unsigned char i_1 = 2; i_1 < 12; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */int) max((var_18), ((((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 1])) >= (((/* implicit */int) arr_4 [i_1 + 1]))))) - (1)))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) -1716405096))));
    }
    for (unsigned char i_2 = 2; i_2 < 12; i_2 += 1) /* same iter space */
    {
        var_20 = ((((/* implicit */_Bool) min((arr_0 [i_2 - 1]), (arr_6 [i_2 + 1] [i_2])))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_9))) : (max((((/* implicit */unsigned long long int) arr_0 [i_2 - 1])), (var_16))));
        var_21 = ((/* implicit */_Bool) var_12);
        var_22 = ((arr_3 [1LL]) + (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2 + 1]))) >= (-692469904010054522LL))) && (((/* implicit */_Bool) (unsigned char)0)))))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned short) max((min((((/* implicit */long long int) (unsigned short)3304)), (min((((/* implicit */long long int) arr_4 [i_2])), (7200886512941975230LL))))), ((+(var_1)))));
        var_23 = ((/* implicit */_Bool) max((((arr_1 [i_2 + 1]) ? (arr_6 [i_2 + 1] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 11679608220619282121ULL)) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) (unsigned char)71)))) << (((var_6) + (8698802563035528486LL))))))));
    }
    /* vectorizable */
    for (unsigned char i_3 = 2; i_3 < 12; i_3 += 1) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) (+(1723495738914330168LL)));
        arr_13 [i_3] = ((/* implicit */unsigned int) (+(11679608220619282121ULL)));
    }
    var_25 = ((/* implicit */short) var_5);
    var_26 = ((/* implicit */int) var_1);
}
