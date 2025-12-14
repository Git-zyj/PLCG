/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4352
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
    var_12 = ((/* implicit */unsigned short) 16557813080078537814ULL);
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) var_10)), (((((((/* implicit */int) var_2)) + (((/* implicit */int) var_0)))) - (min((((/* implicit */int) var_8)), (-1)))))));
    var_14 = ((/* implicit */int) var_5);
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_1))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0] = arr_0 [i_0];
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) ? (min((arr_1 [i_0] [i_0]), (arr_1 [(unsigned char)9] [(short)4]))) : (((arr_1 [6LL] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))))) ? (max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) (unsigned short)32768)))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (short)(-32767 - 1))) % (((/* implicit */int) var_2)))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        arr_5 [i_1] &= ((/* implicit */long long int) ((((((/* implicit */_Bool) -2798730242743483007LL)) ? (((/* implicit */int) var_0)) : (var_9))) <= (((((/* implicit */int) var_0)) / (((/* implicit */int) var_1))))));
        arr_6 [i_1] [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_4 [i_1 + 2] [i_1 + 2])));
        /* LoopSeq 4 */
        for (long long int i_2 = 1; i_2 < 21; i_2 += 2) 
        {
            var_17 -= ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 + 2] [i_1 + 2] [i_2 + 1])) - (((/* implicit */int) arr_7 [i_1 - 2] [i_1 - 2] [i_2 - 1]))));
            var_18 = ((/* implicit */unsigned int) var_9);
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)32746))))))))));
            var_20 = ((/* implicit */unsigned int) arr_4 [i_1 - 2] [(unsigned short)20]);
            arr_11 [(short)1] [i_1 + 1] [(short)1] = ((/* implicit */signed char) ((((431722038134763360ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2]))))) & (((/* implicit */unsigned long long int) arr_9 [i_2 - 1]))));
        }
        for (long long int i_3 = 1; i_3 < 21; i_3 += 2) /* same iter space */
        {
            arr_14 [i_3] = ((/* implicit */int) ((((18015022035574788251ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
            arr_15 [(unsigned char)6] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_3 [i_1 - 1] [16])))) && (((((/* implicit */_Bool) arr_4 [i_1] [i_3])) && (((/* implicit */_Bool) var_2))))));
        }
        for (long long int i_4 = 1; i_4 < 21; i_4 += 2) /* same iter space */
        {
            var_21 = ((/* implicit */unsigned long long int) (((~(var_7))) << (((((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (unsigned char)205)))) - (203)))));
            arr_19 [i_1] = ((/* implicit */int) (short)-32746);
            var_22 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_3)))));
            var_23 ^= ((/* implicit */short) (-((+(2443190811277019307ULL)))));
        }
        for (long long int i_5 = 1; i_5 < 21; i_5 += 2) /* same iter space */
        {
            var_24 = ((/* implicit */short) var_11);
            var_25 &= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (signed char)103)))) || (((/* implicit */_Bool) arr_4 [i_5 - 1] [i_1]))));
            var_26 *= ((/* implicit */unsigned char) ((unsigned int) arr_16 [i_5 - 1] [i_1 - 1]));
        }
        var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16003553262432532304ULL)) ? (arr_10 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) arr_12 [i_1 + 2])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_1] [(unsigned short)18] [i_1])) && (((/* implicit */_Bool) arr_17 [i_1] [i_1] [i_1])))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
        {
            var_28 ^= ((/* implicit */long long int) ((unsigned int) arr_13 [i_6]));
            var_29 = ((/* implicit */unsigned char) (~(arr_18 [i_1 + 2] [i_1 + 2] [i_1 - 2])));
            var_30 = ((/* implicit */unsigned int) arr_4 [19ULL] [i_6]);
        }
        for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
        {
            var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [20ULL] [i_1]))));
            arr_30 [(unsigned short)0] [i_7] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_22 [i_1 + 1] [i_1 + 1]))));
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((arr_4 [i_1] [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_7]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_1 + 2])))));
            arr_31 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [(unsigned char)10] [i_1])) & (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) 4294967295U)))))));
        }
        for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */unsigned char) (unsigned short)65530);
            arr_35 [i_1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_8])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) : (3716468151145596264ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_8])) ? (arr_18 [i_1] [i_8] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)18547))))))));
            /* LoopSeq 3 */
            for (short i_9 = 2; i_9 < 18; i_9 += 3) /* same iter space */
            {
                arr_38 [(unsigned char)7] [i_8] [i_9 + 3] = (-(arr_25 [i_9 + 2] [i_8]));
                arr_39 [i_1 - 2] [i_9] [i_9 + 2] [i_8] = ((/* implicit */unsigned short) (signed char)31);
                arr_40 [i_9] [i_8] [i_8] [i_1] = ((/* implicit */long long int) (-((-(var_6)))));
                var_34 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-6006))));
            }
            for (short i_10 = 2; i_10 < 18; i_10 += 3) /* same iter space */
            {
                var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) ((arr_17 [i_1 + 2] [i_10 + 2] [i_10 + 2]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_1] [i_1 + 1]))))))));
                var_36 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_1 - 1]))));
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    arr_46 [i_1] [(signed char)10] [i_8] [i_1] [i_1] [7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_1 - 1] [11] [i_8])) ? (arr_34 [i_1 - 2] [i_1] [i_8]) : (((/* implicit */long long int) arr_18 [i_1 - 1] [i_10 + 3] [i_10 + 2]))));
                    var_37 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_7))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                }
            }
            for (short i_12 = 2; i_12 < 18; i_12 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1 + 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_12 [i_1 - 2]))));
                arr_50 [i_8] [i_8] [(signed char)0] [i_12] = ((/* implicit */signed char) ((unsigned long long int) ((signed char) 15361965105254110785ULL)));
                var_39 -= (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_12] [(short)16] [i_1]))) : (var_7))));
                arr_51 [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) arr_16 [i_1] [12]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_8])))))));
            }
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 1; i_13 < 16; i_13 += 3) 
    {
        arr_54 [(signed char)15] = ((/* implicit */unsigned char) ((signed char) arr_26 [i_13 - 1] [(unsigned short)6] [i_13 - 1]));
        arr_55 [i_13 - 1] [i_13] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_53 [i_13 - 1])) ? (arr_33 [i_13 + 1] [i_13 - 1] [i_13 + 1]) : (arr_34 [i_13 - 1] [i_13 + 1] [8])));
        arr_56 [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) 370825298U)) ? (((/* implicit */int) arr_22 [i_13] [i_13])) : (((/* implicit */int) (unsigned char)189)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) == (arr_17 [i_13] [i_13 - 1] [i_13]))))));
    }
}
