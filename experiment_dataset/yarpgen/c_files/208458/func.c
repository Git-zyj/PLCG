/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208458
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
    var_20 *= ((/* implicit */unsigned char) (+(var_2)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) (signed char)-67);
        var_21 = ((/* implicit */unsigned char) ((_Bool) (unsigned char)1));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) min((max((min((-7037145210680768273LL), (((/* implicit */long long int) (unsigned char)130)))), (((/* implicit */long long int) 0)))), (((/* implicit */long long int) max(((signed char)-71), (((signed char) (unsigned char)75)))))));
        var_22 = ((/* implicit */unsigned char) max((arr_1 [i_0]), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0])))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 11; i_1 += 4) 
        {
            var_23 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) -1152921504606846976LL))) ? ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [9LL]))) : (((/* implicit */long long int) max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_0 [i_1])));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((3795695339175217499ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))))));
            var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) <= (((((/* implicit */_Bool) 2849180460195156526ULL)) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136)))))));
            var_26 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1])))))) ? ((~(arr_1 [3U]))) : (((/* implicit */long long int) ((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (((_Bool)0) ? (var_3) : (((/* implicit */unsigned long long int) arr_1 [i_1 - 1]))))) ? (((long long int) arr_5 [i_0] [i_0] [i_0])) : ((~(36027697507336192LL)))))));
        }
        /* vectorizable */
        for (long long int i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            arr_11 [i_2] [i_2] = arr_6 [i_0] [i_2];
            var_27 = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0]);
            var_28 += ((/* implicit */unsigned int) var_19);
            arr_12 [i_2] = ((/* implicit */short) 1117880534467415983LL);
            /* LoopSeq 2 */
            for (int i_3 = 3; i_3 < 12; i_3 += 3) 
            {
                var_29 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 1835270130U)) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)-73)))));
                var_30 = ((/* implicit */signed char) ((long long int) 131040));
            }
            for (unsigned char i_4 = 4; i_4 < 11; i_4 += 3) 
            {
                var_31 = ((((/* implicit */_Bool) (unsigned char)228)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3811894100U));
                var_32 *= ((/* implicit */unsigned short) ((11430445988304800185ULL) * (3795695339175217519ULL)));
                var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_0 [i_2 + 3])) - (var_19)));
            }
        }
        for (unsigned int i_5 = 2; i_5 < 11; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                for (unsigned char i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    {
                        var_34 += ((/* implicit */unsigned char) max((1311973747U), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-114)))))));
                        var_35 = ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) var_4))) <= (((/* implicit */int) (unsigned char)159))))), (((unsigned char) (~(arr_21 [i_5] [i_6] [i_6]))))));
                        var_36 -= ((long long int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_5 - 2]))));
                    }
                } 
            } 
            var_37 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_14 [i_5 - 1] [i_5 - 1] [i_5 + 2] [i_5 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)67))) : (arr_14 [i_5 - 2] [i_5 - 1] [i_5 + 2] [i_5 + 1]))) <= (arr_14 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 - 1])));
        }
        for (short i_8 = 1; i_8 < 13; i_8 += 4) 
        {
            var_38 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -6228656980117898924LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-1))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_39 = arr_26 [i_0] [i_8 - 1];
                arr_32 [i_9] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_8 + 1] [i_8 - 1] [i_8 - 1]))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_35 [i_0] [i_0] [(signed char)2] = ((/* implicit */long long int) max((max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_27 [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_25 [i_0] [i_0] [i_10])), (var_2)))))))));
                var_40 = ((/* implicit */unsigned char) var_4);
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_38 [i_0] [i_8] [5LL] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [11LL] [11LL] [i_8 - 1] [i_8 - 1])) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_8] [i_8 - 1] [i_8])) : (var_3)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_8 - 1] [i_8 + 1] [i_11])), (var_11)))) : (((((/* implicit */_Bool) arr_16 [i_8 - 1] [i_0] [i_8 + 1])) ? (((/* implicit */int) ((unsigned char) var_4))) : (((/* implicit */int) var_17))))));
                /* LoopNest 2 */
                for (unsigned char i_12 = 1; i_12 < 11; i_12 += 2) 
                {
                    for (signed char i_13 = 0; i_13 < 14; i_13 += 3) 
                    {
                        {
                            var_41 += ((/* implicit */unsigned char) (_Bool)1);
                            var_42 ^= ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) arr_15 [i_11] [i_13])))));
                            var_43 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (signed char)-72)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_45 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((((_Bool)0) ? (((/* implicit */int) (unsigned char)159)) : (((/* implicit */int) (short)-16265)))))), ((+(((/* implicit */int) arr_7 [i_8] [i_0]))))));
                        }
                    } 
                } 
            }
            arr_46 [i_8 - 1] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_23 [i_0] [i_0] [2U])))));
            /* LoopSeq 1 */
            for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                var_44 = ((/* implicit */_Bool) 9223372036854775807LL);
                var_45 |= ((/* implicit */long long int) (unsigned char)64);
                var_46 = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */unsigned long long int) arr_48 [i_8 + 1] [i_8] [i_8 - 1] [i_8 - 1])), (((((/* implicit */_Bool) 17863573582359742728ULL)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))))))));
                var_47 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_0), (max((((/* implicit */short) arr_19 [i_0] [i_14])), ((short)25406))))))));
            }
        }
    }
    var_48 |= ((/* implicit */unsigned char) ((signed char) var_3));
    var_49 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)96)) ? (17753245625038143456ULL) : (((/* implicit */unsigned long long int) 6228656980117898924LL))));
}
