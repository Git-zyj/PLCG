/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244674
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
    var_14 = ((/* implicit */_Bool) var_9);
    var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (+(-1519606339)))), (((var_13) * (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
    var_16 = ((/* implicit */unsigned long long int) (+(var_6)));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_17 = ((/* implicit */signed char) ((((int) arr_1 [i_0])) & (((/* implicit */int) ((signed char) arr_0 [i_0] [i_0])))));
        arr_2 [(unsigned char)6] [i_0] = ((/* implicit */int) (short)-15414);
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_0] [(short)16])) & (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_5 [i_0])))) < (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)15414))))))))));
            var_19 = ((/* implicit */unsigned short) ((((arr_1 [i_1]) ? (((/* implicit */int) ((signed char) arr_0 [i_0] [(_Bool)1]))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_9))))))) < (((/* implicit */int) ((arr_3 [i_1]) || (((/* implicit */_Bool) ((unsigned long long int) var_0))))))));
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(16936481375146681540ULL)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)3))))))))));
            var_21 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [9])) <= (((/* implicit */int) min(((short)15398), (((/* implicit */short) (unsigned char)3)))))))), ((+(((long long int) arr_5 [i_1]))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0] [i_0])) == (((/* implicit */int) arr_7 [i_0] [i_2 + 2]))));
            var_23 = arr_3 [i_2];
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_24 *= ((_Bool) (~(var_2)));
                        /* LoopSeq 1 */
                        for (unsigned short i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_25 = ((/* implicit */signed char) 1510262698562870060ULL);
                            var_26 = ((/* implicit */short) arr_14 [i_5] [2ULL] [14ULL] [i_2]);
                        }
                    }
                } 
            } 
        }
        for (long long int i_6 = 1; i_6 < 18; i_6 += 4) 
        {
            var_27 |= ((/* implicit */unsigned int) arr_5 [i_6]);
            var_28 = ((/* implicit */unsigned char) var_12);
            var_29 = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-4651)))))))), ((-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))) <= (9122796240896352515LL))))))));
            /* LoopNest 2 */
            for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_30 = ((/* implicit */signed char) arr_7 [(signed char)12] [4]);
                        var_31 = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_13 [i_0] [8U] [i_7] [(_Bool)1] [i_0])), (((((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0] [(signed char)1]))))) * (((8852693397424444039LL) & (((/* implicit */long long int) var_10))))))));
                    }
                } 
            } 
        }
    }
    for (long long int i_9 = 2; i_9 < 10; i_9 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_11 = 2; i_11 < 8; i_11 += 4) 
            {
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (((long long int) (!(((/* implicit */_Bool) arr_23 [(unsigned short)4]))))))))));
                var_33 += ((/* implicit */unsigned char) min((var_6), ((~(var_6)))));
                var_34 = ((/* implicit */int) min(((((~(18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)19975)) << (((var_2) - (1829755351360289809LL)))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14428)) - ((+(((/* implicit */int) (signed char)-71)))))))));
                var_35 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_24 [i_11 + 1] [i_9 - 2])))) ? ((((!(((/* implicit */_Bool) arr_26 [i_10] [i_10])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_9 - 2]))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15385))) : (18380618647634760130ULL))))) : (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))))), (min((16936481375146681555ULL), (((/* implicit */unsigned long long int) (unsigned char)252))))))));
            }
            for (int i_12 = 3; i_12 < 11; i_12 += 1) 
            {
                var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) arr_31 [i_9] [(unsigned short)4] [i_9]))));
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        var_37 = ((((/* implicit */_Bool) arr_12 [i_12 - 2])) ? ((~(-1LL))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))));
                        var_38 &= ((/* implicit */signed char) ((((/* implicit */int) (signed char)-52)) & (((/* implicit */int) arr_0 [i_9] [i_9]))));
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_13] [i_13] [i_14]))) == (-9122796240896352516LL)))) : (((/* implicit */int) var_8))));
                        var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [14ULL] [i_14])))))));
                        var_41 = ((/* implicit */short) ((((/* implicit */_Bool) arr_26 [i_9 - 1] [i_13])) ? (((((/* implicit */long long int) ((/* implicit */int) var_9))) & (-9122796240896352516LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) (unsigned short)30034))))))));
                    }
                    for (int i_15 = 0; i_15 < 12; i_15 += 4) 
                    {
                        var_42 = ((/* implicit */_Bool) max((((long long int) ((((/* implicit */_Bool) arr_33 [i_12] [2LL] [i_9 - 1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_21 [i_10] [(unsigned short)7] [5U] [7ULL]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((-2195813906255766600LL) ^ (((/* implicit */long long int) 3556034531U))))))))));
                        var_43 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */unsigned long long int) ((2651727763603468994LL) << (((var_12) - (2275141844U)))))) : (arr_22 [i_15] [i_15])))));
                        arr_41 [9] [i_10] [(unsigned short)3] [i_13] [5ULL] [i_15] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) == (1510262698562870085ULL))))))) ? (2002816593U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_6 [(short)19])))))))));
                        var_44 |= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_6 [6U])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) < (-9122796240896352515LL)))) : (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && (((/* implicit */_Bool) 1510262698562870049ULL))))))));
                        var_45 = ((/* implicit */int) arr_6 [3U]);
                    }
                    for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        var_46 = ((/* implicit */_Bool) arr_21 [(signed char)9] [i_13] [i_9] [i_9]);
                        var_47 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(signed char)4] [3])) ? (((/* implicit */int) (unsigned short)46724)) : (var_7))))))));
                    }
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 12; i_17 += 1) 
                    {
                        var_48 = (+(((/* implicit */int) arr_14 [i_9] [16ULL] [i_9] [i_9 + 2])));
                        var_49 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) max(((signed char)-21), (arr_12 [i_10])))), ((-(arr_34 [(unsigned char)6] [(signed char)9])))))) ? (((/* implicit */unsigned long long int) (-(var_7)))) : (((((/* implicit */_Bool) ((((-8726107400224542638LL) + (9223372036854775807LL))) << (((((((/* implicit */int) (signed char)-26)) + (57))) - (27)))))) ? (((((/* implicit */_Bool) arr_0 [i_10] [i_9])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_9] [i_10] [i_12] [i_12] [i_17]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                        var_50 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */long long int) ((unsigned int) var_13))), (var_2))))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_51 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_12)))) ? (((unsigned int) (unsigned char)139)) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? ((((+(var_0))) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)27600)))));
                        var_52 = ((min((((/* implicit */long long int) ((((/* implicit */int) arr_48 [i_18] [i_9] [i_9])) + (arr_4 [16])))), (min((((/* implicit */long long int) var_7)), (var_13))))) == (((/* implicit */long long int) min(((~(var_7))), (((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
                        var_53 = ((/* implicit */long long int) arr_21 [i_9] [i_9] [i_12 - 2] [i_9]);
                    }
                }
                for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    var_54 |= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) 1ULL)))));
                    var_55 = ((/* implicit */_Bool) (short)32767);
                    var_56 |= ((/* implicit */signed char) ((((/* implicit */int) arr_30 [(short)7] [(signed char)11] [i_12])) / ((~(((/* implicit */int) arr_20 [i_12 + 1] [(unsigned short)12]))))));
                    var_57 = ((/* implicit */int) ((arr_39 [i_19] [i_10]) ? (((/* implicit */long long int) ((int) (+(var_12))))) : ((-(((-1LL) + (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_10] [i_10] [i_10])))))))));
                }
                var_58 = ((/* implicit */signed char) 18446744073709551595ULL);
                var_59 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_6)) > ((((~(var_1))) << (((2002816593U) - (2002816538U)))))));
                var_60 = ((((/* implicit */_Bool) ((unsigned long long int) (~(((/* implicit */int) var_3)))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (signed char)-109)), ((short)27600))))) < ((+(var_12)))))) : (((/* implicit */int) arr_43 [(_Bool)1] [i_10] [(signed char)8] [i_10] [i_12 - 1] [(signed char)8])));
            }
            var_61 = arr_1 [(unsigned short)0];
            var_62 = arr_46 [i_9] [i_10] [i_10] [(signed char)10] [6LL] [i_10];
        }
        var_63 &= ((/* implicit */signed char) arr_33 [i_9 - 1] [i_9 - 1] [i_9]);
    }
}
