/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34532
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34532 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34532
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
    var_12 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))))) ? ((-(max((-5104135880558316387LL), (((/* implicit */long long int) var_9)))))) : (((/* implicit */long long int) max((max((((/* implicit */int) var_0)), (-1086754792))), (((/* implicit */int) (signed char)111)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) + (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) (_Bool)0)) : (arr_1 [i_0] [i_0])))));
        var_14 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_9)) : (var_7)))) : (((((/* implicit */_Bool) -1692470938)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (4395107619982130922ULL))));
        var_15 = ((/* implicit */signed char) arr_2 [i_0]);
        var_16 = ((/* implicit */_Bool) ((arr_2 [i_0]) ? (((/* implicit */int) (signed char)-120)) : (((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) arr_0 [(signed char)22] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (unsigned short)42244))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_8))))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_19 -= ((/* implicit */unsigned short) ((_Bool) arr_6 [(_Bool)1] [i_2]));
            arr_10 [i_1] [i_1] [i_2] = (!(((/* implicit */_Bool) var_9)));
        }
        /* LoopNest 3 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_20 [i_5] = ((/* implicit */_Bool) ((arr_19 [i_4 + 1]) ? (((/* implicit */int) arr_9 [i_4 + 1] [i_3] [i_4 + 1])) : (((((/* implicit */int) (signed char)-12)) + (((/* implicit */int) (_Bool)1))))));
                            var_20 = ((/* implicit */long long int) (((!((_Bool)1))) ? ((-(arr_1 [i_3] [i_3]))) : (((/* implicit */int) (signed char)-12))));
                            var_21 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)29211))));
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5104135880558316389LL)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) arr_18 [i_6] [i_5] [0LL] [i_1] [i_1])) : (var_2))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        for (signed char i_7 = 1; i_7 < 11; i_7 += 2) 
                        {
                            var_23 += ((/* implicit */signed char) var_3);
                            arr_24 [i_4] [i_4] [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)25907))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                        {
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((var_7) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)91)) : (((/* implicit */int) (_Bool)1))))) : (((arr_7 [i_1] [i_8]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)119)))))));
                            arr_27 [i_1] [i_3] [i_4 + 1] [i_5] [i_8] = ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 1; i_9 < 11; i_9 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned short) ((6256834616256530870LL) % (((/* implicit */long long int) ((((/* implicit */_Bool) 4557520529929875022LL)) ? (((/* implicit */int) var_6)) : (var_7))))));
                            var_26 *= ((/* implicit */unsigned short) var_8);
                        }
                    }
                } 
            } 
        } 
        var_27 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])));
    }
    /* LoopNest 2 */
    for (int i_10 = 2; i_10 < 13; i_10 += 4) 
    {
        for (int i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            {
                var_28 = -5104135880558316396LL;
                var_29 = ((/* implicit */unsigned long long int) 1088284921);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned char i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        var_30 &= ((/* implicit */unsigned short) ((unsigned long long int) ((5104135880558316385LL) % (((/* implicit */long long int) ((arr_38 [i_12]) ? (var_7) : (-1379467471)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (max((4557520529929875029LL), (((/* implicit */long long int) -1692470938)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) var_11)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26186))) * (72057594033733632ULL)))));
                    var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_12]))))) ? (max((arr_1 [13LL] [i_14]), (((/* implicit */int) var_3)))) : (1692470937))))))));
                    var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6978)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)26))) : (-5104135880558316375LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_42 [i_14 + 1] [i_14 + 1] [i_14 + 1]), (arr_42 [i_14 + 1] [i_14 + 1] [i_14 + 1]))))) : (((arr_42 [i_14 + 1] [i_14 + 1] [i_14 + 1]) ? (13189864283543101774ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    var_34 = ((/* implicit */long long int) ((((((/* implicit */int) ((((/* implicit */long long int) arr_1 [i_12] [i_12])) != (var_2)))) >> (((((/* implicit */int) (signed char)-71)) + (74))))) - (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((-1086754792) == (((/* implicit */int) var_6)))))))));
                    var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (-((-(((/* implicit */int) var_4)))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_15 = 1; i_15 < 15; i_15 += 2) 
    {
        arr_50 [i_15] = ((/* implicit */signed char) ((((-610914065) + (2147483647))) >> (((var_11) - (837536786)))));
        /* LoopSeq 4 */
        for (unsigned char i_16 = 3; i_16 < 14; i_16 += 2) 
        {
            arr_54 [i_15] [i_16 + 2] [(short)13] = ((((/* implicit */_Bool) (signed char)103)) ? (arr_43 [i_15 + 3] [i_16 + 1] [i_16 + 2]) : (arr_43 [i_15 + 3] [i_16 + 3] [i_16 + 4]));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_15])) ? (((-1692470938) / (((/* implicit */int) (unsigned char)25)))) : (arr_49 [i_16 + 1])));
            var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (+((-(((/* implicit */int) arr_41 [i_15 - 1])))))))));
            var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (unsigned char)82))));
        }
        for (short i_17 = 0; i_17 < 18; i_17 += 2) 
        {
            var_39 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)452))) > (-5104135880558316389LL)))) ^ (((/* implicit */int) var_10))));
            var_40 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) > (((((/* implicit */int) (unsigned char)79)) - (((/* implicit */int) (unsigned char)128))))));
            var_41 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_15 + 2]))));
        }
        for (unsigned char i_18 = 0; i_18 < 18; i_18 += 2) /* same iter space */
        {
            arr_60 [i_15] = ((/* implicit */unsigned short) ((((/* implicit */int) var_10)) ^ (arr_40 [i_15 - 1])));
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)140)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4))));
            var_43 = ((/* implicit */unsigned int) ((arr_58 [i_15 + 1] [i_15] [i_15 + 2]) ? (((/* implicit */int) arr_45 [i_15 + 1] [i_15 + 1] [i_15 + 3])) : (((/* implicit */int) var_1))));
            arr_61 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)56672)) > (((/* implicit */int) arr_41 [i_15 + 3]))));
            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)243))))) ? (arr_47 [i_15 + 1] [i_15 + 2]) : (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_18])))));
        }
        for (unsigned char i_19 = 0; i_19 < 18; i_19 += 2) /* same iter space */
        {
            var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)5930)) == (((/* implicit */int) (unsigned char)210))))) ^ (((/* implicit */int) arr_42 [i_15 - 1] [i_15 - 1] [i_15]))));
            var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) ((((((/* implicit */int) (short)19768)) - (((/* implicit */int) arr_48 [i_19])))) / (((/* implicit */int) (short)32455)))))));
            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_15])) ? (((/* implicit */int) (unsigned short)28990)) : (33521664)));
            var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) ((unsigned short) arr_1 [i_15 + 3] [i_15 + 2])))));
            /* LoopSeq 1 */
            for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
            {
                var_49 = ((((/* implicit */int) var_1)) == (((/* implicit */int) arr_38 [i_15 + 2])));
                /* LoopSeq 3 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    arr_70 [i_15] [i_19] = ((/* implicit */unsigned short) arr_43 [i_15] [(signed char)9] [i_15]);
                    /* LoopSeq 3 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_50 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)108)) && (((/* implicit */_Bool) var_9))));
                        var_51 = ((/* implicit */unsigned short) min((var_51), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)15401)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_68 [i_20] [i_20] [i_20] [i_20])))))));
                    }
                    for (long long int i_23 = 0; i_23 < 18; i_23 += 1) 
                    {
                        arr_75 [i_15 + 2] [i_15] = ((/* implicit */short) ((1787016269) - (((/* implicit */int) arr_55 [i_15 + 3]))));
                        var_52 = ((/* implicit */_Bool) var_11);
                        var_53 = (-(((/* implicit */int) arr_45 [i_15 + 3] [i_15 + 2] [i_15 + 1])));
                        var_54 = ((/* implicit */unsigned short) max((var_54), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_65 [i_15] [i_19] [i_20] [i_19])) && (((/* implicit */_Bool) var_11)))))));
                        arr_76 [i_15] [i_15] [i_20] [i_21] [(_Bool)1] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) 3617707424054372641LL)) ? (((/* implicit */int) arr_71 [(short)1] [i_23] [i_23] [i_23] [i_15] [i_23])) : (((/* implicit */int) arr_68 [i_15 + 1] [15LL] [15LL] [i_23])))) : (((arr_0 [i_23] [i_23]) ? (((/* implicit */int) (unsigned short)4085)) : (((/* implicit */int) var_6))))));
                    }
                    for (int i_24 = 0; i_24 < 18; i_24 += 2) 
                    {
                        arr_80 [i_15 + 3] [i_15 + 3] [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_0)) ? (7ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)39329))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (unsigned short)18952))))))));
                        var_55 = ((/* implicit */unsigned char) min((var_55), (((/* implicit */unsigned char) (~(((5734634013847204719ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                    }
                }
                for (signed char i_25 = 0; i_25 < 18; i_25 += 3) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        var_56 = ((/* implicit */_Bool) (unsigned char)156);
                        var_57 &= ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)250)) >> (((((/* implicit */int) (unsigned short)13983)) - (13964))))) ^ (((/* implicit */int) (signed char)57))));
                    }
                    for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) /* same iter space */
                    {
                        var_58 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                        var_59 = (!(((/* implicit */_Bool) arr_79 [i_27] [i_27 - 1] [i_27 - 1] [i_27] [i_27 - 1])));
                    }
                    for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) /* same iter space */
                    {
                        arr_89 [i_15] [i_15] [i_15] [i_15 - 1] [i_15] [i_15 - 1] = ((/* implicit */unsigned short) var_11);
                        var_60 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) % (arr_39 [(_Bool)1] [i_28]))))));
                    }
                    var_61 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)123)) : (((/* implicit */int) (unsigned char)25))));
                }
                for (unsigned long long int i_29 = 0; i_29 < 18; i_29 += 2) 
                {
                    var_62 ^= ((((/* implicit */int) var_1)) ^ (-2132149944));
                    var_63 = ((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (-1238246790) : (((/* implicit */int) (_Bool)1)))) != (((/* implicit */int) arr_48 [i_15]))));
                    var_64 ^= ((/* implicit */long long int) (unsigned short)40422);
                }
            }
        }
        var_65 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23251)) ? (((/* implicit */long long int) ((/* implicit */int) arr_88 [i_15 + 2] [i_15 + 2] [i_15] [i_15] [i_15] [i_15 + 1]))) : (var_2)));
    }
}
