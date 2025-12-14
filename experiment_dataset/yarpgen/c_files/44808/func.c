/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44808
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44808 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44808
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
    var_14 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((var_12), (var_12)))))))));
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 136902082560ULL))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_16 += ((/* implicit */unsigned short) (+(min((((/* implicit */long long int) min((arr_2 [4LL]), (((/* implicit */unsigned int) (_Bool)0))))), (min((-3925776648486079187LL), (arr_0 [i_0])))))));
        var_17 = ((/* implicit */int) max((min((min((-745092415721633091LL), (var_0))), (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))))), (((/* implicit */long long int) min((((/* implicit */int) (unsigned short)20270)), ((-(((/* implicit */int) (unsigned short)31574)))))))));
        arr_4 [i_0] [i_0] = (-(min((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (arr_1 [i_0])))), (min((((/* implicit */unsigned long long int) var_10)), (136902082549ULL))))));
    }
    for (int i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            var_18 |= ((/* implicit */unsigned short) max((((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_2 [i_2]), (((/* implicit */unsigned int) 4194303)))))))), ((~(min((2055549160526083996LL), (((/* implicit */long long int) var_13))))))));
            arr_10 [i_2] [i_2] [i_2] = min((((/* implicit */long long int) (-((~(973100955)))))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)32947))))), (min((arr_9 [i_1 + 1]), (((/* implicit */long long int) arr_2 [i_2])))))));
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 13; i_3 += 2) 
        {
            var_19 ^= (-((+(arr_9 [i_1]))));
            arr_13 [i_1] [i_3] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_6 [i_3]))))));
        }
        for (long long int i_4 = 3; i_4 < 14; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_6 = 0; i_6 < 16; i_6 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 16; i_7 += 4) 
                    {
                        arr_26 [i_1] [i_1 + 3] [9] [i_1 - 3] = ((/* implicit */unsigned short) (~(-1644853176)));
                        arr_27 [i_1] [i_6] |= (-((-(min((arr_23 [10]), (((/* implicit */int) (short)-512)))))));
                        arr_28 [6LL] [6LL] [i_4 - 2] [i_6] [i_6] [i_7] [i_4 - 1] = ((/* implicit */int) (+(min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_17 [i_1] [i_4] [i_1] [i_4]))))), (min((arr_25 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]), (((/* implicit */unsigned int) -4194303))))))));
                        arr_29 [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */int) arr_15 [i_1] [i_4])), (-1144820348)))), (min((arr_9 [i_1]), (((/* implicit */long long int) arr_24 [i_4 - 3] [i_4 - 3] [i_4] [i_6]))))))), (min((((/* implicit */unsigned long long int) (+(-323592048)))), (max((var_2), (((/* implicit */unsigned long long int) var_13))))))));
                    }
                    var_20 = ((/* implicit */long long int) (+(min((((/* implicit */unsigned int) (_Bool)1)), (3287291932U)))));
                }
                for (int i_8 = 2; i_8 < 15; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((min((var_10), (((/* implicit */short) arr_8 [i_1] [i_1])))), (((/* implicit */short) (!(((/* implicit */_Bool) 614110756U))))))))));
                        arr_34 [i_1] = min((((/* implicit */unsigned int) min((-924611315), (((/* implicit */int) (short)(-32767 - 1)))))), ((~(max((arr_25 [14] [(unsigned char)14] [(unsigned char)14] [15LL] [i_8] [i_4 + 1]), (((/* implicit */unsigned int) arr_11 [i_1] [i_1] [i_5])))))));
                    }
                    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                    {
                        arr_38 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) min((max((min((((/* implicit */unsigned short) (_Bool)1)), (arr_36 [i_1] [i_1] [i_1] [i_1 + 2]))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_14 [i_1 + 3]))))))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((var_10), (((/* implicit */short) (_Bool)1))))))))));
                        arr_39 [2LL] [i_4] [i_4] [11] [i_4] [i_4] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)49679)), (268435455))))))));
                        var_22 = ((/* implicit */int) (!(max(((_Bool)1), ((_Bool)1)))));
                        var_23 = ((/* implicit */int) min((var_23), ((+(max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))));
                        arr_40 [12LL] [i_4] [0] [i_8 - 1] [i_10] = (~(min((min((var_3), (((/* implicit */int) arr_5 [i_8])))), (((/* implicit */int) (!(((/* implicit */_Bool) 8989108692360049309LL))))))));
                    }
                    var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446743936807469055ULL))))));
                    var_25 = ((/* implicit */unsigned short) max(((~(min((670308177U), (((/* implicit */unsigned int) (short)-10545)))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_1] [i_1]))))))))));
                    var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((min((((/* implicit */long long int) var_3)), (arr_22 [i_1] [i_1] [i_5] [i_8] [i_8]))), (((/* implicit */long long int) (!(arr_17 [i_1 + 1] [i_1 + 1] [(_Bool)1] [(_Bool)1])))))))));
                }
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_11 = 0; i_11 < 16; i_11 += 4) 
                {
                    arr_43 [i_1 - 3] [i_1 + 3] = ((/* implicit */unsigned short) (~((~(var_11)))));
                    var_27 ^= (~((~(((/* implicit */int) (_Bool)0)))));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_46 [(_Bool)1] [i_12] [(_Bool)1] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))))))));
                    var_28 += ((/* implicit */long long int) (-(max((((/* implicit */unsigned int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))), (min((3079878030U), (((/* implicit */unsigned int) (short)17343))))))));
                    var_29 += ((/* implicit */long long int) min((min((min((var_1), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((/* implicit */unsigned long long int) (~(var_9)))))), (min((((/* implicit */unsigned long long int) min((arr_30 [i_1] [i_1] [i_1] [i_1]), (var_6)))), (min((((/* implicit */unsigned long long int) -880079330)), (0ULL)))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 4) 
                    {
                        var_30 ^= ((/* implicit */unsigned int) (~((~(var_9)))));
                        var_31 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_41 [i_4] [i_13]))))));
                        arr_52 [i_1] [8] [3U] [8] [7LL] [i_14] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (short)25083))))));
                        arr_53 [i_5] [i_4] = (!(((/* implicit */_Bool) 591522500U)));
                    }
                    /* vectorizable */
                    for (int i_15 = 2; i_15 < 15; i_15 += 4) 
                    {
                        arr_56 [2LL] [i_4 - 3] [i_5] [(_Bool)1] [i_13] [i_4] = (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)508))))));
                        var_32 = ((/* implicit */int) (-((-(var_0)))));
                        var_33 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (_Bool)0))))));
                        arr_57 [i_1] [i_4] [i_13] [i_1] [(unsigned char)14] [i_4 + 2] = ((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)56717))))));
                    }
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 2; i_16 < 12; i_16 += 4) 
                    {
                        var_34 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 1720663614))))));
                        var_35 ^= ((/* implicit */short) (~((-(((/* implicit */int) (_Bool)0))))));
                        var_36 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_11))))));
                    }
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned short) min(((!((!(((/* implicit */_Bool) 213813888771376750ULL)))))), ((!(((/* implicit */_Bool) min((var_11), (((/* implicit */long long int) var_6)))))))));
                        arr_62 [i_1] [i_1] [(short)1] = ((/* implicit */_Bool) (-(((/* implicit */int) max((min(((unsigned short)15872), (arr_47 [i_1] [i_4 + 2] [i_5] [i_13]))), (((/* implicit */unsigned short) (!((_Bool)1)))))))));
                    }
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned short i_19 = 0; i_19 < 16; i_19 += 4) 
                    {
                        arr_67 [i_1] [i_5] [i_5] [i_5] [i_19] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_4)), (arr_9 [(short)10]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 0)))))))), (min((((/* implicit */unsigned long long int) (unsigned short)65518)), (7361156640332571951ULL)))));
                        arr_68 [i_18] [i_18] [i_18] [i_1] [i_19] = ((/* implicit */int) max((((/* implicit */long long int) min(((+(1015808U))), (((/* implicit */unsigned int) min(((unsigned short)58086), ((unsigned short)42782))))))), (max((((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)40))))), ((+(8796059467776LL)))))));
                        var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) min((max((max((1253586042U), (((/* implicit */unsigned int) (-2147483647 - 1))))), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) arr_15 [i_1] [i_1])), ((unsigned short)50813)))))), (((/* implicit */unsigned int) (+((-(((/* implicit */int) (_Bool)1))))))))))));
                        arr_69 [i_1 - 1] [i_4] [i_1] [i_18] [i_4] = max((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_12)), (arr_32 [i_1 - 3] [i_1 - 3] [i_1 - 3] [i_1] [i_1 - 3] [i_1] [i_1]))))))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3863))))))));
                        arr_70 [i_4] [i_4] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned short) (+((~(min((arr_14 [i_1]), (((/* implicit */int) (_Bool)1))))))));
                    }
                    for (long long int i_20 = 0; i_20 < 16; i_20 += 1) 
                    {
                        arr_74 [i_1] [i_1] [i_1] [i_5] [i_18] [i_20] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(min((-4728756913405763485LL), (((/* implicit */long long int) var_6)))))))));
                        var_39 &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(min((((/* implicit */long long int) var_7)), (var_8))))))));
                        arr_75 [i_5] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(max((225264062U), (((/* implicit */unsigned int) arr_66 [(unsigned short)14] [i_4] [i_5] [i_18] [i_20]))))))), (max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)13))))), (min((((/* implicit */long long int) (short)(-32767 - 1))), (-1952733993136840107LL)))))));
                        var_40 = ((/* implicit */unsigned int) min(((~(min((((/* implicit */unsigned long long int) 2147483647)), (arr_54 [i_20] [(unsigned short)12] [i_18] [(unsigned short)12] [i_4] [(unsigned short)12]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) min((var_7), (((/* implicit */unsigned short) arr_6 [0]))))))))));
                    }
                    for (long long int i_21 = 1; i_21 < 15; i_21 += 4) /* same iter space */
                    {
                        var_41 = min(((-(((/* implicit */int) (_Bool)1)))), ((~(((/* implicit */int) (unsigned short)23602)))));
                        var_42 = max(((unsigned short)57228), (((/* implicit */unsigned short) (_Bool)0)));
                    }
                    for (long long int i_22 = 1; i_22 < 15; i_22 += 4) /* same iter space */
                    {
                        var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) -1581342606))));
                        var_44 += ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (-(3U)))), (min((var_1), (((/* implicit */unsigned long long int) 1085380775U)))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)27)), (arr_73 [i_4] [(unsigned short)5] [i_1])))))))));
                    }
                    arr_82 [i_5] [i_5] [i_4 + 1] [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
                }
                var_45 = ((/* implicit */short) min((((/* implicit */long long int) min((min((((/* implicit */int) var_10)), (arr_49 [i_1] [12] [i_4 + 2] [i_4] [i_4 - 2] [i_5]))), (((/* implicit */int) max(((unsigned short)0), (var_13))))))), (min((max((arr_0 [i_1]), (((/* implicit */long long int) 225264062U)))), (((/* implicit */long long int) (-(994842928))))))));
            }
            /* LoopSeq 2 */
            for (long long int i_23 = 3; i_23 < 13; i_23 += 4) 
            {
                var_46 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                var_47 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (short)1024))))))), (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_32 [i_23] [i_23] [i_23] [i_23] [i_23 + 1] [i_1 + 2] [i_1])), (9223372036854775788LL)))), (min((var_1), (((/* implicit */unsigned long long int) var_13))))))));
            }
            for (int i_24 = 2; i_24 < 15; i_24 += 3) 
            {
                arr_88 [i_24] [i_1] = ((/* implicit */short) (-(max((max((1152921504606846976LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_25 = 3; i_25 < 15; i_25 += 2) 
                {
                    arr_92 [i_1] [(short)12] [(short)12] [i_25] [i_24] [i_25 - 3] = (!(((/* implicit */_Bool) (+(-573406285)))));
                    var_48 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) arr_64 [i_1] [i_1] [1] [i_24] [i_1]))))));
                    var_49 ^= (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_45 [i_1] [i_1] [i_1] [i_24] [3] [i_1]))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_26 = 0; i_26 < 16; i_26 += 3) 
                    {
                        arr_95 [i_1] [(_Bool)1] [i_1] [i_1] [i_1 - 1] = ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)35338))))));
                        var_50 ^= (-((~(((/* implicit */int) var_12)))));
                    }
                    for (unsigned int i_27 = 0; i_27 < 16; i_27 += 3) 
                    {
                        arr_98 [i_1] [i_24 + 1] [i_25 - 1] = (~((-(((/* implicit */int) (unsigned short)39897)))));
                        arr_99 [i_1] [5] [i_24 + 1] [i_25] [i_27] = (-((+(9223372036854775782LL))));
                        var_51 = ((/* implicit */short) (-((-(3136447100456340738LL)))));
                    }
                    for (int i_28 = 0; i_28 < 16; i_28 += 1) 
                    {
                        arr_102 [i_28] [i_25 - 1] [i_24 - 2] [(unsigned char)13] [(_Bool)1] = ((/* implicit */unsigned char) (~(1253586042U)));
                        var_52 ^= ((/* implicit */_Bool) (-((-(0LL)))));
                        arr_103 [i_1] [(unsigned short)10] [(unsigned short)14] [i_24 + 1] [i_24] [i_25] [(unsigned short)6] = (+((~(((/* implicit */int) (_Bool)1)))));
                    }
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                {
                    var_53 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1])))))));
                    arr_106 [i_29] = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_10))))));
                    arr_107 [i_1] [i_1] = ((/* implicit */short) (~((~(((/* implicit */int) (unsigned short)32037))))));
                }
                /* LoopSeq 3 */
                for (long long int i_30 = 0; i_30 < 16; i_30 += 1) 
                {
                    arr_111 [i_1] [i_1 - 3] [i_1] [i_1] = ((/* implicit */int) (-(min((max((var_2), (18263001082659382449ULL))), (((/* implicit */unsigned long long int) (-(arr_89 [i_1] [i_1] [i_1] [i_30] [(_Bool)1]))))))));
                    arr_112 [i_1] [i_4 - 3] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(min((var_1), (((/* implicit */unsigned long long int) 982288337U)))))))));
                    var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255))))))))));
                }
                /* vectorizable */
                for (unsigned int i_31 = 0; i_31 < 16; i_31 += 3) /* same iter space */
                {
                    arr_117 [1LL] [i_1] [i_1] [3] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
                    var_55 = ((/* implicit */_Bool) (~((-(arr_55 [i_31] [i_1 - 3] [i_4] [i_1 - 3] [i_1] [i_1 - 3])))));
                    var_56 ^= ((/* implicit */_Bool) (+((+(((/* implicit */int) arr_7 [i_4] [i_31]))))));
                    arr_118 [i_1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_14 [i_1]))))));
                }
                for (unsigned int i_32 = 0; i_32 < 16; i_32 += 3) /* same iter space */
                {
                    var_57 = ((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))))), (min((min((var_12), (var_12))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551615ULL)))))))));
                    var_58 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(max((((/* implicit */int) var_6)), (var_5))))))));
                }
            }
        }
        /* LoopSeq 1 */
        for (short i_33 = 1; i_33 < 15; i_33 += 3) 
        {
            var_59 |= ((/* implicit */_Bool) (+((~(min((((/* implicit */long long int) var_13)), (-1LL)))))));
            var_60 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(var_8)))), ((-(var_1))))))));
            arr_125 [i_33] [i_33] = ((/* implicit */long long int) (~(min(((-(((/* implicit */int) var_6)))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_78 [i_1] [i_1] [i_1 - 2] [i_1 + 1] [i_33] [i_33] [i_33])))))))));
        }
        var_61 = ((/* implicit */long long int) min((min(((~(var_2))), (((/* implicit */unsigned long long int) (-(-7009334636011814025LL)))))), (((/* implicit */unsigned long long int) (-((~(7009334636011814020LL))))))));
        var_62 ^= max(((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-50))))))), (((/* implicit */int) min(((unsigned char)120), ((unsigned char)120)))));
    }
    var_63 = ((/* implicit */short) max((((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) -4329391071458673088LL))))), ((-(((/* implicit */int) var_10))))))), (min((((/* implicit */long long int) (-(((/* implicit */int) var_7))))), (max((var_11), (((/* implicit */long long int) (short)-16331))))))));
}
