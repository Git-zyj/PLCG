/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53734
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
    var_11 ^= ((/* implicit */short) (signed char)-124);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_2 [18LL] [i_0] &= ((/* implicit */short) var_5);
        var_12 |= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_1 [i_0])) : (((-1065468192) / (((/* implicit */int) (signed char)84))))));
        var_13 = ((/* implicit */int) min((var_13), ((+(((((/* implicit */_Bool) ((short) (signed char)84))) ? (((/* implicit */int) max(((short)11189), (((/* implicit */short) var_1))))) : (615397903)))))));
        var_14 = ((max((min((var_5), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) arr_1 [i_0 - 2])))) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [(signed char)12]))));
    }
    /* vectorizable */
    for (long long int i_1 = 3; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1 - 3] [i_1 - 3])) ? (16916986629587785388ULL) : (((/* implicit */unsigned long long int) arr_3 [i_1 - 1] [i_1 - 2])))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 3; i_2 < 23; i_2 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) / (var_5))) - (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 + 1] [i_1])))));
            var_17 ^= ((/* implicit */signed char) ((arr_0 [i_1]) & (((/* implicit */long long int) var_7))));
            var_18 ^= ((((-927413896501763450LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)80)) - (17))));
        }
    }
    for (long long int i_3 = 3; i_3 < 23; i_3 += 1) /* same iter space */
    {
        var_19 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3 + 1])) ^ (((/* implicit */int) arr_1 [i_3 + 1]))))) ? (((long long int) ((((/* implicit */_Bool) arr_6 [(short)16] [i_3])) ? (680378999798463691LL) : (((/* implicit */long long int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */int) arr_9 [(signed char)20])) ^ (((/* implicit */int) arr_9 [(signed char)0])))))));
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((_Bool) var_9)))));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) var_4))));
    var_22 = ((/* implicit */signed char) ((var_7) >> (((max((max((-680378999798463693LL), (((/* implicit */long long int) var_2)))), (((/* implicit */long long int) ((int) (signed char)64))))) - (11588LL)))));
    /* LoopSeq 2 */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (~(((((/* implicit */_Bool) (short)-9751)) ? (-8818133349708097191LL) : (4913820611910051529LL))))))));
        var_24 = ((/* implicit */int) ((((arr_3 [i_4] [i_4 - 1]) % (((((/* implicit */_Bool) (signed char)-127)) ? (9223372036854775807LL) : ((-9223372036854775807LL - 1LL)))))) - (-680378999798463693LL)));
        arr_14 [i_4] [7LL] = ((/* implicit */signed char) ((_Bool) max((((/* implicit */short) (_Bool)1)), (min((var_2), (arr_11 [i_4]))))));
        arr_15 [i_4 - 1] [i_4 - 1] &= ((/* implicit */signed char) 4913820611910051529LL);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) (signed char)-116))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            arr_20 [4LL] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_5] [i_6])) ? (arr_19 [i_5] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_18 [i_6] [i_5] [i_5]))))));
            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (~(((((/* implicit */_Bool) arr_19 [i_5] [i_6])) ? (((/* implicit */unsigned long long int) var_8)) : (arr_16 [i_6] [i_5]))))))));
            arr_21 [i_5] [i_6] = (((!(((/* implicit */_Bool) (signed char)26)))) ? (((/* implicit */int) (_Bool)0)) : (((var_7) >> (((arr_19 [i_5] [i_6]) - (8507092111450831902LL))))));
        }
        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            arr_25 [i_5] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */int) var_10)), (1756987174)))))) ? (((unsigned long long int) ((arr_24 [i_5] [i_5] [i_5]) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (776881708142250948LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_4)) != (arr_22 [i_7])))) >= (min((arr_22 [i_5]), (((/* implicit */int) (signed char)-61))))))))));
            arr_26 [i_5] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) -1073017897)), (max((((/* implicit */unsigned long long int) ((arr_23 [17] [i_5] [(signed char)13]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_4))))), (((((/* implicit */_Bool) -725199816)) ? (((/* implicit */unsigned long long int) var_7)) : (arr_17 [i_5] [i_7])))))));
            /* LoopSeq 3 */
            for (long long int i_8 = 2; i_8 < 23; i_8 += 4) 
            {
                arr_29 [(short)16] [i_7] [i_7] [i_7] = ((/* implicit */int) var_9);
                arr_30 [i_8] [i_7] [i_5] [i_5] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) >= (((arr_23 [i_8] [i_8] [i_8 + 2]) ? (arr_16 [i_8 - 2] [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-102)) ? (3654219591093600647LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)68))))))))));
                var_27 = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) ((_Bool) 4639174768962202599ULL))))));
                /* LoopNest 2 */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    for (int i_10 = 0; i_10 < 25; i_10 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_35 [i_9] [i_10])) - (((/* implicit */int) (short)-32765)))))) != (((unsigned long long int) var_5))));
                            arr_37 [13ULL] [i_9] [i_8] [i_5] [i_5] [i_9] [i_5] = ((/* implicit */signed char) (((-(((/* implicit */int) arr_28 [i_8 - 2] [i_10] [i_10])))) >> (((arr_28 [i_8 - 2] [i_9] [i_9]) ? (((/* implicit */int) arr_28 [i_8 - 2] [i_10] [i_10])) : (((/* implicit */int) arr_28 [i_8 - 2] [i_10] [7ULL]))))));
                            var_29 ^= ((/* implicit */signed char) arr_35 [i_8] [i_7]);
                        }
                    } 
                } 
                arr_38 [i_8] [i_7] [i_5] = ((/* implicit */long long int) arr_23 [i_5] [i_7] [i_8]);
            }
            /* vectorizable */
            for (int i_11 = 1; i_11 < 22; i_11 += 3) 
            {
                var_30 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_11 - 1] [i_11 + 3] [i_11 + 3] [i_11 - 1]))));
                var_31 = (-(arr_40 [i_7]));
            }
            /* vectorizable */
            for (int i_12 = 2; i_12 < 23; i_12 += 4) 
            {
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_12 + 1] [i_12 + 1] [i_12 + 2]))) - (-680378999798463687LL))))));
                var_33 ^= ((/* implicit */long long int) var_6);
            }
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) (~(arr_33 [i_5] [i_7] [i_5] [i_5]))))));
            arr_44 [i_5] |= ((/* implicit */signed char) ((long long int) (signed char)28));
        }
        for (long long int i_13 = 0; i_13 < 25; i_13 += 1) 
        {
            arr_47 [i_5] [(_Bool)0] &= ((/* implicit */short) (-(((((((/* implicit */_Bool) (signed char)-115)) || (((/* implicit */_Bool) 16916986629587785394ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (min((5096359603516596107LL), (-776881708142250949LL)))))));
            var_35 ^= ((/* implicit */long long int) min((arr_36 [i_13] [i_13] [(signed char)2] [i_13] [22] [i_13] [i_13]), (((/* implicit */int) ((signed char) arr_42 [i_13] [i_13] [i_5])))));
        }
        for (int i_14 = 1; i_14 < 23; i_14 += 4) 
        {
            var_36 = ((/* implicit */signed char) min((((/* implicit */long long int) ((var_8) != (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (arr_32 [i_14 - 1] [i_14] [i_5] [i_5] [i_5])))))), (((long long int) ((((/* implicit */_Bool) arr_48 [i_5] [i_5] [i_5])) ? (arr_43 [i_5] [i_14]) : (776881708142250948LL))))));
            arr_51 [i_5] [14LL] = ((/* implicit */short) -7346188967966444421LL);
        }
        arr_52 [i_5] = ((/* implicit */short) 6137890963654672055LL);
        var_37 = ((/* implicit */signed char) ((((-8127189979252157958LL) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) arr_36 [i_5] [i_5] [(short)6] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : (-776881708142250934LL))) + (56LL)))));
    }
}
