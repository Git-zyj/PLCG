/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243971
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
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_14 -= ((/* implicit */_Bool) arr_1 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) -2238600313300444758LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)7926)) & (((/* implicit */int) var_7))))) <= (((((/* implicit */_Bool) 7217609751425391515ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7926))) : (0LL))))))) : (((20ULL) + (78727661500712224ULL)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (((+(arr_5 [i_1]))) / (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (arr_3 [i_1]) : (((/* implicit */int) arr_4 [i_1] [i_1]))))));
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_2)) ^ (((/* implicit */int) (short)(-32767 - 1)))))));
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 16; i_3 += 1) 
        {
            var_15 = ((/* implicit */short) min((49152U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_4 [i_2] [i_2])))))));
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 16; i_4 += 2) 
            {
                for (unsigned char i_5 = 2; i_5 < 14; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) ((((arr_14 [i_5 + 2]) << (((((((/* implicit */_Bool) (unsigned short)7955)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)50387))) : (11229134322284160085ULL))) - (50387ULL))))) << (((((((((/* implicit */_Bool) (short)-23561)) ? (7217609751425391515ULL) : (((/* implicit */unsigned long long int) -1LL)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned char)137), (((/* implicit */unsigned char) arr_4 [i_3] [i_3])))))))) - (7217609751425391378ULL))))))));
                            arr_22 [i_2] [i_2] [i_2] [i_2] [i_3] [i_2] = ((/* implicit */int) (unsigned short)7970);
                        }
                    } 
                } 
            } 
            arr_23 [i_2] [i_3] [i_2] = (i_3 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) >> (((arr_18 [i_3]) + (255343198)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2])) ? (arr_14 [i_2]) : (((/* implicit */int) (short)3))))) : (3614858966508531085LL)))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]) >> (((((arr_18 [i_3]) + (255343198))) + (636241239)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2])) ? (arr_14 [i_2]) : (((/* implicit */int) (short)3))))) : (3614858966508531085LL))));
        }
        arr_24 [i_2] = ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) (unsigned short)57610)));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
        {
            arr_28 [i_2] [i_2] &= ((/* implicit */long long int) ((arr_16 [i_2] [i_2] [i_2]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_7] [i_2] [i_7] [i_2] [i_7])))));
            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2])) || (((((/* implicit */_Bool) 841000228)) && (((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 16; i_8 += 2) 
        {
            arr_32 [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) 4194303U))) || (((/* implicit */_Bool) min((((/* implicit */short) (_Bool)0)), (arr_9 [i_2] [i_8]))))));
            arr_33 [i_8] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_10 [i_2] [i_8] [i_2])) ? (arr_10 [i_2] [i_2] [i_2]) : (arr_10 [i_2] [i_2] [i_2]))) >> (((/* implicit */int) arr_15 [i_2] [i_2]))));
        }
        arr_34 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */int) ((((9223372036854775807LL) << (((((((/* implicit */int) (signed char)-44)) + (88))) - (44))))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_2] [i_2] [i_2])) || (((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2]))))))))) != (((((/* implicit */_Bool) -1718560455)) ? (arr_18 [i_2]) : (((/* implicit */int) (unsigned short)57616))))));
    }
    for (unsigned long long int i_9 = 3; i_9 < 19; i_9 += 2) 
    {
        arr_37 [i_9] = ((((/* implicit */_Bool) 9223372036854775807LL)) && (((/* implicit */_Bool) arr_5 [i_9])));
        arr_38 [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_9])) ? (((((/* implicit */_Bool) arr_36 [i_9])) ? (3537013294U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_9])))))), (min((11229134322284160095ULL), (((/* implicit */unsigned long long int) arr_36 [i_9 - 2]))))));
    }
    var_18 = ((((((/* implicit */int) ((((/* implicit */int) var_2)) <= (842611937)))) * (((/* implicit */int) ((((/* implicit */int) var_7)) <= (((/* implicit */int) var_8))))))) >> (((var_1) - (4321102802447461419ULL))));
}
