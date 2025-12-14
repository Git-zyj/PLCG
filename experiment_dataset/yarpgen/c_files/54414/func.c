/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54414
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            var_19 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_1 + 2] [8U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (arr_3 [i_1 + 2] [(unsigned short)6]))) & ((~(arr_3 [i_1 + 1] [6ULL])))));
            arr_5 [(unsigned short)2] [i_1] [i_0] = ((/* implicit */_Bool) var_15);
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            var_20 = ((/* implicit */unsigned int) min((((unsigned short) arr_2 [i_0] [i_0] [i_2])), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                arr_11 [11ULL] [11ULL] [i_0] [i_0] = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)4036)) ? (arr_7 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_3 + 1]))))));
                var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_0] [2ULL] [i_3 + 2]))));
            }
            for (unsigned short i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) /* same iter space */
                {
                    arr_19 [i_0] [(short)6] [i_0] [i_0] = min((((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (arr_2 [i_5] [i_4] [i_0]))), (((/* implicit */long long int) 3404858335U)));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        var_22 *= ((/* implicit */_Bool) arr_20 [i_6] [6ULL] [i_5] [2U] [(signed char)0] [i_2] [i_4]);
                        var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_7)), (4182402027U)))) - (3013826620135899889ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) / (((((/* implicit */_Bool) 4182402027U)) ? (((/* implicit */unsigned long long int) 112565283U)) : (arr_9 [i_0] [i_0] [i_4 + 2] [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((828963112U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5])))))) ? (153453579U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 2559724609U)))))))))));
                        var_24 = 8125372814768089464ULL;
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 3; i_7 < 10; i_7 += 3) 
                    {
                        var_25 -= ((/* implicit */unsigned short) min((arr_14 [i_2] [i_2] [i_2]), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_16)))))))));
                        var_26 |= ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) ((unsigned int) arr_22 [i_0] [i_2] [i_5]))));
                        arr_25 [(unsigned short)9] [5U] [i_0] [i_5] [(unsigned short)9] = (unsigned short)55597;
                    }
                }
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
                {
                    var_27 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [6LL] [6LL] [(unsigned char)9] [i_2])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [i_8]))))) : (((/* implicit */int) arr_10 [i_4 + 2] [i_4] [i_4 + 1]))))) ? (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)151)))), (((/* implicit */int) ((unsigned short) -6648321498124228587LL)))))) : (((var_8) << (((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_5)))) - (60099))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_9 = 2; i_9 < 10; i_9 += 1) 
                    {
                        arr_32 [i_0] [i_0] [i_0] [i_0] [i_4 - 1] [(unsigned char)6] [i_9] = ((/* implicit */unsigned int) (unsigned short)9771);
                        var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) 129210535U)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)81))))))));
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_4 + 1] [i_8] [i_8])) ? (6648321498124228585LL) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                        arr_33 [i_0] [i_8] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_9] [i_0] [i_9] [i_9 + 1] [7U] [7U]))) / (((unsigned int) arr_27 [i_0] [i_2] [(unsigned char)3] [i_4 + 1] [i_8] [8]))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)2215)) ^ (((/* implicit */int) arr_31 [i_2] [i_2] [i_4 - 1] [i_8] [i_8]))));
                    }
                    /* vectorizable */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 2) 
                    {
                        var_31 = ((/* implicit */long long int) ((((6478714667817479315ULL) - (((/* implicit */unsigned long long int) 189172990U)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        arr_37 [(short)0] [(short)0] [i_0] [i_0] [(_Bool)0] [10LL] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                    }
                }
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                    {
                        arr_44 [i_0] [i_0] [0U] [i_0] [0U] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_4 + 2] [i_4 - 1])) - (((/* implicit */int) var_6))));
                        arr_45 [(unsigned short)8] [(unsigned short)8] [i_11] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_4] [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) != (13ULL)))) : (((/* implicit */int) arr_17 [(unsigned char)3] [i_2] [i_2] [i_2]))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                    {
                        arr_48 [i_0] [i_0] [i_0] [i_0] = arr_42 [i_0] [3ULL] [i_4];
                        arr_49 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_4 + 1])) ? (((/* implicit */int) arr_26 [i_4 - 1])) : (((/* implicit */int) arr_26 [i_4 + 1]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_26 [i_4 + 2])), (var_17)))) : (((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) arr_26 [i_4 + 1])) : (((/* implicit */int) var_6)))));
                        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) ((unsigned long long int) var_12)))))))));
                        var_33 |= ((/* implicit */unsigned char) (~(((/* implicit */int) var_6))));
                        var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((112565268U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_13] [i_4 + 2] [i_4] [i_4 + 2] [i_4 - 1] [i_4 + 1] [i_2])))))) ? (((arr_46 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_4 + 1] [i_4 + 2] [(unsigned short)8]) ? (1735242687U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-18015))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [(unsigned char)5] [i_4 + 2] [4ULL] [i_4 - 1] [i_4 - 1] [i_4 + 1] [i_0])) << (((-1520497884) + (1520497884))))))));
                    }
                    var_35 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) ((unsigned char) var_14))) != (((/* implicit */int) (short)(-32767 - 1))))));
                }
                arr_50 [5LL] [5LL] [i_0] [i_2] = ((/* implicit */unsigned short) 1017183942U);
                arr_51 [(unsigned short)8] [(unsigned short)8] &= ((/* implicit */long long int) 2317600129U);
                arr_52 [9ULL] [i_0] [11U] = ((/* implicit */unsigned short) ((var_8) - (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (arr_22 [i_2] [i_4 - 1] [i_4 + 2]))))));
                var_36 *= ((/* implicit */unsigned int) (~(((unsigned long long int) (_Bool)0))));
            }
            /* vectorizable */
            for (int i_14 = 2; i_14 < 9; i_14 += 1) 
            {
                arr_55 [4U] [i_2] [(unsigned char)8] [4U] |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned short)2215)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_29 [2U] [i_2] [(unsigned char)5] [(unsigned char)11])))));
                var_37 = ((/* implicit */unsigned short) (unsigned char)252);
                var_38 *= ((/* implicit */unsigned int) 12276170075085759748ULL);
                arr_56 [i_0] [i_2] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_17 [i_0] [i_14 + 3] [i_14] [i_14 + 1])) : (((/* implicit */int) arr_41 [7ULL] [i_14 + 3]))));
            }
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (+(((/* implicit */int) var_6)))))));
            arr_60 [i_15] [i_15] [10ULL] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_26 [i_0]), (((/* implicit */short) arr_6 [i_15] [7U]))))) ? (((/* implicit */int) arr_54 [(unsigned char)10] [4ULL] [4ULL])) : (((/* implicit */int) var_12))));
            /* LoopSeq 3 */
            for (int i_16 = 2; i_16 < 10; i_16 += 3) 
            {
                var_40 ^= ((/* implicit */int) ((((/* implicit */_Bool) min((min((11468071306423441531ULL), (((/* implicit */unsigned long long int) (unsigned short)30196)))), (((/* implicit */unsigned long long int) arr_8 [i_16 + 2]))))) || ((!(((/* implicit */_Bool) 948887462))))));
                arr_65 [i_0] [i_0] [(unsigned short)4] [(unsigned short)0] |= ((/* implicit */unsigned int) (((-(7884436650448167363LL))) / (((/* implicit */long long int) max((1122253147U), (((/* implicit */unsigned int) -1401487898)))))));
                var_41 = ((/* implicit */unsigned short) arr_9 [i_0] [i_0] [i_16 - 2] [i_16 - 1]);
                var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) min(((unsigned short)9440), (((/* implicit */unsigned short) arr_53 [8U] [2ULL])))))))))));
                arr_66 [i_0] [6] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) arr_4 [(unsigned short)3] [i_0] [i_0]));
            }
            /* vectorizable */
            for (unsigned int i_17 = 1; i_17 < 11; i_17 += 1) 
            {
                var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) & (-9223372036854775795LL)))) & (((8125372814768089462ULL) - (arr_0 [(unsigned char)4] [(signed char)6]))))))));
                var_44 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_14)))))));
                var_45 = ((unsigned int) (-(var_18)));
            }
            for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 1) 
            {
                var_46 &= ((/* implicit */unsigned long long int) (_Bool)1);
                arr_72 [i_0] [2LL] [i_18] = ((/* implicit */unsigned short) ((unsigned long long int) var_9));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                var_47 |= ((/* implicit */unsigned int) (~(arr_35 [i_0] [i_0] [i_19])));
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 2) 
                {
                    var_48 = ((/* implicit */unsigned long long int) max((var_48), (((((/* implicit */_Bool) arr_14 [i_0] [i_15] [i_20])) ? (((/* implicit */unsigned long long int) var_0)) : (arr_14 [i_0] [i_0] [i_19])))));
                    var_49 = ((/* implicit */unsigned int) arr_39 [i_0] [i_0] [i_0]);
                }
                arr_79 [(unsigned char)4] [i_0] = ((/* implicit */int) arr_43 [i_0] [i_15] [i_19] [i_0] [i_0] [10ULL] [i_0]);
                var_50 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_39 [i_0] [i_0] [i_19])) ? (arr_39 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))));
            }
        }
        var_51 = ((unsigned short) max((((/* implicit */unsigned long long int) max((9223372036854775794LL), (((/* implicit */long long int) var_12))))), (((16764921444465084104ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_69 [(unsigned char)11] [1U] [1U] [(unsigned char)9])))))));
        arr_80 [i_0] [i_0] = ((/* implicit */unsigned int) var_5);
    }
    var_52 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) -1))));
    var_53 = ((/* implicit */unsigned short) var_9);
}
