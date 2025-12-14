/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204742
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) arr_1 [5ULL]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    arr_11 [i_0] [i_1] [i_2] [i_3] [(short)3] [5ULL] = -1420008383;
                    /* LoopSeq 4 */
                    for (short i_4 = 2; i_4 < 9; i_4 += 3) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) max((var_16), (arr_3 [2LL] [i_1] [(short)1])));
                        arr_14 [i_0] [i_1] [i_0] = arr_7 [i_1] [i_1] [(unsigned short)2] [8];
                        var_17 = ((/* implicit */int) (+(((((/* implicit */_Bool) 17544041293334943289ULL)) ? (((/* implicit */unsigned long long int) 1420008400)) : (arr_7 [i_1] [3] [i_3] [5])))));
                    }
                    for (short i_5 = 2; i_5 < 9; i_5 += 3) /* same iter space */
                    {
                        var_18 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_2] [i_2] [i_3] [i_5]))) != (arr_17 [i_1]))))));
                        arr_18 [i_1] [i_1] [i_3] [i_3] [i_5] [i_5] [i_0] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) 3851402413962444588LL)) ? (arr_12 [(short)2] [i_5 + 1]) : (((/* implicit */long long int) -1420008415))))));
                    }
                    for (short i_6 = 2; i_6 < 9; i_6 += 3) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) (short)-1)) ? (14923657273082242853ULL) : (arr_17 [i_6 + 1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)62708))) != (arr_12 [i_0] [i_1]))))))))));
                        var_20 = ((/* implicit */short) arr_10 [i_3] [i_1]);
                    }
                    for (int i_7 = 2; i_7 < 9; i_7 += 2) 
                    {
                        var_21 *= ((/* implicit */unsigned long long int) (unsigned short)27710);
                        var_22 = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) arr_21 [i_0] [i_1] [i_2] [i_3] [i_1]))) << (((arr_2 [(short)4]) - (717933042)))));
                    }
                }
                for (long long int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    /* LoopSeq 1 */
                    for (int i_9 = 4; i_9 < 6; i_9 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) -1420008383))) | (((/* implicit */int) ((arr_3 [i_0] [3LL] [i_8]) <= (((/* implicit */int) (unsigned short)37826)))))));
                        var_24 = ((/* implicit */unsigned short) ((14923657273082242836ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1LL))))));
                        var_25 = ((/* implicit */int) ((((arr_12 [i_0] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))))) << ((((+(((/* implicit */int) (short)252)))) - (252)))));
                    }
                    var_26 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((12127373335141146228ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)37826))))))));
                    arr_29 [i_0] [4] |= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)27737)) ? (2210461273022805459ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27690))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL))))))));
                    arr_30 [i_0] [8ULL] [i_2] [i_8] = ((/* implicit */int) ((((/* implicit */long long int) (-(260096)))) | (((long long int) 1152921504606846976LL))));
                    arr_31 [i_8] [i_8] [i_8] [0LL] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_1] [0ULL] [0ULL]);
                }
                /* LoopSeq 2 */
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    arr_34 [i_0] [i_10] = ((((/* implicit */int) (short)-7733)) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)37824))))));
                    arr_35 [i_10] [i_10] [i_2] [8ULL] [i_1] [i_10] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                    var_27 = (unsigned short)37827;
                }
                for (unsigned short i_11 = 2; i_11 < 9; i_11 += 4) 
                {
                    var_28 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (unsigned short)6318)))));
                    var_29 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_11]))))) ? (((unsigned long long int) 1615882609)) : (((unsigned long long int) (unsigned short)27711))));
                    var_30 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_0] [i_11] [i_11])) ? (1772017644) : (4094))) >= ((+(367222472)))));
                    var_31 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (-1560673668) : (267386880)))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11652))) - (arr_21 [i_0] [(short)2] [i_2] [8LL] [i_2]))));
                }
                var_32 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((865261539) > (-4094))))));
                arr_38 [i_0] [3] [9LL] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_0] [i_0] [i_2] [i_2])) == (arr_4 [i_0] [i_1] [i_2])))));
                var_33 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((131071ULL) > (((/* implicit */unsigned long long int) 480348400)))))));
            }
            for (unsigned long long int i_12 = 2; i_12 < 6; i_12 += 1) /* same iter space */
            {
                arr_41 [0LL] [i_1] [i_1] [i_12] |= ((/* implicit */short) ((((int) arr_3 [i_0] [i_1] [i_1])) <= (-4095)));
                var_34 = (~((-(((/* implicit */int) (short)-29908)))));
                var_35 = ((/* implicit */unsigned short) ((int) (~(((/* implicit */int) (short)124)))));
                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) ((((unsigned long long int) arr_15 [i_0] [i_12] [5] [i_12 - 2] [i_1])) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1] [i_12 + 1])) ? (arr_26 [3LL] [i_12] [i_0] [i_1] [i_0]) : (1514284625)))))))));
            }
            for (unsigned long long int i_13 = 2; i_13 < 6; i_13 += 1) /* same iter space */
            {
                var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((long long int) 2475946594525479421ULL)))));
                arr_46 [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((int) arr_21 [7LL] [i_1] [7LL] [i_1] [2LL]))) + ((-(5046502665996798958ULL))));
            }
            var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [9ULL] [i_1]))));
            var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) 13016283100113091225ULL))));
            arr_47 [i_0] = ((/* implicit */unsigned short) ((-865261540) > (((/* implicit */int) ((((/* implicit */unsigned long long int) 6800892034538359723LL)) < (32177488039279942ULL))))));
        }
        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)27709)) - (((/* implicit */int) (unsigned short)65535))))) ? (4094) : (((/* implicit */int) ((arr_42 [i_0] [i_0] [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))))))))));
        var_41 = ((/* implicit */short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((short) arr_12 [i_0] [i_0])))));
    }
    for (long long int i_14 = 1; i_14 < 17; i_14 += 2) 
    {
        var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) ((((/* implicit */long long int) ((((((-611252380) / (((/* implicit */int) (short)27903)))) + (2147483647))) >> (((((/* implicit */int) ((short) (short)-19929))) + (19957)))))) + (1LL))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            var_44 |= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 2147483647)) < (arr_50 [i_14] [i_15]))))) <= (((((/* implicit */_Bool) arr_49 [i_14])) ? (arr_51 [i_15]) : (arr_49 [i_14])))));
            /* LoopSeq 2 */
            for (long long int i_16 = 0; i_16 < 18; i_16 += 4) 
            {
                arr_55 [i_14] [i_16] [i_16] [i_14] = ((/* implicit */unsigned long long int) ((arr_51 [i_15]) - (((/* implicit */long long int) 65504))));
                var_45 = (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65522))))));
                var_46 = ((/* implicit */short) arr_51 [i_14]);
                arr_56 [i_14 + 1] [i_14 + 1] [i_16] = ((((-8584091552435188671LL) > (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6290))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_49 [i_14])) <= (16057581958258000334ULL)))) : (((/* implicit */int) (short)32767)));
                var_47 = (~((-2147483647 - 1)));
            }
            for (unsigned short i_17 = 0; i_17 < 18; i_17 += 2) 
            {
                var_48 = ((/* implicit */short) ((((unsigned long long int) 579943244)) << (((-7533504062640515751LL) + (7533504062640515814LL)))));
                var_49 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(arr_49 [(short)16])))) / (((unsigned long long int) arr_48 [i_14] [7]))));
            }
        }
        /* vectorizable */
        for (short i_18 = 0; i_18 < 18; i_18 += 2) 
        {
            var_50 = ((/* implicit */long long int) (unsigned short)65525);
            arr_62 [i_14] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)37827)))) / (((/* implicit */int) (unsigned short)65535))));
        }
        for (long long int i_19 = 0; i_19 < 18; i_19 += 1) 
        {
            arr_66 [i_19] = ((/* implicit */long long int) max((((/* implicit */int) ((((((/* implicit */_Bool) -1091548241)) ? (((/* implicit */int) (unsigned short)21)) : (2147483647))) > ((~(((/* implicit */int) arr_57 [2] [6]))))))), (-2147483647)));
            var_51 = ((/* implicit */unsigned short) 2088392061);
            arr_67 [i_14] [11LL] [i_19] = min((5), (max((((/* implicit */int) (!(((/* implicit */_Bool) (short)-18519))))), ((~(((/* implicit */int) (unsigned short)37827)))))));
            var_52 = (~(((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)10))) / (arr_49 [i_14]))) > (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10)) - (((/* implicit */int) (short)15421)))))))));
        }
    }
    var_53 = ((/* implicit */long long int) var_6);
    var_54 = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) var_5)))) + (((((/* implicit */_Bool) -814984867163579799LL)) ? (((/* implicit */int) (unsigned short)65515)) : (var_8))))) << (((((((-2088392061) == (((/* implicit */int) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) == (var_4))))) : ((~(var_2))))) - (16722025037647192853ULL)))));
}
