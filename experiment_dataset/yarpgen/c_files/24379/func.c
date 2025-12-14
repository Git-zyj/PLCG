/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24379
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
    for (int i_0 = 2; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_18 = (-(((unsigned long long int) (-(11333057765401831591ULL)))));
        arr_2 [i_0 - 1] [i_0] = max((((arr_1 [i_0 - 2] [i_0 - 1]) - (arr_0 [i_0 - 1]))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) || (((/* implicit */_Bool) 423772062))))));
        arr_3 [i_0 - 2] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_1 [i_0 - 2] [i_0 + 1]))) ? ((-((-(7113686308307720025ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0 - 2]))))))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((((/* implicit */_Bool) -321075730)) ? (11333057765401831561ULL) : (((/* implicit */unsigned long long int) -321075747)));
        var_19 ^= ((((/* implicit */_Bool) arr_1 [i_1] [i_1 - 1])) ? (arr_5 [i_1 + 2]) : (((/* implicit */unsigned long long int) arr_0 [i_1])));
        var_20 = ((/* implicit */int) ((arr_4 [i_1]) ^ (((/* implicit */unsigned long long int) (~(var_17))))));
    }
    for (int i_2 = 2; i_2 < 12; i_2 += 2) /* same iter space */
    {
        var_21 = max((((/* implicit */unsigned long long int) var_1)), (min((((arr_8 [i_2]) ^ (((/* implicit */unsigned long long int) -321075730)))), (((/* implicit */unsigned long long int) var_14)))));
        var_22 = ((/* implicit */int) max((var_22), (min((((((-16) + (2147483647))) >> (((var_8) - (15313439762861578689ULL))))), (((/* implicit */int) ((arr_4 [i_2 + 2]) <= (arr_7 [i_2 + 2]))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 3) 
    {
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_1 [i_3] [i_3]))));
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 1) 
        {
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (arr_1 [i_4 - 1] [i_4 - 1]) : ((~(arr_1 [i_3] [i_4 + 3])))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((int) var_6))) >= (arr_10 [i_3] [i_4 + 3])));
                var_26 &= ((arr_1 [i_4 + 2] [i_5 + 1]) | (arr_1 [i_4 + 2] [i_4 - 1]));
                arr_16 [i_3] [i_4] = ((/* implicit */int) ((unsigned long long int) ((var_4) << (((((-1243608549) + (1243608566))) - (17))))));
            }
            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_3] [i_3])) && (((/* implicit */_Bool) 15)))) ? (((unsigned long long int) 601805474)) : (((var_10) + (arr_5 [i_4 + 2]))))))));
        }
        for (int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            arr_19 [i_3] [i_3] [i_3] = ((((/* implicit */_Bool) 1944692660775855712ULL)) ? (((/* implicit */unsigned long long int) 321075746)) : (arr_10 [i_6] [i_3]));
            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_6])) ? (arr_17 [i_3] [i_6] [i_6]) : (((/* implicit */unsigned long long int) -321075747))));
            arr_20 [i_3] [i_6] [i_6] = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_13)))));
        }
        for (int i_7 = 0; i_7 < 10; i_7 += 3) 
        {
            arr_24 [i_3] [i_7] = var_11;
            var_29 = ((/* implicit */int) ((((1152921504606846976ULL) ^ (arr_4 [i_7]))) | (((((/* implicit */_Bool) 1612615648)) ? (2362739050201085691ULL) : (var_6)))));
        }
    }
    /* LoopSeq 3 */
    for (int i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
    {
        var_30 = ((/* implicit */int) max((arr_4 [i_8]), (((/* implicit */unsigned long long int) arr_26 [i_8]))));
        var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((max((var_0), (var_13))) + (2147483647))) >> (((max((((/* implicit */unsigned long long int) arr_0 [i_8])), (arr_25 [i_8] [i_8]))) - (18446744072985356625ULL)))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_9 = 3; i_9 < 10; i_9 += 2) 
        {
            var_32 = ((((/* implicit */_Bool) arr_25 [i_8] [i_9 - 2])) ? ((-(14715306360267320601ULL))) : (((/* implicit */unsigned long long int) 1612615648)));
            var_33 = ((/* implicit */int) (~(arr_25 [i_9 - 2] [i_9 - 1])));
            arr_29 [i_8] [i_8] [i_9] = ((var_1) + (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_8]))))));
            var_34 = ((/* implicit */int) max((var_34), ((((!(((/* implicit */_Bool) arr_28 [i_8])))) ? (var_5) : (((((/* implicit */_Bool) arr_1 [i_8] [i_8])) ? (var_5) : (arr_28 [i_8])))))));
        }
    }
    for (int i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
    {
        var_35 ^= ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_32 [6])), (14309512817317413788ULL)))) ? (((((/* implicit */_Bool) arr_26 [8ULL])) ? (((/* implicit */unsigned long long int) (+(1594631918)))) : (arr_4 [i_10]))) : (((min((12ULL), (((/* implicit */unsigned long long int) 2147483647)))) & (((/* implicit */unsigned long long int) -1649067916))))));
        var_36 = ((/* implicit */unsigned long long int) 892455629);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 3) 
        {
            var_37 = ((((/* implicit */_Bool) var_11)) ? (((var_5) + (-701745096))) : (var_7));
            var_38 &= ((var_10) - (((/* implicit */unsigned long long int) arr_28 [i_11 + 2])));
        }
        /* vectorizable */
        for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 2) /* same iter space */
        {
            arr_40 [i_10] [i_10] [i_12] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 17197818206464655530ULL)) && (((/* implicit */_Bool) -321075704)))));
            arr_41 [i_10] = ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_27 [i_10])) >= (arr_37 [i_12] [i_10] [i_10])));
        }
        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
        {
            var_39 = ((/* implicit */int) arr_43 [i_10]);
            var_40 = ((/* implicit */int) arr_4 [i_10]);
        }
        /* vectorizable */
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_10])) ? (arr_30 [i_10] [i_14]) : (((/* implicit */unsigned long long int) 713534287))))) ? (arr_26 [i_14]) : (var_1))))));
            /* LoopSeq 1 */
            for (int i_15 = 2; i_15 < 11; i_15 += 2) 
            {
                var_42 = ((/* implicit */int) ((var_11) <= (arr_37 [i_10] [i_10] [i_15 - 1])));
                /* LoopSeq 3 */
                for (unsigned long long int i_16 = 2; i_16 < 10; i_16 += 2) /* same iter space */
                {
                    arr_55 [i_10] [i_10] [i_10] [i_16] = ((/* implicit */int) ((2147483621) == (-2102885472)));
                    var_43 ^= ((/* implicit */int) (!(((/* implicit */_Bool) arr_44 [i_15] [i_16] [i_16 + 1]))));
                }
                for (unsigned long long int i_17 = 2; i_17 < 10; i_17 += 2) /* same iter space */
                {
                    var_44 = arr_7 [i_17];
                    var_45 = -321075756;
                    arr_60 [i_10] [i_10] = ((/* implicit */int) ((18446744073709551607ULL) ^ (((/* implicit */unsigned long long int) -1211550082))));
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 12; i_18 += 2) 
                    {
                        var_46 ^= var_13;
                        arr_64 [i_10] [i_10] [i_10] [i_10] [i_10] = ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_25 [i_10] [i_10]))) << (((((((/* implicit */_Bool) 14530835440117591323ULL)) ? (var_11) : (arr_50 [i_15] [i_17] [i_10]))) - (17131454324071997098ULL))));
                    }
                    var_47 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_17] [i_10] [i_15 - 1])) || (((/* implicit */_Bool) (~(321075760))))));
                }
                for (unsigned long long int i_19 = 2; i_19 < 10; i_19 += 2) /* same iter space */
                {
                    arr_68 [i_19] [i_10] [i_10] [i_10] = var_14;
                    var_48 = ((int) ((unsigned long long int) arr_5 [i_10]));
                }
                var_49 += ((/* implicit */unsigned long long int) var_7);
                arr_69 [i_10] [i_14] [i_15] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_61 [i_15]) : (((/* implicit */unsigned long long int) 255))))) ? (arr_33 [i_15 - 2] [i_15 - 2]) : (((/* implicit */unsigned long long int) var_15)));
            }
            arr_70 [i_10] [i_14] = (+(4322761455297888117ULL));
            arr_71 [i_10] [i_10] = ((/* implicit */unsigned long long int) ((int) 1483096240));
        }
    }
    for (int i_20 = 0; i_20 < 12; i_20 += 3) /* same iter space */
    {
        var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) var_17))));
        arr_75 [i_20] [i_20] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_20])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_54 [i_20]) : (var_16)))) : (((6940473672072390721ULL) % (arr_37 [i_20] [i_20] [i_20])))))) ? (3239103488714242199ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [i_20] [i_20])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_51 [i_20] [i_20] [i_20]))))) : (((int) 321075729))))));
        arr_76 [0] &= ((/* implicit */int) ((-321075726) >= (((int) arr_32 [0]))));
    }
    var_51 ^= ((/* implicit */int) ((var_16) <= ((~(((((/* implicit */_Bool) var_5)) ? (-158217570) : (var_4)))))));
}
