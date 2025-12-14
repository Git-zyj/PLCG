/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27267
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
    var_15 = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
    var_16 = ((/* implicit */unsigned char) var_13);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) var_3);
            arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(arr_2 [i_1])))) ? (((/* implicit */int) arr_3 [i_0] [i_0] [(_Bool)1])) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) < (var_6))))));
        }
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [(unsigned char)8])) != (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) ((_Bool) arr_3 [i_0] [i_2] [i_2]));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                arr_13 [i_0] [(unsigned char)2] [i_3] [i_3] |= ((/* implicit */unsigned short) ((arr_8 [i_0] [i_2]) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                arr_14 [i_2] = ((/* implicit */_Bool) ((arr_1 [i_0]) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [7LL] [i_0]))) : (var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_2])))));
                arr_15 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((arr_10 [i_2] [i_2]) ? (((/* implicit */int) arr_10 [i_0] [i_2])) : (((/* implicit */int) arr_10 [i_2] [i_2]))));
                arr_16 [(short)0] [i_3] [i_2] = ((/* implicit */int) ((((var_8) ? (((/* implicit */long long int) arr_8 [i_2] [i_3])) : (3204238171265087138LL))) + (((/* implicit */long long int) (-(((/* implicit */int) var_3)))))));
            }
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -3204238171265087139LL)) ? (6113132833011242831LL) : (-3204238171265087142LL)));
            var_21 |= ((/* implicit */signed char) (unsigned char)218);
            /* LoopSeq 3 */
            for (short i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                /* LoopSeq 3 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                {
                    var_22 = ((/* implicit */_Bool) ((short) var_4));
                    var_23 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_0] [i_6 + 1] [i_5] [i_6]))));
                    var_24 *= ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) < (((/* implicit */int) arr_21 [i_6 + 1] [i_6 + 1] [i_0] [i_6 + 1]))));
                }
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                {
                    arr_25 [i_0] [i_4] [i_5] [i_7] = ((/* implicit */signed char) ((arr_23 [i_7] [i_7] [i_7 + 1] [i_4]) & (((/* implicit */long long int) (-(((/* implicit */int) arr_0 [i_0])))))));
                    arr_26 [(_Bool)1] [i_5] [i_5] [i_7] [i_7 + 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_7] [i_0] [i_5] [i_7 + 1] [i_4] [i_5])) || (((/* implicit */_Bool) (signed char)117)))))) | (((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_5]))) + (var_6)))));
                    var_25 = (signed char)127;
                }
                for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
                {
                    arr_29 [i_0] [i_0] [i_0] [i_5] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_8 + 1] [i_8 + 1] [i_8] [i_8] [i_8 + 1]))));
                    /* LoopSeq 1 */
                    for (int i_9 = 1; i_9 < 8; i_9 += 2) 
                    {
                        var_26 ^= ((/* implicit */int) (-(var_1)));
                        arr_33 [i_5] [i_5] = ((/* implicit */long long int) var_9);
                        var_27 = ((/* implicit */_Bool) ((arr_32 [i_9 + 3] [i_9 - 1] [i_5] [i_5] [i_8]) & (arr_32 [i_8 + 1] [i_8 + 1] [i_9 + 2] [i_9 + 1] [i_9])));
                        var_28 = ((/* implicit */_Bool) ((arr_7 [i_0] [i_8 + 1] [i_5]) - (((/* implicit */long long int) arr_2 [i_9 + 1]))));
                    }
                    var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_0] [i_0] [(unsigned short)2] [i_8] [i_8 + 1] [(_Bool)1]))));
                }
                arr_34 [i_0] [i_5] [(short)0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_4] [i_4])) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [(short)4] [i_4] [i_0])))))));
            }
            for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
            {
                var_30 &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_9 [i_0]))));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 11; i_11 += 4) 
                {
                    var_31 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_10]))));
                    var_32 = ((/* implicit */long long int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) arr_39 [i_0] [i_4] [i_10] [i_4])) - (212)))));
                }
                for (unsigned char i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    arr_42 [i_0] [i_0] [i_12] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) arr_8 [i_12] [i_4])) * (((((/* implicit */_Bool) (unsigned char)44)) ? (((/* implicit */long long int) -2147483643)) : (-6113132833011242814LL)))));
                    arr_43 [i_12] [i_12] [i_12] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_24 [i_12] [i_10] [i_4] [i_0] [i_0] [i_0])) < (var_13)));
                }
                var_33 = ((((-9223372036854775788LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)186))))) >= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (short)-25922)))));
                var_34 &= ((/* implicit */unsigned int) (~(var_0)));
            }
            for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                var_35 = ((/* implicit */long long int) (((-(((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_4] [i_0])))) <= (((/* implicit */int) var_11))));
                arr_48 [i_0] [i_13] [i_0] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_14) / (var_14)))) ? (((/* implicit */long long int) var_1)) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) / (3204238171265087138LL)))));
                arr_49 [i_0] [i_0] [i_0] = ((/* implicit */int) (((+(var_14))) - (((/* implicit */unsigned int) ((((/* implicit */int) arr_21 [i_0] [i_4] [i_0] [i_0])) - (((/* implicit */int) arr_19 [i_0] [i_0] [i_13])))))));
            }
            var_36 = arr_30 [i_0] [i_0] [i_0] [i_4] [i_0] [i_4] [i_4];
        }
    }
}
