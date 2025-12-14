/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210071
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
    var_11 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_2)))))) ? (max((var_5), (((/* implicit */unsigned long long int) ((var_7) != (var_0)))))) : (((/* implicit */unsigned long long int) var_8))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((((/* implicit */_Bool) ((unsigned long long int) 14759578212417286970ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [9U] [i_0])) == (7272753857141977574ULL))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8))))) : (((/* implicit */long long int) ((unsigned int) arr_2 [i_0] [i_0])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 2; i_2 < 8; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 8; i_3 += 2) 
                    {
                        for (long long int i_4 = 2; i_4 < 6; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [8] [i_3 - 2] [i_3] [i_4] = ((arr_5 [i_0]) + (((/* implicit */unsigned long long int) arr_12 [i_2 + 2] [i_3] [i_3 - 1] [i_3] [i_3 - 4] [i_4 + 3])));
                                var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_7 [i_4 + 3] [i_2] [i_2 + 1] [i_3 + 2])) : (((/* implicit */int) arr_7 [i_4 + 3] [i_4 - 1] [i_2 + 2] [i_3 + 2]))))) ? (((((((/* implicit */int) arr_7 [i_4 + 1] [i_1] [i_2 + 2] [i_3 - 2])) + (2147483647))) >> (((((/* implicit */int) arr_7 [i_4 + 3] [i_4 + 3] [i_2 + 2] [i_3 + 1])) + (85))))) : (((((/* implicit */_Bool) arr_7 [i_4 + 1] [i_1] [i_2 + 2] [i_3 + 2])) ? (((/* implicit */int) arr_7 [i_4 - 2] [i_3] [i_2 - 1] [i_3 - 1])) : (((/* implicit */int) arr_7 [i_4 + 2] [i_1] [i_2 + 1] [i_3 + 2]))))));
                                arr_16 [i_4 - 1] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) (+(arr_11 [i_0] [i_1] [i_2] [i_0])))) ? (((unsigned long long int) arr_12 [i_4 - 2] [2U] [i_2] [i_2] [i_1] [i_0])) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(arr_10 [i_0] [i_1] [i_1] [i_3 + 2] [i_4] [i_1])))) ? (((long long int) arr_2 [i_0] [i_2])) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (288385557771306616LL) : (((/* implicit */long long int) arr_12 [i_2] [8ULL] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1]))))))));
                                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (arr_0 [8U]) : (((/* implicit */unsigned int) var_10))))) ? (7272753857141977574ULL) : (((/* implicit */unsigned long long int) var_7))))) ? (max((14759578212417286970ULL), (18446744073709551615ULL))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_4 - 1] [i_3] [i_4 - 1] [i_3 + 2])) : (7272753857141977574ULL)))));
                            }
                        } 
                    } 
                    var_15 *= arr_5 [i_0];
                }
            } 
        } 
        arr_17 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_0] [i_0])), (var_9))) << (((var_0) - (3225774565U)))))) ? (min((max((18446744073709551609ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))), (((/* implicit */unsigned long long int) arr_9 [5ULL] [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) : (arr_8 [i_0] [i_0] [i_0] [i_0])))) | ((((_Bool)1) ? (var_0) : (var_7))))))));
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
        {
            for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) 
            {
                for (int i_7 = 3; i_7 < 9; i_7 += 3) 
                {
                    {
                        arr_24 [i_7] [i_7 - 3] [i_6] [i_6] = ((/* implicit */long long int) 18446744073709551615ULL);
                        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_8 [i_7] [i_7 + 1] [i_7] [i_7])))) ? (((((/* implicit */_Bool) 27ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_7 - 3] [i_6 - 1] [i_0])))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_23 [i_6] [i_6 - 1] [i_6 - 1] [i_6])) ? (((/* implicit */unsigned int) var_10)) : (var_7))));
                            var_18 = ((signed char) min((13542797912474155722ULL), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_2 [i_5] [i_8])), (arr_19 [i_5] [i_0]))))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) max((min((var_5), (((/* implicit */unsigned long long int) arr_12 [i_0] [i_0] [i_6 - 1] [i_6 + 1] [i_7] [i_8])))), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */unsigned int) min(((+(1704435407))), (((((/* implicit */_Bool) var_6)) ? (arr_23 [i_0] [i_5] [i_7 - 3] [i_0]) : (((/* implicit */int) arr_13 [i_0] [i_5] [i_6 - 1]))))))) : (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 17168062398858264407ULL))))), (min((((/* implicit */unsigned int) (-2147483647 - 1))), (arr_2 [i_7] [i_7])))))))));
                            arr_27 [i_0] [i_6] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_6 + 1] [i_7 - 3]))));
                        }
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 1; i_9 < 12; i_9 += 2) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_28 [i_9 + 1])) * (var_2))))));
            var_21 = arr_30 [i_9 - 1] [i_10 - 2] [i_10 - 2];
        }
        for (unsigned long long int i_11 = 3; i_11 < 12; i_11 += 4) /* same iter space */
        {
            arr_34 [i_9 + 1] = ((/* implicit */signed char) ((3687165861292264646ULL) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_11]))))))))));
            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_31 [0ULL] [i_11 - 1] [i_11])))) ? (((((/* implicit */_Bool) arr_29 [i_11] [i_11 - 1])) ? (arr_31 [i_9] [i_11 + 2] [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9] [i_11 - 3]))))) : (((((/* implicit */_Bool) arr_31 [2ULL] [i_11 + 1] [i_11 + 1])) ? (arr_31 [i_11] [i_11 + 1] [i_11 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9] [i_11 - 3]))))))))));
            arr_35 [i_9] [i_9] [i_9 + 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 6291456U)), (-8972601921552701427LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_11 - 3] [i_11 - 2] [i_9 - 1])))))) : (min((arr_30 [i_11 + 1] [i_11 + 2] [i_9 + 2]), (arr_30 [i_11 + 2] [i_11 - 1] [i_9 + 2])))));
        }
        for (unsigned long long int i_12 = 3; i_12 < 12; i_12 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                for (int i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        {
                            var_23 |= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_40 [i_12] [i_12 - 1])))))) - (((((/* implicit */_Bool) 7272753857141977574ULL)) ? (((((/* implicit */_Bool) -3520908007299374762LL)) ? (((/* implicit */unsigned long long int) -764307732)) : (12735497240923811076ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775803LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)49)))))))));
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) var_9)))))) ? (arr_30 [i_9 + 1] [i_13] [i_9 + 1]) : (((/* implicit */unsigned int) min((arr_40 [i_12] [i_12 - 1]), (var_10)))))))));
                            var_25 = ((unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_10)) : (var_7)))) ? (arr_37 [i_9 - 1] [i_12 + 2] [i_12 - 1]) : (((/* implicit */long long int) ((unsigned int) var_0)))));
                            var_26 = ((/* implicit */long long int) (!(((((var_9) & (((/* implicit */unsigned long long int) arr_28 [i_12 - 3])))) <= (((((/* implicit */_Bool) arr_30 [i_9 + 2] [i_12] [i_14])) ? (var_6) : (var_1)))))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((min((arr_41 [(signed char)0]), (arr_41 [6ULL]))) >> (((arr_37 [i_9] [i_9] [i_9]) - (1024076333901909298LL))))))));
            var_28 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1787785609U)) & (11ULL)));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_42 [i_9 + 2] [i_12] [i_12 + 2] [i_12] [i_12 + 1])) ? (arr_37 [i_12 - 3] [i_9] [i_9]) : (((/* implicit */long long int) arr_28 [i_9]))))))) == (((((/* implicit */_Bool) ((int) arr_39 [i_12] [i_12 - 3] [i_9] [6]))) ? (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */unsigned long long int) arr_41 [i_12])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 206158430208LL)) && (((/* implicit */_Bool) 1442647955))))))))));
        }
        for (unsigned long long int i_16 = 3; i_16 < 12; i_16 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */unsigned long long int) var_0))))) ? (arr_40 [i_9 + 2] [i_16 + 2]) : (((int) var_5)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_9 + 1] [i_9 + 1] [i_16 - 2])) ? (((/* implicit */long long int) arr_41 [i_16])) : (var_8)))))))));
            var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) arr_50 [i_9 + 2] [i_9 + 1] [i_16])) & (((/* implicit */int) arr_50 [i_9 + 2] [i_9 - 1] [i_16])))) : (-1704435384)));
            arr_51 [i_16] [i_16] = arr_46 [i_9] [i_9 + 1] [i_9] [i_16 + 2] [i_16 + 1] [i_16] [i_16 + 1];
        }
        var_32 = ((18446744073709551589ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-120))));
    }
}
