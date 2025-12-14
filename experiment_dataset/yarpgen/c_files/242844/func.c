/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242844
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 21; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        {
                            arr_9 [i_2] [i_1] = ((/* implicit */unsigned short) var_1);
                            var_16 = ((/* implicit */unsigned short) (((-((((_Bool)0) ? (13621989055813760253ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) < (((/* implicit */unsigned long long int) max((arr_0 [i_2 - 1]), (((/* implicit */int) var_6)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 1) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        {
                            arr_18 [i_0] [i_1] [i_4] [i_1] [i_5 + 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_5 + 3] [i_4] [i_1] [i_0])), (549755813887LL)))) ? (((((/* implicit */int) (unsigned char)203)) >> (((((/* implicit */int) (unsigned char)99)) - (96))))) : (((/* implicit */int) min((arr_16 [i_0] [i_1] [i_0] [i_5] [i_5]), (((/* implicit */unsigned char) (signed char)63)))))));
                            var_17 = ((/* implicit */signed char) ((long long int) var_3));
                            arr_19 [i_0] [i_0] [i_0] [i_5] = ((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1])) ? (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1])) | (((/* implicit */int) arr_6 [i_5 + 1] [i_5 - 1] [(unsigned short)8] [i_5 + 1]))))) : (min((arr_7 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 3] [i_5 + 1]), (((/* implicit */long long int) var_15)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    for (short i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        {
                            var_18 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)11913)) ? (6185400649109931725LL) : (((/* implicit */long long int) (~(2147483642)))))), (((/* implicit */long long int) (_Bool)1))));
                            var_19 = ((/* implicit */unsigned short) (signed char)-64);
                            var_20 -= ((/* implicit */long long int) ((((/* implicit */_Bool) 4294967288U)) ? (-1858663859) : (-1858663837)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_8 = 2; i_8 < 20; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        {
                            arr_31 [i_8] [i_8] [i_1] [i_8] = ((/* implicit */short) arr_29 [(signed char)14] [i_8] [i_1] [i_0]);
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) 2147483642)) || (((/* implicit */_Bool) -2147483642))))) == (-1858663859))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
    {
        for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        {
                            arr_40 [(unsigned char)6] [i_11] [10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)255)), (arr_13 [i_13] [i_11] [i_11] [(short)11])))) ? (min((arr_13 [(unsigned short)18] [i_11] [i_12] [i_13]), (arr_13 [i_10] [i_11] [i_12] [i_13]))) : (max((-2147483642), (1858663858)))));
                            var_22 = var_6;
                            arr_41 [i_13] [i_11] [i_11] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_10] [1LL]))) < (arr_7 [i_13] [i_13] [i_13] [i_12] [i_10] [i_10])))) * (((/* implicit */int) arr_2 [i_10])))) % (((/* implicit */int) arr_1 [i_13]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_14 = 1; i_14 < 11; i_14 += 3) 
                {
                    for (int i_15 = 0; i_15 < 12; i_15 += 2) 
                    {
                        {
                            arr_46 [i_10] [i_11] [2] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 2147483622)) ? (856663487590141780LL) : (((/* implicit */long long int) 7U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((unsigned int) -2147483642))));
                            var_23 -= ((/* implicit */unsigned int) var_8);
                            var_24 &= ((/* implicit */long long int) (~((-(((/* implicit */int) arr_36 [i_14] [i_11] [i_14] [i_15]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_16 = 0; i_16 < 20; i_16 += 1) 
    {
        for (signed char i_17 = 1; i_17 < 19; i_17 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_18 = 1; i_18 < 18; i_18 += 1) 
                {
                    for (signed char i_19 = 0; i_19 < 20; i_19 += 1) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned short) var_8);
                            var_26 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_19] [i_16] [i_17] [i_16] [i_16])) ? (((/* implicit */int) arr_51 [i_16] [(unsigned short)16] [i_18] [i_18])) : (((/* implicit */int) arr_2 [(short)17]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_20 [i_18 + 1] [i_17 - 1] [i_17] [i_17 + 1])))));
                            var_27 = ((/* implicit */unsigned char) max((min((-2147483623), (((/* implicit */int) (signed char)-1)))), (((/* implicit */int) arr_48 [i_16] [i_16]))));
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) (-(min((((/* implicit */unsigned long long int) var_5)), (arr_47 [i_18 - 1] [(signed char)14]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_20 = 0; i_20 < 20; i_20 += 3) 
                {
                    for (unsigned int i_21 = 0; i_21 < 20; i_21 += 2) 
                    {
                        {
                            arr_60 [i_16] [(unsigned char)8] [i_16] [i_16] = ((/* implicit */short) (-(min((((/* implicit */int) var_6)), ((~(((/* implicit */int) arr_30 [i_16] [i_16] [(signed char)9]))))))));
                            var_29 = ((/* implicit */unsigned int) var_11);
                            var_30 *= (-(min((((((/* implicit */_Bool) var_10)) ? (arr_20 [i_21] [i_20] [i_17] [i_16]) : (((/* implicit */unsigned long long int) 0U)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))))));
                            var_31 += (-(((arr_0 [i_16]) >> (((arr_0 [i_20]) - (1553185104))))));
                            arr_61 [i_16] [i_17] [i_20] [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned short) min((arr_21 [i_17] [i_17 + 1] [i_20] [i_17 + 1]), (arr_21 [i_16] [i_17] [i_20] [i_17 - 1])))), (min((min((var_2), (((/* implicit */unsigned short) var_8)))), (arr_48 [i_16] [i_20])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_22 = 0; i_22 < 16; i_22 += 3) 
    {
        for (unsigned char i_23 = 0; i_23 < 16; i_23 += 3) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_24 = 1; i_24 < 14; i_24 += 3) 
                {
                    for (unsigned int i_25 = 0; i_25 < 16; i_25 += 3) 
                    {
                        for (long long int i_26 = 2; i_26 < 14; i_26 += 4) 
                        {
                            {
                                var_32 |= ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                                var_33 = ((/* implicit */unsigned char) var_13);
                                arr_72 [(signed char)4] [i_25] [i_24] [i_25] = ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) arr_1 [i_26])))));
                                var_34 = ((/* implicit */signed char) (~(((arr_26 [i_26 + 1] [i_24 + 2] [i_22]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_26 + 2] [i_24 - 1] [i_23])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_27 = 0; i_27 < 16; i_27 += 1) 
                {
                    for (unsigned long long int i_28 = 0; i_28 < 16; i_28 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned int) min((var_35), (((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) ((((/* implicit */int) arr_71 [i_22] [i_22] [i_27] [i_27] [i_28])) <= (((/* implicit */int) arr_71 [i_22] [i_23] [i_27] [i_27] [5LL]))))))))));
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((arr_73 [i_22] [i_23] [i_28]), (((/* implicit */unsigned short) arr_24 [i_28] [i_28] [i_28] [i_22])))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)51099))))) : ((-(600704475U)))));
                            var_37 = ((/* implicit */long long int) min((var_37), (min((((/* implicit */long long int) min((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)0)))), (((/* implicit */int) arr_51 [(_Bool)1] [i_27] [i_23] [(_Bool)1]))))), (min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_59 [i_22] [i_23] [(short)4])) : (arr_76 [i_22] [(short)15] [i_27]))), (((/* implicit */long long int) arr_26 [i_22] [i_23] [i_27]))))))));
                            arr_78 [i_28] [i_27] = ((/* implicit */long long int) (-((-(arr_13 [i_28] [i_27] [(unsigned char)6] [i_22])))));
                        }
                    } 
                } 
            }
        } 
    } 
}
