/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215766
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
    var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) min(((unsigned short)5435), (((/* implicit */unsigned short) (short)17866))))), (min((((/* implicit */unsigned int) var_1)), (4160413902U)))))), (max((((/* implicit */unsigned long long int) min((((/* implicit */short) (_Bool)1)), ((short)13367)))), (max((((/* implicit */unsigned long long int) (unsigned char)159)), (2ULL))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 18; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */long long int) var_5))))), (max((18446744073709551614ULL), (((/* implicit */unsigned long long int) var_5)))))), (max((min((3416706615025665381ULL), (((/* implicit */unsigned long long int) arr_0 [i_0])))), (max((((/* implicit */unsigned long long int) 4605698296621740782LL)), (2ULL)))))));
        var_15 = ((/* implicit */long long int) min((min((min((((/* implicit */unsigned long long int) 5035233405546057665LL)), (18446744073709551614ULL))), (max((4596203833359950450ULL), (((/* implicit */unsigned long long int) -1353283183)))))), (max((min((14469412302737549707ULL), (14469412302737549707ULL))), (((/* implicit */unsigned long long int) max((var_5), (var_11))))))));
        var_16 = min((max((max((2358461378038777131LL), (((/* implicit */long long int) 2147483647)))), (8734511096009443617LL))), (((/* implicit */long long int) min((min((((/* implicit */int) (_Bool)1)), (arr_1 [i_0] [16ULL]))), (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
    }
    for (signed char i_1 = 3; i_1 < 18; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (max((min((18446744073709551614ULL), (((/* implicit */unsigned long long int) max((4294967295U), (((/* implicit */unsigned int) (short)-19869))))))), (min((((/* implicit */unsigned long long int) max((4160413902U), (((/* implicit */unsigned int) (_Bool)0))))), (max((5859307026066531526ULL), (15030037458683886240ULL)))))))));
            arr_8 [i_1] [i_1] [i_1] &= min((((/* implicit */short) (_Bool)0)), ((short)-1));
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */short) max((arr_7 [i_2] [i_2] [i_2]), (((/* implicit */unsigned char) (_Bool)1))))), (min((((/* implicit */short) (unsigned char)6)), ((short)27398)))))), (min((min((((/* implicit */unsigned long long int) var_3)), (12082444668307168438ULL))), (((/* implicit */unsigned long long int) max((18014398509219840LL), (((/* implicit */long long int) (signed char)-122))))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_3 = 2; i_3 < 17; i_3 += 4) 
            {
                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) -1053312086))));
                arr_12 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */signed char) (short)-13368);
            }
            for (long long int i_4 = 0; i_4 < 19; i_4 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 1; i_5 < 16; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        {
                            arr_22 [i_1] [i_2] [i_2] [(_Bool)1] [(signed char)2] [i_6] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) max((min((arr_13 [2ULL] [i_2] [i_1]), (((/* implicit */long long int) arr_1 [i_1] [i_1])))), (((/* implicit */long long int) max((((/* implicit */int) arr_9 [i_1] [i_1] [i_1] [4ULL])), (arr_1 [i_4] [i_4]))))))), (max((min((15030037458683886233ULL), (18446744073709551615ULL))), (((/* implicit */unsigned long long int) 1793489775))))));
                            arr_23 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_4)), (-1850527026)))), (min((((/* implicit */unsigned long long int) var_11)), (18446744073709551615ULL))))), (min((min((8346159358693488053ULL), (13871260010979974897ULL))), (((/* implicit */unsigned long long int) min((633203085), (((/* implicit */int) (unsigned char)76)))))))));
                        }
                    } 
                } 
                arr_24 [i_1] = ((/* implicit */long long int) max((max((min((arr_11 [i_2] [i_2] [4LL] [i_2]), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) min((arr_14 [i_1] [i_1] [i_1] [i_4]), (((/* implicit */long long int) (short)31929))))))), (max((min((3262088250243711576ULL), (9291360917017322505ULL))), (min((18446744073709551615ULL), (2ULL)))))));
                /* LoopSeq 4 */
                for (int i_7 = 4; i_7 < 18; i_7 += 2) 
                {
                    var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) max(((short)31929), (((/* implicit */short) (unsigned char)22))))), (max((max((((/* implicit */unsigned long long int) -3822119469694763745LL)), (2ULL))), (((/* implicit */unsigned long long int) 70368744177663LL)))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 19; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) -558271614))));
                        var_22 *= ((/* implicit */long long int) (signed char)0);
                        arr_33 [i_1] [i_2] [i_1] [i_1] [i_8] = ((/* implicit */_Bool) 14469412302737549692ULL);
                    }
                    for (int i_9 = 1; i_9 < 16; i_9 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) min((1826574515), (((/* implicit */int) (signed char)34))))), (max((((/* implicit */long long int) (short)1)), (-9183608458378893633LL))))), (((/* implicit */long long int) (short)32767))));
                        arr_36 [i_4] = ((/* implicit */_Bool) max((max((min((((/* implicit */unsigned long long int) (short)-1)), (17866092567380032680ULL))), (min((17179869183ULL), (((/* implicit */unsigned long long int) var_0)))))), (max((max((17179869183ULL), (6ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-1)), (arr_31 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                        arr_37 [i_1] [i_2] [i_4] [i_2] [i_2] [i_9] = ((/* implicit */unsigned char) min((17866092567380032669ULL), (((/* implicit */unsigned long long int) (unsigned char)132))));
                    }
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (max((min((max((((/* implicit */unsigned long long int) var_1)), (5ULL))), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */long long int) var_4))))))), (max((min((((/* implicit */unsigned long long int) 16U)), (7801268963188744699ULL))), (((/* implicit */unsigned long long int) max((arr_13 [i_1] [i_2] [i_2]), (((/* implicit */long long int) var_11)))))))))));
                    arr_41 [i_10] = min((830037939), (((/* implicit */int) (short)16857)));
                }
                for (int i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                {
                    arr_46 [i_1] [i_11] [i_4] [i_2] [i_1] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)45863)), (59172921U)))), (min((arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), (17179869190ULL))))), (max((((/* implicit */unsigned long long int) 5686109072556583948LL)), (min((17179869183ULL), (3977331770972001909ULL)))))));
                    var_25 = ((/* implicit */unsigned char) max((max((min((3977331770972001889ULL), (((/* implicit */unsigned long long int) 2147483647)))), (((/* implicit */unsigned long long int) max((arr_17 [i_1] [0U] [0U] [i_1] [i_4] [0U]), ((signed char)3)))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned short) (_Bool)1)), (var_13)))), (max((((/* implicit */long long int) var_8)), (var_2))))))));
                }
                for (int i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
                {
                    arr_49 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_12] [i_12] = ((/* implicit */unsigned int) max((max((min((arr_39 [i_1] [i_2] [i_1] [i_1]), (14869947314962999393ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)0)), (1742159207U)))))), (((/* implicit */unsigned long long int) min((min((var_9), (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_8)), (arr_10 [i_2] [i_2] [i_2] [i_1])))))))));
                    var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) max((max((min((((/* implicit */unsigned long long int) arr_43 [i_1] [i_2] [i_4] [i_1])), (arr_6 [i_1] [(signed char)4] [(_Bool)1]))), (min((((/* implicit */unsigned long long int) arr_29 [0ULL] [i_2] [i_2] [0ULL] [0ULL])), (9760376440307208572ULL))))), (max((max((14869947314962999368ULL), (((/* implicit */unsigned long long int) var_0)))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */long long int) arr_48 [i_12]))))))))))));
                    arr_50 [i_1] [i_2] [i_4] [i_1] = max((((/* implicit */unsigned int) max((min((arr_25 [i_1] [i_4] [i_1] [i_1]), (((/* implicit */int) arr_47 [i_1] [i_1] [i_1] [i_2] [i_4] [i_2])))), (((/* implicit */int) min((((/* implicit */short) (signed char)0)), (var_10))))))), (max((min((2286197881U), (((/* implicit */unsigned int) (short)-28335)))), (((/* implicit */unsigned int) min((var_1), (((/* implicit */short) var_0))))))));
                    arr_51 [i_1] [i_1] = ((/* implicit */unsigned long long int) min(((signed char)-87), (((/* implicit */signed char) (_Bool)1))));
                }
            }
        }
        var_27 -= ((/* implicit */signed char) max((max((max((((/* implicit */unsigned long long int) (_Bool)1)), (2ULL))), (((/* implicit */unsigned long long int) min(((unsigned char)20), (((/* implicit */unsigned char) arr_47 [i_1] [i_1] [(signed char)6] [i_1] [(signed char)6] [i_1]))))))), (min((min((((/* implicit */unsigned long long int) var_1)), (11805056046732181679ULL))), (((/* implicit */unsigned long long int) max((16777215), (((/* implicit */int) (unsigned char)13)))))))));
    }
    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) 
    {
        var_28 ^= max((-3010808255811801252LL), (((/* implicit */long long int) (unsigned char)96)));
        arr_54 [i_13] [i_13] = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((max((var_2), (arr_13 [i_13] [i_13] [i_13]))), (min((-1237608166219771367LL), (((/* implicit */long long int) (short)28311))))))), (min((min((18446744073709551597ULL), (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (min((((/* implicit */unsigned long long int) arr_4 [i_13] [i_13])), (9288225765887366475ULL)))))));
        arr_55 [i_13] = ((/* implicit */short) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */short) arr_47 [16] [(signed char)14] [i_13] [16] [i_13] [i_13])), (arr_15 [i_13] [14] [i_13])))), (max((((/* implicit */long long int) var_4)), (var_9)))))), (max((max((((/* implicit */unsigned long long int) (signed char)63)), (arr_6 [i_13] [i_13] [i_13]))), (max((((/* implicit */unsigned long long int) 4246906715U)), (14469412302737549719ULL)))))));
        var_29 = ((/* implicit */unsigned long long int) min((var_29), (min((((/* implicit */unsigned long long int) -16777215)), (17118990505212709720ULL)))));
    }
}
