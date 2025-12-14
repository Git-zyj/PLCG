/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237368
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
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0 + 4])) ? (((/* implicit */int) arr_0 [i_0 + 2] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)14)))))));
    }
    for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
    {
        var_13 = ((/* implicit */short) ((((unsigned int) var_3)) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_1 + 1])))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            arr_9 [i_1] [i_1] [i_2] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)14875))));
            var_14 = ((/* implicit */int) (-9223372036854775807LL - 1LL));
            arr_10 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1 - 1] [i_1]);
        }
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 2) 
        {
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((signed char) max((910093229U), (((/* implicit */unsigned int) (short)8338))))))));
            /* LoopSeq 2 */
            for (unsigned char i_4 = 2; i_4 < 14; i_4 += 2) 
            {
                var_16 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)92)) ? (-5890644725844767LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)52)))))) ? (((((/* implicit */_Bool) 9223372036854775790LL)) ? (var_6) : (((/* implicit */unsigned int) ((int) (unsigned char)86))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 5890644725844766LL))))))))));
                var_17 = ((/* implicit */int) ((unsigned char) var_4));
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 15; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) 
                    {
                        arr_20 [i_1] [i_3 + 3] [(unsigned char)9] [i_3 + 3] [i_4 + 1] [i_5 + 1] [(unsigned char)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((2825110714U), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) ((1890016355U) > (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_4 - 1] [i_3 + 1] [i_1 + 1])))))) : (((/* implicit */int) arr_2 [i_1]))));
                        arr_21 [i_1] [i_3] [i_4] [(short)11] [i_1] [i_6] [i_6] = ((/* implicit */signed char) ((((var_6) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1 - 1] [i_1 - 1] [i_1] [i_4 + 2] [i_5 - 1]))))) ? ((~(((/* implicit */int) arr_12 [i_1] [i_1 + 1])))) : (((((/* implicit */_Bool) arr_12 [i_1] [i_1 + 1])) ? (((/* implicit */int) arr_12 [i_1] [i_1 + 2])) : (((/* implicit */int) arr_12 [i_1] [i_1 - 1]))))));
                        var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_1] [i_3] [i_4] [i_4] [i_6]))))))) % (((/* implicit */int) ((((/* implicit */int) arr_6 [i_4])) > (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36912)))))))))))));
                        var_19 = ((/* implicit */short) min(((-(3195415597U))), (((/* implicit */unsigned int) min((arr_16 [i_1 + 2] [i_1] [i_3 - 1]), (arr_16 [i_1 - 1] [i_1] [i_3 + 2]))))));
                    }
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_3] [i_1])) > (((/* implicit */int) (unsigned short)11246)))) ? (arr_4 [i_3 - 1]) : (((/* implicit */int) (short)-29355))))) ? (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (unsigned char)255)) << (((((/* implicit */int) (unsigned char)128)) - (128))))))) : (((((/* implicit */int) arr_18 [i_1] [i_1] [i_4] [i_1] [i_1 + 1])) << (((arr_13 [i_3] [(signed char)12] [i_3 - 2]) - (485595458232997824LL)))))));
                }
            }
            for (long long int i_7 = 0; i_7 < 16; i_7 += 3) 
            {
                var_21 = ((/* implicit */short) max((-3166829326456759466LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)9245)))))));
                /* LoopNest 2 */
                for (unsigned int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) ? (-3166829326456759490LL) : (var_0))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_1 + 2] [i_1] [i_1 + 2])))))));
                            var_23 &= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_28 [i_3])))) ? (max((-9223372036854775806LL), (((/* implicit */long long int) (unsigned short)61376)))) : (((((/* implicit */_Bool) arr_28 [i_3])) ? (var_0) : (arr_28 [i_3])))));
                        }
                    } 
                } 
            }
            /* LoopSeq 2 */
            for (unsigned char i_10 = 4; i_10 < 14; i_10 += 3) 
            {
                var_24 = 3342483389688663362LL;
                /* LoopSeq 2 */
                for (int i_11 = 2; i_11 < 15; i_11 += 3) 
                {
                    var_25 = ((/* implicit */unsigned short) ((unsigned int) arr_8 [i_3] [i_10]));
                    var_26 += ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) >= (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)))))), (var_6)));
                    arr_38 [(short)6] [i_10] [i_1] = ((/* implicit */_Bool) ((signed char) ((((/* implicit */int) (signed char)58)) <= (max((-820400884), (-2027866571))))));
                }
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 2) 
                {
                    var_27 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 2] [i_1])) ? (-5194936780053266263LL) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1 + 1])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_1) + (2147483647))) >> (((-6082562010979331948LL) + (6082562010979331957LL)))))) ? (((/* implicit */int) arr_0 [i_3 + 3] [i_1 + 2])) : (((/* implicit */int) ((short) -9223372036854775805LL)))))) : (((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_1 - 1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_12] [i_1] [i_1 - 1] [i_1]))) : (-6082562010979331948LL)))));
                    var_28 = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1 - 1]))));
                    var_29 += ((/* implicit */unsigned char) ((((var_8) | (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_10] [i_12] [i_10 + 2]))))) | (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_2))))));
                    var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1])) ? (arr_22 [i_1] [i_1]) : (((/* implicit */int) (!(((/* implicit */_Bool) max((5890644725844766LL), (((/* implicit */long long int) var_7))))))))));
                }
            }
            for (unsigned char i_13 = 0; i_13 < 16; i_13 += 1) 
            {
                var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) var_2)))));
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 16; i_14 += 2) 
                {
                    for (short i_15 = 0; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_3])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (((long long int) var_2)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_3 + 3] [i_3] [i_3] [i_3 + 1] [i_3 + 3] [i_3])) ? (min((((/* implicit */int) arr_26 [i_1] [(unsigned char)5] [i_1])), (arr_22 [i_1] [i_3]))) : (((/* implicit */int) arr_26 [i_14] [i_13] [i_3])))))));
                            arr_48 [i_1] [i_1] [i_15] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_26 [i_1 + 1] [i_1 + 2] [i_1])) ? (((((/* implicit */_Bool) (short)2354)) ? (((/* implicit */int) (unsigned short)38577)) : (((/* implicit */int) var_5)))) : (((/* implicit */int) ((unsigned short) var_8)))))));
                            var_33 += ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) (+(var_6)))) >= (((((/* implicit */_Bool) arr_7 [i_1 + 1] [i_14])) ? (-5890644725844778LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_3])))))))) << (((/* implicit */int) ((_Bool) ((3724067405U) > (((/* implicit */unsigned int) arr_8 [i_14] [i_15]))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 16; i_16 += 4) 
                {
                    var_34 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -3342483389688663365LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (var_6))))));
                    var_35 = ((long long int) var_5);
                }
            }
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) arr_8 [i_1 - 1] [i_1]))) ? (((/* implicit */int) arr_34 [i_1 - 1] [i_3 - 1] [i_1] [i_3 - 1] [(_Bool)1])) : ((+(((/* implicit */int) (short)-6735))))));
            var_37 = ((/* implicit */_Bool) ((int) ((-1LL) >= (((/* implicit */long long int) -1)))));
        }
        for (signed char i_17 = 0; i_17 < 16; i_17 += 3) 
        {
            var_38 = ((/* implicit */int) ((((((/* implicit */_Bool) 5890644725844767LL)) || (((/* implicit */_Bool) -16)))) ? (max((((/* implicit */long long int) (unsigned short)27036)), (-5890644725844792LL))) : (((((((/* implicit */long long int) ((/* implicit */int) arr_52 [i_1 - 1]))) & (8399620818965364084LL))) + (-4134914655926979855LL)))));
            var_39 = ((/* implicit */short) max((((/* implicit */long long int) ((unsigned short) arr_39 [i_1]))), (-4LL)));
        }
        arr_55 [i_1] [i_1] = (i_1 % 2 == 0) ? (((((((-1177266208) ^ (((/* implicit */int) (unsigned char)240)))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */unsigned int) arr_19 [i_1] [i_1] [i_1 + 1] [i_1 - 1])) : (var_6))) - (4240549728U))))) : (((((((-1177266208) ^ (((/* implicit */int) (unsigned char)240)))) + (2147483647))) >> (((((((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */unsigned int) arr_19 [i_1] [i_1] [i_1 + 1] [i_1 - 1])) : (var_6))) - (4240549728U))) - (187519417U)))));
    }
    for (unsigned short i_18 = 1; i_18 < 8; i_18 += 2) 
    {
        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_56 [i_18])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) != (max((var_0), (((/* implicit */long long int) (unsigned char)153)))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_19 = 0; i_19 < 11; i_19 += 3) 
        {
            var_41 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)41745)) ? (((((/* implicit */int) (short)8048)) >> (((((/* implicit */int) (signed char)95)) - (94))))) : (((/* implicit */int) (unsigned char)221))));
            var_42 |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_6 [4])) >> (((((/* implicit */int) arr_6 [(unsigned char)4])) - (25834)))));
            /* LoopSeq 1 */
            for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) 
            {
                var_43 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (arr_22 [12] [12]) : (((/* implicit */int) (short)-32764))));
                var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967286U)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) arr_22 [i_18] [i_20])) : (var_6))) : (((/* implicit */unsigned int) (+(arr_47 [i_18 + 3] [i_19] [i_20]))))));
            }
        }
        /* vectorizable */
        for (int i_21 = 0; i_21 < 11; i_21 += 4) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned int) arr_66 [i_18 - 1] [i_18] [i_21]);
            var_46 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-67)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_21] [i_21] [i_21] [i_21]))))) << (((-4LL) + (29LL)))));
        }
        /* vectorizable */
        for (int i_22 = 0; i_22 < 11; i_22 += 4) /* same iter space */
        {
            var_47 = ((/* implicit */unsigned char) max((var_47), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)255)))))));
            arr_69 [i_18] [i_18] = ((/* implicit */unsigned int) var_5);
        }
    }
    /* vectorizable */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
    {
        var_48 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_23]))));
        var_49 ^= ((/* implicit */unsigned char) ((signed char) (unsigned short)0));
        /* LoopSeq 2 */
        for (unsigned short i_24 = 0; i_24 < 21; i_24 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_25 = 0; i_25 < 21; i_25 += 2) 
            {
                var_50 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)10)) >= ((+(((/* implicit */int) (unsigned char)96))))));
                var_51 = ((/* implicit */signed char) var_2);
                var_52 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_23] [i_24])) ? (((((var_0) + (9223372036854775807LL))) >> (((arr_74 [i_23] [i_23]) + (5060738328008694264LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                var_53 = arr_0 [i_25] [i_25];
                var_54 = arr_74 [i_23] [i_25];
            }
            var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) ((((/* implicit */int) (unsigned char)89)) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)8))))))))));
        }
        for (short i_26 = 0; i_26 < 21; i_26 += 2) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                var_56 = ((/* implicit */unsigned short) arr_79 [i_27]);
                arr_86 [i_23] [i_23] [i_26] [i_27] = ((/* implicit */long long int) arr_72 [i_23]);
            }
            for (signed char i_28 = 2; i_28 < 18; i_28 += 4) 
            {
                arr_89 [i_23] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)59986)) ? (((((/* implicit */_Bool) var_6)) ? (1833399918) : (((/* implicit */int) var_9)))) : (((var_1) % (((/* implicit */int) (unsigned char)113))))));
                var_57 = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)57))));
            }
            for (unsigned char i_29 = 1; i_29 < 20; i_29 += 3) 
            {
                var_58 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-49)) ? (arr_70 [i_29 - 1]) : (arr_70 [i_29 + 1])));
                /* LoopSeq 2 */
                for (unsigned char i_30 = 3; i_30 < 17; i_30 += 2) /* same iter space */
                {
                    arr_95 [i_30] [i_23] [i_23] [i_23] = ((/* implicit */long long int) var_6);
                    var_59 = ((/* implicit */short) ((2147483646U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))));
                    var_60 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_93 [i_26] [i_29 - 1] [i_30 - 1] [(signed char)2])) ? (var_3) : (((/* implicit */int) arr_93 [i_26] [i_26] [i_29] [i_30 + 4]))));
                }
                for (unsigned char i_31 = 3; i_31 < 17; i_31 += 2) /* same iter space */
                {
                    var_61 = ((/* implicit */int) 1926144334U);
                    var_62 = (~(((/* implicit */int) (short)-14416)));
                    var_63 += ((/* implicit */unsigned short) var_0);
                }
                var_64 = ((/* implicit */short) ((unsigned char) ((var_8) & (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
            }
            for (unsigned char i_32 = 1; i_32 < 19; i_32 += 1) 
            {
                var_65 |= arr_90 [i_32] [i_26] [i_26] [i_23];
                var_66 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_92 [i_32] [i_32 + 2] [i_23])) & (((/* implicit */int) arr_92 [i_32] [i_32 + 2] [i_23]))));
                arr_100 [i_23] [i_26] [i_23] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) var_3)) : (var_6)));
            }
            /* LoopNest 3 */
            for (signed char i_33 = 1; i_33 < 20; i_33 += 2) 
            {
                for (unsigned char i_34 = 0; i_34 < 21; i_34 += 3) 
                {
                    for (unsigned short i_35 = 0; i_35 < 21; i_35 += 2) 
                    {
                        {
                            var_67 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_92 [i_26] [i_26] [i_23]))) != ((~(arr_73 [i_23])))));
                            var_68 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_80 [i_26]))));
                            arr_108 [i_23] [i_23] [i_26] [i_26] [i_33] [i_23] [i_35] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)245))));
                            arr_109 [i_23] [i_23] [i_33] [i_34] [11] = arr_70 [i_26];
                            arr_110 [i_23] [i_26] [(unsigned char)16] [0LL] [i_26] = ((/* implicit */int) (+(((((/* implicit */_Bool) arr_80 [i_23])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (18014398492704768LL)))));
                        }
                    } 
                } 
            } 
            var_69 = ((/* implicit */unsigned char) ((signed char) var_10));
        }
        var_70 = ((/* implicit */unsigned char) arr_74 [i_23] [i_23]);
    }
    var_71 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3029344155U)) ? (var_6) : (var_8)));
    var_72 = ((/* implicit */signed char) min((var_72), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)69)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10358))))))));
}
