/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231323
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 3; i_1 < 20; i_1 += 1) 
        {
            var_20 -= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_5 [i_0 + 1]) : (var_13)))) ? (((((/* implicit */_Bool) arr_1 [i_1])) ? (var_7) : (var_19))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 1] [i_0 + 1])) || (((/* implicit */_Bool) var_11))))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [12])) ? (arr_5 [i_1 + 1]) : (((/* implicit */int) arr_3 [10] [i_1 - 3] [i_0]))))) ? (-1152028478) : (max((-178069403), (0)))))));
            var_21 = arr_0 [(unsigned char)15] [i_0 - 1];
            var_22 &= ((/* implicit */unsigned char) min((arr_4 [i_0]), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (arr_5 [20]) : (arr_4 [i_0])))) && (((/* implicit */_Bool) -178069398)))))));
            var_23 = arr_4 [i_0];
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) max((arr_9 [i_0 + 1] [i_1 - 1] [i_2]), ((+(arr_9 [18] [i_1 + 1] [i_1])))));
                        var_25 = ((/* implicit */int) (unsigned char)246);
                        var_26 = ((((/* implicit */_Bool) min(((~(-471263474))), (min((251658240), (var_19)))))) ? (((int) ((((/* implicit */_Bool) arr_2 [i_2] [i_1])) || (((/* implicit */_Bool) -251658248))))) : (max((((/* implicit */int) min((arr_3 [i_0] [i_1 - 3] [i_2]), ((unsigned char)206)))), (((((/* implicit */_Bool) var_17)) ? (var_2) : (arr_9 [i_0 + 1] [i_1 - 1] [i_2]))))));
                        arr_13 [i_3] [i_1] [i_1] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_7 [i_1 - 3]), (arr_7 [i_1 + 1])))) && (((/* implicit */_Bool) arr_7 [i_1 - 3]))));
                    }
                } 
            } 
        }
        for (int i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) max((max((var_3), (((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 2])))), ((-(((((/* implicit */_Bool) -1038189231)) ? (arr_15 [(unsigned char)2] [14]) : (((/* implicit */int) var_0)))))))))));
            /* LoopNest 2 */
            for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                for (int i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    {
                        arr_23 [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_17 [i_0 - 1])) ? (-251658246) : (((/* implicit */int) arr_10 [i_0] [i_0] [18])))))))));
                        arr_24 [i_6 + 1] [i_5] [14] [i_0 - 2] = ((((/* implicit */_Bool) 1810099742)) ? (1649649992) : (((/* implicit */int) ((unsigned char) -251658240))));
                        arr_25 [i_6 - 1] [i_6 + 3] [i_6] [i_6 + 2] = ((/* implicit */int) min((arr_22 [i_0 + 1] [i_4] [i_4] [15] [i_6 - 1] [i_6 + 1]), (var_18)));
                    }
                } 
            } 
        }
        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 2) 
        {
            var_28 = ((/* implicit */int) ((unsigned char) ((int) ((((/* implicit */_Bool) var_6)) ? (var_8) : (arr_6 [i_0] [i_7 + 1] [i_7 + 1])))));
            arr_30 [18] [i_7 + 2] [i_7 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_7 + 1] [i_7] [i_0 - 1] [i_0 - 2])) || (((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (178069403) : (arr_29 [i_0 - 1] [i_0 - 1] [2]))))))));
            /* LoopSeq 2 */
            for (int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    for (unsigned char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        {
                            var_29 = min(((-2147483647 - 1)), (1692939710));
                            var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) ((((/* implicit */int) ((var_14) <= (((/* implicit */int) (unsigned char)87))))) >= (min((((/* implicit */int) ((arr_37 [i_10] [(unsigned char)3] [i_7 - 1] [i_0]) != (-331683734)))), (min((((/* implicit */int) arr_38 [16] [i_9] [i_8] [i_7 + 1] [i_0])), (127))))))))));
                            var_31 = ((/* implicit */int) min((var_31), (var_10)));
                            var_32 = ((/* implicit */unsigned char) arr_20 [i_0 - 1] [i_7 + 1] [i_9] [16]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    for (int i_12 = 2; i_12 < 19; i_12 += 4) 
                    {
                        {
                            var_33 = (~(((((/* implicit */_Bool) min((1038189218), (((/* implicit */int) arr_2 [i_8] [i_0 - 2]))))) ? (((((/* implicit */_Bool) arr_41 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 - 2])) ? (arr_33 [11]) : (arr_16 [i_0]))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (1038189256)))))));
                            var_34 ^= 234881024;
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 21; i_13 += 1) 
                {
                    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 1) 
                    {
                        {
                            var_35 = arr_33 [i_8];
                            var_36 = ((/* implicit */int) max((var_36), (((((/* implicit */_Bool) 1038189218)) ? ((~(-251658243))) : (max((((/* implicit */int) arr_3 [i_7] [12] [i_7])), (min((251658240), (-251658252)))))))));
                            var_37 = ((((/* implicit */_Bool) 1038189210)) ? (347703516) : (((/* implicit */int) (unsigned char)237)));
                            arr_55 [i_14] [i_13] [i_8] [7] [i_8] [i_7 - 1] [i_0 - 2] = ((/* implicit */unsigned char) var_10);
                            var_38 &= ((((/* implicit */_Bool) ((arr_50 [i_0 - 2] [i_0 + 1] [i_7 + 1] [i_7 + 2]) << (((max((0), (381565955))) - (381565955)))))) ? (min((((/* implicit */int) ((-251658246) > (((/* implicit */int) var_17))))), (arr_29 [i_0 + 1] [i_7] [i_8]))) : (((int) min((arr_34 [i_0 + 1] [2] [i_0] [(unsigned char)0] [i_14]), (((/* implicit */int) (unsigned char)237))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_15 = 0; i_15 < 21; i_15 += 1) /* same iter space */
            {
                var_39 -= ((int) 8128);
                /* LoopSeq 3 */
                for (int i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_48 [i_0 + 1] [i_0] [(unsigned char)0] [i_0 - 2] [i_7 - 1])) : (((/* implicit */int) arr_48 [i_0 - 1] [i_0] [20] [i_0 - 2] [i_7 - 1]))));
                    var_41 = ((/* implicit */unsigned char) ((int) arr_54 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0 + 1] [i_7 - 1] [i_7 + 2] [i_7 - 1]));
                }
                for (int i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_2 [i_17] [11]))) ? (((((/* implicit */int) arr_38 [i_0 + 1] [i_7 + 1] [i_15] [3] [i_17])) >> (((var_4) + (2141676392))))) : (arr_15 [i_7] [i_15]))))));
                    arr_64 [i_0 - 2] [i_0] [i_15] [i_17] [i_15] = ((/* implicit */unsigned char) arr_1 [i_15]);
                    /* LoopSeq 1 */
                    for (int i_18 = 0; i_18 < 21; i_18 += 2) 
                    {
                        var_43 *= ((/* implicit */unsigned char) (+(((((/* implicit */int) (unsigned char)6)) / (arr_47 [i_7 - 1])))));
                        arr_68 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_0 - 2] [i_0 - 2] = -24505857;
                        var_44 = ((/* implicit */unsigned char) arr_31 [i_0] [i_0] [i_0 - 1]);
                    }
                    arr_69 [i_0 - 1] [(unsigned char)13] [i_7 - 1] [i_15] [i_17] [i_17] = ((/* implicit */unsigned char) ((int) (+(arr_29 [i_0 - 2] [i_7 - 1] [i_17]))));
                }
                for (int i_19 = 0; i_19 < 21; i_19 += 2) 
                {
                    var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) ((((arr_19 [i_7 + 1] [i_15] [i_15] [i_15]) + (2147483647))) << (((((arr_19 [i_7 + 2] [i_7] [i_15] [i_15]) + (781964211))) - (2))))))));
                    arr_72 [i_0] [18] [i_15] [i_19] = ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0 - 1] [i_7 + 2])) && (((/* implicit */_Bool) (unsigned char)43))))) : (((((/* implicit */_Bool) arr_40 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1])) ? (arr_29 [i_19] [i_19] [i_19]) : (var_8))));
                    var_46 = ((arr_17 [i_19]) | ((~(((/* implicit */int) (unsigned char)100)))));
                }
            }
            arr_73 [i_7 + 2] [i_7 + 1] = ((int) var_16);
            arr_74 [14] [i_7 - 1] [i_7] = arr_5 [i_7 + 1];
        }
        arr_75 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_0])) >> ((((~(-1983168188))) - (1983168165)))));
        arr_76 [i_0 + 1] = -1026250485;
    }
    var_47 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)217)) ? (var_6) : (var_10))) >= (min((var_7), (var_6)))))) != (var_5)));
    /* LoopNest 3 */
    for (unsigned char i_20 = 4; i_20 < 20; i_20 += 1) 
    {
        for (int i_21 = 0; i_21 < 21; i_21 += 1) 
        {
            for (int i_22 = 0; i_22 < 21; i_22 += 3) 
            {
                {
                    arr_83 [i_20] [13] [i_21] [i_22] = ((int) max((var_10), (arr_44 [i_22] [i_21] [i_20 - 4] [(unsigned char)2])));
                    arr_84 [i_20 - 3] [i_21] [i_22] [i_21] = ((/* implicit */unsigned char) 1810099742);
                    arr_85 [i_20] [i_21] [20] [i_22] = ((/* implicit */unsigned char) arr_4 [4]);
                }
            } 
        } 
    } 
    var_48 = ((/* implicit */int) (unsigned char)95);
    var_49 = ((/* implicit */unsigned char) ((var_7) ^ (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -381565932)) ? (var_10) : (((/* implicit */int) var_17))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -205725341)) ? (-976621116) : (-1687526101)))))))));
}
