/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198673
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        var_19 *= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= (17154580541672477454ULL)));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)-14422)) : (((/* implicit */int) var_14))))) : (8191U))) / (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (((/* implicit */short) var_2))))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 8; i_1 += 1) 
        {
            var_21 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_17)) ? (arr_1 [i_0 + 3]) : (((/* implicit */unsigned long long int) 308542193U)))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [4U]))) | (0U))))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) arr_6 [i_3] [i_2 - 1] [i_1] [i_0]))) ? (arr_9 [i_2 + 1] [i_1] [(_Bool)1] [i_1]) : (((int) 4808209509091212747ULL))));
                        var_23 = arr_6 [0] [7] [i_2] [7];
                    }
                } 
            } 
        }
        for (int i_4 = 1; i_4 < 8; i_4 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5)))))) ? ((+(((/* implicit */int) (short)32767)))) : (min((((((/* implicit */_Bool) (unsigned char)114)) ? (arr_9 [i_0] [i_0] [i_5] [i_5]) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0])))), (((((/* implicit */_Bool) arr_9 [7U] [7U] [i_5] [i_5])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10)))))))))));
                /* LoopSeq 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)185))) % (14974735916881694874ULL))))))) << (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)25495)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1405230060U)))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)26))) : (arr_15 [i_4 + 4] [i_4] [6U]))))))))));
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned int) (~(arr_0 [i_0 - 2])))))));
                    var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_10 [i_4 + 3] [i_4 + 2] [0LL] [i_0 + 1] [i_0 + 1] [8ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : ((+(var_5))))) <= (max((((3513550049U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))))), (((/* implicit */unsigned int) arr_7 [i_0] [i_4 + 1] [i_4 - 1] [i_4]))))));
                }
                /* vectorizable */
                for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_8 = 0; i_8 < 12; i_8 += 3) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << ((((((~(((/* implicit */int) arr_6 [i_0 + 3] [i_5] [i_7] [i_8])))) + (21214))) - (19)))));
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) 1412059276U)) ? (2731742881U) : (arr_11 [i_0] [i_0])));
                        var_30 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1]))));
                    }
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 3) /* same iter space */
                    {
                        var_31 = (((((~(((/* implicit */int) var_0)))) + (2147483647))) << (((0U) >> (((var_3) - (1179360991406445486ULL))))));
                        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) 9129967195005629415LL))));
                    }
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) /* same iter space */
                    {
                        var_33 |= var_15;
                        var_34 = ((/* implicit */signed char) arr_9 [i_0] [i_4 + 4] [1] [0ULL]);
                    }
                    arr_29 [4ULL] [i_4 + 2] [i_4] [i_4 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_3) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? (((((/* implicit */int) arr_10 [i_0] [i_4 - 1] [i_7 + 1] [i_7] [(unsigned char)9] [i_5])) >> (((arr_24 [i_4] [i_0 + 3]) - (3268905465U))))) : (((/* implicit */int) (signed char)-55))));
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) || (((/* implicit */_Bool) arr_6 [i_7 + 3] [i_0 + 3] [i_5] [i_4 + 1]))));
                    arr_30 [(unsigned char)3] [i_7] = ((/* implicit */unsigned int) ((int) var_16));
                }
                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((/* implicit */_Bool) 3889205699U)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) arr_14 [i_0 - 1] [(short)5])), (arr_0 [i_0 + 1])))))))))));
                var_37 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_5])), (var_6)))))))));
                /* LoopSeq 1 */
                for (long long int i_11 = 1; i_11 < 8; i_11 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned int i_12 = 3; i_12 < 10; i_12 += 4) 
                    {
                        var_38 = ((/* implicit */long long int) ((((((/* implicit */int) var_7)) + (((/* implicit */int) arr_14 [i_0] [i_4 + 1])))) + (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                        arr_38 [i_0] [i_4] [i_5] [i_11 + 4] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_11] [i_12 - 3] [i_5] [i_11 + 3] [i_12] [i_0 + 4] [i_11])) ? (((/* implicit */int) ((((/* implicit */_Bool) 3642674332503739439ULL)) || (((/* implicit */_Bool) (signed char)62))))) : (((((/* implicit */int) arr_13 [i_0 - 2] [i_0] [i_0])) - (((/* implicit */int) var_1))))));
                        var_39 = ((/* implicit */unsigned long long int) ((((1477852070) - (((/* implicit */int) var_14)))) / (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_13 [i_12 - 3] [(short)7] [i_5])) : (((/* implicit */int) (short)20899))))));
                    }
                    /* vectorizable */
                    for (short i_13 = 1; i_13 < 8; i_13 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned int) max((var_40), (((((1415571313U) & (((/* implicit */unsigned int) var_11)))) >> (((/* implicit */int) ((((/* implicit */int) arr_14 [(short)6] [i_0])) > (((/* implicit */int) arr_4 [i_0])))))))));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_0 + 1])) || (((/* implicit */_Bool) ((long long int) arr_22 [i_11] [i_4] [i_4] [i_4 + 2] [i_4] [i_4] [i_4])))));
                        var_42 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((var_4) ^ (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_25 [i_0] [i_4] [i_0] [i_11] [i_4 + 2] [i_4])));
                    }
                    for (short i_14 = 1; i_14 < 8; i_14 += 4) /* same iter space */
                    {
                        arr_47 [i_11] [i_11] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) arr_3 [i_0])) : (arr_19 [i_0]))), (((/* implicit */int) ((((/* implicit */int) arr_16 [i_0 - 2] [i_4])) > (((/* implicit */int) arr_10 [i_0] [i_4] [i_5] [i_5] [i_11] [i_14]))))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_0] [(short)3])) && (((/* implicit */_Bool) max((((/* implicit */unsigned int) -250552557)), (arr_40 [i_14 + 1] [i_14 + 1] [i_5] [i_5] [i_5])))))))));
                        var_43 = var_6;
                    }
                    var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_22 [i_11] [i_4 + 3] [i_4] [i_4 + 2] [i_4] [i_4 + 1] [i_4]) * (((/* implicit */long long int) ((/* implicit */int) ((160277967) < (((/* implicit */int) var_18))))))))) ? (((((/* implicit */_Bool) arr_14 [i_5] [i_11 + 2])) ? (((var_4) + (var_11))) : (((((/* implicit */_Bool) arr_32 [i_11 + 3] [i_0] [i_5] [i_0 + 3] [i_0 + 3] [i_0])) ? (((/* implicit */int) arr_32 [i_0 + 4] [i_0 - 1] [8] [2ULL] [i_0] [i_0])) : (((/* implicit */int) arr_44 [i_0 + 4])))))) : (2147483647)));
                    var_45 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_14))))) ? (((unsigned int) ((var_4) / (((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                    arr_48 [i_11] [i_11] [i_5] [10U] = ((/* implicit */short) arr_7 [i_11] [i_5] [i_4 + 3] [i_11]);
                }
            }
            for (long long int i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                {
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (((((2953559951U) << (((3785932014892362776LL) - (3785932014892362754LL))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    var_47 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 + 2] [6ULL] [i_15] [i_16]))) : (var_3)))))) || (((/* implicit */_Bool) var_2))));
                }
                var_48 = ((/* implicit */int) max((((((/* implicit */_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 + 3] [i_0]))) : (786619514U)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_10)))) : (4503599627370495LL))), (((/* implicit */long long int) arr_8 [i_15] [7ULL] [i_0] [(signed char)3]))));
            }
            var_49 = ((/* implicit */unsigned long long int) min((var_10), (((unsigned char) var_0))));
            var_50 = ((/* implicit */unsigned long long int) arr_37 [(short)7] [10U] [0U] [i_0] [i_0]);
        }
        var_51 = ((((long long int) min((((/* implicit */short) var_0)), ((short)-25173)))) <= (((/* implicit */long long int) min((var_5), (((var_5) << (((arr_42 [(unsigned char)1]) - (1967791431U)))))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 23; i_17 += 1) 
    {
        var_52 = ((/* implicit */unsigned long long int) var_18);
        var_53 = ((/* implicit */short) ((((/* implicit */int) ((var_4) < (((/* implicit */int) ((var_6) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_17] [i_17]))))))))) | (((((/* implicit */_Bool) arr_57 [i_17] [i_17])) ? (((((/* implicit */int) arr_57 [i_17] [i_17])) & (((/* implicit */int) arr_56 [i_17] [i_17])))) : (((int) var_16))))));
    }
    /* vectorizable */
    for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 4) /* same iter space */
    {
        arr_61 [i_18] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_60 [i_18]))))) ? (((((/* implicit */int) var_14)) << (((var_16) - (4096471018U))))) : ((~(((/* implicit */int) arr_60 [i_18]))))));
        arr_62 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_56 [i_18] [i_18])) | (((/* implicit */int) arr_56 [i_18] [i_18]))));
        var_54 = ((/* implicit */short) ((((((/* implicit */int) arr_57 [i_18] [i_18])) + (2147483647))) >> (((((/* implicit */int) arr_57 [i_18] [i_18])) + (45)))));
    }
    for (unsigned long long int i_19 = 0; i_19 < 20; i_19 += 4) /* same iter space */
    {
        var_55 = ((/* implicit */short) arr_59 [i_19]);
        var_56 = ((/* implicit */unsigned long long int) min((var_56), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */long long int) arr_64 [i_19])) + (arr_59 [i_19])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (arr_64 [i_19]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_65 [0LL])) - (((/* implicit */int) (short)-31782))))))), ((-(max((arr_64 [i_19]), (((/* implicit */unsigned int) var_13)))))))))));
        var_57 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_65 [i_19])))) ? (((/* implicit */unsigned long long int) arr_64 [10ULL])) : (((var_6) >> (((/* implicit */int) arr_56 [i_19] [(_Bool)1])))))) >= (((/* implicit */unsigned long long int) ((((long long int) arr_56 [i_19] [i_19])) - (((/* implicit */long long int) ((/* implicit */int) (signed char)34))))))));
    }
    var_58 = ((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) 2147483647))) ? (((((/* implicit */_Bool) -249155969)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120))) : (var_16))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1)))))))));
    var_59 = ((1728767111163693262LL) + (((/* implicit */long long int) var_5)));
}
