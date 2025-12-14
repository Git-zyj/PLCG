/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207861
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (-2147483647 - 1))), (2080374784U)))) || (((/* implicit */_Bool) arr_0 [i_0] [i_2]))));
                            arr_10 [i_0] [i_3] = ((/* implicit */long long int) var_9);
                            var_12 = (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_3 - 1] [i_3 - 1])) ? (((/* implicit */int) (unsigned short)34398)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))) && (((/* implicit */_Bool) 2214592497U)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) max(((signed char)64), (((/* implicit */signed char) min((((((/* implicit */_Bool) arr_11 [9] [i_4] [i_1] [15ULL])) && (((/* implicit */_Bool) 13)))), ((!(((/* implicit */_Bool) 13729016378548245743ULL)))))))));
                            var_14 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */int) arr_12 [i_1] [i_4] [i_1])) << (((((/* implicit */int) arr_7 [i_0] [i_1] [i_4] [i_5])) - (22))))));
                            arr_15 [i_5] [i_4] [i_1] [(unsigned short)15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_8 [i_0] [i_5]), (((/* implicit */unsigned long long int) 1655051152750698524LL))))) ? (1662100667) : (((/* implicit */int) var_2))));
                            var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_13 [i_0] [i_5] [i_4] [i_5] [i_5])) ? (min((((/* implicit */unsigned long long int) arr_13 [i_0] [(short)8] [i_4] [i_1] [(unsigned char)11])), (13729016378548245743ULL))) : (((/* implicit */unsigned long long int) min((-2147483647), (((/* implicit */int) arr_3 [(unsigned short)16] [i_1]))))))) <= (max(((-(17910874490323667182ULL))), (((/* implicit */unsigned long long int) (+(var_4))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (int i_7 = 0; i_7 < 20; i_7 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [8U] [8U])) ? (arr_0 [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_1] [i_0] [i_7]) >> (((/* implicit */int) var_2))))) ? (4294967289U) : (min((2080374824U), (((/* implicit */unsigned int) arr_3 [12U] [i_1])))))))));
                            var_17 = ((/* implicit */int) max((var_17), (arr_18 [i_0] [i_1] [i_1] [i_1])));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_8 = 1; i_8 < 22; i_8 += 4) 
    {
        for (short i_9 = 1; i_9 < 24; i_9 += 4) 
        {
            for (long long int i_10 = 3; i_10 < 23; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_11 = 1; i_11 < 21; i_11 += 4) 
                    {
                        for (signed char i_12 = 1; i_12 < 24; i_12 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((2147483637) >> (((-104591989) + (104592000)))));
                                var_19 = ((/* implicit */unsigned long long int) var_2);
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_28 [i_8] [i_8 + 2] [i_8])), (min((((/* implicit */unsigned int) arr_24 [(unsigned short)23])), (arr_26 [i_8] [i_9 - 1] [i_11] [i_8])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_23 [i_12 + 1] [i_12 - 1])) ? (2080374784U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >> (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_13 = 2; i_13 < 24; i_13 += 1) 
                    {
                        for (signed char i_14 = 0; i_14 < 25; i_14 += 2) 
                        {
                            {
                                var_21 += ((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (arr_32 [i_14] [i_9] [i_10 + 1] [i_14]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8] [i_8] [i_10]))))) < (((/* implicit */unsigned int) arr_24 [i_8 + 3]))))) < (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_9] [i_10 - 3] [i_9] [i_14]))))) && (((/* implicit */_Bool) (~(var_5))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)0), (((/* implicit */unsigned char) arr_33 [i_8] [i_8] [i_8] [i_8]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 2080374773U)) || (((/* implicit */_Bool) 32512U))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)248))))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_8] [(_Bool)1] [i_8 - 1] [i_8 - 1] [i_9 - 1] [i_9 + 1] [i_8])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)59)) : (var_1)))))))));
                                var_23 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_31 [i_8 + 1] [i_8] [i_8 + 1] [i_14] [i_8 + 1] [i_8 + 3]))));
                                arr_39 [i_8] [i_9 - 1] [i_8] [4] [i_13 - 2] [i_14] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) arr_33 [i_8] [i_8 + 3] [i_9 - 1] [i_13 - 1])) > (((/* implicit */int) var_2)))), ((!(((/* implicit */_Bool) arr_33 [i_8 - 1] [i_8 + 1] [i_9 + 1] [i_13 - 2]))))));
                                arr_40 [i_8 + 1] [i_8] [i_8 + 1] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_13 - 2])) && (((/* implicit */_Bool) arr_22 [i_13 - 2])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 23; i_15 += 4) 
    {
        for (long long int i_16 = 0; i_16 < 23; i_16 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 23; i_17 += 4) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 23; i_18 += 1) 
                    {
                        {
                            arr_52 [i_15] [i_16] = ((/* implicit */unsigned long long int) min((1850906851U), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)27106)) > (((/* implicit */int) (unsigned char)169)))))));
                            arr_53 [i_16] [i_17] [i_16] [i_15] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)2)) / (((/* implicit */int) max((arr_21 [i_17]), (arr_21 [i_15]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_19 = 2; i_19 < 21; i_19 += 1) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 4) 
                        {
                            {
                                var_24 |= ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_42 [i_16])) < ((+(((/* implicit */int) var_2))))))));
                                arr_63 [i_15] [i_15] [i_20] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) min((((/* implicit */int) min(((short)20262), (((/* implicit */short) arr_50 [i_19 + 2] [i_16] [i_19] [i_19]))))), (((((/* implicit */int) arr_50 [i_19 - 2] [i_19 - 2] [i_21] [i_20])) | (((/* implicit */int) arr_50 [i_19 + 1] [4ULL] [i_19] [i_20]))))));
                                arr_64 [i_20] [i_16] [i_19] [i_20] = ((/* implicit */unsigned long long int) var_0);
                                arr_65 [i_15] [i_16] [i_19] [i_20] = ((/* implicit */signed char) 2112432910U);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_22 = 1; i_22 < 22; i_22 += 4) 
                {
                    for (long long int i_23 = 0; i_23 < 23; i_23 += 4) 
                    {
                        {
                            arr_70 [9] [i_22] [9] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_15]))) & (max((arr_27 [i_23]), (((/* implicit */unsigned int) arr_22 [i_15]))))))), (max((0ULL), (arr_48 [i_15] [i_16] [i_22 - 1])))));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_15]))))) != (((/* implicit */int) min((arr_29 [i_15] [i_22 - 1] [i_22 - 1] [i_23] [i_23] [0LL] [i_16]), (((/* implicit */short) ((arr_41 [i_16]) >= (((/* implicit */unsigned long long int) var_8))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_24 = 4; i_24 < 21; i_24 += 4) 
                {
                    for (unsigned long long int i_25 = 3; i_25 < 21; i_25 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_24] [i_24] [i_24] [i_24 + 1]))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (var_10)))))));
                            var_27 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -2147483647)))) && (((/* implicit */_Bool) ((unsigned long long int) ((arr_73 [i_25] [i_25] [i_24 - 3] [i_16] [i_15] [i_15]) >> (((18446744073709551615ULL) - (18446744073709551605ULL)))))))));
                            var_28 = max(((-(arr_37 [i_15] [i_24 + 2] [i_24 + 2] [i_24] [i_25] [(unsigned short)12] [i_25 - 3]))), (max((arr_37 [i_15] [i_24 - 3] [i_24 - 1] [i_24 - 2] [i_24 - 2] [i_15] [i_25 - 3]), (arr_37 [(signed char)22] [i_24 + 2] [i_24 + 2] [i_24 + 2] [i_25] [i_25] [i_25 + 1]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_26 = 1; i_26 < 21; i_26 += 1) 
                {
                    for (unsigned long long int i_27 = 0; i_27 < 23; i_27 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((unsigned short) arr_49 [i_16] [i_15] [i_16] [i_15] [i_16])))))));
                            var_30 = ((/* implicit */long long int) min((var_30), (((var_3) ? (((((/* implicit */_Bool) arr_37 [i_15] [i_15] [i_26] [10ULL] [i_16] [i_27] [(unsigned short)3])) ? (max((((/* implicit */long long int) (signed char)59)), (133169152LL))) : (max((((/* implicit */long long int) arr_61 [(signed char)0] [i_16] [12] [i_15] [i_16] [(unsigned short)0] [i_15])), (var_4))))) : (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2147483625))))))))))));
                            arr_79 [i_27] [i_26] [(unsigned short)6] [(unsigned short)6] [i_26] [i_15] = (i_26 % 2 == zero) ? ((+(min((((arr_23 [i_15] [i_16]) << (((arr_27 [i_26]) - (1049377355U))))), (max((var_4), (((/* implicit */long long int) arr_57 [16])))))))) : ((+(min((((arr_23 [i_15] [i_16]) << (((((arr_27 [i_26]) - (1049377355U))) - (4099236818U))))), (max((var_4), (((/* implicit */long long int) arr_57 [16]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_28 = 0; i_28 < 18; i_28 += 1) 
    {
        for (int i_29 = 3; i_29 < 16; i_29 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_30 = 0; i_30 < 18; i_30 += 2) 
                {
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        {
                            arr_89 [i_28] [i_29] [i_30] [(signed char)15] = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) ((arr_0 [i_28] [i_29 - 3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)1)))))))) != (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) -17)) == (var_4)))) == (((/* implicit */int) (unsigned char)225)))))));
                            var_31 = ((/* implicit */unsigned long long int) ((signed char) (!(((((/* implicit */_Bool) (unsigned short)15834)) || (((/* implicit */_Bool) 220119115U)))))));
                            var_32 = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) arr_77 [i_28] [i_29 - 3] [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_28] [i_28] [i_28] [i_28]))) : (var_10)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned int i_32 = 0; i_32 < 18; i_32 += 2) 
                {
                    for (int i_33 = 4; i_33 < 16; i_33 += 3) 
                    {
                        for (long long int i_34 = 0; i_34 < 18; i_34 += 2) 
                        {
                            {
                                var_33 = (-(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0U)) || (((/* implicit */_Bool) 2112432919U))))), (var_10))));
                                var_34 = ((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (!(((/* implicit */_Bool) 4294967292U)))))))));
                                var_35 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
                                var_36 = ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) max((var_5), (var_8)))))))) < (arr_35 [i_28] [i_34]));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_35 = 1; i_35 < 17; i_35 += 4) 
                {
                    for (short i_36 = 2; i_36 < 17; i_36 += 1) 
                    {
                        for (unsigned long long int i_37 = 0; i_37 < 18; i_37 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) ((((_Bool) arr_91 [i_28] [i_29 + 2] [(_Bool)1] [i_35 - 1])) ? (12992240623151521660ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((arr_101 [i_28] [(_Bool)1] [i_35 + 1] [(_Bool)1] [i_37]), (((/* implicit */unsigned long long int) (unsigned short)38429)))) > (((/* implicit */unsigned long long int) min((arr_11 [i_28] [i_29] [i_35] [i_37]), (((/* implicit */long long int) (unsigned short)24576)))))))))));
                                arr_106 [i_28] [i_28] [i_35 + 1] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_72 [i_35] [i_36] [i_37])))))));
                                var_38 = ((/* implicit */_Bool) min((((/* implicit */long long int) arr_84 [i_28])), (((((/* implicit */long long int) ((/* implicit */int) arr_84 [i_29 - 2]))) + (1152921504606814208LL)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
