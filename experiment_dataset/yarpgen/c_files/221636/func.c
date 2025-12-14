/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221636
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221636 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221636
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 *= ((/* implicit */unsigned short) min((var_11), (min((((/* implicit */unsigned long long int) (+(arr_1 [5ULL])))), (var_0)))));
                arr_4 [i_0] [i_0] [(signed char)9] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (min((((/* implicit */unsigned int) (unsigned short)65535)), (3768173176U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) 8146517744020879795LL)))))), (((/* implicit */unsigned int) (signed char)-54))));
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_16 = ((unsigned long long int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_11))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_10 [i_2] [i_2] [i_2] = ((((/* implicit */unsigned long long int) var_8)) | (var_3));
            var_17 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8043))) : (arr_2 [i_2] [i_2] [i_2])));
            var_18 = (+((~(8146517744020879795LL))));
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
                {
                    {
                        var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) ((6112115967125850464ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))));
                        arr_15 [6ULL] = ((/* implicit */signed char) (_Bool)0);
                        var_20 = ((/* implicit */short) (signed char)127);
                        var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (signed char)120)) ? (arr_11 [i_5] [i_4 + 3] [i_2]) : (((/* implicit */long long int) var_14))))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 1; i_6 < 12; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 1; i_7 < 11; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 14; i_8 += 3) 
                {
                    {
                        var_22 = (-(var_14));
                        var_23 = ((/* implicit */unsigned short) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) + (0ULL))));
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) var_13))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) && (arr_12 [i_2] [i_2] [i_2])));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                var_26 = ((/* implicit */short) arr_22 [i_2] [i_6]);
                var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) (-2147483647 - 1))) : (((((/* implicit */_Bool) arr_9 [i_9])) ? (((/* implicit */long long int) var_2)) : (8146517744020879795LL)))));
                arr_25 [i_6] [(signed char)12] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)53)) - (((/* implicit */int) (unsigned short)47793))));
                var_28 = ((/* implicit */unsigned short) arr_12 [i_2] [10LL] [i_9]);
            }
        }
        for (unsigned char i_10 = 0; i_10 < 14; i_10 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 4) 
            {
                for (int i_12 = 1; i_12 < 12; i_12 += 3) 
                {
                    {
                        var_29 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_14 [i_12] [i_12] [i_12 - 1] [i_12 + 2])) : (((/* implicit */int) (signed char)-127))));
                        arr_34 [i_2] [i_10] [i_11] [8] [i_10] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [9U] [(_Bool)1] [i_12 + 1] [i_12 - 1] [i_12 - 1] [i_12 - 1])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL)))))));
                        arr_35 [i_2] [i_10] [i_10] [i_10] [i_10] [i_12 + 2] = ((/* implicit */int) arr_23 [i_10] [i_11]);
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (long long int i_13 = 3; i_13 < 13; i_13 += 2) 
            {
                var_30 = ((/* implicit */long long int) (+(((/* implicit */int) arr_14 [i_13 - 1] [i_13 - 1] [i_13] [i_2]))));
                var_31 -= ((/* implicit */signed char) ((2621277649035221244LL) != (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))));
            }
            for (signed char i_14 = 0; i_14 < 14; i_14 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    for (unsigned long long int i_16 = 4; i_16 < 12; i_16 += 2) 
                    {
                        {
                            var_32 = ((((/* implicit */_Bool) var_12)) ? (-427975903) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_9))))));
                            var_33 = (!(((/* implicit */_Bool) 8146517744020879795LL)));
                        }
                    } 
                } 
                arr_46 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) -1323260972)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))));
            }
            for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned char i_18 = 3; i_18 < 12; i_18 += 2) 
                {
                    var_34 = ((/* implicit */unsigned long long int) max((var_34), (((((/* implicit */_Bool) var_5)) ? (arr_41 [i_18 - 2] [i_18 - 2] [i_18] [4ULL] [i_18 + 1] [i_18 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_53 [i_18] [i_17] [5ULL] [i_10] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 16790086726181467470ULL)) ? (3127827559U) : (3993429972U)))) ? (arr_40 [i_2] [i_2] [i_2] [i_2]) : (((((/* implicit */_Bool) arr_48 [i_2] [4LL] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (8796093022207ULL)))));
                    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) : (var_1)))))));
                }
                for (long long int i_19 = 2; i_19 < 12; i_19 += 3) 
                {
                    arr_58 [i_2] [i_10] [i_17] [i_19] [5] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) (short)(-32767 - 1)));
                    var_36 = ((/* implicit */short) ((((/* implicit */_Bool) 656627056)) ? (1323260972) : (((/* implicit */int) var_5))));
                }
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    var_37 = ((/* implicit */int) (-((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)113))) : (-6726575461099686333LL)))));
                    arr_63 [0U] [i_10] [7ULL] [7ULL] [11LL] [11LL] = ((/* implicit */unsigned int) (!(arr_12 [(unsigned short)11] [(unsigned short)11] [i_20])));
                    var_38 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_2)) : (var_3)));
                    var_39 &= ((/* implicit */signed char) (+(1767193042)));
                }
                for (long long int i_21 = 0; i_21 < 14; i_21 += 2) 
                {
                    var_40 = ((/* implicit */long long int) 130023424);
                    var_41 = ((/* implicit */unsigned short) min((var_41), (((/* implicit */unsigned short) (+(var_1))))));
                    arr_66 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) (unsigned char)255);
                    var_42 = ((var_8) & (((int) (_Bool)1)));
                }
                var_43 = -1767193042;
                var_44 = ((/* implicit */short) arr_51 [i_2] [i_10] [i_17] [i_10] [i_2] [i_10]);
            }
            for (unsigned long long int i_22 = 0; i_22 < 14; i_22 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_23 = 1; i_23 < 12; i_23 += 2) 
                {
                    for (signed char i_24 = 2; i_24 < 13; i_24 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 3616940930U)) - (var_1)));
                            arr_75 [(_Bool)1] [i_23] [i_22] [(signed char)8] = ((/* implicit */unsigned short) 430810285154153014ULL);
                            var_46 ^= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) / (((((/* implicit */_Bool) 1702570569)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-86))) : (var_11)))));
                        }
                    } 
                } 
                var_47 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)23000)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_13))));
                arr_76 [i_2] [i_10] [7LL] = ((/* implicit */unsigned char) 3616940930U);
            }
        }
        var_48 = ((/* implicit */_Bool) (~(6726575461099686332LL)));
        arr_77 [i_2] = (!(((/* implicit */_Bool) arr_22 [i_2] [i_2])));
    }
    for (int i_25 = 0; i_25 < 18; i_25 += 1) 
    {
        arr_80 [i_25] [i_25] |= max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_79 [i_25] [i_25]))))), (((((/* implicit */_Bool) -130023424)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 180968538)))) : (min((((/* implicit */unsigned int) (-2147483647 - 1))), (var_7))))));
        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), ((+(var_8)))))) ? (min((min((0ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32512))) != (var_3))))))));
        var_50 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((arr_79 [i_25] [i_25]), (arr_79 [i_25] [i_25])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_25] [i_25])) ? (1968820511045652224ULL) : (18446744073709551615ULL)))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)19314)))))));
    }
    for (unsigned short i_26 = 0; i_26 < 11; i_26 += 1) 
    {
        arr_85 [i_26] = ((/* implicit */unsigned short) (-(arr_2 [i_26] [i_26] [i_26])));
        var_51 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) min((var_7), (((/* implicit */unsigned int) (signed char)70)))))) ? (max((((/* implicit */unsigned int) ((int) arr_70 [i_26] [(signed char)3] [i_26] [i_26] [i_26]))), (((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */unsigned int) var_2)) : (var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_71 [i_26] [i_26] [i_26]), (((/* implicit */unsigned int) var_2))))) <= (arr_9 [i_26])))))));
        var_52 = ((/* implicit */_Bool) max((var_10), (var_10)));
        var_53 &= ((/* implicit */unsigned int) (signed char)37);
    }
}
