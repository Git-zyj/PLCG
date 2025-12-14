/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201425
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (var_4)))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) (((-(var_3))) < ((-(16777215ULL))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 7487590878862388341ULL)) ? (5565368101317349515ULL) : (var_3))) <= ((-(5565368101317349522ULL)))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_6 [i_1] = (((-(arr_1 [i_1]))) + (arr_1 [i_1]));
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            var_21 = min((1745032697363932333ULL), (2629775380018300985ULL));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_3 = 1; i_3 < 9; i_3 += 4) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned long long int) min((var_22), (274877906943ULL)));
                var_23 = ((1745032697363932345ULL) >> (((((((/* implicit */_Bool) var_7)) ? (6536386989397544060ULL) : (12614759723041111004ULL))) - (6536386989397544004ULL))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) /* same iter space */
            {
                var_24 += ((unsigned long long int) max((arr_0 [i_4 - 1]), (arr_0 [i_4 + 2])));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 1) 
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_9 [i_4 - 1] [5ULL] [i_4 - 1]), (15638485554458796269ULL)))) || (((/* implicit */_Bool) max((18446744073692774401ULL), (18446744073709551615ULL))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 3) 
                    {
                        arr_19 [i_1] [i_1] [i_2] [i_5] [i_6 - 1] [i_6] [i_6 + 1] = ((unsigned long long int) max((arr_17 [i_6 - 1] [i_6] [i_6] [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6]), (var_5)));
                        arr_20 [i_1] [i_2] [i_4] [i_2] [i_6 + 3] = ((16602575318347778635ULL) + (6108025791979749409ULL));
                        arr_21 [i_2] = ((unsigned long long int) ((((/* implicit */_Bool) max((8233076427385890826ULL), (15695119234646538505ULL)))) ? (min((1679186007815821851ULL), (2111480012501936609ULL))) : (((unsigned long long int) 14370452700842210100ULL))));
                    }
                    var_26 = var_18;
                }
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    var_27 = max((18116951859371189047ULL), (2629775380018300999ULL));
                    var_28 = (-(((unsigned long long int) max((11805228083737053206ULL), (8314776947735076965ULL)))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
                    {
                        var_29 = 16777213ULL;
                        var_30 = (-(arr_16 [i_7 + 2] [i_4 + 2] [i_4 - 1] [i_4 + 2]));
                        arr_29 [i_2] = (-(var_9));
                        arr_30 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_24 [6ULL] [i_2] [i_2] [i_2]) != (14675983129815372226ULL))))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
                    {
                        arr_35 [2ULL] [i_2] [i_4] [i_4 + 2] [i_7] [i_9] |= ((unsigned long long int) 18446744073709551610ULL);
                        var_31 = ((((/* implicit */_Bool) (~(arr_1 [i_7 + 2])))) ? ((-(5935014141609017465ULL))) : (((10276231643195947130ULL) - (arr_7 [i_2] [i_4 + 2] [i_2]))));
                        arr_36 [i_1] [i_1] [i_2] [i_4 + 2] [i_2] [i_7] [i_9] = ((unsigned long long int) (-(var_5)));
                    }
                    arr_37 [5ULL] [i_2] [i_2] [i_2] [i_2] [i_2] = 1429720645872958692ULL;
                    arr_38 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((unsigned long long int) 13427535299551130396ULL);
                }
                var_32 = 18446744073709551603ULL;
                var_33 = max((arr_10 [10ULL] [6ULL] [7ULL]), ((-(arr_18 [i_4 - 1] [1ULL] [i_1] [i_1] [i_1]))));
            }
            for (unsigned long long int i_10 = 1; i_10 < 9; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 4) 
                {
                    var_34 = 12881375972392202097ULL;
                    var_35 = ((/* implicit */unsigned long long int) ((arr_24 [i_1] [i_1] [i_2] [i_1]) < (5807032985813537576ULL)));
                    var_36 = ((arr_15 [i_11] [i_11] [i_11 + 1] [i_11] [i_11]) - (arr_17 [i_11] [i_2] [i_11] [i_11] [i_11 + 1] [i_10] [i_2]));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        var_37 = (-(arr_5 [i_11 + 1] [i_10 - 1]));
                        var_38 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) ((arr_33 [i_11 + 2] [i_11] [i_10 + 2]) != (var_2))))));
                        arr_48 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((arr_33 [i_1] [i_2] [i_10]) > (((((/* implicit */_Bool) 14334922362141520685ULL)) ? (16701711376345619285ULL) : (var_8)))));
                        var_40 = ((((/* implicit */_Bool) (-(11223679829472991651ULL)))) ? (((unsigned long long int) arr_33 [10ULL] [3ULL] [i_11 + 1])) : ((-(15947238232377744518ULL))));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        var_41 = ((unsigned long long int) var_5);
                        var_42 = ((/* implicit */unsigned long long int) max((var_42), ((-(arr_10 [i_10 - 1] [i_2] [i_10 - 1])))));
                    }
                    for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 4) 
                    {
                        var_43 += ((unsigned long long int) 18446744073709551615ULL);
                        var_44 = ((var_18) & (17824117449540030265ULL));
                        arr_53 [i_10] [i_11] [i_2] = var_11;
                    }
                    for (unsigned long long int i_15 = 3; i_15 < 10; i_15 += 1) 
                    {
                        var_45 ^= (-(var_5));
                        arr_57 [i_2] [i_2] [i_2] [i_2] [i_2] = (-(2147483647ULL));
                    }
                }
                arr_58 [i_2] = ((unsigned long long int) ((18446744073709551601ULL) != (arr_8 [i_1])));
                var_46 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) 9113414435368155049ULL)) ? (1525286358091322665ULL) : (7548055855762660979ULL))), (((unsigned long long int) var_5)))) == (min(((-(17331892947957375525ULL))), (((((/* implicit */_Bool) 7317795848292927608ULL)) ? (10ULL) : (8181398965614494525ULL)))))));
                arr_59 [i_2] [i_2] = 8276467076897745326ULL;
                var_47 = (((+(12881375972392202101ULL))) ^ (((((/* implicit */_Bool) 5807032985813537566ULL)) ? (9445005439808431302ULL) : (5019208774158421227ULL))));
            }
        }
    }
    var_48 *= ((((/* implicit */_Bool) (+(var_0)))) ? (min((var_6), (var_18))) : (var_15));
}
