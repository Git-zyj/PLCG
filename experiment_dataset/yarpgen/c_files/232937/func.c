/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232937
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232937 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232937
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
    var_14 = var_5;
    var_15 -= (((!(((/* implicit */_Bool) var_13)))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((1886556228625170501ULL) & (951302724523199505ULL))) : (15478956761197001038ULL))) : (var_10));
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) - (var_2)))) ? (((((/* implicit */_Bool) var_0)) ? ((-(var_12))) : (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    var_17 = (+(max((16560187845084381115ULL), (((var_12) << (((var_12) - (3441434411965297628ULL))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_18 = min((((var_8) | (arr_1 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0]))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((~(594277106462699147ULL))) >= (((((/* implicit */_Bool) arr_5 [11ULL])) ? (var_7) : (arr_4 [i_0] [i_1 + 1])))));
            arr_7 [i_0] = arr_2 [i_0];
            var_19 = 9007199254740991ULL;
        }
        for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
        {
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) ((arr_1 [i_2 + 1]) - (arr_9 [i_2 + 1] [i_2 + 2] [i_2 - 1]))))));
            var_21 = ((((/* implicit */_Bool) ((arr_5 [i_0]) ^ (17852466967246852472ULL)))) ? (((((/* implicit */_Bool) 5821665105187147551ULL)) ? (10175071995631922355ULL) : ((-(16505927953824405392ULL))))) : (2455432581237186367ULL));
            var_22 = 16560187845084381115ULL;
            var_23 ^= ((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) max((15484969451556350550ULL), (8698481552974067854ULL)))) ? (((((/* implicit */_Bool) var_4)) ? (arr_3 [i_0] [16ULL] [i_0]) : (var_7))) : (max((var_10), (2961774622153201066ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) != (arr_3 [i_2 + 2] [i_2 + 2] [i_2 + 1]))))));
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (unsigned long long int i_5 = 3; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_18 [i_0] [5ULL] [i_0] [i_5] [i_0] = max((var_5), (((((/* implicit */_Bool) (-(var_7)))) ? (var_12) : (((((/* implicit */_Bool) var_12)) ? (arr_8 [i_5]) : (var_8))))));
                            arr_19 [i_0] [i_2 + 1] [i_3 - 1] [i_2 + 1] [i_0] &= var_9;
                            var_24 &= (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 17852466967246852463ULL)) ? (var_12) : (arr_17 [i_0] [i_2 + 2] [i_3] [i_2 + 2] [i_5])))) ? (var_0) : (arr_15 [i_2 - 1] [i_3 + 1] [i_5 + 2]))));
                            var_25 += (+(var_11));
                        }
                    } 
                } 
            } 
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
    {
        var_26 = max((max((arr_22 [i_6] [i_6]), (12190886130435797038ULL))), ((+(arr_22 [i_6] [i_6]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 2) 
        {
            var_27 = ((((/* implicit */_Bool) ((18446744073709551615ULL) * ((-(17852466967246852463ULL)))))) ? (16796276173820303519ULL) : (((var_9) - (arr_5 [i_7]))));
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 4) 
            {
                for (unsigned long long int i_9 = 3; i_9 < 8; i_9 += 4) 
                {
                    for (unsigned long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                    {
                        {
                            arr_35 [i_6] [i_7] [i_9] [i_9 + 2] [i_10] = ((((1664740001663483793ULL) > (arr_31 [i_10] [i_10] [i_9 + 1] [6ULL] [i_9 + 1] [i_8]))) ? (((((/* implicit */_Bool) arr_11 [i_9 + 1] [i_9] [i_9 + 3] [i_6])) ? (arr_29 [5ULL] [8ULL] [i_9 + 3] [i_8] [3ULL] [1ULL]) : (arr_29 [i_10] [4ULL] [i_9 - 2] [i_9] [i_9] [i_9]))) : (max((17916127474437761934ULL), (3068833110861150414ULL))));
                            var_28 = ((((/* implicit */_Bool) min((arr_11 [i_6] [i_7] [i_9 + 1] [i_9 + 1]), (((/* implicit */unsigned long long int) ((17852466967246852463ULL) < (12625078968522404065ULL))))))) ? (((((/* implicit */_Bool) var_3)) ? (var_13) : (var_7))) : (arr_12 [i_7] [i_8] [i_9]));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned long long int i_11 = 2; i_11 < 9; i_11 += 2) 
        {
            arr_40 [i_6] [i_6] = var_1;
            /* LoopNest 3 */
            for (unsigned long long int i_12 = 3; i_12 < 10; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        {
                            arr_48 [6ULL] [6ULL] [i_13] [i_12] = (~(((((/* implicit */_Bool) arr_15 [16ULL] [i_13] [i_13])) ? (var_13) : (17ULL))));
                            var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_6] [i_11 + 2] [i_12 + 1] [i_11 + 1])) || (((/* implicit */_Bool) var_11)))))));
                            var_30 *= ((/* implicit */unsigned long long int) ((arr_25 [i_11 + 2]) == (9273556415580792236ULL)));
                            arr_49 [i_12] [i_11 - 2] [i_11] [5ULL] [i_11] = ((6255857943273754577ULL) & (((((/* implicit */_Bool) 118163442741099609ULL)) ? (var_1) : (17852466967246852468ULL))));
                            arr_50 [i_6] [i_6] [i_6] [i_12] [i_6] [i_6] [i_6] = ((((/* implicit */_Bool) var_12)) ? (arr_36 [i_12 - 2] [i_11 + 2]) : (var_7));
                        }
                    } 
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
            {
                arr_53 [i_11] [i_11 - 2] = (~(((unsigned long long int) 9251918266204293180ULL)));
                var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((arr_51 [i_6]) == (((var_10) * (var_2))))))));
            }
            for (unsigned long long int i_16 = 2; i_16 < 9; i_16 += 4) 
            {
                var_32 = var_3;
                /* LoopNest 2 */
                for (unsigned long long int i_17 = 3; i_17 < 8; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 2; i_18 < 8; i_18 += 1) 
                    {
                        {
                            arr_62 [i_6] [i_6] [i_18] [i_18] [i_11 - 1] [i_11] = arr_2 [i_16];
                            arr_63 [i_18] [i_11 + 1] [0ULL] [i_17 + 3] [i_18] = ((((/* implicit */_Bool) arr_9 [i_6] [i_11 + 1] [16ULL])) ? (5821665105187147551ULL) : (18328580630968452008ULL));
                            var_33 = (-(12190886130435797044ULL));
                            var_34 = ((/* implicit */unsigned long long int) min((var_34), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (118163442741099607ULL) : (15450200244863154430ULL)))) ? ((+(var_10))) : (arr_31 [i_6] [i_11] [i_11] [i_16 + 2] [i_17 - 1] [i_18 + 3])))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    arr_67 [5ULL] = arr_23 [1ULL];
                    arr_68 [i_6] [i_11 + 1] [8ULL] [i_16] [i_19] |= ((((/* implicit */_Bool) 15624596799181957420ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_6] [0ULL] [i_16] [0ULL] [i_19] [i_19])))))) : (((118163442741099622ULL) * (var_6))));
                }
                for (unsigned long long int i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_23 [i_6]))));
                    arr_71 [i_20] [i_16] [i_11] [i_20] = arr_11 [i_6] [i_11] [i_16 - 2] [i_20];
                }
                for (unsigned long long int i_21 = 0; i_21 < 11; i_21 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_22 = 1; i_22 < 10; i_22 += 4) 
                    {
                        arr_78 [9ULL] [i_11 + 1] [9ULL] [9ULL] [i_22 - 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_4 [i_11] [i_22]))))));
                        var_36 = ((unsigned long long int) 1960345279161928971ULL);
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 11; i_23 += 3) 
                    {
                        var_37 = ((((/* implicit */_Bool) arr_47 [i_11 + 2])) ? (var_9) : (var_5));
                        var_38 = ((/* implicit */unsigned long long int) min((var_38), ((~(arr_15 [i_11] [i_16 + 1] [i_11])))));
                        var_39 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_47 [i_6])) ? (arr_13 [i_6]) : (arr_52 [3ULL] [8ULL] [8ULL]))) > ((-(0ULL)))));
                        var_40 = (~(var_12));
                    }
                    arr_82 [i_6] [i_6] [i_6] [i_6] &= 18446744073709551615ULL;
                    var_41 = ((/* implicit */unsigned long long int) min((var_41), (((((/* implicit */_Bool) arr_77 [i_11] [i_11 + 1] [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11])) ? (0ULL) : (18446744073709551615ULL)))));
                    var_42 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 17279897762079202162ULL)))) || (((/* implicit */_Bool) arr_34 [i_16 - 2] [i_16 + 1] [i_16 + 1] [i_16 + 2] [i_16 - 2]))));
                }
                for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 3) /* same iter space */
                {
                    var_43 ^= ((((/* implicit */_Bool) (+(var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551603ULL)))))) : (arr_83 [i_6] [i_11] [i_16] [i_24]));
                    var_44 = ((((/* implicit */_Bool) var_8)) ? (var_6) : (6255857943273754577ULL));
                }
                var_45 = ((/* implicit */unsigned long long int) min((var_45), (((((/* implicit */_Bool) (-(arr_16 [8ULL] [i_6] [i_6] [i_11] [i_11] [i_11] [10ULL])))) ? (arr_10 [i_11 - 2] [i_11 - 2] [20ULL] [i_16 - 2]) : (((((/* implicit */_Bool) 18446744073709551612ULL)) ? (arr_43 [i_6] [i_16] [i_6] [i_6]) : (8659942624045560304ULL)))))));
            }
            for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_26 = 1; i_26 < 9; i_26 += 1) 
                {
                    for (unsigned long long int i_27 = 0; i_27 < 11; i_27 += 4) 
                    {
                        {
                            var_46 = ((/* implicit */unsigned long long int) min((var_46), (var_7)));
                            var_47 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                            arr_92 [i_6] [i_26] [i_25] = ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((((/* implicit */_Bool) 6255857943273754578ULL)) ? (arr_29 [i_6] [i_11 - 2] [i_25] [i_26] [i_6] [3ULL]) : (1ULL))) : (((unsigned long long int) var_9)));
                        }
                    } 
                } 
                var_48 += ((var_4) + (0ULL));
            }
            for (unsigned long long int i_28 = 2; i_28 < 8; i_28 += 4) 
            {
                var_49 = ((((/* implicit */_Bool) arr_21 [i_28 - 2])) ? (118163442741099635ULL) : (var_1));
                /* LoopNest 2 */
                for (unsigned long long int i_29 = 1; i_29 < 8; i_29 += 4) 
                {
                    for (unsigned long long int i_30 = 1; i_30 < 8; i_30 += 1) 
                    {
                        {
                            var_50 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18446744073709551591ULL))));
                            var_51 = ((/* implicit */unsigned long long int) min((var_51), (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) 5093054409997670984ULL)) ? (arr_58 [i_28] [i_28] [0ULL] [i_28]) : (arr_37 [i_11] [i_29]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                            var_52 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) * (((/* implicit */int) ((18446744073709551615ULL) == (var_13))))));
                        }
                    } 
                } 
                var_53 = ((unsigned long long int) (~(9255831206420690369ULL)));
            }
            /* LoopNest 3 */
            for (unsigned long long int i_31 = 0; i_31 < 11; i_31 += 4) 
            {
                for (unsigned long long int i_32 = 0; i_32 < 11; i_32 += 1) 
                {
                    for (unsigned long long int i_33 = 0; i_33 < 11; i_33 += 4) 
                    {
                        {
                            arr_109 [i_6] [i_6] [i_6] [i_32] [i_32] = ((((/* implicit */_Bool) (~(arr_4 [i_6] [i_11 - 2])))) ? (9190912867288861246ULL) : (var_2));
                            var_54 = 0ULL;
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_34 = 1; i_34 < 8; i_34 += 1) 
        {
            var_55 = ((((/* implicit */_Bool) (-(((unsigned long long int) 18446744073709551615ULL))))) ? ((-(((((/* implicit */_Bool) var_11)) ? (arr_24 [i_6] [i_34] [8ULL]) : (arr_111 [i_34]))))) : (((((/* implicit */_Bool) 18328580630968451969ULL)) ? (2902103435998816783ULL) : (18328580630968451981ULL))));
            arr_112 [i_6] [i_34 + 3] = ((((/* implicit */_Bool) (-(arr_17 [i_34 - 1] [i_34 - 1] [i_34 + 2] [i_34 - 1] [18ULL])))) ? (max(((-(var_7))), (3724223474350033881ULL))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_27 [i_6] [i_6] [10ULL] [10ULL]) : (var_2)))) ? ((+(arr_97 [i_34] [i_34 + 2] [i_34 - 1] [i_34] [i_6]))) : (var_11))));
            /* LoopNest 3 */
            for (unsigned long long int i_35 = 2; i_35 < 9; i_35 += 2) 
            {
                for (unsigned long long int i_36 = 0; i_36 < 11; i_36 += 4) 
                {
                    for (unsigned long long int i_37 = 0; i_37 < 11; i_37 += 3) 
                    {
                        {
                            arr_123 [i_37] = 14191840037952613061ULL;
                            arr_124 [i_6] [3ULL] [i_34] [i_37] [i_36] [0ULL] = min((min((((arr_107 [i_6] [i_34 + 2] [i_6] [i_36] [5ULL]) & (9786801449663991302ULL))), (max((var_0), (4254904035756938541ULL))))), ((-((~(18446744073709551615ULL))))));
                        }
                    } 
                } 
            } 
            var_56 = ((unsigned long long int) (-(((unsigned long long int) arr_4 [i_6] [i_34]))));
        }
        for (unsigned long long int i_38 = 0; i_38 < 11; i_38 += 4) 
        {
            var_57 = ((((/* implicit */_Bool) (~(((18446744073709551591ULL) ^ (6946861224137310864ULL)))))) ? ((~(var_2))) : (((arr_4 [i_38] [i_38]) | (((var_1) | (arr_106 [i_6] [9ULL] [i_38]))))));
            var_58 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9395070464871134824ULL)) ? (arr_5 [i_6]) : (var_13)))) ? (((6255857943273754572ULL) / (8ULL))) : (((((/* implicit */_Bool) arr_5 [i_6])) ? (arr_5 [i_6]) : (var_13))));
        }
        var_59 = ((/* implicit */unsigned long long int) (((~(((((/* implicit */_Bool) var_8)) ? (var_9) : (var_12))))) == ((+(((((/* implicit */_Bool) arr_118 [i_6] [i_6])) ? (12190886130435797053ULL) : (var_10)))))));
        var_60 ^= min(((+(arr_55 [i_6] [i_6] [i_6] [i_6]))), (min((var_11), (4201846545218011365ULL))));
    }
    for (unsigned long long int i_39 = 1; i_39 < 17; i_39 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_40 = 0; i_40 < 18; i_40 += 4) 
        {
            for (unsigned long long int i_41 = 0; i_41 < 18; i_41 += 1) 
            {
                for (unsigned long long int i_42 = 0; i_42 < 18; i_42 += 1) 
                {
                    {
                        arr_136 [i_39] [i_40] [i_39] [i_42] = min((((unsigned long long int) 4254904035756938557ULL)), (((((/* implicit */_Bool) 5661827426632595927ULL)) ? (14244897528491540251ULL) : (((((/* implicit */_Bool) 10222938104179057336ULL)) ? (18446744073709551615ULL) : (17930882379258012174ULL))))));
                        var_61 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_8)) ? (9065811574919719893ULL) : (4254904035756938541ULL))), (((((/* implicit */_Bool) arr_8 [i_39])) ? (14191840037952613060ULL) : (16941629433947136226ULL)))))) ? (var_10) : (min((((unsigned long long int) arr_132 [i_39] [i_39] [i_39])), (arr_131 [i_39] [i_40] [i_39]))));
                        var_62 ^= (~(((((/* implicit */_Bool) 7925415129971080068ULL)) ? (arr_0 [i_39 - 1]) : (((((/* implicit */_Bool) 2430183796323193610ULL)) ? (var_0) : (4443504831393066714ULL))))));
                    }
                } 
            } 
        } 
        var_63 = ((/* implicit */unsigned long long int) min((var_63), (max((min((arr_0 [i_39 + 1]), (14426847791709312434ULL))), (((((/* implicit */_Bool) var_10)) ? (arr_128 [i_39]) : (8344093821265150024ULL)))))));
        var_64 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 4254904035756938555ULL)) ? (arr_131 [i_39 + 1] [i_39 + 1] [i_39 - 1]) : (arr_131 [i_39 - 1] [i_39 + 1] [i_39 + 1]))) == (max((((((/* implicit */_Bool) 17657600385330674953ULL)) ? (arr_0 [2ULL]) : (9716956307586566172ULL))), (arr_133 [i_39] [i_39] [i_39] [11ULL])))));
        var_65 -= ((((/* implicit */_Bool) 13416478629450139640ULL)) ? (18177557046934072899ULL) : (5572212476470256872ULL));
    }
}
