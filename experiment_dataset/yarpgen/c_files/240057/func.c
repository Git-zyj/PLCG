/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240057
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
    var_15 = (+(((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (2027228931) : (((/* implicit */int) (unsigned short)65535))))) | (-1614799420549475511LL))));
    var_16 = ((/* implicit */unsigned int) 2027228931);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((-6029092866948092088LL) >= (((/* implicit */long long int) 4207722960U)))))) <= (((long long int) (short)-15576)))))) : (var_7)));
        /* LoopSeq 4 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 1) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) 6122056141341640551LL)) - (((arr_3 [i_0]) + (((/* implicit */unsigned long long int) arr_1 [i_0])))))), (((/* implicit */unsigned long long int) arr_0 [i_1 - 1]))));
            arr_6 [i_0] [i_1 - 2] = ((/* implicit */unsigned short) var_12);
            var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(3274788826391068774LL)))) ? (max((arr_2 [i_0]), (((/* implicit */long long int) (signed char)-33)))) : (max((arr_2 [i_1 - 1]), (arr_2 [i_0])))));
        }
        /* vectorizable */
        for (long long int i_2 = 2; i_2 < 14; i_2 += 1) /* same iter space */
        {
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_2)) : (arr_8 [i_2 + 1] [i_2] [2]))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_2 - 1] [4ULL])) ? (-946759251659318494LL) : (((/* implicit */long long int) 253317209))))));
            /* LoopSeq 3 */
            for (signed char i_3 = 3; i_3 < 12; i_3 += 4) 
            {
                var_21 ^= ((/* implicit */unsigned char) arr_1 [i_3]);
                var_22 = ((/* implicit */int) ((unsigned int) -253317229));
            }
            for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                var_23 -= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_12))) ^ (((long long int) arr_2 [i_0]))));
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 13; i_5 += 3) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 12; i_6 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) arr_5 [i_0]))));
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)10))));
                            var_26 = (-(1985094511867896052ULL));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_2))));
                        }
                    } 
                } 
                var_28 &= ((/* implicit */unsigned int) (-(((/* implicit */int) (!((_Bool)1))))));
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_29 += ((/* implicit */unsigned int) var_6);
                            var_30 -= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)2724))));
                            var_31 = var_2;
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) 18446744073709551615ULL))));
                        }
                    } 
                } 
                var_33 -= ((/* implicit */short) (-(arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 - 1])));
            }
            for (short i_9 = 1; i_9 < 12; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_10 = 1; i_10 < 13; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 2; i_11 < 14; i_11 += 3) 
                    {
                        arr_32 [i_0] [i_0] = (~(((/* implicit */int) (unsigned short)38126)));
                        var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_18 [i_0] [i_0] [11U] [i_10] [i_11] [i_2])) : (((/* implicit */int) var_13))))) / ((+(var_2)))));
                        arr_33 [(unsigned short)10] [i_2 + 1] [i_2 + 1] [12U] [i_11] |= ((((((/* implicit */_Bool) var_0)) ? (4446301673409040998LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-126))))) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_11]))));
                        var_35 = ((/* implicit */unsigned short) ((arr_22 [i_0] [i_0] [i_9 - 1] [i_10 + 2] [i_0]) > (((/* implicit */unsigned int) -251509661))));
                        var_36 |= ((/* implicit */unsigned long long int) ((((int) (unsigned short)65510)) << (((arr_31 [i_0] [i_2] [i_0] [i_10] [(signed char)4]) - (3796393991629046949LL)))));
                    }
                    var_37 *= ((/* implicit */unsigned char) ((long long int) arr_13 [14] [0LL] [0LL]));
                    var_38 = ((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (arr_19 [i_0] [i_9 + 3] [i_0] [(unsigned short)3] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_12 = 0; i_12 < 15; i_12 += 2) 
                {
                    var_39 |= ((/* implicit */_Bool) var_2);
                    var_40 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_30 [i_9 + 1] [i_9 + 2] [i_9 - 1] [i_2 - 2] [i_2 + 1] [i_2 - 1] [i_2 - 1]))));
                }
                arr_37 [i_0] [i_0] = ((3645182639U) * (((/* implicit */unsigned int) arr_1 [i_0])));
            }
            var_41 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-15551)) : (((/* implicit */int) (signed char)-28))));
        }
        for (unsigned short i_13 = 3; i_13 < 14; i_13 += 2) 
        {
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_42 = ((/* implicit */short) (_Bool)1);
                var_43 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-28220)) ? (var_9) : (min((arr_8 [i_0] [i_13] [i_0]), (((/* implicit */long long int) arr_1 [(signed char)8])))))) / (((/* implicit */long long int) (((~(((/* implicit */int) (unsigned short)30952)))) ^ (((/* implicit */int) arr_5 [i_13 - 2])))))));
                var_44 = ((/* implicit */signed char) arr_1 [i_0]);
                /* LoopNest 2 */
                for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
                {
                    for (unsigned int i_16 = 3; i_16 < 14; i_16 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */short) max(((+(((/* implicit */int) arr_35 [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 - 2])))), (((/* implicit */int) (_Bool)0))));
                            var_46 *= ((/* implicit */unsigned int) ((_Bool) (~(((/* implicit */int) (_Bool)1)))));
                            var_47 = ((/* implicit */long long int) (short)-15564);
                        }
                    } 
                } 
                var_48 = arr_45 [i_0] [i_13] [i_14] [i_0] [i_14];
            }
            var_49 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)15203)) ? (((/* implicit */long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) arr_44 [i_13 - 3] [10LL] [i_0]))))) : (min((((/* implicit */long long int) ((unsigned int) (short)122))), (4503599358935040LL)))));
        }
        for (int i_17 = 0; i_17 < 15; i_17 += 1) 
        {
            arr_50 [i_17] [i_0] = ((/* implicit */long long int) max((min((arr_10 [i_0] [7U] [i_0]), (((/* implicit */unsigned int) (short)15540)))), (((/* implicit */unsigned int) arr_41 [(unsigned short)8] [i_0] [i_0]))));
            /* LoopNest 3 */
            for (unsigned short i_18 = 0; i_18 < 15; i_18 += 4) 
            {
                for (long long int i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    for (short i_20 = 1; i_20 < 12; i_20 += 3) 
                    {
                        {
                            var_50 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) arr_13 [i_0] [i_19] [i_0]))) << (((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-126))) - (arr_56 [i_19] [i_17] [i_17] [i_17] [i_17] [i_17])))) ? ((+(var_3))) : (min((var_3), (((/* implicit */unsigned int) -1966317628)))))) - (3093916538U)))));
                            var_51 = ((/* implicit */long long int) min((((unsigned int) min((((/* implicit */unsigned int) (unsigned short)61440)), (1576246102U)))), (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)22727)), (arr_55 [i_18] [i_20 - 1]))))));
                        }
                    } 
                } 
            } 
            var_52 &= ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) -1297483871)) : (((1099511627775ULL) / (((/* implicit */unsigned long long int) (-2147483647 - 1))))))));
        }
        var_53 = ((/* implicit */unsigned int) arr_47 [0U] [2ULL] [0U] [i_0] [i_0]);
        var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_11 [i_0]))))), (arr_35 [(unsigned char)1] [(unsigned char)1] [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (var_9) : (((/* implicit */long long int) -1848733376))))), (arr_53 [i_0] [(_Bool)1] [i_0] [(_Bool)1]))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) != (var_1))))) - (4408022637599543905LL))))));
    }
    /* LoopSeq 2 */
    for (long long int i_21 = 4; i_21 < 19; i_21 += 1) 
    {
        var_55 -= 4260818468U;
        var_56 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_0)) ? (arr_58 [i_21 - 3] [i_21]) : (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) (~(var_14))))));
    }
    for (unsigned short i_22 = 2; i_22 < 18; i_22 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned short i_23 = 0; i_23 < 19; i_23 += 4) 
        {
            for (int i_24 = 1; i_24 < 18; i_24 += 2) 
            {
                {
                    var_57 = ((/* implicit */_Bool) 2261698694U);
                    /* LoopNest 2 */
                    for (unsigned short i_25 = 2; i_25 < 18; i_25 += 1) 
                    {
                        for (unsigned long long int i_26 = 3; i_26 < 15; i_26 += 2) 
                        {
                            {
                                var_58 |= ((/* implicit */long long int) var_3);
                                var_59 = ((/* implicit */_Bool) max((arr_62 [i_22]), (((/* implicit */long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5900))) | (var_1))))))));
                            }
                        } 
                    } 
                    var_60 = (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_59 [i_22] [i_22]) : (((/* implicit */unsigned long long int) arr_63 [i_22]))))) ? (arr_71 [i_22 - 1] [i_22 - 2] [i_22 - 1] [i_22 - 1] [i_24 - 1] [i_24 - 1]) : (((long long int) arr_68 [i_22] [i_22] [i_22] [i_22 - 2] [i_22])))));
                    var_61 |= ((/* implicit */signed char) -4408022637599543906LL);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_27 = 0; i_27 < 19; i_27 += 4) 
        {
            for (unsigned int i_28 = 0; i_28 < 19; i_28 += 3) 
            {
                {
                    var_62 = ((/* implicit */unsigned long long int) (-(max((arr_63 [12]), (min((-4408022637599543906LL), (((/* implicit */long long int) var_3))))))));
                    var_63 = ((/* implicit */int) max((((/* implicit */long long int) (+(var_2)))), ((-(arr_62 [i_22])))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_29 = 0; i_29 < 19; i_29 += 3) /* same iter space */
        {
            var_64 = ((/* implicit */long long int) min((var_64), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
            arr_78 [i_22] |= ((/* implicit */short) (+(2147483647)));
            /* LoopNest 2 */
            for (unsigned long long int i_30 = 0; i_30 < 19; i_30 += 3) 
            {
                for (long long int i_31 = 0; i_31 < 19; i_31 += 4) 
                {
                    {
                        var_65 += ((/* implicit */signed char) arr_58 [4U] [i_31]);
                        var_66 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) ? (1125899906842623ULL) : (((/* implicit */unsigned long long int) 1946450284))));
                        var_67 = ((/* implicit */signed char) (unsigned short)17285);
                        var_68 = ((/* implicit */long long int) arr_83 [i_31] [i_30] [(signed char)10] [i_29] [i_29] [i_22]);
                    }
                } 
            } 
        }
        for (long long int i_32 = 0; i_32 < 19; i_32 += 3) /* same iter space */
        {
            var_69 = ((/* implicit */signed char) max((var_69), (((/* implicit */signed char) -1276917098296546324LL))));
            var_70 = ((/* implicit */unsigned short) min((var_70), (((/* implicit */unsigned short) (-(549038678U))))));
            var_71 = ((/* implicit */_Bool) max((var_71), (((/* implicit */_Bool) ((unsigned int) max((((/* implicit */unsigned long long int) var_2)), (max((16383ULL), (((/* implicit */unsigned long long int) arr_69 [i_22] [i_22] [(unsigned short)15] [i_22]))))))))));
        }
        for (long long int i_33 = 0; i_33 < 19; i_33 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_34 = 0; i_34 < 19; i_34 += 2) 
            {
                var_72 = ((/* implicit */unsigned char) max((var_72), (((/* implicit */unsigned char) (((~((+(var_14))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26607))))))));
                var_73 = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_79 [i_22] [(unsigned short)12] [5LL] [i_34]))) / (var_9)))))))));
                arr_92 [(signed char)15] [i_33] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */long long int) 13))))), (arr_58 [i_22 + 1] [i_33])));
                var_74 = ((/* implicit */short) max(((-(((((/* implicit */int) arr_64 [(short)13] [5LL])) + (((/* implicit */int) (_Bool)1)))))), ((+(((/* implicit */int) var_0))))));
            }
            var_75 -= ((/* implicit */_Bool) arr_84 [i_22] [6U] [6U] [6U]);
        }
        var_76 = ((/* implicit */unsigned char) max((arr_80 [i_22] [i_22] [i_22 - 1]), (var_0)));
        /* LoopNest 3 */
        for (signed char i_35 = 3; i_35 < 16; i_35 += 3) 
        {
            for (unsigned char i_36 = 1; i_36 < 18; i_36 += 4) 
            {
                for (signed char i_37 = 0; i_37 < 19; i_37 += 2) 
                {
                    {
                        arr_100 [i_35] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_72 [i_22 - 2] [i_22 + 1] [i_22 - 2]))));
                        var_77 += ((/* implicit */long long int) arr_72 [i_22 - 1] [i_35 + 2] [i_37]);
                        var_78 = ((/* implicit */long long int) min((var_78), (((/* implicit */long long int) arr_67 [i_37] [i_36] [i_37]))));
                        arr_101 [i_35] [i_35] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) -2147483634)), (659329493U)));
                        var_79 = ((/* implicit */int) var_14);
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned int i_38 = 3; i_38 < 12; i_38 += 4) 
    {
        for (long long int i_39 = 0; i_39 < 14; i_39 += 3) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_40 = 3; i_40 < 11; i_40 += 1) /* same iter space */
                {
                    var_80 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_49 [(unsigned short)14] [(unsigned short)14])), (arr_97 [i_40 - 2])))) ? (((int) arr_11 [i_40 - 3])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)142)))))));
                    var_81 = ((/* implicit */_Bool) 0U);
                    arr_109 [i_38] [(short)0] [i_40] [i_40 - 2] |= ((/* implicit */unsigned char) 4294967284U);
                }
                /* vectorizable */
                for (long long int i_41 = 3; i_41 < 11; i_41 += 1) /* same iter space */
                {
                    var_82 -= ((/* implicit */unsigned int) (-(9223372036854775807LL)));
                    /* LoopNest 2 */
                    for (int i_42 = 2; i_42 < 12; i_42 += 4) 
                    {
                        for (unsigned short i_43 = 0; i_43 < 14; i_43 += 3) 
                        {
                            {
                                var_83 = var_4;
                                var_84 += ((/* implicit */unsigned char) arr_24 [i_38 + 2] [2] [6] [i_42]);
                            }
                        } 
                    } 
                    var_85 ^= ((/* implicit */unsigned int) ((long long int) arr_52 [i_38 - 1] [i_38 - 3] [i_41 + 2]));
                }
                var_86 -= ((/* implicit */long long int) -462213959);
            }
        } 
    } 
}
