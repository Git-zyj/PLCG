/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49378
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            var_16 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((signed char) (~(((/* implicit */int) (unsigned short)4)))))) + (2147483647))) >> ((((((!(((/* implicit */_Bool) 549218942976ULL)))) ? (max((4547848202955954328ULL), (arr_4 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0])))))) - (20885ULL)))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                {
                    for (unsigned long long int i_4 = 3; i_4 < 21; i_4 += 4) 
                    {
                        {
                            arr_15 [i_2] [i_3] = ((/* implicit */short) (signed char)-1);
                            arr_16 [i_2] [i_2] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)4095);
                        }
                    } 
                } 
            } 
            arr_17 [i_1] [i_1] [i_1] = (-(((((/* implicit */int) min(((unsigned short)7), (((/* implicit */unsigned short) (signed char)-92))))) + (((((/* implicit */int) var_12)) / (((/* implicit */int) arr_9 [i_0])))))));
            arr_18 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-5589)) == (62914560)));
            var_17 = ((/* implicit */int) max((min((((((/* implicit */_Bool) (short)-1)) ? (549218942976ULL) : (arr_13 [i_1] [i_0] [i_0] [i_1] [i_0] [i_0]))), (min((((/* implicit */unsigned long long int) (unsigned short)29663)), (arr_14 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1]))))), ((-(549218942976ULL)))));
        }
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (unsigned long long int i_6 = 3; i_6 < 22; i_6 += 1) 
            {
                {
                    var_18 = ((unsigned long long int) ((max((((/* implicit */unsigned long long int) (short)5589)), (arr_4 [i_5] [i_6]))) << (((((/* implicit */int) arr_22 [i_0] [i_0] [i_6])) - (4162)))));
                    var_19 *= ((unsigned long long int) (~((+(((/* implicit */int) (unsigned short)9))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 3) 
                    {
                        var_20 = ((unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                        arr_28 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((signed char) (signed char)-116))) + (max((((/* implicit */int) (signed char)3)), (var_6)))))) ? (max((((/* implicit */unsigned long long int) min((2088960), (((/* implicit */int) (unsigned short)45822))))), ((+(arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-1)), (var_1)))))));
                        var_21 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)49463))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned short) 1148417904979476480ULL);
                        arr_31 [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) arr_22 [i_0] [i_5] [i_0]);
                        var_23 ^= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_7 [i_6] [i_6 - 1] [i_6 - 2] [i_6]))))));
                        var_24 = ((/* implicit */unsigned short) var_2);
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 3; i_9 < 22; i_9 += 2) 
        {
            for (signed char i_10 = 1; i_10 < 21; i_10 += 3) 
            {
                {
                    arr_37 [i_10] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_25 [i_9] [i_9 - 3] [i_9] [i_9] [i_10])), (arr_10 [i_0] [i_9 - 2] [i_9 - 2] [i_9 - 2])))) ? (14391486618791196514ULL) : ((((!(((/* implicit */_Bool) (unsigned short)15)))) ? (((/* implicit */unsigned long long int) max((-434500664), (((/* implicit */int) arr_6 [i_10]))))) : (arr_20 [i_0] [i_0])))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) max((arr_35 [i_0] [i_9] [i_0] [i_10]), ((~(3397819972659232464ULL))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)1))));
                        var_27 = ((unsigned short) 6250476800787018128ULL);
                    }
                    /* LoopSeq 3 */
                    for (short i_12 = 0; i_12 < 23; i_12 += 3) 
                    {
                        var_28 = ((/* implicit */int) ((36028796951855104ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)25)))));
                        var_29 *= ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -434500664)), (15966015580558425617ULL)))) ? (((((/* implicit */_Bool) -1840869487)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)98)))) : (((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_12]))));
                        var_30 = arr_2 [i_12] [i_9];
                    }
                    for (unsigned short i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        var_31 = 18446744073709551615ULL;
                        var_32 = ((/* implicit */unsigned short) max((var_32), (((/* implicit */unsigned short) (-(((unsigned long long int) ((((/* implicit */int) arr_36 [i_0])) ^ (var_6)))))))));
                        var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) -2088960))) && (((/* implicit */_Bool) max((arr_11 [i_10] [i_10]), (((/* implicit */unsigned long long int) arr_9 [i_9])))))))), (((((/* implicit */unsigned long long int) ((int) var_5))) % (((arr_11 [i_0] [i_10]) | (((/* implicit */unsigned long long int) var_3)))))))))));
                    }
                    for (unsigned long long int i_14 = 0; i_14 < 23; i_14 += 3) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_0]))));
                        var_35 = ((/* implicit */short) var_2);
                    }
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_10 - 1] [i_10] [i_0] [i_10] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) : (arr_12 [i_9 - 1] [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_42 [i_10 - 1] [i_10] [i_9] [i_10] [i_9])) ? (arr_12 [i_9 - 1] [i_9] [i_9] [i_9]) : (arr_12 [i_9 - 1] [i_9] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15872)))));
                }
            } 
        } 
    }
    for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_16 = 3; i_16 < 22; i_16 += 3) 
        {
            var_37 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned long long int) (unsigned short)55435)), (3458764513820540928ULL))), (min((((/* implicit */unsigned long long int) 1853188830)), (min((1099444518912ULL), (((/* implicit */unsigned long long int) -2088960))))))));
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 23; i_17 += 3) 
            {
                for (unsigned short i_18 = 0; i_18 < 23; i_18 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (short i_19 = 0; i_19 < 23; i_19 += 2) 
                        {
                            arr_66 [i_15] [i_15] [i_15] [i_17] [i_17] [i_17] [i_15] = max((((/* implicit */unsigned long long int) ((arr_44 [i_15] [i_16 - 2] [i_16 - 2] [i_18] [i_19] [i_19]) >= (8646911284551352320ULL)))), (arr_29 [i_17] [i_16]));
                            arr_67 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned long long int) (-((((+(((/* implicit */int) arr_27 [i_18] [i_16] [i_16] [i_18] [i_19] [i_17])))) / (((/* implicit */int) arr_9 [i_15]))))));
                            var_38 = ((/* implicit */short) ((min((((/* implicit */unsigned long long int) arr_27 [i_19] [i_19] [i_16] [i_16 - 1] [i_16] [i_16])), (576460752303407104ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)10088)) ? (((/* implicit */int) arr_27 [i_15] [i_15] [i_15] [i_16 - 2] [i_15] [i_16 - 2])) : (((/* implicit */int) arr_27 [i_15] [i_15] [i_15] [i_16 - 2] [i_17] [i_15])))))));
                        }
                        var_39 += ((/* implicit */unsigned long long int) var_9);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 2) 
            {
                var_40 -= ((/* implicit */unsigned short) 137304735744ULL);
                var_41 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)1)) != (((/* implicit */int) (unsigned short)49463)))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 2) /* same iter space */
                {
                    arr_73 [i_15] [i_20] [i_15] [i_20] [i_20] [i_20] &= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned short)65535))))));
                    var_42 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)1023)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) < (1636436269534095835ULL))))))) & (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_49 [i_16]))))))))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 2) /* same iter space */
                {
                    var_43 = (~(max((13898895870753597283ULL), (((/* implicit */unsigned long long int) arr_47 [i_15] [i_16] [i_15] [i_22])))));
                    /* LoopSeq 4 */
                    for (short i_23 = 0; i_23 < 23; i_23 += 2) /* same iter space */
                    {
                        var_44 = ((/* implicit */signed char) min((1566185422), (((/* implicit */int) arr_27 [i_20] [i_23] [i_20] [i_22] [i_23] [i_16]))));
                        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) min((((unsigned long long int) arr_39 [i_16 - 2] [i_16 - 2] [i_20] [i_16 - 2] [i_16])), (arr_58 [i_16 + 1] [i_15] [i_16 + 1] [i_22]))))));
                        var_46 = ((/* implicit */unsigned long long int) var_12);
                    }
                    for (short i_24 = 0; i_24 < 23; i_24 += 2) /* same iter space */
                    {
                        var_47 = ((/* implicit */unsigned long long int) 16252928);
                        arr_81 [i_15] [i_15] [i_15] [i_16] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_15] [i_16] [i_15] [i_16 - 1])) <= (((/* implicit */int) var_7))));
                    }
                    for (unsigned long long int i_25 = 0; i_25 < 23; i_25 += 1) /* same iter space */
                    {
                        var_48 = (~(arr_56 [i_16 - 1] [i_16] [i_16 + 1] [i_16 + 1]));
                        var_49 += max((arr_32 [i_16 - 3] [i_16 - 3]), (((unsigned long long int) arr_3 [i_15])));
                        var_50 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_62 [i_16] [i_20] [i_22] [i_25])), (12350929417774659555ULL))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 1) /* same iter space */
                    {
                        var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_26 [i_26] [i_22] [i_16] [i_15])))))));
                        arr_88 [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) (+(((/* implicit */int) (short)18704))));
                        var_52 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)5431))));
                        var_53 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)24737)) < (((/* implicit */int) (unsigned short)55435)))) ? (((/* implicit */int) (signed char)45)) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) (signed char)10)))))));
                    }
                    arr_89 [i_15] [i_16] [i_16] [i_15] = ((/* implicit */signed char) ((min((min((-2053536902), (((/* implicit */int) (short)-13894)))), (((/* implicit */int) (unsigned short)37445)))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) ((unsigned short) 13952381278996589372ULL))) : (121325147)))));
                }
                for (short i_27 = 0; i_27 < 23; i_27 += 3) 
                {
                    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned long long int) var_13)) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)16073)))))))) ? (((((/* implicit */int) arr_80 [i_16] [i_16] [i_16] [i_20] [i_20] [i_16 - 3])) - (((/* implicit */int) (unsigned short)63864)))) : ((+(((/* implicit */int) (unsigned short)43786))))));
                    arr_93 [i_27] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)26625))));
                }
                for (unsigned long long int i_28 = 0; i_28 < 23; i_28 += 1) 
                {
                    var_55 = ((/* implicit */int) max((var_55), (((/* implicit */int) arr_32 [i_16] [i_16]))));
                    arr_96 [i_28] = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)49447))))) ? (((unsigned long long int) arr_0 [i_15])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45199))))));
                }
            }
            /* vectorizable */
            for (unsigned short i_29 = 0; i_29 < 23; i_29 += 1) 
            {
                var_56 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (arr_47 [i_15] [i_16] [i_15] [i_15]) : (((/* implicit */int) (short)5431))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-128))))) : (((/* implicit */int) ((short) var_9)))));
                /* LoopSeq 1 */
                for (signed char i_30 = 1; i_30 < 20; i_30 += 4) 
                {
                    var_57 &= (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35355))) + (12868848469077688825ULL))));
                    var_58 = (((+(7116564154015808161ULL))) * (arr_43 [i_15]));
                }
                var_59 = ((/* implicit */unsigned long long int) min((var_59), (((/* implicit */unsigned long long int) (short)27464))));
            }
            arr_103 [i_15] [i_15] [i_15] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21638))) % (arr_51 [i_15] [i_16 - 2] [i_16]))) ^ (max((((((/* implicit */_Bool) arr_44 [i_16] [i_16] [i_16] [i_16] [i_15] [i_16])) ? (7967170687026134772ULL) : (((/* implicit */unsigned long long int) 1466691494)))), (10479573386683416844ULL))));
        }
        arr_104 [i_15] [i_15] = (((+(arr_21 [i_15]))) << (((min((arr_21 [i_15]), (arr_21 [i_15]))) - (4371897245091363489ULL))));
        arr_105 [i_15] [i_15] = ((/* implicit */unsigned short) var_9);
    }
    for (unsigned long long int i_31 = 0; i_31 < 23; i_31 += 2) /* same iter space */
    {
        arr_108 [i_31] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) max((((/* implicit */int) (unsigned short)1672)), (var_3))))) ? (((/* implicit */int) (short)27983)) : (((/* implicit */int) (unsigned short)45196))));
        var_60 = ((/* implicit */signed char) ((max((2088960), (max((arr_57 [i_31] [i_31]), (arr_47 [i_31] [i_31] [i_31] [i_31]))))) + (((/* implicit */int) arr_74 [i_31] [i_31] [i_31] [i_31] [i_31]))));
    }
    var_61 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (9560853146930347636ULL) : (min((var_13), (((var_2) | (var_13)))))));
    var_62 = ((/* implicit */signed char) (~((~(((835993339) & (2088941)))))));
    var_63 = ((/* implicit */unsigned long long int) (unsigned short)1672);
    var_64 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_1)))))));
}
