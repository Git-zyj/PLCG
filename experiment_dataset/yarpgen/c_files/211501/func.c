/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211501
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */int) arr_0 [i_0])), (var_0)))), ((+(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)21))) + (arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (2445682327699684720LL) : (((/* implicit */long long int) ((/* implicit */int) (short)0)))));
                        var_21 |= ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(arr_7 [i_0] [i_2])))) ? (-1141518811) : (2147483631)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 4; i_4 < 19; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 1) 
            {
                {
                    var_22 = ((((/* implicit */_Bool) (+(var_6)))) ? (((((/* implicit */_Bool) (unsigned short)65533)) ? (-1141518814) : (((int) (-2147483647 - 1))))) : (max((((((/* implicit */_Bool) arr_19 [i_0] [i_5 - 1])) ? (((/* implicit */int) var_17)) : (var_12))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5]))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
                        {
                            {
                                var_23 &= ((/* implicit */signed char) min((min((((/* implicit */int) (_Bool)1)), (((1228802976) + (((/* implicit */int) var_4)))))), (((/* implicit */int) (_Bool)1))));
                                var_24 *= ((/* implicit */int) ((((((/* implicit */_Bool) ((var_10) << (((var_10) - (3352922190815000501LL)))))) || ((_Bool)1))) && (((/* implicit */_Bool) (-(max((var_19), (((/* implicit */unsigned long long int) arr_0 [i_7])))))))));
                                var_25 -= ((/* implicit */unsigned int) arr_5 [i_5 + 1] [i_5 - 2] [i_5 - 1]);
                            }
                        } 
                    } 
                    arr_27 [(signed char)10] [i_4 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((12990532466068635144ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)54458)) ? (-10) : (var_7))))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [2] [5LL] [(_Bool)1]))))))) : (((/* implicit */int) (!((!((_Bool)1))))))));
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                {
                    var_26 = (i_9 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8] [18]))))) >> (((((/* implicit */int) ((signed char) min((((/* implicit */int) arr_32 [i_9] [i_9] [i_10])), (2147483639))))) + (57)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_8] [18]))))) >> (((((((/* implicit */int) ((signed char) min((((/* implicit */int) arr_32 [i_9] [i_9] [i_10])), (2147483639))))) + (57))) + (38))))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) ((_Bool) var_17)))) || (((/* implicit */_Bool) ((min(((_Bool)0), (var_17))) ? (((/* implicit */long long int) ((/* implicit */int) ((18446744073709551615ULL) < (((/* implicit */unsigned long long int) arr_19 [i_9] [i_9])))))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)6492))) : (9223372036854775807LL))))))));
                    arr_36 [i_8] [i_8] [i_9] [i_8] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8] [i_9] [i_10] [i_10] [i_9]))) < (arr_21 [i_8] [i_9] [12U] [4LL] [i_9] [i_9]))))))));
                }
            } 
        } 
        var_28 -= ((/* implicit */long long int) ((int) max((((/* implicit */unsigned long long int) arr_8 [i_8] [i_8] [i_8])), (14113987663864446889ULL))));
    }
    for (int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 2; i_12 < 13; i_12 += 2) 
        {
            for (long long int i_13 = 1; i_13 < 12; i_13 += 1) 
            {
                {
                    var_29 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (8372224LL) : (((/* implicit */long long int) var_0))))))) ? (((/* implicit */long long int) (((-(((/* implicit */int) arr_14 [(unsigned short)17] [(_Bool)0] [i_13])))) - ((-(((/* implicit */int) (unsigned short)2117))))))) : (min((((((/* implicit */_Bool) arr_4 [i_11])) ? (-6479733242936569393LL) : (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1141518811)))))))));
                    /* LoopSeq 4 */
                    for (signed char i_14 = 0; i_14 < 14; i_14 += 1) /* same iter space */
                    {
                        arr_47 [i_11] [i_12] [i_12] [i_13] [i_11] [7ULL] = ((/* implicit */unsigned short) ((((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (unsigned short)18)))) < (min((((/* implicit */int) var_8)), (-347674337))))) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)55557))) < (35184372088831LL)))) < (((/* implicit */int) arr_32 [i_11] [i_12 - 2] [i_12 + 1]))))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 1; i_15 < 13; i_15 += 4) 
                        {
                            arr_51 [i_11] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_21 [(short)8] [i_15] [i_15] [i_15 - 1] [i_15] [i_15 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 659749510425247021ULL)))) : (((((/* implicit */unsigned int) 7)) % (arr_19 [i_12] [i_12])))))));
                            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_11] [i_11] [13ULL])) ? (-2) : (((/* implicit */int) arr_14 [i_13 - 1] [i_14] [i_15]))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-19796)) == (-1141518811)))) : ((-(((/* implicit */int) arr_14 [i_15 - 1] [i_14] [i_13])))))))));
                        }
                        for (unsigned short i_16 = 1; i_16 < 11; i_16 += 1) 
                        {
                            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) min((((int) ((((/* implicit */_Bool) arr_13 [i_12] [i_11])) ? (arr_37 [i_11]) : (((/* implicit */unsigned long long int) var_18))))), ((-(((/* implicit */int) (_Bool)0)))))))));
                            var_32 = ((/* implicit */signed char) ((max((5953439661473753039ULL), (((((/* implicit */_Bool) (unsigned short)61572)) ? (18446744073709551615ULL) : (0ULL))))) & (((((/* implicit */_Bool) 1044480)) ? (9164329901162525365ULL) : (((/* implicit */unsigned long long int) 1141518814))))));
                            arr_54 [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_12 + 1] [i_12 - 2] [i_12 - 1])) >> (((((/* implicit */int) arr_8 [i_12 - 1] [i_12 - 1] [i_12 - 1])) - (45515)))))) + (max((((/* implicit */long long int) arr_5 [i_12 + 1] [i_13 + 2] [i_13 + 2])), (((((/* implicit */_Bool) -18)) ? (arr_1 [i_11]) : (((/* implicit */long long int) 143405019))))))));
                            var_33 = ((/* implicit */int) arr_13 [i_11] [i_11]);
                        }
                        arr_55 [i_11] = ((/* implicit */long long int) max((max((((/* implicit */int) arr_45 [i_12 - 2] [i_12 - 2] [i_12 - 1])), (arr_52 [i_11] [i_12] [(_Bool)1]))), (((/* implicit */int) ((unsigned short) ((signed char) (_Bool)1))))));
                    }
                    for (signed char i_17 = 0; i_17 < 14; i_17 += 1) /* same iter space */
                    {
                        var_34 += ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) arr_12 [i_12 - 1] [i_13 + 2] [i_13 + 1] [i_13 - 1])) ? (((/* implicit */int) arr_12 [i_12 - 2] [i_13 + 2] [i_13 - 1] [i_13 - 1])) : (((/* implicit */int) var_8)))));
                        var_35 = ((/* implicit */int) (((-(((/* implicit */int) arr_45 [i_11] [i_11] [i_11])))) <= (((/* implicit */int) ((((/* implicit */int) arr_45 [i_11] [i_13 + 2] [i_17])) == (((/* implicit */int) arr_45 [i_11] [12] [12])))))));
                        /* LoopSeq 3 */
                        for (long long int i_18 = 2; i_18 < 12; i_18 += 4) 
                        {
                            var_36 = (i_11 % 2 == zero) ? (((/* implicit */unsigned short) ((min((((((((/* implicit */int) arr_44 [i_11] [i_11] [i_11])) + (2147483647))) << (((((arr_4 [i_18 + 2]) + (1754087112))) - (18))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) -2128024992)) == (var_19)))))) & (((/* implicit */int) (unsigned short)3584))))) : (((/* implicit */unsigned short) ((min((((((((((/* implicit */int) arr_44 [i_11] [i_11] [i_11])) - (2147483647))) + (2147483647))) << (((((arr_4 [i_18 + 2]) + (1754087112))) - (18))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) -2128024992)) == (var_19)))))) & (((/* implicit */int) (unsigned short)3584)))));
                            arr_62 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (-(((arr_30 [i_13 + 1] [i_13 - 1] [i_13 + 1]) - (((/* implicit */int) (_Bool)1))))));
                        }
                        for (int i_19 = 1; i_19 < 11; i_19 += 1) 
                        {
                            arr_65 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (unsigned short)65530)), (0ULL)));
                            var_37 = ((/* implicit */unsigned short) (!(((((8244936428140881027LL) | (((/* implicit */long long int) 1044480)))) < (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_11] [i_11] [i_13] [5ULL] [i_19])))))));
                        }
                        for (signed char i_20 = 3; i_20 < 13; i_20 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) ((signed char) arr_39 [i_11] [i_12] [i_13])))))) ? (((/* implicit */int) arr_59 [i_11] [i_12] [i_13 + 2] [i_17])) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -3)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (unsigned short)0))))) ? (7) : (((/* implicit */int) (_Bool)1)))))))));
                            var_39 = ((/* implicit */_Bool) var_7);
                            var_40 = ((/* implicit */unsigned int) var_0);
                        }
                        var_41 = ((/* implicit */signed char) arr_29 [i_13 - 1]);
                        var_42 &= ((/* implicit */int) (((~(((/* implicit */int) (signed char)-114)))) == (((/* implicit */int) ((((/* implicit */_Bool) min((11195465785774353307ULL), (((/* implicit */unsigned long long int) arr_8 [i_13] [i_13] [i_13]))))) || (((/* implicit */_Bool) arr_18 [i_11])))))));
                    }
                    for (signed char i_21 = 0; i_21 < 14; i_21 += 1) /* same iter space */
                    {
                        arr_72 [i_11] [i_12] [i_13 + 1] [i_21] [(_Bool)1] &= ((/* implicit */long long int) max(((!(((/* implicit */_Bool) 2)))), (((((/* implicit */_Bool) arr_37 [i_11])) || (((/* implicit */_Bool) arr_37 [i_11]))))));
                        var_43 = ((/* implicit */long long int) min((var_43), (3LL)));
                        var_44 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_64 [i_11] [i_11] [i_11] [i_12] [i_11])), (var_9)))))) ? (((max((var_9), (((/* implicit */unsigned long long int) 7)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32640))))) : (((/* implicit */unsigned long long int) min((arr_22 [i_12] [i_13 + 1] [i_12 - 2]), (arr_22 [i_21] [i_13 + 2] [i_12 - 2]))))));
                    }
                    for (signed char i_22 = 0; i_22 < 14; i_22 += 1) /* same iter space */
                    {
                        var_45 += ((/* implicit */_Bool) min((max(((~(((/* implicit */int) (unsigned short)25110)))), (((((/* implicit */_Bool) arr_22 [i_11] [16ULL] [16ULL])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (_Bool)1)))))), (min((((((/* implicit */_Bool) arr_24 [i_11] [i_12 + 1] [i_11] [i_13 + 2] [i_22])) ? (-1044481) : (((/* implicit */int) arr_15 [i_11])))), (((/* implicit */int) var_8))))));
                        var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((+(arr_16 [i_11]))) : (((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (unsigned short)2)))))))));
                        var_47 = ((/* implicit */unsigned int) arr_20 [i_11] [i_12 - 2] [i_13 + 2]);
                    }
                    /* LoopNest 2 */
                    for (long long int i_23 = 0; i_23 < 14; i_23 += 1) 
                    {
                        for (unsigned int i_24 = 4; i_24 < 12; i_24 += 4) 
                        {
                            {
                                arr_80 [i_11] [i_12 + 1] [i_11] [0] [i_12 + 1] = ((/* implicit */unsigned long long int) (~(((454334936623953736LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
                                var_48 = ((/* implicit */int) ((((/* implicit */int) min((arr_60 [i_11] [i_23] [i_12 + 1] [i_12 + 1] [i_11]), (arr_60 [i_11] [4] [i_13] [i_12 + 1] [i_11])))) != (((/* implicit */int) ((short) arr_60 [i_11] [i_12] [i_12 + 1] [i_12 - 1] [i_11])))));
                                var_49 = ((/* implicit */signed char) min((((arr_37 [i_11]) << (((((2364807679U) << (((((/* implicit */int) (unsigned short)65534)) - (65529))))) - (2659401640U))))), (((/* implicit */unsigned long long int) (~(min((((/* implicit */unsigned int) -5)), (var_13))))))));
                                var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((((/* implicit */_Bool) (~(-478566345)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) (unsigned short)32903)) - (7))))))));
                            }
                        } 
                    } 
                    var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) (+(((((int) 7U)) >> ((((-(((/* implicit */int) (unsigned short)2)))) + (3))))))))));
                }
            } 
        } 
        var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((short) ((((/* implicit */int) arr_12 [i_11] [i_11] [i_11] [i_11])) + ((+(((/* implicit */int) (unsigned short)4))))))))));
    }
    for (int i_25 = 0; i_25 < 14; i_25 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned short i_26 = 3; i_26 < 13; i_26 += 2) 
        {
            var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_38 [i_25])) ? (((/* implicit */int) arr_63 [(_Bool)1] [(unsigned short)8] [i_26])) : ((-2147483647 - 1))))))), ((~(max((((/* implicit */long long int) var_1)), (arr_69 [(unsigned short)6] [i_26 - 1] [i_26 + 1] [i_26] [6ULL] [i_26]))))))))));
            var_54 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((((/* implicit */_Bool) 4)) || (((/* implicit */_Bool) arr_38 [i_25])))))))));
            var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 18446744073709551613ULL)))))))));
        }
        var_56 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)32894)) || (((/* implicit */_Bool) (short)-1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 8470253039750087685ULL)) || (((/* implicit */_Bool) 7))))) : (((/* implicit */int) ((_Bool) 0ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)21496), (arr_74 [i_25] [i_25] [(unsigned short)10] [(unsigned short)6])))) || (((/* implicit */_Bool) ((long long int) (unsigned short)65533))))))) : (min((arr_3 [i_25] [i_25]), (arr_3 [i_25] [i_25])))));
        var_57 ^= ((/* implicit */int) (unsigned short)32895);
        var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65522))))), (((((/* implicit */unsigned long long int) var_13)) * (arr_61 [i_25] [i_25] [1ULL] [i_25] [i_25] [i_25]))))))));
    }
    var_59 = ((/* implicit */int) (+(7U)));
}
