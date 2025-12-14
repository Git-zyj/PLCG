/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32623
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
    var_18 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((-1672826757769544581LL), (((/* implicit */long long int) 3524590873U))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) : (max((3524590873U), (((/* implicit */unsigned int) var_9))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) >= (arr_7 [i_1 + 1] [i_1] [i_1 + 1])));
                arr_9 [i_0] [i_1] [i_0] = ((/* implicit */short) (-(-1672826757769544581LL)));
            }
            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32070)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)11212))));
        }
        for (long long int i_3 = 1; i_3 < 23; i_3 += 2) /* same iter space */
        {
            arr_12 [i_3] [i_3] = ((/* implicit */long long int) min((((arr_11 [i_3] [i_3 + 1]) != (((/* implicit */long long int) ((/* implicit */int) var_7))))), (((((/* implicit */unsigned long long int) arr_5 [i_3] [i_3 + 1] [i_3])) < (arr_2 [i_3 + 1])))));
            var_22 = ((/* implicit */signed char) max(((short)-6868), ((short)-6868)));
            var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)1))));
        }
        /* vectorizable */
        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            arr_15 [i_4] = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)16807))));
            var_24 = ((/* implicit */unsigned short) var_9);
        }
        arr_16 [i_0] = ((/* implicit */short) (_Bool)1);
        var_25 = ((/* implicit */long long int) max((((((((/* implicit */int) var_0)) + (2147483647))) >> ((((~(((/* implicit */int) (short)-19532)))) - (19509))))), (min(((-(((/* implicit */int) (unsigned char)205)))), (((/* implicit */int) var_14))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 2; i_5 < 18; i_5 += 3) 
    {
        arr_19 [i_5 + 1] [i_5] &= ((/* implicit */signed char) ((9223372036854775807LL) >> ((((~(((/* implicit */int) (_Bool)1)))) + (39)))));
        arr_20 [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) var_16))));
        /* LoopSeq 1 */
        for (unsigned int i_6 = 0; i_6 < 19; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (long long int i_7 = 4; i_7 < 18; i_7 += 3) 
            {
                var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) - (((/* implicit */int) arr_26 [0LL] [i_5] [i_7] [9ULL]))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)32070))));
                var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) (+(var_1)))) : ((~(11610274173561241998ULL))))))));
            }
            for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (-(((899534013357502909LL) | (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                    arr_34 [i_5] [5U] [i_8] [i_9] |= ((/* implicit */signed char) var_4);
                    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (-(((((/* implicit */int) var_2)) | (((/* implicit */int) (unsigned short)26414)))))))));
                }
                /* LoopSeq 4 */
                for (long long int i_10 = 0; i_10 < 19; i_10 += 4) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        arr_40 [i_5] [i_6] [i_8] [i_10] [14LL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                        var_30 += ((/* implicit */signed char) (-(arr_7 [i_6] [i_6] [i_5 + 1])));
                        var_31 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) & (arr_6 [i_6] [i_5] [i_6])));
                        arr_41 [i_5] [i_5] [i_5] [(short)4] = ((/* implicit */signed char) ((7126668533450657659LL) >= (((/* implicit */long long int) arr_36 [i_5 - 2]))));
                    }
                    for (short i_12 = 4; i_12 < 17; i_12 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) var_6))))) % (var_10)));
                        arr_46 [i_5] [i_6] [i_8] [i_10] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) var_17))));
                    }
                    for (short i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        var_33 = var_8;
                        var_34 *= ((/* implicit */unsigned long long int) (((+(((/* implicit */int) var_14)))) <= (((((/* implicit */int) (unsigned short)26413)) >> (((((/* implicit */int) (short)-13410)) + (13415)))))));
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_5 + 1] [i_5 + 1])) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5251)))));
                        var_36 = ((/* implicit */signed char) -679215033538302599LL);
                        arr_49 [i_5] [i_5] [(unsigned char)11] [i_5] [i_5] [i_5] [i_5 - 2] = ((/* implicit */short) var_4);
                    }
                    arr_50 [i_5] [i_6] [i_8] = ((/* implicit */short) ((2980241323566849734LL) | (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    arr_51 [i_5] [(unsigned short)12] [i_8] [i_10] = ((/* implicit */unsigned short) arr_7 [12LL] [i_10] [i_10]);
                    var_37 = ((/* implicit */short) (+(var_1)));
                }
                for (long long int i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
                {
                    arr_55 [i_6] = arr_28 [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5];
                    var_38 = ((/* implicit */signed char) ((679215033538302598LL) << (((((((((/* implicit */_Bool) 679215033538302569LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) + (21631))) - (23)))));
                    var_39 += var_7;
                    arr_56 [i_5 - 1] [i_6] [i_8] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_29 [i_5 - 1] [i_5] [i_5 - 2])) == (((/* implicit */int) var_6))));
                }
                for (long long int i_15 = 4; i_15 < 16; i_15 += 3) 
                {
                    var_40 = ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_28 [i_5] [(short)15] [i_8] [i_15 - 3])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (unsigned char)196)) <= (((/* implicit */int) var_14)))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 19; i_16 += 3) 
                    {
                        var_41 ^= ((/* implicit */int) ((var_10) > ((+(-679215033538302600LL)))));
                        arr_62 [i_5] [i_5] [i_5] [i_5] [i_5] [i_15] = ((/* implicit */short) ((var_5) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                        var_42 = ((/* implicit */short) (+(((/* implicit */int) (short)-16807))));
                    }
                    for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 3) 
                    {
                        arr_66 [i_5 + 1] [(signed char)7] [i_8] [i_15] [i_17 - 1] [i_17] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (-2980241323566849715LL)));
                        var_43 += ((/* implicit */short) 679215033538302569LL);
                        var_44 = ((/* implicit */long long int) min((var_44), (679215033538302575LL)));
                        var_45 ^= ((/* implicit */short) ((((/* implicit */int) var_7)) | (((/* implicit */int) var_2))));
                    }
                }
                for (short i_18 = 0; i_18 < 19; i_18 += 3) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_19 = 0; i_19 < 19; i_19 += 3) 
                    {
                        arr_72 [i_19] [i_19] = ((/* implicit */signed char) var_3);
                        arr_73 [i_19] [i_8] = ((/* implicit */unsigned int) var_9);
                    }
                    for (signed char i_20 = 1; i_20 < 18; i_20 += 2) 
                    {
                        var_46 = arr_58 [i_20] [i_5] [i_5] [i_8] [i_20 - 1] [i_20 + 1];
                        arr_76 [i_20] [i_6] [i_8] [i_18] [i_18] [i_20 + 1] = (~(-679215033538302576LL));
                    }
                    var_47 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (short)-16808))) - (3010871702U)))));
                    var_48 = ((/* implicit */signed char) var_3);
                }
            }
            arr_77 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) var_9);
        }
        var_49 ^= ((/* implicit */unsigned char) (short)32758);
    }
    var_50 = ((/* implicit */short) (-(((/* implicit */int) var_8))));
}
