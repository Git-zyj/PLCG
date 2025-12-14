/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26016
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) arr_0 [i_0 - 2])))));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                var_12 = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) (_Bool)0)), (((unsigned long long int) 744836508))))));
                var_13 *= ((/* implicit */_Bool) max((((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) var_7)))), (((/* implicit */int) var_9))));
                var_14 = ((/* implicit */signed char) (_Bool)1);
            }
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    var_15 = ((/* implicit */signed char) ((_Bool) arr_4 [i_0 + 1] [i_1] [i_3]));
                    var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) (+(((/* implicit */int) var_4)))))));
                }
                for (int i_5 = 4; i_5 < 13; i_5 += 2) 
                {
                    var_17 *= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_5 - 3]))));
                    var_18 = (!(((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0 - 2] [i_0] [(signed char)4])));
                    /* LoopSeq 1 */
                    for (int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)19)) / (((/* implicit */int) arr_15 [i_0] [(signed char)15] [i_3] [i_5] [i_6]))))) ? (arr_18 [i_5] [i_5] [i_5 - 3] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_8) == (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [4ULL])))))));
                        var_20 = ((/* implicit */signed char) (~(arr_19 [(signed char)13] [i_5 - 2] [i_5] [i_5] [i_5] [i_5])));
                    }
                    arr_20 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_4))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) & (-744836517)))) ? (((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_1] [(unsigned char)6] [i_7])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_3])))) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (_Bool)1)))))));
                    var_22 = (-(arr_17 [i_0 - 1]));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0 + 1]))));
                    var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_10 [(signed char)15] [i_1] [15ULL]))));
                    /* LoopSeq 2 */
                    for (signed char i_9 = 0; i_9 < 16; i_9 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) (-9223372036854775807LL - 1LL)))) | (((/* implicit */int) arr_1 [i_1] [(unsigned short)0]))));
                        var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_9] [i_0 - 2] [i_0] [i_0] [i_0 - 3])) ? (((/* implicit */int) arr_29 [i_9] [i_0 - 3] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_29 [i_9] [i_0 - 2] [i_0] [i_0] [i_0 - 1]))));
                    }
                    for (signed char i_10 = 0; i_10 < 16; i_10 += 2) /* same iter space */
                    {
                        var_27 -= ((/* implicit */long long int) arr_7 [i_0 - 2] [i_0 + 2] [i_0 - 2] [i_0]);
                        arr_33 [i_0] [i_0] [i_8] [i_0] [i_0] [i_0] [i_0] = (!(((/* implicit */_Bool) var_4)));
                        var_28 = ((/* implicit */unsigned int) ((arr_19 [(signed char)1] [i_0] [i_0 + 1] [i_0 - 3] [i_0 + 1] [i_0]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) var_8))));
                    }
                    var_30 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [(unsigned short)11] [i_1] [0ULL] [i_1] [13LL] [1LL]))) : ((-9223372036854775807LL - 1LL)))) + (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                }
                var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */int) var_2)) == (((/* implicit */int) arr_12 [i_0 - 2] [i_0] [i_0 - 1] [1ULL])))))));
                var_32 = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) -7779352226506095339LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)40392))) : (9223372036854775807LL))));
                var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_3] [i_3])) ? (arr_16 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)2)))) : (((/* implicit */int) (_Bool)1)))))));
            }
            for (unsigned int i_11 = 2; i_11 < 15; i_11 += 3) 
            {
                var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) min((((unsigned long long int) arr_14 [i_0] [i_0 - 3] [i_11 + 1] [i_11] [i_11])), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((4001505179765694476ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [8ULL] [i_11])))))) << (((((/* implicit */int) var_11)) - (106)))))))))));
                arr_36 [i_0] [i_11] [i_0] = ((/* implicit */signed char) min((((/* implicit */int) arr_29 [i_11] [i_0] [i_1] [4] [6U])), ((+(((/* implicit */int) (unsigned short)40392))))));
            }
            for (unsigned long long int i_12 = 3; i_12 < 15; i_12 += 3) 
            {
                var_35 += ((/* implicit */signed char) (((~(((/* implicit */int) (_Bool)1)))) < ((((-(-1908437117))) / (((((/* implicit */int) var_9)) * (((/* implicit */int) var_10))))))));
                var_36 += ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */int) var_2)), (((int) var_11))))), (((long long int) min(((signed char)-15), (((/* implicit */signed char) var_7)))))));
                arr_41 [i_12] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_29 [i_12] [i_0 - 3] [i_0 + 1] [i_0 - 1] [i_0 - 2])))) > (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])));
            }
            var_37 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (((((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [4] [i_1] [i_1] [i_0 + 2] [i_1])))))));
        }
        for (short i_13 = 1; i_13 < 15; i_13 += 1) 
        {
            var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), (9476392807801507687ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [(signed char)5] [2LL] [i_0] [i_0]))) : (((((/* implicit */_Bool) arr_25 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_13 + 1])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_6 [i_0]))) : (((/* implicit */unsigned long long int) min((9223372036854775783LL), (((/* implicit */long long int) var_4)))))))));
            var_39 = ((/* implicit */int) ((arr_27 [i_0] [(unsigned short)5] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned long long int) max((arr_25 [i_0] [(_Bool)1] [i_13] [i_0]), (arr_39 [i_0 - 3])))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_13] [i_13]))) : (arr_22 [(_Bool)1])))) ^ (((((/* implicit */_Bool) (signed char)8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_6 [i_0])))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 16; i_14 += 2) 
        {
            for (unsigned long long int i_15 = 3; i_15 < 15; i_15 += 3) 
            {
                {
                    arr_50 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+((-(arr_13 [(_Bool)1] [i_0] [(_Bool)1] [i_15 - 2])))));
                    arr_51 [i_15] [i_15] [i_15] = ((/* implicit */unsigned long long int) ((unsigned short) arr_17 [i_0]));
                    /* LoopNest 2 */
                    for (signed char i_16 = 0; i_16 < 16; i_16 += 3) 
                    {
                        for (unsigned short i_17 = 1; i_17 < 14; i_17 += 3) 
                        {
                            {
                                var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) min((((/* implicit */unsigned int) var_4)), (arr_38 [i_15]))))));
                                arr_58 [i_0] [i_14] [i_15] [i_16] [i_17] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) (signed char)-112)) : (((/* implicit */int) arr_47 [i_0 - 2])))))));
                                var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) max((((/* implicit */unsigned long long int) (+(-744836508)))), (((((/* implicit */unsigned long long int) max((744836508), (((/* implicit */int) (signed char)114))))) - (((unsigned long long int) 5101264038124967446ULL)))))))));
                                arr_59 [(unsigned short)10] [i_14] [11] [i_16] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_3)), (-8157887808030886106LL)))) ? (((/* implicit */int) ((signed char) var_8))) : (((/* implicit */int) arr_15 [i_0] [i_14] [i_0] [i_17 + 2] [(_Bool)1]))))) ? (max((min((((/* implicit */unsigned long long int) (unsigned short)10)), (arr_45 [i_0]))), (((/* implicit */unsigned long long int) arr_23 [i_17] [i_17] [i_17] [i_17] [i_17 - 1] [i_17])))) : (((unsigned long long int) arr_11 [i_17]))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) < (6281565024964295725ULL))) ? (var_0) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))))));
                        var_43 = ((/* implicit */unsigned long long int) 744836508);
                        arr_62 [i_18] [i_15] [8] = ((/* implicit */short) ((unsigned short) (-(max((((/* implicit */unsigned long long int) (unsigned short)61440)), (var_0))))));
                        arr_63 [(short)11] [i_18] = ((/* implicit */long long int) ((arr_3 [i_18]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                        arr_64 [i_0] [i_14] [i_14] [i_15] [i_18] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) arr_61 [i_15 - 2] [i_0 - 1] [i_15] [2LL])), (var_11)))), (min((min((((/* implicit */unsigned long long int) -744836508)), (var_0))), (((/* implicit */unsigned long long int) (short)-29633))))));
                    }
                    arr_65 [(signed char)11] [i_14] [(short)8] = ((/* implicit */unsigned long long int) ((_Bool) ((arr_27 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_15 - 2] [i_15 - 2] [i_15 + 1]) ? (arr_17 [i_0]) : (((/* implicit */int) max(((unsigned short)4096), ((unsigned short)15484)))))));
                }
            } 
        } 
    }
    for (signed char i_19 = 0; i_19 < 10; i_19 += 2) 
    {
        var_44 = ((/* implicit */_Bool) min((((((/* implicit */int) ((unsigned short) (unsigned short)4096))) * (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)19))))))), (max((((/* implicit */int) max((var_9), (((/* implicit */unsigned short) (signed char)-19))))), (((((/* implicit */_Bool) arr_60 [i_19] [i_19] [i_19] [i_19])) ? (((/* implicit */int) arr_11 [i_19])) : (((/* implicit */int) (_Bool)1))))))));
        var_45 *= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_19]))) & (arr_18 [i_19] [i_19] [i_19] [i_19] [i_19]))));
        var_46 *= ((/* implicit */signed char) min((((((/* implicit */int) arr_30 [(short)4] [(unsigned short)11] [2] [i_19] [i_19] [i_19])) / (((/* implicit */int) arr_57 [7] [i_19])))), (((((((/* implicit */_Bool) arr_55 [(unsigned short)13] [i_19])) ? (((/* implicit */int) arr_0 [i_19])) : (((/* implicit */int) (signed char)124)))) / (((/* implicit */int) var_2))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_20 = 1; i_20 < 9; i_20 += 4) 
        {
            var_47 = ((/* implicit */int) var_5);
            /* LoopNest 2 */
            for (unsigned short i_21 = 1; i_21 < 9; i_21 += 2) 
            {
                for (unsigned short i_22 = 0; i_22 < 10; i_22 += 4) 
                {
                    {
                        var_48 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_29 [i_19] [i_20] [i_21] [i_22] [i_19]))));
                        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_9)) > (arr_54 [i_20]))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_19] [(signed char)12] [i_21] [i_19]))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) / (arr_38 [i_19]))))))))));
                        arr_76 [(unsigned short)0] [i_20] [i_20] [7U] [i_20] [(unsigned char)2] = ((/* implicit */unsigned short) ((_Bool) ((signed char) min((var_0), (((/* implicit */unsigned long long int) var_6))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
        {
            var_50 = ((/* implicit */unsigned char) max((var_50), (((/* implicit */unsigned char) var_3))));
            var_51 ^= ((/* implicit */unsigned long long int) arr_77 [i_19]);
        }
    }
    var_52 = ((/* implicit */signed char) min((var_52), (((signed char) ((((/* implicit */_Bool) (signed char)24)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1604357631016622318LL))))))))));
}
