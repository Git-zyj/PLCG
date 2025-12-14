/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218458
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + ((+(((((/* implicit */_Bool) var_11)) ? (var_6) : (var_6)))))));
    var_16 = ((/* implicit */signed char) var_1);
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) && (((/* implicit */_Bool) var_0))))))));
            var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? ((((-(18446744073709551611ULL))) + (((/* implicit */unsigned long long int) ((var_7) - (((/* implicit */long long int) arr_3 [i_0] [i_1]))))))) : (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)11])))))))));
            var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((((var_4) + (9223372036854775807LL))) >> (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (arr_0 [i_0]))), (((/* implicit */unsigned long long int) var_5))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
            {
                var_20 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((9223372036854775807LL) >> (((arr_0 [i_2]) - (12099072527247484904ULL))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [(unsigned char)5] [(unsigned char)4] [(unsigned char)4])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0 + 1]))) : (arr_0 [i_0 - 1])))) ? (((/* implicit */int) ((unsigned short) var_6))) : (((/* implicit */int) ((signed char) var_9)))))) : (9223372036854775807LL)));
                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_3 [i_0 + 1] [i_0 - 1]) : (var_3))))));
                var_22 = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_2 [(signed char)0])) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_0])) : (((/* implicit */int) arr_6 [i_2] [i_3]))))), (((((/* implicit */unsigned long long int) var_12)) ^ (arr_8 [i_0]))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 13; i_4 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned int i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    var_23 = ((/* implicit */long long int) (+(((/* implicit */int) var_2))));
                    var_24 = var_8;
                    arr_16 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775799LL)) ? (var_7) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_2] [i_0])))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (arr_8 [i_0])))));
                    var_25 -= ((/* implicit */unsigned int) (+((-9223372036854775807LL - 1LL))));
                }
                for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                    var_27 = ((/* implicit */long long int) ((arr_9 [i_0] [i_2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    var_28 = ((/* implicit */long long int) ((signed char) arr_12 [i_0 + 1] [i_0 + 1] [i_0 - 1]));
                    var_29 = ((/* implicit */int) ((signed char) arr_14 [i_0] [i_0 + 1] [i_0]));
                    var_30 |= ((/* implicit */unsigned int) (-9223372036854775807LL - 1LL));
                }
                var_31 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9223372036854775807LL))));
                var_32 = ((/* implicit */unsigned short) var_2);
            }
            var_33 = ((/* implicit */unsigned long long int) min((var_33), (((/* implicit */unsigned long long int) var_1))));
        }
        for (long long int i_7 = 2; i_7 < 11; i_7 += 1) 
        {
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) ((_Bool) arr_1 [9])))))) ? ((~(9223372036854775807LL))) : (((/* implicit */long long int) arr_18 [i_0 + 1]))));
            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_0 + 1] [i_7 - 1] [i_7 - 1])) : (((/* implicit */int) var_5)))))))));
        }
        var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775807LL) : (9223372036854775807LL)));
        var_37 ^= ((/* implicit */unsigned char) ((((_Bool) var_14)) && (((/* implicit */_Bool) (~(max((9223372036854775804LL), (9223372036854775807LL))))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 20; i_8 += 2) /* same iter space */
    {
        arr_24 [i_8] = ((/* implicit */unsigned int) 9223372036854775807LL);
        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) min((arr_21 [i_8]), (((unsigned long long int) (-(((/* implicit */int) var_5))))))))));
        /* LoopNest 3 */
        for (long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
                {
                    {
                        var_39 = ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 9223372036854775804LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_10] [i_10] [i_10] [i_10] [5ULL] [10ULL]))) : ((-9223372036854775807LL - 1LL)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_30 [i_10] [18U] [i_10] [i_10] [18U] [i_10])) : (((/* implicit */int) arr_28 [i_8] [i_8] [i_8] [i_8])))))))) ? (((/* implicit */long long int) (+(min((var_3), (((/* implicit */unsigned int) var_2))))))) : (((((/* implicit */_Bool) var_11)) ? (9223372036854775807LL) : (-9223372036854775797LL)))));
                        var_40 = max((((/* implicit */int) max((var_1), (arr_30 [i_10] [i_10] [i_10] [i_10] [i_10] [i_11])))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) arr_22 [i_8] [i_9])) : (((/* implicit */int) arr_22 [i_11] [i_8])))));
                    }
                } 
            } 
        } 
        var_41 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) / (arr_29 [18U] [i_8] [i_8] [i_8] [i_8] [i_8])))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] [18U]))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))));
    }
    for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 2) /* same iter space */
    {
        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) -9223372036854775791LL)) ? (-9223372036854775800LL) : (9223372036854775807LL)));
        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_13) : (9223372036854775804LL)))) ? (arr_26 [i_12] [i_12]) : (((/* implicit */int) arr_25 [i_12] [i_12] [i_12])))))));
        var_44 = ((/* implicit */signed char) max((((((/* implicit */int) ((_Bool) arr_27 [i_12] [i_12] [i_12]))) * (((int) var_1)))), (((((/* implicit */_Bool) ((unsigned int) (-9223372036854775807LL - 1LL)))) ? (((int) 9223372036854775807LL)) : (((/* implicit */int) ((unsigned char) 9223372036854775799LL)))))));
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 20; i_13 += 2) 
        {
            /* LoopNest 2 */
            for (int i_14 = 0; i_14 < 20; i_14 += 2) 
            {
                for (unsigned short i_15 = 3; i_15 < 19; i_15 += 4) 
                {
                    {
                        var_45 = ((/* implicit */unsigned int) -9223372036854775807LL);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_16 = 2; i_16 < 18; i_16 += 2) 
                        {
                            var_46 = ((/* implicit */int) ((((/* implicit */_Bool) var_14)) ? (var_4) : (((((/* implicit */_Bool) -9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_12]))) : (-9223372036854775807LL)))));
                            var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775805LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [(unsigned short)18]))) : (arr_43 [i_12] [8U] [i_12] [i_13] [i_14] [(unsigned short)7] [(unsigned char)9])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_2))) / (-9223372036854775795LL))) : (9223372036854775807LL)));
                            var_48 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (var_4) : (9223372036854775807LL))) : ((~(-9223372036854775785LL)))));
                        }
                    }
                } 
            } 
            var_49 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_42 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12])))) ? (((((/* implicit */_Bool) ((9223372036854775797LL) / ((-9223372036854775807LL - 1LL))))) ? (9223372036854775786LL) : (((((/* implicit */_Bool) var_11)) ? (var_13) : (9223372036854775805LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_12] [i_13] [i_12] [i_12] [i_12] [i_12])))));
        }
    }
    var_50 = ((/* implicit */_Bool) var_14);
}
