/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217587
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 2; i_2 < 24; i_2 += 3) 
                {
                    for (unsigned char i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (short)-24318);
                                arr_12 [(short)4] [(short)4] [(short)4] [i_0] [i_4] = ((/* implicit */long long int) ((signed char) ((int) var_10)));
                                var_20 &= ((/* implicit */int) ((((/* implicit */_Bool) ((15962330042168679923ULL) - (2484414031540871693ULL)))) ? (max((arr_3 [i_0] [i_1 + 1]), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_4), (((/* implicit */unsigned short) arr_0 [i_3 + 3]))))))));
                                var_21 *= ((/* implicit */unsigned long long int) min((((/* implicit */int) (short)2047)), (((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_3])) ? (((/* implicit */int) ((_Bool) var_6))) : (((/* implicit */int) ((short) var_0)))))));
                                var_22 = ((/* implicit */unsigned long long int) (~((~(-1524301395)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (short i_5 = 1; i_5 < 24; i_5 += 1) 
                {
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 4) 
                        {
                            {
                                arr_21 [i_0] [i_0] = ((/* implicit */long long int) (((!(((((/* implicit */_Bool) 3752961657U)) && (((/* implicit */_Bool) arr_14 [i_0])))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)242)) || (((/* implicit */_Bool) var_3)))) ? (12651947966742491659ULL) : (((((/* implicit */_Bool) 2484414031540871693ULL)) ? (var_15) : (5794796106967059956ULL))))))));
                                arr_22 [i_0] [i_0] [i_0] [i_1] [i_0] [i_6] [(signed char)0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) % (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (var_11)))) && (((/* implicit */_Bool) var_5)))))));
                                arr_23 [i_6] [i_6] |= ((/* implicit */signed char) 1358662248);
                                arr_24 [i_0] [i_0] [i_7 - 1] = ((((/* implicit */_Bool) ((min((-732126619418689012LL), (((/* implicit */long long int) var_3)))) + (((/* implicit */long long int) var_1))))) && (((/* implicit */_Bool) (+(((arr_16 [i_0] [i_0] [i_0] [(short)21] [i_0] [(short)21]) - (((/* implicit */long long int) 262143))))))));
                                arr_25 [i_0] [i_0] [i_0] [17LL] [i_0] = ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) var_2)) | (((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (18446744073709551615ULL)))) && (((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (var_14)))))))) : (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_5] [i_7 + 2])) >= (((/* implicit */int) (_Bool)1))))), (((unsigned int) var_10)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 2) 
                {
                    for (short i_9 = 1; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) 15962330042168679916ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))))))));
                            arr_34 [i_0] [i_0] = min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)255))))), (((long long int) var_3))))), (15962330042168679922ULL));
                            arr_35 [i_8] [i_8] [i_8] [i_8] [i_8] &= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_31 [i_9 + 3] [6] [i_9 + 3] [i_9] [i_9] [i_0])))) <= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_1 - 1] [i_1 - 1])) ? (var_1) : (((/* implicit */int) var_3))))) ? (((18446744073709551615ULL) << (((((/* implicit */int) var_2)) + (11634))))) : (min((var_12), (((/* implicit */unsigned long long int) -1575625332))))))));
                            var_23 &= ((/* implicit */unsigned char) ((int) max((((arr_14 [2ULL]) - (((/* implicit */int) var_4)))), ((+(var_7))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_10 = 1; i_10 < 18; i_10 += 1) 
    {
        for (short i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 0; i_12 < 19; i_12 += 2) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        {
                            arr_49 [7ULL] [i_10] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_50 [i_10] [i_10] = ((/* implicit */signed char) ((((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) > (15962330042168679923ULL)))) < (((((/* implicit */int) (short)2037)) / (((/* implicit */int) (short)2047)))))) ? (max((((/* implicit */unsigned long long int) 1U)), (((((/* implicit */_Bool) var_1)) ? (arr_48 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [23U] [i_10] [i_10]))))))) : (((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */int) var_5)), (var_9)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_14 = 0; i_14 < 19; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 2; i_15 < 18; i_15 += 1) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 19; i_16 += 2) 
                        {
                            {
                                arr_58 [i_10] [(unsigned char)6] [i_11] [i_11] [i_10] = ((/* implicit */short) (signed char)-1);
                                var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_15 + 1] [i_15 - 2] [i_15 + 1] [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_1)))) : (((((/* implicit */_Bool) 1236472959)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (4294967295U)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_14 [i_10])))) : (((arr_47 [i_15 - 1] [i_15 - 1] [i_16] [i_16] [i_16] [1U]) << (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        for (short i_19 = 0; i_19 < 19; i_19 += 2) 
                        {
                            {
                                var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min(((~(arr_38 [i_11] [i_10]))), (min((var_14), (1236472959)))))) <= (((((((/* implicit */_Bool) var_13)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) / (((/* implicit */unsigned long long int) arr_55 [i_10] [i_11] [i_10] [i_18] [i_19]))))));
                                var_26 *= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)161)) / (((/* implicit */int) arr_9 [i_10 + 1] [i_10 - 1]))))) - (((((2956181220744445309ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))))) + (((/* implicit */unsigned long long int) min((var_14), (((/* implicit */int) var_6)))))))));
                                arr_67 [9LL] [(signed char)5] [i_17] [i_18] [i_10] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((arr_51 [i_10] [i_17] [i_11] [i_10]) & (15962330042168679926ULL)))) ? (((((/* implicit */_Bool) var_10)) ? (arr_43 [i_10 + 1] [i_10 + 1] [i_10]) : (((/* implicit */int) (signed char)-97)))) : (1694389303)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_20 = 1; i_20 < 10; i_20 += 3) 
    {
        for (int i_21 = 0; i_21 < 12; i_21 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_22 = 1; i_22 < 9; i_22 += 3) 
                {
                    for (unsigned long long int i_23 = 1; i_23 < 9; i_23 += 1) 
                    {
                        {
                            arr_78 [i_20] [2] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((unsigned long long int) arr_44 [i_20] [i_21] [i_22] [(unsigned short)5])))) ? (min((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */int) (short)6901))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (var_10))))))));
                            arr_79 [(unsigned short)9] [i_20] [i_22] [i_23] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (unsigned char)45)), (((((/* implicit */unsigned long long int) arr_41 [i_20])) + (var_12))))) > (((/* implicit */unsigned long long int) (((+(-1574423016428337035LL))) * ((+(-1LL))))))));
                            arr_80 [i_20] [i_21] [i_21] [(short)7] = min((1ULL), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((23ULL) == (((/* implicit */unsigned long long int) 2154067670U))))) << (((((2484414031540871667ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)23))))) - (2484414031540871629ULL)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_24 = 3; i_24 < 11; i_24 += 1) 
                {
                    for (unsigned short i_25 = 0; i_25 < 12; i_25 += 2) 
                    {
                        for (long long int i_26 = 0; i_26 < 12; i_26 += 1) 
                        {
                            {
                                arr_89 [i_20] [i_20] [i_20] [i_20] [i_26] = ((/* implicit */unsigned short) ((int) min((arr_31 [i_24 + 1] [i_20 + 1] [i_20 + 2] [i_20] [i_20] [i_20]), (arr_31 [i_24 - 2] [i_20 + 2] [i_20 + 1] [i_20] [i_20] [i_20]))));
                                var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) arr_59 [i_26] [i_20 + 1] [i_20])))));
                                var_28 = (i_20 % 2 == zero) ? (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_48 [i_20]))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_7)) : (1099511627775LL))) : (((/* implicit */long long int) min((var_1), (((/* implicit */int) (_Bool)1)))))))), (((((unsigned long long int) 3301450101U)) >> (((max((arr_54 [i_20]), (((/* implicit */unsigned long long int) arr_69 [i_21])))) - (5946445294378965777ULL)))))))) : (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_48 [i_20]))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) var_7)) : (1099511627775LL))) : (((/* implicit */long long int) min((var_1), (((/* implicit */int) (_Bool)1)))))))), (((((unsigned long long int) 3301450101U)) >> (((((max((arr_54 [i_20]), (((/* implicit */unsigned long long int) arr_69 [i_21])))) - (5946445294378965777ULL))) - (457088725692738380ULL))))))));
                                var_29 = ((/* implicit */unsigned long long int) min((((long long int) var_18)), (arr_16 [(unsigned char)3] [i_20] [i_25] [i_24 + 1] [i_20] [i_20 + 1])));
                                arr_90 [i_20] [i_21] [i_21] = ((/* implicit */unsigned int) arr_65 [i_20] [i_20]);
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_27 = 1; i_27 < 9; i_27 += 3) 
                {
                    for (long long int i_28 = 3; i_28 < 10; i_28 += 1) 
                    {
                        {
                            var_30 -= ((/* implicit */short) arr_41 [14]);
                            arr_99 [i_20] [i_21] [i_28 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) & (((/* implicit */int) var_13))))) ? (((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_71 [i_20 + 1] [i_20 + 1] [i_20 - 1]))) : (arr_47 [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_20 + 1] [i_27 + 1] [i_28 + 2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)29821)) ^ (((/* implicit */int) arr_71 [i_20 - 1] [i_20 - 1] [i_21])))))));
                            arr_100 [i_20] = ((/* implicit */unsigned char) (signed char)-78);
                            var_31 = ((/* implicit */unsigned long long int) arr_66 [i_20] [(unsigned short)15] [i_20] [i_27] [i_20]);
                            var_32 ^= ((/* implicit */long long int) (!(((((/* implicit */_Bool) 1970938770614417344ULL)) && ((!(((/* implicit */_Bool) arr_52 [i_20]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
