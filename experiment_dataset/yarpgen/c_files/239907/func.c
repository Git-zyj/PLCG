/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239907
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 13; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1 - 2] |= ((/* implicit */unsigned short) max((min((var_1), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)8191)))))));
                arr_6 [i_0] [i_1 + 1] [i_0] = ((/* implicit */unsigned short) ((max((arr_2 [i_0]), (arr_2 [(unsigned char)4]))) <= (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (unsigned char)8)))))));
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) arr_2 [i_1 - 4]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (long long int i_3 = 1; i_3 < 22; i_3 += 4) 
        {
            {
                arr_13 [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))) | (max((((/* implicit */unsigned int) var_9)), (3358493785U)))))) ^ (((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_2] [i_2] [i_2])) << (((/* implicit */int) var_9))))) : (min((var_10), (((/* implicit */long long int) arr_12 [i_2] [i_3] [i_2]))))))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                {
                    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((((/* implicit */int) (short)32760)) ^ (((/* implicit */int) var_2)))) << (((/* implicit */int) (!((_Bool)1)))))))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                arr_24 [(_Bool)1] [i_6] [(_Bool)1] [i_6] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)34323)) == (((/* implicit */int) (signed char)1))))) : (((((/* implicit */int) var_11)) >> (((/* implicit */int) arr_8 [i_3]))))));
                                arr_25 [i_6] [i_6] [i_4] [i_6] [i_2] = arr_9 [i_2];
                                arr_26 [i_2] [i_5] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_18 [i_5 + 2] [i_4] [i_3 - 1] [i_2])) ? (arr_18 [i_5 - 1] [i_5] [i_3 - 1] [i_2]) : (arr_18 [i_5 + 2] [(unsigned char)21] [i_3 - 1] [i_2])));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (signed char)-1))));
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                {
                    arr_31 [i_3] [i_3] |= ((/* implicit */unsigned char) var_4);
                    /* LoopNest 2 */
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 2) 
                    {
                        for (unsigned char i_9 = 2; i_9 < 21; i_9 += 2) 
                        {
                            {
                                arr_36 [i_2] [i_2] = ((/* implicit */unsigned long long int) var_13);
                                arr_37 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (1450106031U) : (((/* implicit */unsigned int) var_14))))) ? ((((_Bool)1) ? (-549755813888LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) : (((/* implicit */long long int) ((/* implicit */int) arr_32 [(signed char)17] [i_7] [i_8] [i_9])))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                    {
                        for (signed char i_12 = 0; i_12 < 24; i_12 += 1) 
                        {
                            {
                                var_18 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) ((3858005426666129347LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)44037)))))) ? (((((/* implicit */int) arr_8 [i_10])) ^ (((/* implicit */int) arr_15 [i_11])))) : (var_14))) : ((-(((/* implicit */int) max((var_12), (var_12))))))));
                                arr_45 [i_10] = ((/* implicit */unsigned char) 747045503);
                                arr_46 [i_10] [i_12] [i_3 + 2] [22ULL] [i_12] = ((/* implicit */unsigned char) 9214364837600034816LL);
                                var_19 ^= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_8 [i_11 + 1])), (var_7))))) != (((((/* implicit */long long int) 2101033685)) / (-3397234634073669343LL)))));
                                arr_47 [i_10] [i_11] [i_10] [i_10] [i_3] [i_10] = ((/* implicit */signed char) var_9);
                            }
                        } 
                    } 
                    arr_48 [i_10] = ((/* implicit */unsigned long long int) min((((((var_4) || (((/* implicit */_Bool) 573934357)))) ? (((long long int) (signed char)112)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_20 [i_2] [i_2] [i_2] [i_10])) == (((/* implicit */int) arr_32 [(unsigned char)20] [i_2] [i_10] [i_2])))))))), (((/* implicit */long long int) var_8))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (unsigned char)247))));
                    arr_49 [i_2] [i_2] [i_10] [i_2] |= ((/* implicit */signed char) min((((/* implicit */long long int) arr_41 [i_3] [i_3])), (min((min((arr_34 [i_2] [i_2] [i_2] [i_2] [i_10] [i_10] [i_10]), (arr_19 [i_2] [i_2] [i_3 - 1] [i_10] [i_10] [i_10]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) (unsigned short)22033)), (var_8))))))));
                }
                for (long long int i_13 = 0; i_13 < 24; i_13 += 1) 
                {
                    arr_53 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) -746108641)) ? (((/* implicit */int) arr_29 [i_2])) : (((/* implicit */int) arr_27 [i_2] [i_2])))) : ((-(-573934335)))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]))) | (1823301054U)))));
                    /* LoopNest 2 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        for (unsigned char i_15 = 0; i_15 < 24; i_15 += 2) 
                        {
                            {
                                arr_58 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_3] [i_3 - 1] [i_3] [i_3 + 1])) ? (arr_19 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1]) : (arr_19 [(signed char)11] [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3] [i_3 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(unsigned char)11])))))) ? (((var_1) | (((/* implicit */unsigned long long int) 1636515623U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)3)) ? (var_14) : (((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_15] [i_2] [i_2])))));
                                arr_59 [i_2] [i_3] [i_2] [23] [8LL] = ((/* implicit */short) var_14);
                                arr_60 [i_2] [i_3 - 1] [i_13] [i_14] [i_15] = ((/* implicit */unsigned int) min((arr_33 [19ULL] [19ULL] [i_15]), (((/* implicit */long long int) arr_28 [i_3 + 1]))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
