/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24733
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24733 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24733
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
    for (unsigned short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (short)-14175)) ? (((/* implicit */unsigned long long int) 1087212542U)) : (14811701082933313236ULL)));
        var_16 = ((((/* implicit */_Bool) ((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(short)2] [(unsigned char)6])))))) ? (arr_0 [i_0]) : (3207754775U));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_8 [i_1 - 1] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)-6254)))) > (((/* implicit */int) ((var_14) > (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 2; i_2 < 16; i_2 += 1) 
        {
            var_17 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            var_18 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)42832))));
        }
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
            var_20 = ((/* implicit */unsigned short) 372019348);
            arr_13 [11U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)8192)) : (((/* implicit */int) arr_7 [i_1 - 1]))));
            arr_14 [i_1] [i_1] = (+(((/* implicit */int) var_11)));
        }
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 1) 
        {
            arr_17 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1] [i_4])) ? (8055873619383084238LL) : (((/* implicit */long long int) ((unsigned int) 0)))));
            /* LoopSeq 2 */
            for (unsigned int i_5 = 1; i_5 < 14; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_6 = 1; i_6 < 15; i_6 += 1) /* same iter space */
                {
                    var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_8)) : (var_4)))) ? (2326394004877779619ULL) : ((((_Bool)1) ? (11438456321435882469ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)8192)))))));
                    var_22 = ((/* implicit */unsigned char) arr_15 [i_6] [i_4]);
                }
                for (unsigned short i_7 = 1; i_7 < 15; i_7 += 1) /* same iter space */
                {
                    arr_26 [i_1] [i_4] [i_7] [i_1] = ((/* implicit */short) (unsigned short)0);
                    /* LoopSeq 3 */
                    for (int i_8 = 3; i_8 < 14; i_8 += 4) 
                    {
                        arr_31 [(_Bool)1] [i_4] [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_12 [i_5 - 1])) : (var_14)));
                        var_23 = ((/* implicit */unsigned short) (+(2910787824U)));
                    }
                    for (short i_9 = 2; i_9 < 14; i_9 += 1) 
                    {
                        arr_36 [i_9] [i_7] [i_7] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */int) (short)-6254)) | (var_5))) | (((/* implicit */int) var_10))));
                        arr_37 [i_1] [i_1] [i_7] [i_7] [i_1 - 1] = ((/* implicit */unsigned short) ((arr_23 [i_1] [i_4] [i_7] [i_7 + 2] [i_5 - 1]) ? (((/* implicit */int) arr_23 [i_1 - 1] [i_4] [8] [i_7] [i_9 + 3])) : (-511468712)));
                    }
                    for (short i_10 = 0; i_10 < 17; i_10 += 1) 
                    {
                        arr_40 [i_7] = ((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_5 + 2]));
                        arr_41 [i_10] [i_4] [i_7] [i_1 - 1] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                }
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    arr_44 [i_1] [i_1] [i_5] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_5 + 2])) : (((/* implicit */int) arr_9 [i_5 - 1] [i_5 + 3] [i_11]))));
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5 - 1]))) : (var_1)));
                    var_25 = ((arr_12 [i_1 - 1]) % (var_3));
                }
                var_26 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-30590))));
                var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (short)-16))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) < (var_14)))) : (((var_5) ^ (var_4))))))));
            }
            for (int i_12 = 1; i_12 < 13; i_12 += 1) 
            {
                var_28 = ((/* implicit */unsigned char) (short)3);
                var_29 ^= ((/* implicit */unsigned short) arr_32 [i_1 - 1] [i_4] [i_12] [i_12] [i_1] [i_4] [i_4]);
                var_30 = ((/* implicit */unsigned long long int) var_6);
                var_31 = ((/* implicit */unsigned short) ((-10) + (((/* implicit */int) ((((/* implicit */long long int) var_4)) > (arr_33 [i_1] [i_4] [i_12] [(short)3] [i_4] [i_12]))))));
            }
        }
        arr_47 [i_1] = ((/* implicit */int) (-(arr_46 [i_1 - 1] [i_1 - 1] [i_1 - 1])));
        /* LoopSeq 2 */
        for (int i_13 = 0; i_13 < 17; i_13 += 1) 
        {
            var_32 = ((((/* implicit */_Bool) ((((-20LL) + (9223372036854775807LL))) << (((var_7) - (150537656U)))))) ? (816592576936819448LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_13] [i_1] [i_13]))));
            var_33 = var_9;
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_53 [i_1] [i_14] [i_14] = ((/* implicit */unsigned char) ((arr_51 [i_14]) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((~(-347613378)))));
            arr_54 [i_14] [i_1] [i_14] = ((/* implicit */long long int) arr_43 [5] [i_14] [i_14] [5]);
            /* LoopSeq 1 */
            for (signed char i_15 = 0; i_15 < 17; i_15 += 1) 
            {
                arr_58 [(short)14] [i_14] [5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)48)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) -7564825453891902391LL))));
                arr_59 [i_1] [i_14] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_1 - 1]))));
                var_34 = ((/* implicit */short) arr_11 [i_1 - 1] [i_1 - 1] [i_15]);
                var_35 = ((/* implicit */signed char) arr_45 [i_1 - 1] [(_Bool)1] [i_15] [i_15]);
            }
            var_36 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (short)-5))) + (816592576936819448LL)));
        }
    }
    var_37 = ((/* implicit */_Bool) min((var_37), (((_Bool) (unsigned short)49518))));
    var_38 = ((/* implicit */unsigned int) var_13);
    /* LoopSeq 2 */
    for (long long int i_16 = 0; i_16 < 15; i_16 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (1087212542U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16029)))))) ? (((/* implicit */int) min(((unsigned short)16006), (((/* implicit */unsigned short) (_Bool)0))))) : (((/* implicit */int) arr_35 [i_16] [i_16] [i_16] [i_16] [i_16]))))));
        arr_63 [i_16] = ((/* implicit */unsigned char) min((var_5), (((((/* implicit */_Bool) 688078844979895323ULL)) ? (((/* implicit */int) (_Bool)1)) : (2080280461)))));
        arr_64 [i_16] [i_16] = (short)-16058;
    }
    for (long long int i_17 = 0; i_17 < 15; i_17 += 1) /* same iter space */
    {
        var_40 = ((/* implicit */unsigned char) ((((/* implicit */int) var_8)) != (((((/* implicit */int) var_13)) - (((/* implicit */int) var_13))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 1) 
        {
            arr_70 [(short)4] [(signed char)8] [(short)4] |= ((/* implicit */unsigned char) var_5);
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), (((/* implicit */unsigned long long int) arr_29 [i_17] [i_17] [(unsigned short)16] [i_18] [i_17]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -96475674)))))) : (-25LL)))) ? (1366393718U) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_51 [i_18])) >= (((/* implicit */int) arr_23 [(unsigned short)8] [i_18] [i_18] [(unsigned short)8] [i_17])))))))));
        }
        var_42 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)29779)) & (var_3)))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) 10)) + (var_7))))))), ((~(((/* implicit */int) ((var_1) <= (((/* implicit */unsigned long long int) var_3)))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_19 = 3; i_19 < 23; i_19 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_20 = 0; i_20 < 25; i_20 += 1) 
        {
            arr_77 [i_19] = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
            arr_78 [i_19] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)8215)) ^ (((/* implicit */int) (unsigned short)10))))) ? (((0LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)192))))) : (((/* implicit */long long int) 48019997U))));
        }
        arr_79 [i_19 - 3] [i_19] = (!(((/* implicit */_Bool) ((int) var_14))));
        var_43 -= ((/* implicit */int) var_12);
        arr_80 [i_19] = ((/* implicit */unsigned short) var_14);
    }
    /* vectorizable */
    for (int i_21 = 1; i_21 < 10; i_21 += 1) 
    {
        arr_85 [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)0)) | (((/* implicit */int) var_13))));
        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) arr_25 [i_21] [i_21] [10]))) ? ((-(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_51 [2U])) : (arr_45 [i_21] [14LL] [14LL] [i_21 + 1])))));
        arr_86 [i_21] [i_21] = ((/* implicit */unsigned char) var_0);
        arr_87 [i_21] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)8215))));
        arr_88 [i_21] = ((/* implicit */short) -10);
    }
}
