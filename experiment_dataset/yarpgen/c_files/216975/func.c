/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216975
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
    var_11 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((unsigned short) var_9))) ? (((((/* implicit */_Bool) var_8)) ? (2620329219755731028ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_8), (((/* implicit */unsigned char) (signed char)37)))))))));
    var_12 |= ((/* implicit */unsigned short) min((((/* implicit */unsigned char) ((_Bool) min((var_0), (((/* implicit */unsigned char) (signed char)-69)))))), (((unsigned char) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_9)))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (_Bool)1))));
                arr_6 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopNest 3 */
        for (short i_3 = 1; i_3 < 17; i_3 += 3) 
        {
            for (unsigned char i_4 = 3; i_4 < 18; i_4 += 3) 
            {
                for (unsigned short i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        var_15 = ((/* implicit */long long int) min((((int) arr_16 [(signed char)6] [i_3 - 1] [i_4 - 3])), ((-(((/* implicit */int) var_10))))));
                        var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) / (((((/* implicit */int) var_4)) - (((/* implicit */int) var_5))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-67))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -118293781)) ? (((/* implicit */int) (unsigned char)176)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) arr_10 [9ULL])) : (max((((/* implicit */unsigned long long int) var_5)), (12671952360882720984ULL)))))));
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_5] [i_4])))))))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 18; i_7 += 1) 
            {
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_5 [i_6] [i_6])))) ? ((-(((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_9))))) : (((/* implicit */int) ((_Bool) ((signed char) (signed char)66))))));
                    var_19 = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) arr_2 [i_7 + 1])));
                }
            } 
        } 
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)37)))))));
    }
    for (unsigned short i_8 = 1; i_8 < 23; i_8 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) arr_25 [i_8 + 1]))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_8 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))));
            /* LoopSeq 4 */
            for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
            {
                var_23 = ((/* implicit */unsigned short) var_9);
                var_24 = ((/* implicit */unsigned short) ((arr_26 [i_8 + 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                /* LoopSeq 4 */
                for (signed char i_11 = 3; i_11 < 23; i_11 += 3) 
                {
                    var_25 |= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_5)))) & (((/* implicit */int) ((unsigned char) var_1)))));
                    arr_37 [i_8] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_34 [i_8] [i_8] [i_8] [i_10] [i_11]))));
                }
                for (signed char i_12 = 0; i_12 < 25; i_12 += 2) 
                {
                    var_26 = ((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_8 - 1])) ? (arr_26 [i_8 - 1]) : (((/* implicit */unsigned long long int) arr_31 [i_8 - 1]))));
                    var_27 = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)64))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)3))))));
                    var_28 = ((/* implicit */signed char) ((((/* implicit */int) var_6)) - ((-(((/* implicit */int) arr_32 [i_8] [0U] [i_10]))))));
                    var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)37)) || (((/* implicit */_Bool) (signed char)31)))))) < (arr_31 [i_8 + 2]))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_30 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) arr_26 [i_10]))) ? (arr_38 [i_8 - 1] [i_13] [i_13] [i_13] [5] [i_13]) : (((/* implicit */unsigned long long int) (-(var_9))))));
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10))))) ^ (arr_36 [i_8 + 1] [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 + 2])));
                    var_32 = ((/* implicit */_Bool) ((((((/* implicit */int) var_0)) == (((/* implicit */int) var_4)))) ? ((~(((/* implicit */int) arr_44 [i_13] [i_10] [i_8 - 1] [i_8 - 1])))) : (((int) (signed char)-74))));
                }
                for (signed char i_14 = 2; i_14 < 23; i_14 += 2) 
                {
                    var_33 = ((/* implicit */unsigned int) ((_Bool) (short)2505));
                    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((unsigned int) (_Bool)1)) : (((var_9) | (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))));
                    var_35 = ((/* implicit */signed char) ((arr_30 [i_9]) & (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                    var_36 = ((/* implicit */_Bool) ((((587343050012511929LL) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)56450))))) : (var_9)));
                }
                var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)41760))));
            }
            for (unsigned short i_15 = 4; i_15 < 23; i_15 += 4) 
            {
                var_38 = ((/* implicit */short) min((var_38), (((/* implicit */short) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9))))))));
                var_39 ^= ((/* implicit */unsigned short) ((((arr_27 [i_8] [i_8]) == (arr_27 [i_9] [i_9]))) ? (arr_38 [i_8] [23ULL] [i_8] [i_8 - 1] [i_8 + 1] [i_15 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
            }
            for (signed char i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 3) 
                {
                    for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 1) 
                    {
                        {
                            arr_58 [i_18] [(unsigned short)18] [i_16] [i_8] [i_8] = (~(12048700802177201144ULL));
                            arr_59 [i_8] [i_8] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7))));
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) var_0))));
                            var_41 ^= ((/* implicit */long long int) ((((arr_39 [i_8] [i_9] [3ULL] [i_17] [i_18]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_8 + 1])))));
                        }
                    } 
                } 
                var_42 = ((/* implicit */unsigned long long int) max((var_42), (((/* implicit */unsigned long long int) ((arr_54 [i_8]) / (((/* implicit */unsigned int) arr_28 [i_8 - 1] [i_8 + 1] [(unsigned char)6])))))));
            }
            for (signed char i_19 = 0; i_19 < 25; i_19 += 4) /* same iter space */
            {
                var_43 += ((/* implicit */unsigned long long int) arr_34 [i_8] [i_8] [i_8] [i_9] [i_9]);
                /* LoopSeq 2 */
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 2) 
                {
                    var_44 = ((/* implicit */unsigned int) var_10);
                    var_45 = ((arr_38 [i_8 + 2] [i_8 + 1] [i_8 - 1] [i_8 + 1] [i_8 - 1] [i_8 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_8 - 1] [i_8 - 1]))));
                }
                for (unsigned char i_21 = 0; i_21 < 25; i_21 += 4) 
                {
                    arr_70 [i_8] [i_9] [i_9] [i_19] [i_19] [i_21] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_42 [i_21] [i_21] [i_19] [i_9] [i_8] [i_8])) ^ (((/* implicit */int) (signed char)37)))) & (arr_27 [i_8 + 2] [i_8 - 1])));
                    arr_71 [i_8] [(signed char)20] [i_9] [i_19] [i_21] = ((/* implicit */short) (~((-(((/* implicit */int) var_3))))));
                    var_46 *= arr_42 [i_8 + 1] [i_8 + 1] [i_8 - 1] [i_8 + 2] [i_8 + 1] [i_8 + 1];
                    /* LoopSeq 4 */
                    for (unsigned int i_22 = 0; i_22 < 25; i_22 += 3) 
                    {
                        var_47 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)220)) == (((/* implicit */int) var_7)))))));
                        var_48 = ((/* implicit */short) ((unsigned long long int) arr_63 [i_8 + 1] [i_8 + 2] [i_8 - 1] [i_8 - 1]));
                    }
                    for (unsigned char i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        arr_76 [i_8] [i_9] [i_8] [i_19] [i_21] [i_23] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -31502990)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-106))));
                        arr_77 [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (arr_31 [i_8 + 1]) : (arr_31 [i_8 - 1])));
                    }
                    for (int i_24 = 0; i_24 < 25; i_24 += 4) 
                    {
                        var_49 = ((/* implicit */_Bool) var_4);
                        arr_82 [i_24] [i_21] [i_19] [i_9] [i_9] [i_8 + 1] = ((/* implicit */signed char) (+(((/* implicit */int) var_4))));
                    }
                    for (unsigned int i_25 = 4; i_25 < 22; i_25 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 6398043271532350471ULL)) ? (6398043271532350496ULL) : (((/* implicit */unsigned long long int) arr_31 [i_19]))));
                        var_51 = ((((/* implicit */int) ((arr_54 [i_19]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_8] [i_9] [i_21])))))) == (((/* implicit */int) var_8)));
                    }
                    var_52 = ((/* implicit */unsigned long long int) max((var_52), (((/* implicit */unsigned long long int) ((((unsigned int) -201364170)) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) < (arr_80 [i_19])))))))));
                }
            }
            arr_85 [i_9] &= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_69 [(signed char)14] [i_8 + 2] [(signed char)14])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5)))) : (((((/* implicit */int) var_1)) >> (((((/* implicit */int) arr_81 [i_9] [i_9] [i_8 - 1] [i_8] [i_8])) - (58)))))));
            var_53 = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))));
        }
        var_54 ^= ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) var_1)))) == (((((/* implicit */_Bool) var_4)) ? (201364169) : (((/* implicit */int) var_0)))))) ? (((/* implicit */long long int) min((((int) var_2)), (((/* implicit */int) min(((unsigned short)26216), (((/* implicit */unsigned short) (_Bool)1)))))))) : (((arr_30 [i_8 + 2]) - (((/* implicit */long long int) ((/* implicit */int) arr_56 [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_8 + 2] [i_8 - 1])))))));
        var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)5)) ^ (((/* implicit */int) (_Bool)1))));
        var_56 = min((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)9958)))) ? (((/* implicit */int) (short)112)) : (((/* implicit */int) (short)-133))))), (((unsigned int) ((int) (_Bool)1))));
    }
    for (unsigned short i_26 = 1; i_26 < 23; i_26 += 4) /* same iter space */
    {
        var_57 = ((/* implicit */int) min((var_57), ((~(((int) var_6))))));
        var_58 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)62526))));
    }
}
