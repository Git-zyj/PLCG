/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46737
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned long long int) (-(var_0)));
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(var_3)))))))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))) * (((var_4) / (((/* implicit */unsigned long long int) var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((arr_3 [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) 13911619748010911532ULL);
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) (!(((/* implicit */_Bool) (short)-28300)))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) var_2))));
                var_15 = ((/* implicit */short) (((-(var_0))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_7)) < (135933779U)))))));
                var_16 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) < ((~(var_4)))));
            }
            for (long long int i_3 = 0; i_3 < 16; i_3 += 2) 
            {
                var_17 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_7)))))))));
                var_18 += ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((((_Bool)0) ? (var_2) : (var_6))), (((/* implicit */unsigned long long int) ((var_7) >= (((/* implicit */int) (unsigned short)11565)))))))) ? ((-(((var_6) + (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) 907940697333683083LL))));
                /* LoopNest 2 */
                for (short i_4 = 0; i_4 < 16; i_4 += 2) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_19 [i_0] [i_1] [i_3] [i_3] [i_4] [15] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) -2033727464))));
                            var_19 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+((~(var_0)))))) * (((((/* implicit */_Bool) 1866542393)) ? (((/* implicit */unsigned long long int) -2726590751182469432LL)) : (13ULL)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_7] [i_3] [i_1])))))));
                            var_21 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_18 [i_1] [i_1] [i_3] [i_6] [i_7] [i_0] [i_0]) & (((/* implicit */long long int) ((/* implicit */int) ((1239864353983513223ULL) == (var_6))))))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 817060682U)) ? (arr_24 [i_1] [i_1] [i_3] [i_6] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [12LL] [i_6])))))) ? (((/* implicit */unsigned long long int) ((var_8) + (var_7)))) : (((var_4) ^ (var_2))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194))))))));
                        }
                    } 
                } 
            }
        }
    }
    for (int i_8 = 4; i_8 < 21; i_8 += 2) 
    {
        var_23 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)10)) || (((/* implicit */_Bool) var_1)))))) * (((3099639664638640421ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))));
        var_24 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) var_9)))));
        var_25 |= ((/* implicit */unsigned long long int) -1826920478);
        var_26 *= ((((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) (signed char)-65))))) / (((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_0)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (arr_26 [i_8]))))))));
    }
    /* LoopNest 2 */
    for (signed char i_9 = 1; i_9 < 19; i_9 += 2) 
    {
        for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_11 = 1; i_11 < 18; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (int i_12 = 0; i_12 < 20; i_12 += 2) 
                    {
                        for (long long int i_13 = 4; i_13 < 19; i_13 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_11 - 1]))))) >= ((+(var_6)))));
                                var_28 = ((/* implicit */unsigned long long int) var_8);
                                var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (~(((/* implicit */int) arr_35 [i_9 + 1])))))));
                                var_30 += ((/* implicit */signed char) var_7);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */int) arr_27 [i_9 + 1]);
                    arr_40 [i_9 + 1] [i_10] [i_9 + 1] [i_9 + 1] = ((/* implicit */unsigned long long int) (+(-152603165)));
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-45)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : ((~(arr_29 [0U] [i_11])))))) ? (min((var_6), (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)49447)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-7132127113034124552LL))))));
                }
                /* vectorizable */
                for (long long int i_14 = 0; i_14 < 20; i_14 += 2) 
                {
                    var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) -1673395890)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_10 + 3] [i_10 + 2] [i_9 + 1]))) : (var_6)));
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (-(1491919825))))));
                        arr_46 [i_9 + 1] [(_Bool)1] [i_9 + 1] [i_9 + 1] [i_9] |= ((/* implicit */unsigned int) (-(var_4)));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        var_35 = ((/* implicit */short) ((0ULL) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)47207)))))));
                        var_36 = ((/* implicit */unsigned long long int) max((var_36), (var_2)));
                        /* LoopSeq 3 */
                        for (unsigned short i_17 = 0; i_17 < 20; i_17 += 2) 
                        {
                            arr_52 [i_10 + 3] [i_10] [i_10] [i_10 + 2] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_39 [1LL] [i_10 - 2] [(_Bool)1] [(short)0] [i_9 + 1])) ? (((/* implicit */unsigned long long int) 0)) : (6140717121276553411ULL)));
                            var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_44 [i_9 + 1] [i_9] [i_9 + 1]))) : (var_0)));
                            var_38 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_8))));
                            var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_10 + 3]))));
                        }
                        for (unsigned long long int i_18 = 1; i_18 < 18; i_18 += 2) 
                        {
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229)))))) ? ((~(var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            var_41 ^= ((/* implicit */_Bool) (~(arr_37 [i_18 - 1] [3LL] [i_10] [i_9 + 1] [i_18 - 1] [i_10 + 1])));
                        }
                        for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                        {
                            var_42 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) var_5)))) : (arr_56 [i_9] [i_9] [i_9] [i_9] [i_9 - 1])));
                            var_43 = ((/* implicit */unsigned int) (((~(5359375756731047398ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_58 [i_9] [i_10] [i_9] [i_14] [i_9] [(signed char)4] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [i_9 - 1])) * (((/* implicit */int) var_9))));
                        }
                        var_44 = ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 18446744073709551611ULL)))) / (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_9))))));
                    }
                }
                for (long long int i_20 = 0; i_20 < 20; i_20 += 2) 
                {
                    var_45 = ((/* implicit */int) ((6645227681884166845ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1555)))));
                    /* LoopNest 2 */
                    for (int i_21 = 2; i_21 < 19; i_21 += 3) 
                    {
                        for (long long int i_22 = 0; i_22 < 20; i_22 += 3) 
                        {
                            {
                                arr_69 [i_10] [i_20] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_44 [i_21 + 1] [i_20] [i_10])))), (((var_7) + (((/* implicit */int) (unsigned short)30275))))));
                                var_46 = ((/* implicit */short) 35184304979968ULL);
                                var_47 = ((/* implicit */_Bool) ((((((((/* implicit */long long int) var_7)) ^ (9223372036854775807LL))) & (max((var_3), (((/* implicit */long long int) (short)25785)))))) & (((/* implicit */long long int) var_7))));
                                var_48 += ((/* implicit */unsigned int) (((_Bool)1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (((((/* implicit */_Bool) 2055930190)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_9] [i_9]))))))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-8322))))), (var_6)))));
                                var_49 = ((/* implicit */short) max((((((var_0) != (((/* implicit */long long int) ((/* implicit */int) var_9))))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((long long int) arr_38 [i_20] [i_10] [i_20] [i_20] [i_22])))));
                            }
                        } 
                    } 
                    var_50 &= ((/* implicit */long long int) (-(var_8)));
                }
                var_51 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(-1814672573))))));
            }
        } 
    } 
    var_52 = min((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) (-(var_8)))) ? (((((/* implicit */long long int) 2147483647)) + (var_0))) : (((var_0) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)17))))))));
    var_53 = ((/* implicit */long long int) max((var_53), (var_3)));
    var_54 = ((/* implicit */_Bool) (unsigned short)44208);
}
