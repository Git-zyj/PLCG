/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214406
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
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        var_10 -= ((/* implicit */signed char) var_1);
        var_11 = ((/* implicit */long long int) arr_1 [i_0 - 3]);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_12 -= ((/* implicit */short) (~(arr_0 [i_0 - 4])));
            arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) ((var_5) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_0 [13U])))))));
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0))))) <= (6953924581618910898ULL)));
            arr_8 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0 - 3])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
            var_13 = (!(((/* implicit */_Bool) 1972839397)));
        }
        for (int i_2 = 3; i_2 < 24; i_2 += 1) 
        {
            var_14 ^= ((/* implicit */int) ((((/* implicit */unsigned int) arr_11 [i_0 - 1])) & (((((/* implicit */unsigned int) var_1)) % (4043386892U)))));
            var_15 += ((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) arr_1 [(signed char)13]))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                var_16 = ((/* implicit */signed char) arr_16 [i_0] [(unsigned short)17] [i_4]);
                var_17 = ((/* implicit */short) arr_15 [i_0 - 3]);
                /* LoopSeq 3 */
                for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
                {
                    var_18 = var_0;
                    var_19 = ((signed char) arr_5 [i_0 - 1]);
                }
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_7 = 1; i_7 < 24; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_0 - 4] [i_7 - 1] [i_7 - 1]))));
                        var_21 = (i_4 % 2 == zero) ? (((((arr_19 [i_4]) + (9223372036854775807LL))) >> (((arr_19 [i_4]) + (9139266663258352574LL))))) : (((((((arr_19 [i_4]) - (9223372036854775807LL))) + (9223372036854775807LL))) >> (((((arr_19 [i_4]) - (9139266663258352574LL))) + (7837625331500313383LL)))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_20 [i_0 - 1] [i_0] [i_4] [i_4])) ? ((~(var_6))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)16613)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_25 [(signed char)5] [i_3] [(signed char)5] [i_3] [i_3] [i_3])))))));
                        var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 1556079622U)))))));
                    }
                    for (long long int i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        arr_29 [i_3] [i_8] [i_3] [i_4] [i_8] = ((/* implicit */long long int) var_2);
                        var_24 = ((/* implicit */unsigned long long int) arr_10 [i_0 - 3] [i_0 - 3]);
                    }
                    for (signed char i_9 = 3; i_9 < 21; i_9 += 1) 
                    {
                        arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) var_0);
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_3] [i_3])) != (((/* implicit */int) arr_10 [i_4] [i_9]))));
                    }
                    arr_34 [i_4] [i_4] [i_6] = ((/* implicit */unsigned int) (+(1671030452200273993ULL)));
                }
                for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) 
                {
                    var_26 = ((/* implicit */int) max((var_26), ((~(((/* implicit */int) (unsigned char)201))))));
                    var_27 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 - 4]))) : (var_5)));
                    var_28 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_19 [i_0])) <= (((((/* implicit */_Bool) arr_32 [i_0] [i_3] [i_0 + 1] [i_10] [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15587)))))));
                }
            }
            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) arr_3 [i_0 + 2]))));
        }
    }
    for (unsigned int i_11 = 1; i_11 < 15; i_11 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 18; i_12 += 4) 
        {
            for (int i_13 = 0; i_13 < 18; i_13 += 2) 
            {
                {
                    var_30 = ((/* implicit */long long int) var_7);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_14 = 0; i_14 < 18; i_14 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 18; i_15 += 1) 
                        {
                            arr_51 [i_12] [i_12] [i_13] [i_15] [i_15] [i_13] = ((/* implicit */signed char) arr_1 [i_11 + 2]);
                            var_31 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_50 [i_11 + 3] [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_14] [i_11 - 1])) : (1010706459)));
                            var_32 ^= ((/* implicit */unsigned long long int) (signed char)127);
                            var_33 = ((/* implicit */int) var_3);
                            var_34 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_11] [i_12] [i_11] [22] [i_11])) ? (((/* implicit */int) arr_46 [i_11] [i_11] [i_11] [i_11 + 1] [i_11 + 1])) : (((/* implicit */int) var_9))))) ? (arr_35 [i_14] [i_14] [i_14] [16ULL]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-31)))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 18; i_16 += 2) 
                        {
                            var_35 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_30 [i_11] [i_11] [i_11] [i_11 + 3] [i_11 + 3] [i_11 + 3]))) ^ (((((/* implicit */_Bool) 1185601271U)) ? (4790341095600932455LL) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_11] [i_12] [i_11] [i_14] [i_16])))))));
                            arr_55 [i_11] [i_11] [i_11] [i_11] [i_11] = ((((/* implicit */_Bool) arr_15 [i_11 + 3])) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) arr_15 [i_11 + 2])));
                            var_36 = ((/* implicit */signed char) (+(arr_49 [i_11 + 2] [i_11 + 2] [i_13] [8ULL] [i_11 + 2] [i_14] [i_14])));
                            arr_56 [i_11] [i_12] [i_13] [i_14] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_20 [i_12] [i_11 + 2] [i_13] [i_14])) <= (((/* implicit */int) arr_20 [i_12] [i_11 - 1] [i_12] [i_12]))));
                        }
                        arr_57 [i_11] [i_12] [i_13] [i_14] = ((/* implicit */short) var_5);
                        var_37 = ((/* implicit */signed char) 2147483647);
                        var_38 = ((/* implicit */unsigned long long int) var_4);
                        var_39 = ((/* implicit */_Bool) var_2);
                    }
                    var_40 = ((/* implicit */short) var_4);
                }
            } 
        } 
        var_41 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-33)) ? (((/* implicit */unsigned int) -545467811)) : (var_6)))), ((~(arr_31 [10LL]))))) != (((/* implicit */unsigned long long int) ((arr_46 [i_11] [i_11] [i_11 - 1] [i_11 - 1] [i_11]) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) arr_46 [i_11] [i_11 + 3] [i_11 + 3] [i_11 + 2] [i_11])))))));
        arr_58 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-91)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_11 + 2] [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_17 = 1; i_17 < 16; i_17 += 3) 
        {
            var_42 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_11] [11U] [(signed char)5] [i_11] [i_11])) ? (((/* implicit */int) arr_42 [i_11 - 1] [i_17])) : (((/* implicit */int) (short)9667))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_2)))) : (((/* implicit */int) var_4))));
            var_43 = ((/* implicit */unsigned char) (signed char)76);
            var_44 = (+(arr_16 [i_17 + 1] [i_17 - 1] [20ULL]));
        }
        for (long long int i_18 = 0; i_18 < 18; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_19 = 0; i_19 < 18; i_19 += 1) 
            {
                var_45 = ((/* implicit */signed char) 2238449653375629741LL);
                /* LoopSeq 2 */
                for (unsigned int i_20 = 2; i_20 < 17; i_20 += 4) 
                {
                    var_46 = ((/* implicit */unsigned char) arr_1 [i_11]);
                    arr_70 [i_18] = ((int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))))), (var_4)));
                    arr_71 [i_11 + 3] [i_18] [i_18] [i_11 + 3] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) != (var_3))) && (((/* implicit */_Bool) max((var_0), (((/* implicit */short) arr_3 [i_20 + 1])))))));
                    var_47 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4218320407765655032LL)) ? (3307126400U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-12)))));
                }
                for (unsigned long long int i_21 = 0; i_21 < 18; i_21 += 1) 
                {
                    var_48 = ((/* implicit */short) var_1);
                    arr_74 [i_21] [i_18] [i_18] [i_21] = ((/* implicit */signed char) arr_16 [i_11] [i_19] [i_18]);
                }
            }
            var_49 = ((/* implicit */long long int) ((((((arr_35 [i_11] [i_11] [i_11] [9U]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((unsigned int) (short)7168)))) * (((/* implicit */unsigned int) arr_27 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]))));
            var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) -73186234)), (arr_41 [i_11 + 1]))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_59 [i_11])) ? (((/* implicit */int) ((signed char) arr_39 [(unsigned char)9]))) : (((/* implicit */int) var_2))))))))));
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_22 = 0; i_22 < 13; i_22 += 4) 
    {
        var_51 = ((((/* implicit */_Bool) arr_66 [i_22] [i_22] [i_22])) ? (((/* implicit */int) arr_66 [i_22] [i_22] [i_22])) : (((/* implicit */int) (signed char)-63)));
        var_52 = ((/* implicit */signed char) ((_Bool) arr_65 [i_22] [i_22] [i_22] [i_22]));
        /* LoopNest 2 */
        for (int i_23 = 1; i_23 < 12; i_23 += 2) 
        {
            for (long long int i_24 = 0; i_24 < 13; i_24 += 3) 
            {
                {
                    arr_81 [i_24] [8U] [i_23 + 1] [i_22] = ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_23 + 1] [i_22]))) : (var_6));
                    var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) 2841474375U)) ? (((/* implicit */int) (short)0)) : (1279502179))) : (var_1)));
                    var_54 = ((/* implicit */unsigned char) min((var_54), (((/* implicit */unsigned char) (((_Bool)0) ? (arr_76 [i_23 - 1] [i_23 + 1]) : (arr_76 [i_23 + 1] [i_23 - 1]))))));
                    var_55 = ((/* implicit */short) max((var_55), (((/* implicit */short) var_9))));
                }
            } 
        } 
        var_56 -= ((/* implicit */unsigned int) ((arr_31 [i_22]) >> (((arr_31 [i_22]) - (7220415202049209420ULL)))));
        arr_82 [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_64 [i_22])) - (1057845261U)));
    }
    var_57 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_6)))) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (3911311246935848648LL))), (((/* implicit */long long int) (_Bool)1))))));
    var_58 = ((/* implicit */int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (unsigned char)187))))))) ? (123145302310912LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) & (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_9)) & (((/* implicit */int) (signed char)-99)))))))));
    var_59 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7))));
}
