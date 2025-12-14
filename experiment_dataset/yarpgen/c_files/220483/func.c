/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220483
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
    var_18 = ((/* implicit */unsigned int) min((var_18), (min((((/* implicit */unsigned int) var_17)), (max((var_4), (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)4202)) + (((/* implicit */int) (signed char)-98))));
        var_20 -= ((unsigned int) arr_1 [i_0]);
        var_21 = ((/* implicit */_Bool) var_4);
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 2; i_2 < 7; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) (~(((/* implicit */int) (short)2))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_11 [i_3] [i_1] [i_2 + 3] [i_3] [i_4] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0] [7LL]) : (((/* implicit */long long int) 2087176816U))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))) : (arr_7 [i_3] [i_3] [i_2]));
                            var_23 = ((/* implicit */unsigned short) (+(arr_4 [i_2 + 2] [i_2 + 2])));
                            var_24 ^= ((/* implicit */short) (unsigned short)9);
                        }
                        for (long long int i_5 = 4; i_5 < 8; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */int) (~(((unsigned int) arr_14 [i_0] [i_2 - 1] [i_5 - 2]))));
                            var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_3] [i_2])) : (((/* implicit */int) arr_13 [i_0] [i_0] [i_0]))))) ? (max((8388607ULL), (((/* implicit */unsigned long long int) var_6)))) : (arr_7 [i_1] [i_1] [i_1]))))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((((unsigned long long int) var_14)) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-17))))) << (((min(((-(arr_7 [i_2] [i_0] [(short)0]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [7LL]))))))) - (17702369677829284006ULL))))))));
                            var_28 -= ((/* implicit */unsigned int) var_11);
                        }
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned int) 14270564463333437444ULL);
                    }
                } 
            } 
            arr_16 [i_0] [i_0] = ((/* implicit */short) ((signed char) min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_0] [i_1] [i_1])))));
            arr_17 [i_0] [6U] [i_1] |= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_8 [7U] [i_0] [0ULL] [(signed char)9] [(signed char)9]) : (arr_8 [i_0] [i_0] [i_1] [i_1] [i_1])))));
        }
        for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            var_29 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_9 [i_6] [i_6] [i_0] [i_0] [i_6] [i_6] [i_6])), ((unsigned char)215)))) : (((/* implicit */int) var_3))))) : (8388585ULL)));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                    arr_25 [(signed char)9] [(signed char)9] [i_7] [i_0] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_6] [i_8])) ? ((-(arr_18 [i_0] [i_0] [i_0]))) : (arr_18 [i_0] [i_6] [i_8])));
                    var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((long long int) ((_Bool) arr_4 [i_0] [i_6]))))));
                }
                for (int i_9 = 2; i_9 < 7; i_9 += 2) /* same iter space */
                {
                    var_32 = ((arr_23 [i_9 - 1] [i_9 + 3] [i_9]) + (((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3329)))))));
                    var_33 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-2))))) ? (((/* implicit */int) arr_21 [i_7] [i_7] [i_7] [i_7])) : ((+(((/* implicit */int) (short)255))))));
                    var_34 = ((/* implicit */long long int) (((~(((/* implicit */int) var_15)))) >= ((+(((/* implicit */int) var_11))))));
                    arr_28 [i_0] [i_6] [3U] [i_9 + 3] [i_9] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_19 [i_6] [i_6] [i_9 + 2]) != (arr_19 [i_6] [i_6] [i_6]))))) < (8388585ULL)));
                }
                for (int i_10 = 2; i_10 < 7; i_10 += 2) /* same iter space */
                {
                    var_35 += var_9;
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_10 + 1] [i_10 + 2])) ? (var_1) : (((/* implicit */int) arr_24 [i_0] [i_6] [i_6] [4U] [i_10 + 3]))));
                    /* LoopSeq 1 */
                    for (signed char i_11 = 0; i_11 < 10; i_11 += 4) 
                    {
                        arr_34 [i_0] [i_6] [i_7] [i_10] [i_0] [i_10 + 2] |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_0) >= (((/* implicit */long long int) ((/* implicit */int) var_15))))))) <= (((((/* implicit */_Bool) 8388579ULL)) ? (var_9) : (((/* implicit */unsigned int) var_17))))));
                        var_37 = ((/* implicit */_Bool) (-(var_10)));
                        arr_35 [(unsigned short)2] = ((/* implicit */signed char) 536870912U);
                        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_10 + 1])) || (((/* implicit */_Bool) (-(((/* implicit */int) var_3))))))))));
                    }
                    arr_36 [i_10 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_29 [1LL] [i_0])) ? (arr_29 [i_0] [i_0]) : (((/* implicit */unsigned long long int) var_17))));
                    var_39 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))));
                }
                arr_37 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_18 [(short)4] [i_6] [i_7])) * (18446744073701163003ULL)));
                var_40 = ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (1046198053U));
            }
            var_41 = ((/* implicit */unsigned int) max(((~(arr_22 [i_0] [8U] [8U] [i_0]))), (((var_1) - (((/* implicit */int) var_12))))));
            var_42 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (short)16))));
        }
        for (signed char i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) var_2))));
            var_44 -= ((/* implicit */unsigned short) min(((+(var_14))), (((/* implicit */long long int) 2445574849U))));
            var_45 = arr_7 [i_12] [i_12] [i_12];
            arr_40 [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((arr_0 [i_0] [i_12]) + (9223372036854775807LL))) >> (((arr_29 [i_12] [i_12]) - (3106830312636664698ULL)))))) ? (((arr_0 [i_12] [i_0]) & (arr_0 [i_0] [i_0]))) : ((+(arr_0 [i_12] [i_12])))));
        }
    }
    /* vectorizable */
    for (short i_13 = 0; i_13 < 17; i_13 += 3) 
    {
        var_46 = ((/* implicit */unsigned int) (-((-(((/* implicit */int) (_Bool)1))))));
        /* LoopNest 2 */
        for (long long int i_14 = 0; i_14 < 17; i_14 += 3) 
        {
            for (unsigned int i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                {
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)66)))))));
                    var_48 ^= ((/* implicit */long long int) ((unsigned int) (~(1520839471U))));
                }
            } 
        } 
    }
}
