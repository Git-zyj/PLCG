/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192051
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
    var_11 &= var_7;
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) 0U);
        arr_3 [(unsigned char)1] = ((/* implicit */unsigned char) (signed char)91);
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_13 = ((/* implicit */_Bool) (signed char)-92);
            var_14 ^= ((/* implicit */_Bool) -1218382956);
            var_15 = ((/* implicit */short) (unsigned char)45);
        }
        arr_9 [i_1] [i_1] = ((/* implicit */_Bool) 0ULL);
        var_16 = ((/* implicit */unsigned long long int) 1218382955);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 1; i_3 < 8; i_3 += 2) 
        {
            var_17 = ((/* implicit */long long int) (short)-32758);
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (short)22181))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                var_19 *= ((/* implicit */signed char) (short)22181);
                var_20 &= ((/* implicit */long long int) 360240796U);
                var_21 = ((/* implicit */unsigned short) (short)(-32767 - 1));
                /* LoopSeq 1 */
                for (unsigned short i_5 = 3; i_5 < 10; i_5 += 2) 
                {
                    var_22 = ((/* implicit */short) 18446744073709551588ULL);
                    arr_19 [7] [i_3 + 3] [i_3 + 3] [i_1] [(unsigned char)2] [i_4] = ((/* implicit */signed char) (short)6144);
                }
            }
            for (unsigned char i_6 = 2; i_6 < 9; i_6 += 1) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (unsigned short)59998))));
                    arr_25 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (unsigned char)0);
                    var_24 = ((/* implicit */signed char) 1267317162);
                }
                for (short i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) 382155164);
                    /* LoopSeq 1 */
                    for (signed char i_9 = 3; i_9 < 8; i_9 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) 1267317162);
                        arr_33 [i_9] [i_1] [i_6] [i_1] [i_1] = ((/* implicit */long long int) (unsigned char)11);
                    }
                    arr_34 [i_1] [(unsigned char)9] [i_6] [i_1] = ((/* implicit */unsigned short) -1267317134);
                    arr_35 [i_8] &= ((/* implicit */unsigned long long int) (unsigned char)16);
                }
                for (short i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                {
                    var_27 = ((/* implicit */unsigned char) (_Bool)1);
                    /* LoopSeq 1 */
                    for (signed char i_11 = 1; i_11 < 10; i_11 += 4) 
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_6] [i_10] [i_11] = ((/* implicit */unsigned int) 1218382955);
                        arr_43 [i_1] [i_10] [i_1] [i_1] = ((/* implicit */unsigned long long int) (unsigned char)16);
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 4; i_12 < 7; i_12 += 4) 
                    {
                        arr_47 [(unsigned char)0] [i_3] [i_1] [i_6] [i_10] [i_6] = ((/* implicit */int) (short)28384);
                        var_28 |= ((/* implicit */unsigned short) 3283225107U);
                        var_29 = ((/* implicit */_Bool) -5787054171380478556LL);
                        var_30 = ((/* implicit */signed char) (unsigned short)45767);
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned char) 11338479399180266947ULL);
                        arr_50 [i_1] [i_10] [i_6 + 2] [i_10] [i_10] [i_13] &= ((/* implicit */unsigned short) (short)0);
                        var_32 = ((/* implicit */signed char) (unsigned short)2042);
                    }
                    for (signed char i_14 = 1; i_14 < 9; i_14 += 2) 
                    {
                        var_33 *= ((/* implicit */short) (unsigned short)0);
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) 8856282376211704282ULL))));
                        var_35 = ((/* implicit */_Bool) (signed char)-2);
                    }
                }
                for (short i_15 = 0; i_15 < 11; i_15 += 4) /* same iter space */
                {
                    var_36 = ((/* implicit */signed char) (unsigned char)45);
                    arr_55 [i_1] [i_1] [i_6] [i_6] = ((/* implicit */long long int) 3ULL);
                    var_37 = ((/* implicit */long long int) 3635510794020283287ULL);
                }
                /* LoopSeq 4 */
                for (long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                {
                    arr_58 [i_1] = ((/* implicit */long long int) (unsigned char)124);
                    var_38 = ((/* implicit */unsigned long long int) (unsigned short)64512);
                }
                for (unsigned char i_17 = 0; i_17 < 11; i_17 += 1) 
                {
                    arr_61 [(unsigned short)0] [i_1] [i_6] [(unsigned char)5] [i_1] [i_17] = ((/* implicit */signed char) (unsigned char)11);
                    /* LoopSeq 3 */
                    for (signed char i_18 = 0; i_18 < 11; i_18 += 4) /* same iter space */
                    {
                        var_39 += ((/* implicit */unsigned int) (unsigned short)21849);
                        arr_64 [i_1] [i_1] = ((/* implicit */int) (unsigned short)63953);
                    }
                    for (signed char i_19 = 0; i_19 < 11; i_19 += 4) /* same iter space */
                    {
                        arr_69 [(unsigned short)0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (unsigned short)1029);
                        var_40 = ((/* implicit */int) 14811233279689268331ULL);
                        arr_70 [i_1] [i_19] [4] [i_1] [(signed char)2] &= ((/* implicit */int) (signed char)-33);
                    }
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        arr_73 [i_1] [i_1] [i_17] = ((/* implicit */long long int) (unsigned char)0);
                        var_41 = (unsigned short)31;
                        var_42 = (unsigned char)250;
                    }
                }
                for (unsigned short i_21 = 1; i_21 < 9; i_21 += 2) 
                {
                    var_43 = ((/* implicit */signed char) (_Bool)0);
                    arr_76 [i_1] [i_1] = ((/* implicit */unsigned short) (unsigned char)34);
                    arr_77 [i_21 + 1] [i_6 + 1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned long long int) 1706649162195524173LL);
                    /* LoopSeq 2 */
                    for (signed char i_22 = 2; i_22 < 10; i_22 += 1) 
                    {
                        var_44 = (signed char)93;
                        var_45 = ((/* implicit */int) 576451956210401280ULL);
                    }
                    for (short i_23 = 0; i_23 < 11; i_23 += 4) 
                    {
                        var_46 += ((/* implicit */unsigned int) (unsigned short)0);
                        arr_84 [8LL] [i_3 + 2] [8ULL] [i_23] [i_3] &= ((/* implicit */short) (signed char)-109);
                    }
                    var_47 = ((/* implicit */unsigned char) 576443160117379072ULL);
                }
                for (unsigned char i_24 = 0; i_24 < 11; i_24 += 4) 
                {
                    arr_87 [i_1] [i_1] [i_6] [i_1] = ((/* implicit */int) (signed char)87);
                    var_48 = (signed char)101;
                    /* LoopSeq 1 */
                    for (long long int i_25 = 0; i_25 < 11; i_25 += 3) 
                    {
                        var_49 = 397278022;
                        var_50 = (unsigned short)37958;
                    }
                }
                var_51 = ((/* implicit */unsigned short) 9250681815721785243ULL);
            }
        }
    }
}
