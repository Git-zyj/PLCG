/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243891
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
    for (long long int i_0 = 3; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)244)) ? (-2301166943688486165LL) : (((-2301166943688486165LL) + (2301166943688486165LL)))));
        var_13 &= ((/* implicit */signed char) 3959402435385731603LL);
        arr_4 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)36783))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 13; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(1163205260)))) ? (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)110))))) : (((((/* implicit */_Bool) (short)27452)) ? (-2757249623023963759LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-3892)))))));
        arr_8 [i_1] [i_1 - 2] = ((/* implicit */unsigned long long int) (short)32767);
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 + 2])) ^ (((/* implicit */int) arr_6 [i_1 + 1]))));
        var_14 = ((/* implicit */signed char) var_9);
    }
    for (long long int i_2 = 3; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_14 [i_2] = ((/* implicit */_Bool) var_8);
        arr_15 [i_2 + 1] = ((/* implicit */unsigned char) min((((min((((/* implicit */long long int) 1163205260)), (var_6))) ^ (((/* implicit */long long int) -982585483)))), (((/* implicit */long long int) max((2729612855U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 605458368)) ? (((/* implicit */int) (unsigned short)11109)) : (((/* implicit */int) (signed char)127))))))))));
    }
    for (unsigned char i_3 = 4; i_3 < 11; i_3 += 1) 
    {
        var_15 = ((/* implicit */long long int) 3817002301U);
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_2 [i_3 - 3])) == (18446744073709551615ULL)));
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_13 [i_3 - 4])) ? (arr_13 [i_3 - 2]) : (arr_13 [i_3 - 3]))), (((/* implicit */int) var_2))));
    }
    var_17 = ((/* implicit */unsigned short) var_4);
    var_18 &= ((/* implicit */unsigned long long int) var_2);
    /* LoopNest 2 */
    for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
    {
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 4) 
        {
            {
                arr_25 [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) -1)))) - (((((/* implicit */_Bool) arr_24 [i_5 - 1] [i_5 + 1] [i_5 + 1])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) arr_20 [(signed char)20])) : (arr_22 [i_4] [i_5]))) : (((/* implicit */unsigned int) -745574572))))));
                arr_26 [i_4] [i_4] = ((/* implicit */int) var_4);
            }
        } 
    } 
}
