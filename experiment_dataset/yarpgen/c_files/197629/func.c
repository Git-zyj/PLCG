/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197629
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197629 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197629
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (-(max((((/* implicit */long long int) var_0)), (arr_2 [i_0 + 2])))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) min((arr_0 [i_0]), (arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            arr_9 [i_0] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) (unsigned char)21)))));
            arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (((((/* implicit */_Bool) (unsigned char)89)) ? (arr_1 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)89)))))))) ? ((-(((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_13)))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)166)) && (((/* implicit */_Bool) (unsigned char)90)))))))));
            arr_11 [i_0] [i_0 - 1] [i_0] = min((min((arr_6 [i_0 + 2] [i_0 + 2]), (arr_0 [i_0]))), (((unsigned char) var_6)));
            var_15 = ((/* implicit */long long int) max(((unsigned char)152), ((unsigned char)189)));
            /* LoopSeq 4 */
            for (unsigned char i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    arr_17 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_0 + 2] [i_0 + 2])))))))) << (((-7842051598264846852LL) + (7842051598264846863LL)))));
                    /* LoopSeq 2 */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (var_2)));
                        var_17 = (unsigned char)196;
                        var_18 = ((/* implicit */unsigned char) arr_12 [i_0]);
                    }
                    for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        arr_22 [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_6 [i_0 - 1] [i_0 + 1])) == (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)110)) : (((/* implicit */int) (unsigned char)3)))))))));
                        var_19 = ((/* implicit */unsigned char) ((long long int) max((min((arr_0 [i_0]), ((unsigned char)101))), ((unsigned char)128))));
                    }
                }
                for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                {
                    arr_25 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)0))));
                    arr_26 [i_0] [(unsigned char)0] [i_2] [i_6] [i_6] [i_6] = ((unsigned char) (-(4433230883192832LL)));
                    /* LoopSeq 3 */
                    for (unsigned char i_7 = 2; i_7 < 18; i_7 += 2) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (max((arr_15 [i_0 + 2] [i_1] [i_2] [i_6] [i_7 + 4] [i_7]), (((unsigned char) arr_21 [i_0] [i_1] [i_2] [i_7] [i_0]))))));
                        arr_31 [i_7 + 4] [i_7] [i_6] [i_0] [i_1] [i_1] [i_0 - 1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)196)) ? (min((arr_7 [i_0] [i_1] [i_0]), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)148), ((unsigned char)255)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)33)) && (((/* implicit */_Bool) var_3)))))) : (((arr_12 [i_0]) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))) : (arr_30 [i_0 + 2] [i_0] [i_0 + 2] [i_7]))))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned char)138))))))) == (((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_6] [i_1]))) + (arr_30 [i_6] [i_0] [i_0] [i_0 - 1])))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        arr_34 [i_0] [i_6] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) max(((unsigned char)117), (arr_16 [i_0] [i_0])))) && (((((/* implicit */_Bool) arr_12 [i_0])) || (((/* implicit */_Bool) arr_12 [i_0]))))))));
                        arr_35 [i_1] [i_0] [i_6] [i_8] = (unsigned char)237;
                        var_22 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_32 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 2])) < (((/* implicit */int) arr_24 [i_0 + 2]))))) % (((((/* implicit */_Bool) arr_21 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_27 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_6])) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0 - 1] [(unsigned char)5] [i_6]))))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        var_23 = var_9;
                        var_24 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1])))) - (((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_38 [i_0] [i_1] [i_0 + 2] [i_6] [i_0]))))));
                    }
                }
                for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                {
                    var_25 = (unsigned char)77;
                    var_26 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_5 [i_0 + 1] [i_2] [i_2]))));
                    var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) var_2))));
                    arr_43 [i_0] [20LL] [i_2] [i_10] [i_0] [20LL] = ((/* implicit */unsigned char) arr_33 [i_0] [i_0]);
                }
                var_28 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) min((var_3), (arr_40 [i_0] [i_0] [(unsigned char)0] [i_0] [i_0 + 2])))) < (((((/* implicit */_Bool) (unsigned char)15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)69)))))))));
            }
            for (unsigned char i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                var_29 ^= ((/* implicit */unsigned char) min((min((((/* implicit */long long int) (unsigned char)81)), (-2442943460815065577LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */int) (unsigned char)45)) : (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */int) (unsigned char)68)) : (((/* implicit */int) (unsigned char)238)))))))));
                var_30 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_0] [i_0] [i_1])) || (((/* implicit */_Bool) max((var_2), (var_9)))))), ((!(((/* implicit */_Bool) var_6))))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_0] [i_1])) ? (min((((/* implicit */long long int) arr_18 [i_0 + 1] [i_11] [i_1] [i_1] [i_0 + 1] [i_0 + 2] [i_0 + 2])), (6306377681366542364LL))) : (((/* implicit */long long int) min((((/* implicit */int) max((arr_21 [i_0] [i_0] [i_1] [i_0] [i_11]), ((unsigned char)28)))), (((((/* implicit */int) var_12)) & (((/* implicit */int) (unsigned char)15)))))))));
            }
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 5LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)104))))))))));
                var_33 = arr_21 [i_0 - 1] [i_0] [(unsigned char)14] [i_0] [i_0];
            }
            for (unsigned char i_13 = 0; i_13 < 22; i_13 += 2) 
            {
                arr_53 [i_0] [i_0] [i_0 - 1] = var_11;
                arr_54 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned char)255), ((unsigned char)97)))) ? (((/* implicit */int) arr_24 [i_0 + 2])) : (((/* implicit */int) (unsigned char)159))));
            }
        }
        arr_55 [i_0] [i_0 + 2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) ^ (9LL)))) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) (unsigned char)231))))));
        /* LoopSeq 1 */
        for (long long int i_14 = 0; i_14 < 22; i_14 += 2) 
        {
            arr_58 [i_0] = (unsigned char)62;
            arr_59 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)154))) % (2040974162640745283LL))) | (((/* implicit */long long int) ((/* implicit */int) var_12)))));
            /* LoopSeq 3 */
            for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
            {
                arr_62 [i_0] [i_14] [i_14] = arr_45 [i_0] [(unsigned char)2] [i_15] [i_0];
                var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) -4347394448443909836LL)) || (((/* implicit */_Bool) (unsigned char)100))))) + (((((/* implicit */_Bool) arr_6 [i_14] [i_15])) ? (((((/* implicit */int) (unsigned char)65)) / (((/* implicit */int) (unsigned char)174)))) : (((/* implicit */int) max((arr_40 [i_0 + 1] [4LL] [i_14] [i_0 + 1] [i_0 + 1]), ((unsigned char)173)))))))))));
            }
            for (unsigned char i_16 = 1; i_16 < 21; i_16 += 2) 
            {
                var_35 = ((/* implicit */long long int) min((((((/* implicit */_Bool) max((-4958557533758896668LL), (((/* implicit */long long int) arr_32 [i_16] [i_16 - 1] [i_14] [i_0 - 1] [i_0]))))) ? (((/* implicit */int) arr_38 [i_16 - 1] [i_16 - 1] [i_16 + 1] [i_16 + 1] [i_0])) : (((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) arr_36 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 - 1])))))), (((/* implicit */int) ((((/* implicit */_Bool) arr_52 [i_0] [i_14] [i_16])) || (((/* implicit */_Bool) ((unsigned char) var_0))))))));
                var_36 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)1)) << (((-2442943460815065573LL) + (2442943460815065579LL)))))))) ? (((/* implicit */int) arr_14 [i_16 - 1] [i_14] [i_0] [i_0 - 1])) : (((/* implicit */int) arr_42 [i_0] [i_0] [i_16 - 1] [i_16]))));
                arr_65 [i_0] [i_0] [i_0] [i_16 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_11))));
            }
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 4) 
            {
                var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)108)))))));
                arr_68 [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) / (var_6))));
            }
        }
    }
    for (unsigned char i_18 = 0; i_18 < 25; i_18 += 2) 
    {
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)121)) >> (((/* implicit */int) var_5))))) ? (min((((/* implicit */long long int) (unsigned char)30)), (-1LL))) : (arr_72 [i_18] [i_18]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))));
        arr_73 [i_18] = ((/* implicit */long long int) (-(min((((((/* implicit */_Bool) (unsigned char)168)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_71 [i_18])))), (((/* implicit */int) (unsigned char)131))))));
        arr_74 [i_18] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)107)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)225)) / (((/* implicit */int) var_2))))) : (8675835200180540881LL)))));
        var_39 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)166)) | (((((/* implicit */int) (unsigned char)229)) >> (((((((/* implicit */_Bool) var_2)) ? (-9223372036854775800LL) : (((/* implicit */long long int) ((/* implicit */int) arr_70 [i_18]))))) - ((-9223372036854775807LL - 1LL))))))));
        /* LoopSeq 1 */
        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 2) 
        {
            arr_77 [(unsigned char)9] = ((/* implicit */unsigned char) max((-7393181162036218070LL), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_69 [i_19])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)231))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)120)) ? (((/* implicit */int) (unsigned char)157)) : (((/* implicit */int) (unsigned char)74))))) : (arr_69 [i_18])))));
            var_40 = ((/* implicit */unsigned char) arr_76 [i_18] [i_19] [i_19]);
        }
    }
}
