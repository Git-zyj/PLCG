/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200968
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_10 = ((/* implicit */short) ((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0] [i_1])));
            var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5087510593119785287LL)) ? (((/* implicit */int) (unsigned short)7)) : (((/* implicit */int) (short)-18911))))) ? (127) : (((/* implicit */int) (unsigned char)182))));
        }
        for (unsigned short i_2 = 0; i_2 < 15; i_2 += 3) 
        {
            var_12 ^= arr_4 [i_0] [i_2];
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_13 = ((/* implicit */int) arr_1 [i_0] [i_0]);
                        var_14 &= ((/* implicit */_Bool) arr_10 [(unsigned short)7] [i_2] [i_2] [i_2]);
                        var_15 &= ((/* implicit */unsigned long long int) (~((~(67108608U)))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_2] [i_4])) ? (((/* implicit */int) arr_5 [i_3])) : (((/* implicit */int) arr_5 [i_3]))));
                        var_17 = ((/* implicit */long long int) (-(((/* implicit */int) (short)18911))));
                    }
                } 
            } 
        }
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4227858680U)) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) arr_2 [i_5] [8U]))));
            var_20 = ((/* implicit */signed char) ((int) ((int) (short)11091)));
            /* LoopNest 2 */
            for (short i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (unsigned char i_8 = 1; i_8 < 12; i_8 += 2) 
                {
                    {
                        var_21 *= ((/* implicit */_Bool) (~(arr_22 [i_8 + 1])));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 1; i_9 < 14; i_9 += 2) 
                        {
                            var_22 = (-(arr_1 [i_8] [i_8 - 1]));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_22 [i_5]))));
                            var_24 -= ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)85))));
                            var_25 -= ((/* implicit */short) ((arr_11 [i_9 - 1] [i_6] [i_6] [i_6] [i_6]) / (arr_11 [i_9 - 1] [i_8] [(short)0] [(short)0] [i_8])));
                        }
                        for (short i_10 = 0; i_10 < 15; i_10 += 3) 
                        {
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))) : (((((/* implicit */_Bool) 4227858687U)) ? (((/* implicit */long long int) var_0)) : (var_6)))));
                            var_27 &= ((/* implicit */signed char) ((((arr_15 [i_5] [i_5]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_20 [i_6 - 1] [i_6 - 1])) - (12566)))));
                            var_28 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)32736))));
                            var_29 += ((/* implicit */long long int) 0);
                        }
                    }
                } 
            } 
            var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [10LL]))) * (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_26 [i_5] [i_5] [i_5])));
        }
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                var_31 = ((/* implicit */_Bool) (~(-7017563173303619818LL)));
                var_32 = ((/* implicit */short) (~(var_7)));
                var_33 = ((/* implicit */_Bool) arr_5 [i_5]);
            }
            var_34 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 1675980742)) ? (0ULL) : (((/* implicit */unsigned long long int) 4227858687U))))));
            /* LoopSeq 1 */
            for (unsigned short i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                var_35 &= ((/* implicit */_Bool) (unsigned short)65535);
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 3) 
                    {
                        {
                            var_36 += ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)126)) || (((/* implicit */_Bool) -7017563173303619830LL)))))));
                            var_37 = (i_13 % 2 == zero) ? (((/* implicit */short) ((((arr_40 [i_11 - 1] [i_11] [(short)2] [10LL] [i_11 - 1]) + (9223372036854775807LL))) << (((arr_26 [i_11 - 1] [i_11 - 1] [i_13]) - (8705265245934476307LL)))))) : (((/* implicit */short) ((((arr_40 [i_11 - 1] [i_11] [(short)2] [10LL] [i_11 - 1]) + (9223372036854775807LL))) << (((((((arr_26 [i_11 - 1] [i_11 - 1] [i_13]) - (8705265245934476307LL))) + (3017024910242969242LL))) - (51LL))))));
                        }
                    } 
                } 
                var_38 = ((/* implicit */unsigned char) arr_32 [i_5] [4U] [i_5]);
            }
            var_39 = ((/* implicit */unsigned char) (-(67108609U)));
        }
        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) var_8)) : (67108585U)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_5] [i_5] [i_5] [i_5])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))))))))));
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopNest 3 */
            for (long long int i_17 = 1; i_17 < 14; i_17 += 3) 
            {
                for (int i_18 = 1; i_18 < 14; i_18 += 1) 
                {
                    for (int i_19 = 1; i_19 < 14; i_19 += 4) 
                    {
                        {
                            var_41 ^= ((/* implicit */long long int) (-(((/* implicit */int) arr_42 [i_17] [0ULL] [(_Bool)1] [i_17] [i_17] [i_17 - 1]))));
                            var_42 = ((/* implicit */long long int) ((unsigned short) arr_26 [i_5] [i_17 - 1] [i_5]));
                            var_43 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_5] [i_17 - 1] [i_18] [i_19]))) : (arr_38 [i_18] [i_17] [(_Bool)1])))));
                            var_44 = (-(((/* implicit */int) var_5)));
                        }
                    } 
                } 
            } 
            var_45 -= ((/* implicit */_Bool) ((unsigned short) arr_34 [i_5]));
        }
    }
    var_46 = ((/* implicit */long long int) var_5);
}
