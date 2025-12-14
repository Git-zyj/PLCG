/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231961
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231961 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231961
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
    /* LoopSeq 4 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */_Bool) (-9223372036854775807LL - 1LL));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))) : (((unsigned int) arr_1 [i_0] [i_0]))))));
        /* LoopSeq 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_20 &= ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
            var_21 &= ((/* implicit */int) arr_4 [i_0] [i_0]);
            var_22 += ((/* implicit */int) min(((short)6986), (((/* implicit */short) arr_0 [i_0] [i_0 - 1]))));
            var_23 |= ((/* implicit */signed char) arr_1 [i_1] [i_0]);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_24 &= ((/* implicit */unsigned int) ((int) min(((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) (short)-6986))))), (((/* implicit */long long int) max((arr_3 [i_0] [i_0 - 2] [i_0]), (((/* implicit */signed char) arr_9 [i_0] [i_2] [i_2]))))))));
            var_25 = ((/* implicit */signed char) -9186384189807195509LL);
        }
    }
    for (unsigned int i_3 = 3; i_3 < 21; i_3 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 21; i_5 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (signed char i_6 = 0; i_6 < 23; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */signed char) (+(((((((/* implicit */int) (signed char)(-127 - 1))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 4930129532359564163LL)))))))));
                        var_27 = ((/* implicit */int) arr_12 [i_3]);
                        var_28 = ((/* implicit */short) max(((+((((_Bool)0) ? (3413207127U) : (arr_15 [i_6] [i_5] [i_4] [i_3 - 1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_3])) ? (((/* implicit */int) ((signed char) var_10))) : (var_12))))));
                    }
                    /* vectorizable */
                    for (signed char i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        var_29 = ((/* implicit */_Bool) ((int) ((var_2) > (((/* implicit */unsigned int) var_6)))));
                        var_30 = ((/* implicit */_Bool) arr_19 [i_4] [i_5] [i_4] [i_5] [i_5 + 2] [i_5 - 1]);
                    }
                    for (unsigned int i_8 = 2; i_8 < 21; i_8 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)6991))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_4]))))) : (min((max((4294965248U), (((/* implicit */unsigned int) arr_11 [i_3] [i_4])))), (((/* implicit */unsigned int) ((var_9) ? (var_11) : (((/* implicit */int) var_15)))))))));
                        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_3 + 1] [i_3 + 1])) ? ((-(arr_10 [i_3]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_4] [i_8])))))))) : (((((/* implicit */_Bool) ((long long int) arr_18 [i_3] [i_5] [i_5 - 1] [i_8]))) ? (max((-9186384189807195509LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) arr_23 [i_4] [i_3 - 3] [i_3] [i_3 - 3]))))));
                        var_34 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_5])) ? (((((/* implicit */_Bool) arr_19 [i_5 + 2] [i_4] [i_5 + 1] [i_8 + 1] [i_8 + 1] [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_12 [i_3])))) : (((unsigned int) var_13)))) : (min(((+(arr_15 [i_3] [i_4] [i_5] [i_3]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_3])))))))));
                    }
                    /* vectorizable */
                    for (signed char i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        var_35 = ((/* implicit */_Bool) var_14);
                        var_36 &= ((/* implicit */signed char) arr_19 [i_3] [i_3] [i_5] [i_3] [i_3] [i_3]);
                        var_37 = ((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_9]);
                        var_38 = ((/* implicit */short) ((unsigned int) arr_19 [i_5 + 1] [i_3 + 2] [i_5] [i_9] [i_4] [i_4]));
                    }
                    var_39 = ((/* implicit */unsigned int) arr_20 [i_3] [i_3] [i_5]);
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6986)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_3])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (9223372036854775807LL)))) ? (((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)34))) + (arr_19 [i_3 + 2] [i_3] [i_4] [i_4] [i_5] [i_10])))) : (var_0))))));
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_16) : (var_0)));
                        var_42 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_4)) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_3 + 2]))) ^ (max((((/* implicit */unsigned int) arr_14 [i_5] [i_5])), (arr_23 [i_10] [i_3 - 1] [i_3 - 1] [i_3])))))));
                    }
                }
            } 
        } 
        var_43 = ((/* implicit */int) max((((/* implicit */long long int) 4294967295U)), (((((/* implicit */_Bool) -523069860911130084LL)) ? (4569010130100357757LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) -1)) ? (arr_11 [i_3] [i_3]) : (2147483618))))))));
        var_44 += ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_14 [i_3 - 2] [i_3 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_25 [i_3] [i_3] [(unsigned short)10] [i_3])))) : (max((arr_19 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), (((/* implicit */unsigned int) (!((_Bool)1))))))));
        var_45 &= (+(-1));
    }
    for (unsigned int i_11 = 3; i_11 < 21; i_11 += 2) /* same iter space */
    {
        var_46 &= ((/* implicit */short) (signed char)-64);
        /* LoopNest 3 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
            {
                for (unsigned short i_14 = 1; i_14 < 21; i_14 += 4) 
                {
                    {
                        var_47 = ((/* implicit */short) ((unsigned short) arr_37 [i_11] [i_11] [i_11] [i_11] [i_13]));
                        var_48 &= ((/* implicit */unsigned int) (short)6986);
                        var_49 ^= ((/* implicit */long long int) arr_30 [i_11]);
                        /* LoopSeq 1 */
                        for (short i_15 = 0; i_15 < 23; i_15 += 3) 
                        {
                            var_50 *= ((/* implicit */int) ((((min((-8027890941369878673LL), (((/* implicit */long long int) (_Bool)1)))) + (9223372036854775807LL))) << (((((((var_10) ? (arr_18 [i_11 - 3] [i_12 - 1] [i_13 + 1] [i_14 - 1]) : (3409398123061713573LL))) + (3215457479403565150LL))) - (33LL)))));
                            var_51 += arr_10 [i_11];
                            var_52 += ((/* implicit */_Bool) ((int) arr_16 [i_12]));
                        }
                        var_53 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_14] [i_12] [i_13]) ? (((/* implicit */int) arr_35 [i_11] [i_14] [i_14] [i_14])) : (var_5)))) ? (((/* implicit */long long int) max((var_17), (((/* implicit */unsigned int) arr_20 [i_11] [i_13] [i_11]))))) : (((long long int) (_Bool)1))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_16 = 3; i_16 < 21; i_16 += 2) /* same iter space */
    {
        var_54 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [(short)6] [(short)6] [i_16] [(short)6])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_16 + 2] [i_16 + 2] [i_16 - 2] [4U]))) : (1904411723U)))) ? (max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-3382322643382544260LL))))) : (((((/* implicit */_Bool) ((arr_13 [i_16]) ^ (arr_17 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))) ? (arr_41 [i_16] [i_16 - 1] [(_Bool)1] [i_16] [i_16]) : (min((var_0), (((/* implicit */long long int) arr_27 [i_16] [i_16] [16U] [i_16]))))))));
        var_55 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_16] [i_16] [14] [i_16])) ? (((/* implicit */int) ((((/* implicit */int) arr_31 [i_16] [i_16])) > (((/* implicit */int) arr_25 [i_16] [i_16 + 2] [(_Bool)1] [i_16]))))) : (((/* implicit */int) max((arr_27 [i_16] [i_16] [10LL] [i_16]), (arr_20 [i_16] [i_16 - 1] [i_16]))))))) ? (((/* implicit */long long int) (~(((arr_20 [i_16 - 2] [i_16] [i_16 - 2]) ? (((/* implicit */int) var_10)) : (arr_24 [i_16] [i_16] [i_16] [i_16])))))) : (((((/* implicit */_Bool) ((arr_39 [i_16] [i_16 - 3] [i_16] [18U]) ? (((/* implicit */int) (signed char)-63)) : (var_5)))) ? (min((arr_41 [i_16] [i_16] [2U] [i_16] [i_16 - 3]), (((/* implicit */long long int) var_6)))) : (min((((/* implicit */long long int) 2383158192U)), (var_0)))))));
    }
    /* LoopSeq 2 */
    for (long long int i_17 = 0; i_17 < 15; i_17 += 4) 
    {
        var_56 &= ((/* implicit */short) 9223372036854775797LL);
        /* LoopSeq 1 */
        for (short i_18 = 0; i_18 < 15; i_18 += 3) 
        {
            var_57 = ((/* implicit */short) max((var_57), (((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) var_10))))), ((~(arr_40 [i_18] [i_18] [i_17])))))) ? (min((((/* implicit */long long int) ((arr_42 [i_18]) ? (220789692U) : (arr_17 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17])))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */long long int) 220789692U)) : (var_0))))) : (((/* implicit */long long int) ((((var_8) & (var_7))) | (min((arr_23 [i_17] [i_18] [i_17] [i_18]), (((/* implicit */unsigned int) arr_35 [i_17] [i_18] [i_18] [i_17]))))))))))));
            /* LoopNest 3 */
            for (unsigned int i_19 = 4; i_19 < 14; i_19 += 2) 
            {
                for (signed char i_20 = 0; i_20 < 15; i_20 += 2) 
                {
                    for (unsigned int i_21 = 0; i_21 < 15; i_21 += 1) 
                    {
                        {
                            var_58 &= ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (0LL)));
                            var_59 = ((/* implicit */signed char) ((int) ((((/* implicit */int) arr_20 [i_18] [i_18] [i_18])) << (((((/* implicit */_Bool) 9223372036854775807LL)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_17] [i_17] [i_17]))))))));
                            var_60 *= ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_37 [i_17] [i_18] [i_19] [i_19] [i_18])) && (((/* implicit */_Bool) var_5)))))), (max((1197928486), (((/* implicit */int) var_3))))));
                            var_61 = ((/* implicit */unsigned int) min((var_61), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_19 - 2])) ? (arr_33 [i_19 - 1]) : (arr_33 [i_19 - 4])))) ? (((((/* implicit */_Bool) var_16)) ? (arr_33 [i_19 - 1]) : (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((unsigned int) var_2))))))));
                            var_62 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) ((unsigned int) arr_21 [i_17] [i_17] [i_19] [i_20]))) ? (min((((/* implicit */long long int) (_Bool)1)), (var_0))) : (((/* implicit */long long int) ((arr_51 [i_17] [i_21] [i_19] [i_19]) << (((var_5) + (1702584837)))))))), (((/* implicit */long long int) (-(((/* implicit */int) var_13)))))));
                        }
                    } 
                } 
            } 
            var_63 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(min((arr_43 [i_17]), (((/* implicit */unsigned int) arr_56 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18] [i_18])))))))));
        }
    }
    for (long long int i_22 = 2; i_22 < 14; i_22 += 1) 
    {
        var_64 &= ((/* implicit */signed char) min((((((/* implicit */_Bool) (short)6986)) ? (arr_41 [i_22] [i_22 + 4] [(_Bool)1] [i_22 - 1] [i_22]) : (arr_41 [i_22] [i_22 + 4] [(signed char)18] [i_22] [i_22]))), (((/* implicit */long long int) (unsigned short)65535))));
        var_65 ^= (-(arr_2 [i_22] [i_22]));
    }
    var_66 = ((/* implicit */signed char) max((var_66), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) (+(((var_11) ^ (-416284334)))))) : (var_2))))));
    var_67 &= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? ((-(max((((/* implicit */long long int) var_4)), (var_0))))) : (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32976)) & (((/* implicit */int) var_10))))), ((~(4294967295U))))))));
}
