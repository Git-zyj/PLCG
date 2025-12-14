/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247741
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
    var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_0))));
    var_13 = ((/* implicit */long long int) (~(((/* implicit */int) ((min((18057451986316840573ULL), (((/* implicit */unsigned long long int) (unsigned short)51133)))) <= (var_0))))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_14 = ((((((/* implicit */long long int) -142592567)) < (2147475456LL))) ? (((((/* implicit */_Bool) min(((unsigned short)13589), ((unsigned short)32764)))) ? (((/* implicit */int) (unsigned short)13612)) : (((/* implicit */int) min(((unsigned short)51961), (((/* implicit */unsigned short) (unsigned char)115))))))) : (((((/* implicit */int) ((unsigned short) arr_6 [i_0]))) >> (((((((((/* implicit */_Bool) (unsigned char)181)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_6 [i_0])))) - (-2147483641))) + (30))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_9)) - (((/* implicit */int) (signed char)-104)))));
                                var_16 = min((((/* implicit */int) (unsigned short)13603)), ((+(1760909665))));
                                arr_13 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] [i_2] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))));
                                arr_14 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0 - 1] [i_0 - 1]))) - (min((-9223372036854775805LL), (((/* implicit */long long int) var_6))))))) ? (min((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-86)) && (((/* implicit */_Bool) (unsigned short)13574))))), (arr_5 [i_0 - 1] [i_0 + 1] [i_0 - 1]))) : (((int) (unsigned char)230)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10; i_5 += 4) 
    {
        arr_17 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_5] [i_5])) | (((/* implicit */int) var_1))));
        var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) ((unsigned short) 1349424537)))));
    }
    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
    {
        /* LoopNest 2 */
        for (signed char i_7 = 1; i_7 < 11; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) min((((/* implicit */int) min((((/* implicit */unsigned char) arr_21 [i_6 + 2])), ((unsigned char)158)))), (min((min((((/* implicit */int) (unsigned short)48976)), (-1343228425))), (((/* implicit */int) var_3))))));
                    var_19 = ((/* implicit */unsigned long long int) ((signed char) var_4));
                }
            } 
        } 
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_9 = 1; i_9 < 12; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                for (int i_11 = 1; i_11 < 14; i_11 += 3) 
                {
                    {
                        var_20 ^= ((/* implicit */int) ((unsigned long long int) var_8));
                        arr_33 [i_6] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
                        arr_34 [i_6] [i_6] [i_10] [i_11] = ((/* implicit */long long int) 15289227253471246149ULL);
                        /* LoopSeq 1 */
                        for (unsigned char i_12 = 2; i_12 < 13; i_12 += 2) 
                        {
                            arr_37 [i_6] = ((/* implicit */long long int) var_6);
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_3))));
                            var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) -3690993639795804871LL)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_21 [i_12])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) ((signed char) var_3)))));
                        }
                    }
                } 
            } 
            arr_38 [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_6] [i_6])) ? (((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_6 + 4] [i_6 - 1])) : (((/* implicit */int) (signed char)-37))));
            arr_39 [i_6] [i_6] [(unsigned short)2] &= ((/* implicit */int) ((((/* implicit */int) ((signed char) (-9223372036854775807LL - 1LL)))) == (((((/* implicit */_Bool) 18402853847785539431ULL)) ? ((-2147483647 - 1)) : (((/* implicit */int) arr_28 [i_6] [i_6]))))));
        }
        for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            arr_43 [i_6] [i_13] = ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) arr_28 [i_6] [i_13])) ? (((/* implicit */int) (unsigned short)8747)) : (((/* implicit */int) var_3)))) % (((int) var_0)))), (min((((/* implicit */int) (signed char)82)), (-1934131244)))));
            /* LoopNest 3 */
            for (long long int i_14 = 1; i_14 < 14; i_14 += 4) 
            {
                for (unsigned long long int i_15 = 1; i_15 < 14; i_15 += 4) 
                {
                    for (unsigned long long int i_16 = 2; i_16 < 12; i_16 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) arr_49 [i_16 - 2] [i_15 - 1] [i_6] [i_6] [i_13] [i_13]);
                            var_24 = ((/* implicit */unsigned long long int) ((unsigned char) 2147483647));
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_28 [i_15 - 1] [i_6 + 3]), (arr_28 [i_15 - 1] [i_6 + 4])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_46 [i_6] [i_6] [i_15]))));
                            arr_52 [i_6] [i_13] [i_14] [i_15] [i_6] = ((((/* implicit */_Bool) (unsigned char)228)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)24))));
                        }
                    } 
                } 
            } 
            var_26 = ((/* implicit */unsigned short) (+(min((1768796069), (((/* implicit */int) arr_19 [i_6] [i_6 + 3]))))));
            var_27 |= ((/* implicit */int) (unsigned short)47684);
        }
        for (unsigned short i_17 = 0; i_17 < 15; i_17 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)64032)) ? (((/* implicit */int) (unsigned short)51954)) : (((/* implicit */int) (signed char)-23)))))));
            /* LoopNest 2 */
            for (signed char i_18 = 2; i_18 < 13; i_18 += 1) 
            {
                for (unsigned char i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    {
                        arr_61 [i_6] [i_6] [i_18] [i_6] = ((/* implicit */signed char) ((unsigned short) (-(((((/* implicit */int) (unsigned short)56849)) / (((/* implicit */int) (signed char)-122)))))));
                        var_29 -= ((/* implicit */signed char) (-(((/* implicit */int) min((arr_55 [i_6] [i_6] [i_19] [i_6 + 1]), (((/* implicit */unsigned short) (signed char)117)))))));
                        arr_62 [i_19] [i_6] [i_18 - 2] [i_18 + 2] [i_6] [i_6 + 1] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51925))))) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned short)51963)))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)61792)), (arr_18 [i_6])))) ? (((((/* implicit */_Bool) arr_24 [i_6] [i_17] [i_18] [i_19])) ? (((/* implicit */int) (unsigned short)40555)) : (1752748026))) : (((((/* implicit */int) var_5)) | (((/* implicit */int) arr_57 [i_6] [i_17] [i_18] [i_19] [i_18]))))))));
                    }
                } 
            } 
            var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_6] [i_6] [i_6] [i_17])) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) (unsigned short)32061))))) ? (16808243517555038607ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_4)))))))))))));
        }
        for (unsigned short i_20 = 0; i_20 < 15; i_20 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned char i_21 = 1; i_21 < 14; i_21 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 4) 
                {
                    for (unsigned short i_23 = 0; i_23 < 15; i_23 += 4) 
                    {
                        {
                            var_31 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_20] [i_23])) ? (var_7) : (((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))), (min((((/* implicit */unsigned long long int) arr_21 [i_6])), (arr_66 [i_6] [i_20] [i_21])))));
                            var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-2873424330850576794LL), (((/* implicit */long long int) 33554416))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_35 [i_6] [i_6] [i_6] [i_6] [i_6])) | (-33554417)))))) : (min((var_0), (((/* implicit */unsigned long long int) arr_57 [i_6] [i_23] [i_23] [i_21 + 1] [i_6]))))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned short) (signed char)-97);
                /* LoopNest 2 */
                for (unsigned char i_24 = 0; i_24 < 15; i_24 += 4) 
                {
                    for (signed char i_25 = 0; i_25 < 15; i_25 += 3) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((min((0LL), (((/* implicit */long long int) -1711790468)))) & (((/* implicit */long long int) ((/* implicit */int) (signed char)-21)))))) ? (-2873424330850576806LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-98)) ? (min((((/* implicit */int) var_8)), (-2027834737))) : (((/* implicit */int) min((arr_78 [i_25] [i_20] [i_21] [i_20] [i_6] [i_6]), (var_11)))))))));
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) ^ (((((/* implicit */_Bool) arr_76 [i_20] [i_21] [i_20] [i_25])) ? (min((((/* implicit */unsigned long long int) var_8)), (10273758888302142459ULL))) : (((/* implicit */unsigned long long int) min((-1711790468), (((/* implicit */int) arr_49 [i_6] [i_6] [i_21 + 1] [i_20] [i_6] [i_25]))))))))))));
                        }
                    } 
                } 
            }
            for (long long int i_26 = 0; i_26 < 15; i_26 += 2) 
            {
                /* LoopNest 2 */
                for (int i_27 = 0; i_27 < 15; i_27 += 2) 
                {
                    for (unsigned char i_28 = 0; i_28 < 15; i_28 += 4) 
                    {
                        {
                            var_36 = ((/* implicit */int) min((var_36), (((min((-33554417), (((/* implicit */int) (unsigned short)11364)))) % (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned short)13590)) : (((/* implicit */int) (unsigned char)197))))))));
                            arr_89 [i_6] [i_20] [i_6] = ((/* implicit */unsigned short) ((var_7) & ((~((+(((/* implicit */int) var_10))))))));
                            var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(min((arr_65 [i_6]), (((/* implicit */long long int) arr_24 [i_6] [i_26] [i_27] [i_28]))))))) ? (((/* implicit */int) min((((((/* implicit */_Bool) -1417723901)) && (((/* implicit */_Bool) (signed char)35)))), (((((/* implicit */int) var_3)) <= (((/* implicit */int) (signed char)-123))))))) : (min((((/* implicit */int) (signed char)120)), ((-2147483647 - 1))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_29 = 0; i_29 < 15; i_29 += 3) 
                {
                    for (signed char i_30 = 0; i_30 < 15; i_30 += 1) 
                    {
                        {
                            var_38 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_91 [i_30] [i_30] [i_6 + 1] [i_30] [i_30])) ? (((/* implicit */int) arr_91 [i_6] [i_6] [i_6 + 4] [i_30] [i_30])) : (((/* implicit */int) arr_91 [i_6] [i_20] [i_6 + 2] [i_20] [i_6 + 2])))), ((-(((/* implicit */int) arr_91 [i_6] [i_20] [i_6 + 2] [i_29] [i_30]))))));
                            var_39 -= var_4;
                            var_40 = ((/* implicit */long long int) min((var_40), (min((((((/* implicit */_Bool) (signed char)-64)) ? (arr_29 [i_6 + 1] [i_6 + 1]) : (((/* implicit */long long int) -1417723901)))), (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_4)))))))));
                        }
                    } 
                } 
            }
            var_41 = 18446744073709551603ULL;
        }
        var_42 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (unsigned char)28)), ((unsigned short)51948)));
    }
    for (unsigned short i_31 = 3; i_31 < 11; i_31 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_32 = 0; i_32 < 12; i_32 += 3) /* same iter space */
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_33 = 3; i_33 < 9; i_33 += 4) 
            {
                arr_101 [i_31] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)16383)) && (((/* implicit */_Bool) 15ULL))));
                arr_102 [i_31] [i_31 - 1] [i_31] [i_31] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_33] [i_33] [i_33] [i_33] [i_33] [i_33])) ? ((+(((/* implicit */int) (unsigned char)219)))) : (((((/* implicit */_Bool) (unsigned short)13179)) ? (arr_97 [i_31 - 2]) : ((-2147483647 - 1))))));
            }
            /* vectorizable */
            for (unsigned long long int i_34 = 4; i_34 < 11; i_34 += 3) 
            {
                var_43 |= ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) - (((/* implicit */int) arr_44 [i_34 - 4] [i_34] [i_31] [i_31 + 1]))));
                var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((signed char) arr_78 [i_31 - 3] [i_31 - 3] [i_31 - 3] [i_32] [i_31 - 3] [i_32])))));
            }
            for (unsigned short i_35 = 0; i_35 < 12; i_35 += 4) 
            {
                var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) var_5))));
                arr_107 [i_35] [i_35] [i_35] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_55 [i_31] [i_32] [i_35] [i_31])) % (((/* implicit */int) arr_106 [i_31] [i_32] [i_31] [i_35])))), (((/* implicit */int) (unsigned char)161))))) ? (min((((int) (unsigned short)45157)), (((/* implicit */int) ((unsigned short) var_8))))) : (((((var_2) < (((/* implicit */int) (unsigned char)5)))) ? (((/* implicit */int) ((arr_95 [i_31] [i_32]) >= (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13610)))))))));
                var_46 = ((/* implicit */int) var_3);
            }
            arr_108 [i_31] [i_31] = ((/* implicit */signed char) (-((+(2147483647)))));
        }
        for (unsigned short i_36 = 0; i_36 < 12; i_36 += 3) /* same iter space */
        {
            var_47 -= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (unsigned char)5)) ? (1807500666) : (1417723932))), (((/* implicit */int) ((-1417723901) > (((/* implicit */int) arr_99 [i_36] [i_31 - 2] [i_31 + 1])))))));
            var_48 += ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)5053))))));
        }
        /* LoopNest 3 */
        for (int i_37 = 0; i_37 < 12; i_37 += 2) 
        {
            for (int i_38 = 0; i_38 < 12; i_38 += 4) 
            {
                for (long long int i_39 = 0; i_39 < 12; i_39 += 4) 
                {
                    {
                        var_49 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_6)), (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_5)), (7663728712806671288LL)))), (18446744073709551600ULL)))));
                        var_50 = min((((/* implicit */unsigned short) min((((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)121))))), (var_8)))), (min((((/* implicit */unsigned short) (signed char)-115)), (arr_44 [i_31] [i_31] [i_37] [i_37]))));
                        var_51 |= ((signed char) ((((-9223372036854775793LL) + (9223372036854775807LL))) >> (((((-9223372036854775793LL) - (-9223372036854775777LL))) + (42LL)))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_40 = 3; i_40 < 11; i_40 += 4) /* same iter space */
    {
        var_52 = ((/* implicit */unsigned short) (-9223372036854775807LL - 1LL));
        var_53 = ((/* implicit */signed char) var_0);
        arr_126 [i_40] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */int) (signed char)-123)) : (1879902123)));
    }
}
