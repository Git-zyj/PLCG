/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216803
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216803 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216803
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
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) min((arr_2 [i_1]), (((arr_2 [i_1]) * (arr_2 [i_0])))));
                arr_7 [(signed char)18] [16] [i_0] = ((((/* implicit */int) arr_5 [i_0] [i_1] [i_1])) >> (((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [11] [i_1])) != (((/* implicit */int) arr_1 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            {
                arr_13 [i_2] = ((/* implicit */_Bool) arr_8 [4] [i_3]);
                /* LoopSeq 1 */
                for (long long int i_4 = 0; i_4 < 17; i_4 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
                    {
                        for (int i_6 = 0; i_6 < 17; i_6 += 2) 
                        {
                            {
                                arr_21 [i_2] [(unsigned char)2] [i_2] [(unsigned char)2] [i_2] = ((/* implicit */long long int) arr_14 [i_2] [4ULL] [i_4]);
                                arr_22 [i_3] [(_Bool)1] [16] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_16 [i_2] [i_2] [i_6]), (arr_16 [i_2] [i_2] [i_2])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_0 [20LL])), (arr_14 [(unsigned char)7] [i_4] [i_5]))))) ^ (arr_2 [i_4])))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_3] [6] = ((/* implicit */long long int) min((((arr_3 [i_3]) | (arr_3 [i_2]))), (arr_3 [i_3])));
                    var_17 = ((/* implicit */signed char) arr_6 [i_2]);
                    var_18 += ((/* implicit */signed char) arr_17 [i_2] [i_2] [3ULL]);
                }
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) min((var_19), (var_4)));
    var_20 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_5)), (((((((/* implicit */unsigned long long int) 288230376151449600LL)) - (0ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 12; i_7 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_8 = 1; i_8 < 10; i_8 += 2) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_8 + 1])) || (((((/* implicit */_Bool) arr_2 [i_8 + 2])) || (((/* implicit */_Bool) arr_2 [i_8 + 1]))))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 1; i_9 < 10; i_9 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    var_22 &= ((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [11] [i_10])), (max((arr_9 [i_8 + 2] [i_8 + 2]), (((/* implicit */long long int) arr_33 [7LL] [i_9] [i_9 + 1] [i_9 + 1]))))));
                    var_23 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) (signed char)-1)) ^ (((/* implicit */int) arr_33 [i_8] [i_8 + 1] [i_8] [i_8 - 1]))))), (arr_17 [i_10] [i_7] [i_7])));
                    var_24 += ((/* implicit */unsigned long long int) arr_27 [(signed char)0] [i_8]);
                }
                /* vectorizable */
                for (signed char i_11 = 0; i_11 < 12; i_11 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_29 [10LL]) / (((/* implicit */long long int) arr_6 [i_8]))))) && (((/* implicit */_Bool) arr_28 [i_8]))));
                    var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_19 [i_7] [i_7] [i_7] [i_7] [i_7])) || (((arr_9 [i_8] [14]) == (arr_16 [i_7] [i_8] [i_9])))));
                    var_27 += ((/* implicit */long long int) ((arr_19 [i_9 + 2] [i_8 + 2] [3ULL] [i_11] [i_8 - 1]) | (arr_19 [i_9 + 1] [i_9 + 1] [i_9] [i_11] [i_8 - 1])));
                    var_28 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_11 [i_8 + 1] [i_8 + 1] [i_8 + 1])) - (((/* implicit */int) arr_11 [i_8 + 2] [i_8 + 1] [i_8 + 2]))));
                }
                arr_36 [4LL] [4LL] [i_9] [(signed char)5] = arr_11 [(unsigned short)9] [i_8 + 1] [i_9];
                arr_37 [2LL] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)-43)) || (((/* implicit */_Bool) arr_14 [i_7] [i_7] [i_7]))))) << (((max((arr_18 [i_8 + 1] [i_9 + 1]), (arr_18 [i_8 + 1] [i_9 - 1]))) + (1806568306576079276LL)))));
            }
            arr_38 [4ULL] = ((((/* implicit */_Bool) 0LL)) || (((/* implicit */_Bool) (signed char)-1)));
            var_29 = ((/* implicit */unsigned char) min((max((arr_4 [i_7] [i_8 - 1] [i_8 + 2]), (arr_4 [i_8] [i_8 + 2] [i_8 + 1]))), (max((arr_16 [i_7] [14ULL] [i_8]), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7]))) != (arr_10 [i_7]))))))));
            /* LoopNest 2 */
            for (long long int i_12 = 2; i_12 < 11; i_12 += 3) 
            {
                for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
                        {
                            arr_47 [i_14] [i_13] [i_12] [i_12] [i_12] [i_8] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [i_7])) || (((/* implicit */_Bool) arr_16 [i_7] [i_12] [i_14]))));
                            arr_48 [i_7] [i_8] [i_12] [i_13] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) >= (((/* implicit */int) arr_25 [i_8] [i_8]))))) < (((/* implicit */int) (unsigned short)2048))));
                            arr_49 [i_7] [i_7] [i_7] [2LL] [i_7] [i_7] [i_12] = ((((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_8] [i_14]))) + (arr_42 [i_7] [7LL] [i_12] [i_13]))) + (((/* implicit */unsigned long long int) arr_30 [i_12 + 1] [i_8 + 1] [i_8 + 2])))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_33 [i_8 + 2] [2ULL] [i_12 - 2] [i_12 + 1]) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (-1041964104203529526LL)))))))));
                            var_30 = ((/* implicit */unsigned long long int) arr_46 [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_12 + 1] [i_12 - 1]);
                        }
                        for (long long int i_15 = 0; i_15 < 12; i_15 += 4) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned char) arr_39 [i_15] [i_12 - 1] [i_8]);
                            arr_52 [i_12] = ((/* implicit */int) ((((arr_16 [i_15] [i_12 - 2] [i_8 + 2]) > (((/* implicit */long long int) arr_51 [2LL] [i_12] [i_15] [i_12] [i_12 - 1])))) || (((((arr_51 [i_7] [i_12] [(unsigned char)6] [i_13] [i_15]) * (((/* implicit */int) arr_1 [i_13] [i_7])))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_7])) || (((/* implicit */_Bool) arr_20 [i_8 + 1] [i_13])))))))));
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) ((arr_35 [i_7] [i_12 + 1] [i_13] [3ULL]) == (arr_35 [i_7] [i_12 + 1] [i_12] [i_13])))) ^ (((/* implicit */int) min((((/* implicit */unsigned char) arr_1 [i_12 - 2] [i_8 - 1])), (arr_46 [i_8] [i_8 + 1] [i_12 + 1] [i_12 + 1] [i_13]))))));
                        }
                        /* vectorizable */
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 4) /* same iter space */
                        {
                            var_33 = arr_16 [i_7] [16LL] [i_7];
                            var_34 = ((/* implicit */unsigned short) arr_30 [i_12 - 2] [i_12 - 2] [i_12 - 1]);
                            arr_56 [i_7] [i_8] [i_7] [10LL] [i_12] [6LL] [i_7] = ((/* implicit */signed char) ((((/* implicit */int) arr_31 [(_Bool)1] [(_Bool)1] [i_12 + 1] [i_7])) < (((/* implicit */int) arr_11 [i_7] [i_8 + 2] [i_8 + 2]))));
                        }
                        var_35 = ((arr_50 [i_8 + 1] [i_8 + 1] [i_8 + 1] [11LL] [i_12 - 2] [i_12]) - (((arr_50 [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_8] [i_12 - 1] [i_12]) + (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_12 - 2]))))));
                        arr_57 [2LL] [i_12] [i_7] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) -1041964104203529526LL)), (arr_41 [i_12 - 2] [i_8 + 2] [i_8 + 2]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_7] [i_7] [i_8 + 2])))));
                    }
                } 
            } 
        }
        for (long long int i_17 = 3; i_17 < 11; i_17 += 4) 
        {
            var_36 = ((/* implicit */int) max((((((/* implicit */_Bool) (unsigned short)27827)) && (arr_39 [9LL] [i_17 + 1] [i_7]))), (((((/* implicit */_Bool) -1041964104203529526LL)) || (((/* implicit */_Bool) -381175465))))));
            var_37 = ((/* implicit */_Bool) ((((arr_50 [(signed char)0] [i_17 - 3] [i_17 - 1] [i_17] [i_17 - 2] [(unsigned short)11]) | (arr_50 [(signed char)2] [i_17 - 2] [i_17 - 1] [(signed char)2] [i_17 - 3] [i_17]))) ^ (((arr_50 [i_7] [i_17 - 1] [i_17 - 2] [(signed char)4] [i_17 - 1] [(unsigned char)3]) | (arr_50 [i_17] [i_17 - 3] [i_17 - 3] [i_17] [i_17 - 3] [0LL])))));
            var_38 = ((/* implicit */unsigned short) arr_15 [(unsigned char)7] [i_17 - 3] [i_17 - 3] [i_17]);
        }
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            var_39 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) (signed char)0))));
            /* LoopNest 2 */
            for (long long int i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                for (unsigned short i_20 = 0; i_20 < 12; i_20 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (long long int i_21 = 0; i_21 < 12; i_21 += 3) 
                        {
                            arr_76 [i_18] [i_18] [i_20] = ((max((arr_59 [(signed char)4] [i_21]), (arr_59 [i_7] [(_Bool)0]))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_59 [3LL] [i_7])) || (((/* implicit */_Bool) arr_59 [8] [8]))))) - (1))));
                            var_40 = ((/* implicit */long long int) arr_6 [i_21]);
                            var_41 = ((/* implicit */long long int) ((((arr_58 [(signed char)6] [i_20] [i_21]) + (((/* implicit */unsigned long long int) arr_19 [i_7] [i_18] [i_19] [i_7] [2LL])))) + (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_7] [i_18] [i_19])) + (((/* implicit */int) arr_11 [6LL] [6LL] [i_19])))))));
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_81 [i_20] [i_22] = ((/* implicit */unsigned char) arr_74 [(unsigned short)11] [i_20] [(unsigned short)11] [i_19] [i_20] [i_7]);
                            var_42 = ((/* implicit */long long int) ((((arr_50 [i_7] [i_18] [i_18] [i_19] [i_20] [i_22]) >> (((arr_50 [i_7] [i_18] [11] [i_20] [i_22] [i_18]) - (1397584151635941333LL))))) < (((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_20] [i_20] [i_19] [i_7]))) + (arr_50 [i_22] [i_20] [i_20] [i_19] [i_18] [1])))));
                        }
                        arr_82 [i_7] [i_7] [i_20] [i_7] [i_20] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_39 [i_19] [9LL] [11LL])) == (((/* implicit */int) arr_39 [i_20] [i_19] [i_7]))))) % (((/* implicit */int) min((((/* implicit */signed char) arr_1 [i_7] [9LL])), (arr_31 [i_7] [i_7] [i_7] [i_7]))))));
                        arr_83 [i_19] [i_19] [i_20] [i_19] = ((/* implicit */_Bool) min((max((3929125525910710628LL), (((/* implicit */long long int) (_Bool)1)))), (((3181084042093640492LL) | (((/* implicit */long long int) ((/* implicit */int) ((-8766482656100508558LL) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46023)))))))))));
                    }
                } 
            } 
            var_43 = ((/* implicit */signed char) min((((((/* implicit */long long int) ((/* implicit */int) arr_32 [(unsigned char)10]))) ^ (5702450528983615680LL))), (((/* implicit */long long int) (unsigned char)255))));
            arr_84 [4LL] [4LL] [i_18] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) min((((/* implicit */int) arr_0 [5ULL])), (arr_19 [i_7] [(unsigned char)6] [i_7] [i_7] [i_18])))) | (((((/* implicit */long long int) ((/* implicit */int) arr_61 [i_7] [(_Bool)1]))) ^ (arr_54 [i_7] [i_7] [8LL] [(unsigned short)6] [(unsigned short)8] [i_7])))))), (((arr_45 [i_7] [6LL] [6LL] [i_7] [3] [6LL] [(unsigned char)6]) ^ (((/* implicit */unsigned long long int) arr_16 [i_7] [i_18] [i_18]))))));
            var_44 = ((/* implicit */unsigned short) max((-3152335972508502969LL), (((/* implicit */long long int) (unsigned char)255))));
        }
        var_45 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) >> (((3152335972508502969LL) - (3152335972508502944LL))))) & (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)31)))))));
    }
}
