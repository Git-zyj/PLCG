/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234777
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) (unsigned short)41970))))) : (((/* implicit */int) var_7))))) || (((/* implicit */_Bool) var_4))));
    var_17 += ((/* implicit */unsigned short) (~(((/* implicit */int) min((max(((unsigned short)0), ((unsigned short)36270))), (var_1))))));
    /* LoopSeq 4 */
    for (unsigned short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            var_18 = ((/* implicit */unsigned short) max((var_18), ((unsigned short)29280)));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) arr_4 [i_0 + 2] [i_0 - 1] [i_0 + 1])) >> (((((/* implicit */int) (unsigned short)23573)) - (23556))))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)11153)) : (((/* implicit */int) (unsigned short)23566))))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 1; i_2 < 15; i_2 += 3) 
            {
                for (unsigned short i_3 = 1; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_13 [i_3] [(unsigned short)0] [i_0] [i_0] [i_0 - 1] [i_0 - 1] = arr_9 [i_3] [i_1] [(unsigned short)12];
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 1; i_4 < 16; i_4 += 3) 
                        {
                            var_19 += var_11;
                            var_20 *= min((((unsigned short) (unsigned short)62052)), ((unsigned short)3486));
                            var_21 |= ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)32385)) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) arr_3 [i_1] [i_0 - 2]))))))));
                            var_22 = ((unsigned short) (unsigned short)30);
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_9 [i_4 + 1] [i_3 + 3] [i_0 - 1])))), (((/* implicit */int) arr_9 [i_0] [i_1] [i_2 + 3])))))));
                        }
                    }
                } 
            } 
        }
        for (unsigned short i_5 = 4; i_5 < 17; i_5 += 1) 
        {
            arr_20 [i_0] [(unsigned short)0] |= ((unsigned short) ((((/* implicit */int) (unsigned short)27196)) > (((/* implicit */int) arr_15 [(unsigned short)0] [(unsigned short)0] [(unsigned short)0]))));
            var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) (unsigned short)19668))) ? (((/* implicit */int) arr_17 [i_5 + 1] [(unsigned short)12])) : (((((/* implicit */_Bool) arr_17 [i_5 + 1] [(unsigned short)10])) ? (((/* implicit */int) (unsigned short)11521)) : (((/* implicit */int) arr_17 [i_5 + 1] [(unsigned short)18]))))));
        }
        var_25 *= ((unsigned short) ((((/* implicit */int) arr_17 [(unsigned short)14] [(unsigned short)14])) < (((/* implicit */int) var_7))));
        /* LoopSeq 1 */
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned short i_7 = 3; i_7 < 17; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39662)) & (((/* implicit */int) arr_19 [(unsigned short)2] [i_9] [(unsigned short)2]))))) ? (((((/* implicit */int) ((unsigned short) (unsigned short)21779))) << (((((/* implicit */int) (unsigned short)40448)) - (40447))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) ((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned short)29296))))) : ((~(((/* implicit */int) (unsigned short)40439)))))))))));
                            var_27 ^= ((/* implicit */unsigned short) (+(((/* implicit */int) var_11))));
                            arr_31 [(unsigned short)9] [i_6] [i_6] [i_8] [i_0] [i_0] [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((arr_16 [i_7 - 2] [(unsigned short)9] [i_7]), (arr_16 [i_7 - 2] [i_6] [i_7]))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
            {
                for (unsigned short i_11 = 3; i_11 < 18; i_11 += 2) 
                {
                    for (unsigned short i_12 = 3; i_12 < 15; i_12 += 3) 
                    {
                        {
                            var_28 = ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)29959)) ? (((/* implicit */int) arr_34 [i_0 - 1] [(unsigned short)2] [i_10] [i_11])) : (((/* implicit */int) (unsigned short)53037))))) ? (((/* implicit */int) (unsigned short)53045)) : (((/* implicit */int) max(((unsigned short)23566), (arr_40 [i_11 + 1] [i_6] [i_0] [i_11 - 1] [i_12 + 1]))))));
                            arr_41 [i_0] [i_10] [i_0] = arr_39 [i_0];
                            arr_42 [i_0] [i_6] = max(((unsigned short)24), (((/* implicit */unsigned short) ((((/* implicit */int) arr_33 [i_0 + 2] [i_11 - 1])) > (((/* implicit */int) (unsigned short)12475))))));
                        }
                    } 
                } 
            } 
        }
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */int) min(((unsigned short)18674), ((unsigned short)31922)))) <= (((/* implicit */int) (unsigned short)2240))));
    }
    for (unsigned short i_13 = 0; i_13 < 13; i_13 += 1) 
    {
        arr_46 [i_13] = var_2;
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)18789)) ? (((/* implicit */int) (unsigned short)52118)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) arr_14 [i_13] [i_13] [i_13] [i_13] [i_13] [(unsigned short)0] [i_13])) : (((((/* implicit */int) arr_11 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13])) >> (((((/* implicit */int) (unsigned short)12514)) - (12507)))))));
        arr_47 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_44 [i_13] [i_13])) ? (((/* implicit */int) max((arr_30 [i_13] [i_13] [i_13] [i_13] [i_13]), (arr_16 [i_13] [i_13] [i_13])))) : (((/* implicit */int) (unsigned short)38708))));
        arr_48 [(unsigned short)6] = var_1;
    }
    for (unsigned short i_14 = 0; i_14 < 10; i_14 += 4) 
    {
        var_31 += min(((unsigned short)12499), ((unsigned short)65532));
        /* LoopNest 2 */
        for (unsigned short i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            for (unsigned short i_16 = 2; i_16 < 6; i_16 += 2) 
            {
                {
                    var_32 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min(((unsigned short)46747), ((unsigned short)23546))))))) >= (((/* implicit */int) (unsigned short)8110))));
                    arr_59 [i_16] [i_16] [(unsigned short)1] [i_14] = var_12;
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_17 = 1; i_17 < 9; i_17 += 1) 
        {
            for (unsigned short i_18 = 2; i_18 < 8; i_18 += 2) 
            {
                {
                    var_33 = arr_23 [i_14];
                    var_34 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (unsigned short)36256)) ? (((/* implicit */int) arr_56 [i_17 - 1] [i_18 + 1])) : (((/* implicit */int) arr_56 [i_17 - 1] [i_18 + 1])))), (((((/* implicit */_Bool) arr_56 [i_17 - 1] [i_18 + 1])) ? (((/* implicit */int) (unsigned short)40451)) : (((/* implicit */int) arr_60 [i_17 - 1] [i_18 + 1] [i_18]))))));
                }
            } 
        } 
    }
    for (unsigned short i_19 = 2; i_19 < 21; i_19 += 4) 
    {
        arr_68 [i_19] [i_19] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)53060))));
        var_35 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)25085))));
        /* LoopNest 2 */
        for (unsigned short i_20 = 1; i_20 < 19; i_20 += 4) 
        {
            for (unsigned short i_21 = 1; i_21 < 19; i_21 += 3) 
            {
                {
                    var_36 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((unsigned short)4923), (arr_70 [i_19 - 2])))) ? (((/* implicit */int) ((unsigned short) arr_70 [i_19 - 2]))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)40439)) > (((/* implicit */int) arr_70 [i_19 - 2])))))));
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 1; i_22 < 19; i_22 += 1) 
                    {
                        for (unsigned short i_23 = 0; i_23 < 23; i_23 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_71 [i_19] [i_19] [i_19 + 2] [i_19 + 1]))));
                                arr_81 [i_19] [i_21] = (unsigned short)30238;
                            }
                        } 
                    } 
                    arr_82 [i_21] [i_20 + 4] [i_21] = (unsigned short)15;
                    arr_83 [i_21] [i_21 + 2] [i_21 + 2] [i_21] = var_9;
                    /* LoopSeq 2 */
                    for (unsigned short i_24 = 2; i_24 < 22; i_24 += 2) 
                    {
                        arr_86 [i_21] [i_20] [(unsigned short)10] [i_21] [i_24 - 2] = (unsigned short)25078;
                        var_38 = arr_73 [i_21] [i_20] [i_21] [(unsigned short)7];
                        var_39 = ((/* implicit */unsigned short) max((var_39), ((unsigned short)58981)));
                    }
                    for (unsigned short i_25 = 2; i_25 < 22; i_25 += 2) 
                    {
                        arr_91 [i_21] [i_21] [i_21] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_84 [i_19] [i_20] [i_19] [i_19])) != ((~(((/* implicit */int) (unsigned short)12454))))));
                        var_40 += arr_71 [i_21] [i_20 + 1] [i_21 + 1] [i_20 + 1];
                    }
                }
            } 
        } 
        arr_92 [i_19 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)13)) ? (((((/* implicit */_Bool) arr_89 [i_19 - 2] [i_19 - 2] [i_19 + 1] [i_19 - 1] [i_19 - 1] [i_19 - 1])) ? (((((/* implicit */_Bool) (unsigned short)40629)) ? (((/* implicit */int) (unsigned short)49025)) : (((/* implicit */int) (unsigned short)53060)))) : (((((/* implicit */int) (unsigned short)47960)) << (((((/* implicit */int) (unsigned short)15808)) - (15808))))))) : (min((((/* implicit */int) arr_75 [i_19 - 1] [i_19] [i_19] [i_19 - 1] [i_19] [i_19])), (((((/* implicit */int) (unsigned short)13364)) ^ (((/* implicit */int) (unsigned short)38984))))))));
    }
}
