/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243584
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) arr_1 [i_0]))))))));
        var_16 = ((/* implicit */long long int) arr_0 [i_0]);
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        for (int i_2 = 0; i_2 < 15; i_2 += 2) 
        {
            for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 15; i_5 += 2) 
                        {
                            {
                                var_17 = arr_10 [5];
                                var_18 = ((/* implicit */long long int) min((var_18), ((~(arr_7 [i_2] [(unsigned short)8])))));
                                var_19 += ((/* implicit */unsigned char) ((long long int) (!(((/* implicit */_Bool) var_10)))));
                                arr_19 [i_3] [i_3] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1141473528)) ? (((/* implicit */long long int) min((-1141473541), (((/* implicit */int) var_11))))) : (((var_13) - (arr_12 [i_5])))))) ? ((~(min((arr_6 [i_3]), (((/* implicit */long long int) var_6)))))) : (((/* implicit */long long int) var_2)));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */signed char) ((max((-1141473529), (((/* implicit */int) arr_11 [i_3])))) - ((+(1141473540)))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_7 = 0; i_7 < 10; i_7 += 2) 
        {
            var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_7]))) > (arr_15 [12LL] [i_6] [i_6] [i_7] [i_7] [i_7]))))));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((arr_5 [i_7] [i_6]) - (((((/* implicit */_Bool) 2367437290U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_0 [i_7])))))))));
        }
        var_23 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_18 [i_6] [i_6] [i_6] [i_6] [i_6]) ^ (-1141473529)))) ? (((arr_23 [4U]) * (((/* implicit */unsigned long long int) arr_12 [i_6])))) : (((/* implicit */unsigned long long int) (~(arr_9 [i_6] [i_6]))))));
    }
    var_24 = ((/* implicit */long long int) var_10);
    /* LoopSeq 4 */
    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
    {
        var_25 |= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) -510780474)) ? (1141473528) : (-1141473550))));
        var_26 = ((/* implicit */unsigned short) min((max((((/* implicit */long long int) var_10)), (arr_12 [i_8]))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_24 [i_8])))))));
        arr_28 [i_8] = ((/* implicit */signed char) ((unsigned int) -1141473526));
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
            {
                {
                    var_27 += ((/* implicit */int) (unsigned char)17);
                    /* LoopSeq 3 */
                    for (long long int i_11 = 0; i_11 < 10; i_11 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_0 [18])))), (((((/* implicit */int) (_Bool)1)) ^ (1141473531)))))) ? (((((/* implicit */_Bool) max((-1145985817), (-1141473528)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [3ULL] [i_8])))))) : (arr_27 [i_11] [5LL]))) : (((/* implicit */long long int) (+(((/* implicit */int) ((signed char) var_3))))))));
                            var_29 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((var_2), (min((((/* implicit */unsigned int) var_7)), (var_2)))))), (max((min((((/* implicit */long long int) arr_25 [i_8] [i_9])), (arr_29 [i_8] [i_8] [i_8]))), (((/* implicit */long long int) ((unsigned short) 9223372036854775799LL)))))));
                            var_30 *= ((/* implicit */long long int) ((_Bool) min((-1141473529), (1141473530))));
                            var_31 *= ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_8] [i_9] [i_12]))))), (((((-1141473550) + (2147483647))) >> ((((~(arr_21 [i_8]))) - (730244123U)))))));
                        }
                        for (int i_13 = 0; i_13 < 10; i_13 += 3) 
                        {
                            var_32 = ((/* implicit */unsigned char) (+((~(-1141473526)))));
                            var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_18 [i_8] [i_8] [(_Bool)1] [i_11] [i_11])), (var_12))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32151))) : (5206241514822831162LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) : (((617338637192963021LL) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) (short)32151))))))))));
                        }
                        arr_43 [i_11] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -1141473529)))) % (((((/* implicit */_Bool) -5206241514822831153LL)) ? (((((/* implicit */long long int) ((/* implicit */int) var_11))) + (-5206241514822831167LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_8] [i_8] [8U] [i_10] [i_10] [8U])))))));
                        var_34 = ((/* implicit */unsigned char) arr_21 [i_10]);
                    }
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (int i_15 = 0; i_15 < 10; i_15 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned short) (unsigned char)238);
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) && (((min((var_5), (((/* implicit */long long int) -1141473536)))) != (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                            var_37 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (1141473520) : (((/* implicit */int) arr_33 [i_10]))))) ^ (((long long int) (unsigned char)2))))) ? (((/* implicit */unsigned long long int) ((long long int) ((_Bool) (unsigned char)246)))) : (min((((/* implicit */unsigned long long int) ((4379272520055822272LL) >> (((1141473535) - (1141473494)))))), (((((/* implicit */_Bool) arr_11 [i_10])) ? (7349233540303981352ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4163)))))))));
                        }
                        /* vectorizable */
                        for (short i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 662532696U)) ? (((var_10) | (((/* implicit */int) (unsigned char)206)))) : (((/* implicit */int) (unsigned char)228)))))));
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775800LL)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)10)))))) ? (arr_48 [i_8] [i_8] [i_10] [i_14] [i_16]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) arr_31 [i_14] [i_10])) : (((/* implicit */int) (unsigned short)56875)))))));
                            var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (5206241514822831162LL) : (arr_35 [i_10] [6LL] [i_10])));
                            arr_51 [i_8] [i_9] [i_10] [i_14] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) -2147483640)) ? ((~(2574285921U))) : (((((/* implicit */_Bool) -5250111701456040426LL)) ? (3885875219U) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))));
                        }
                        var_41 |= ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */short) (unsigned char)4)), (arr_49 [i_14] [i_14] [i_9] [i_14] [(unsigned char)8])))), (((((/* implicit */int) (short)-1865)) * (((/* implicit */int) (_Bool)1))))));
                        var_42 = ((long long int) var_9);
                        var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_9] [i_10])))))));
                    }
                    for (long long int i_17 = 0; i_17 < 10; i_17 += 2) /* same iter space */
                    {
                        var_44 &= ((/* implicit */short) ((((/* implicit */_Bool) (short)-16993)) ? (((((/* implicit */_Bool) -5206241514822831169LL)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-119)), (var_11))))) : (arr_15 [i_17] [i_10] [i_9] [i_8] [i_8] [i_8]))) : (((((/* implicit */_Bool) -7858103026637350042LL)) ? (((((/* implicit */_Bool) (unsigned char)246)) ? (-5206241514822831162LL) : (((/* implicit */long long int) 1491266827)))) : (((/* implicit */long long int) var_2))))));
                        /* LoopSeq 1 */
                        for (long long int i_18 = 0; i_18 < 10; i_18 += 2) 
                        {
                            var_45 = ((/* implicit */int) 5206241514822831156LL);
                            arr_56 [i_18] [i_17] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)254))) >= (arr_54 [i_8] [i_8] [i_10] [i_17] [i_18])))), (((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_10])) ? (-5206241514822831139LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)96)))))))) ? (max((((((/* implicit */_Bool) 5206241514822831162LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_18] [i_17] [i_10] [i_8] [i_8]))) : (7552058559439670525LL))), (((/* implicit */long long int) ((-2147483638) < (((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_30 [i_9]) > (arr_30 [i_9])))))));
                            var_46 = ((((/* implicit */_Bool) min((arr_52 [i_8] [i_8] [i_17] [i_18]), (arr_52 [i_8] [i_9] [i_10] [i_18])))) ? (((((/* implicit */_Bool) 5206241514822831162LL)) ? (arr_52 [i_9] [i_10] [i_9] [i_8]) : (5206241514822831156LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_8] [i_8] [i_8] [i_8])))))));
                            arr_57 [i_18] &= ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_31 [i_8] [i_9])))) != (arr_44 [i_18] [7] [i_10] [i_9] [i_9] [i_8])));
                        }
                    }
                }
            } 
        } 
    }
    for (unsigned char i_19 = 0; i_19 < 10; i_19 += 2) /* same iter space */
    {
        var_47 = min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (1116892707587883008LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
        var_48 = ((/* implicit */int) (unsigned char)129);
        var_49 &= ((/* implicit */unsigned char) max((((/* implicit */long long int) ((arr_13 [i_19] [i_19] [i_19] [i_19] [3] [10LL]) >= (((/* implicit */long long int) -21529029))))), ((~((~(722939607390450552LL)))))));
    }
    for (unsigned char i_20 = 0; i_20 < 10; i_20 += 2) /* same iter space */
    {
        var_50 = ((/* implicit */long long int) var_1);
        /* LoopSeq 1 */
        for (long long int i_21 = 0; i_21 < 10; i_21 += 3) 
        {
            arr_68 [i_20] [(_Bool)1] [i_21] = ((/* implicit */unsigned char) 835723247284307048LL);
            /* LoopSeq 1 */
            for (signed char i_22 = 0; i_22 < 10; i_22 += 2) 
            {
                var_51 = ((/* implicit */signed char) ((7330694149672802705ULL) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4940942606386279419ULL)) ? (5939489003430291913LL) : (7552058559439670525LL))))));
                arr_72 [i_20] [i_20] [i_21] = ((/* implicit */short) arr_63 [i_21] [i_22]);
                arr_73 [i_21] [i_21] [i_21] = ((((arr_48 [i_20] [i_20] [i_21] [i_21] [i_22]) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)245)) >= (((/* implicit */int) arr_41 [i_20] [i_20] [i_20] [i_20] [2LL] [i_20] [i_22])))))))) | (((/* implicit */long long int) ((/* implicit */int) arr_50 [i_21] [i_21] [i_21] [i_21]))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_23 = 0; i_23 < 10; i_23 += 3) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned char i_24 = 0; i_24 < 10; i_24 += 3) 
                {
                    var_52 = ((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_20] [i_21] [i_23] [i_24]))) >= (arr_60 [i_23] [3LL])))), (arr_10 [i_20]))) < (((long long int) 13505801467323272178ULL))));
                    var_53 = ((/* implicit */unsigned char) (unsigned short)0);
                }
                for (long long int i_25 = 0; i_25 < 10; i_25 += 1) 
                {
                    var_54 = ((/* implicit */long long int) max((var_54), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_78 [i_20] [i_21] [i_23] [i_20])) ? (((/* implicit */int) ((arr_23 [i_20]) <= (((/* implicit */unsigned long long int) (-(arr_12 [i_20]))))))) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)32760)) ? (arr_23 [i_21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_20]))))))))))));
                    var_55 = ((/* implicit */int) min((var_55), (((/* implicit */int) var_12))));
                    var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_58 [i_25]), (arr_58 [i_20])))) ? (((/* implicit */long long int) (~(arr_1 [i_20])))) : (min((((/* implicit */long long int) arr_58 [i_23])), (5206241514822831143LL)))));
                    arr_83 [i_25] [i_21] [i_21] [(short)2] [i_21] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) max((((/* implicit */int) arr_77 [i_20] [i_20] [i_23] [i_20] [(unsigned char)3])), (((((/* implicit */_Bool) -8121961131788350262LL)) ? (((/* implicit */int) (unsigned char)10)) : (((/* implicit */int) arr_38 [i_20] [i_21] [(short)3] [i_21] [(short)3] [(short)3] [i_25]))))))) : (-3960776523279355620LL)));
                }
                arr_84 [i_20] [i_21] = ((((((/* implicit */_Bool) (signed char)-1)) && (((/* implicit */_Bool) arr_13 [i_23] [0LL] [i_23] [0LL] [0LL] [i_20])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_15)) < (arr_13 [i_23] [i_21] [i_21] [i_20] [i_20] [i_20]))))) : (min((((/* implicit */long long int) (signed char)-30)), (2783863154727287994LL))));
            }
            for (unsigned short i_26 = 0; i_26 < 10; i_26 += 3) /* same iter space */
            {
                arr_88 [i_26] [i_26] [i_21] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7552058559439670539LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)136))) : (arr_30 [(unsigned char)7])))) ? (((/* implicit */long long int) ((/* implicit */int) ((7552058559439670525LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)254))))))) : (((((/* implicit */_Bool) arr_30 [i_21])) ? (((/* implicit */long long int) arr_30 [i_20])) : (arr_44 [i_26] [i_21] [i_26] [i_26] [i_21] [i_20]))));
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 10; i_27 += 4) 
                {
                    for (long long int i_28 = 0; i_28 < 10; i_28 += 2) 
                    {
                        {
                            arr_93 [i_28] [i_21] [i_21] = ((/* implicit */unsigned char) ((int) var_15));
                            var_57 = ((/* implicit */_Bool) min(((+(13835058055282163712ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6)))))));
                            var_58 &= ((/* implicit */unsigned char) (-(min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)117)) & (((/* implicit */int) arr_62 [i_20]))))), (max((9487486612106107946ULL), (((/* implicit */unsigned long long int) (short)-32760))))))));
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned char i_29 = 0; i_29 < 10; i_29 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_30 = 0; i_30 < 10; i_30 += 4) 
        {
            for (unsigned char i_31 = 0; i_31 < 10; i_31 += 3) 
            {
                {
                    arr_102 [i_31] [7LL] [5] [i_29] |= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_80 [i_31] [i_30] [i_30] [3LL])) ? (((/* implicit */int) arr_17 [i_29] [i_29] [i_29] [i_29] [i_30])) : (((/* implicit */int) (short)(-32767 - 1))))));
                    var_59 = ((((/* implicit */_Bool) min((arr_59 [i_30] [i_31]), (arr_78 [i_31] [1U] [i_30] [1U])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32760))) : (max((arr_7 [(short)2] [i_29]), (((/* implicit */long long int) (+(((/* implicit */int) arr_69 [i_29] [i_29] [i_29]))))))));
                }
            } 
        } 
        var_60 += ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) arr_95 [i_29])) : (8959257461603443669ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [2LL] [i_29])) ? (arr_92 [i_29] [i_29] [(signed char)4] [i_29]) : (893054092001351906LL)))))))) * (((long long int) arr_8 [i_29] [i_29] [i_29]))));
    }
}
