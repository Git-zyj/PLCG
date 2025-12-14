/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203727
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((long long int) ((((/* implicit */_Bool) -8469312260677288268LL)) ? (((((/* implicit */_Bool) -6667450178481930525LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) -1LL))));
        var_19 = ((/* implicit */unsigned short) arr_1 [i_0]);
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_11))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) max((arr_0 [i_0] [i_0]), (var_2))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_1 [i_2 - 1]))));
                var_22 = ((/* implicit */_Bool) min((var_22), (((var_9) || (((/* implicit */_Bool) arr_6 [i_2] [i_2 - 1] [i_2 - 1]))))));
            }
            for (unsigned short i_3 = 3; i_3 < 13; i_3 += 1) 
            {
                arr_13 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_3]))) : (arr_7 [i_1])))) ? (((/* implicit */int) arr_10 [i_3 + 4] [i_3 + 4] [i_3 + 4] [i_3 - 1])) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)2687)) != (((/* implicit */int) arr_2 [i_1] [i_1])))))));
                var_23 = ((/* implicit */unsigned short) ((2533203064539013149LL) == (((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1)))))));
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_24 = ((/* implicit */long long int) max((var_24), (((long long int) (+(((/* implicit */int) arr_12 [i_4] [(short)3])))))));
                var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_4] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_8 [(signed char)10] [(signed char)10] [i_0] [i_0])) : (((/* implicit */int) var_5)))))));
            }
            arr_17 [i_1] [i_1] = ((/* implicit */unsigned short) arr_7 [i_0]);
            arr_18 [i_1] = ((/* implicit */unsigned int) var_18);
            var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (+((~(((/* implicit */int) arr_16 [i_0] [i_0] [i_1])))))))));
            var_27 = ((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_1] [i_1] [i_0]))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            arr_21 [(_Bool)1] [i_5] [i_5] = ((((/* implicit */unsigned long long int) var_12)) & ((-(var_18))));
            var_28 -= ((/* implicit */_Bool) ((var_13) ? (((((/* implicit */_Bool) 5880266494475968255LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_5] [i_5]))) : (arr_20 [(unsigned char)11] [(unsigned char)11]))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204)))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 4) 
    {
        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) 11823919774898478057ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3023982930U))))));
        arr_26 [i_6] = ((/* implicit */unsigned char) (+(arr_7 [i_6])));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
    {
        arr_30 [i_7] = ((/* implicit */unsigned int) -2533203064539013149LL);
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
            {
                {
                    arr_37 [i_7] [i_8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_7] [i_7]))) != (arr_34 [i_7] [(_Bool)1]))))) : ((+(-5880266494475968258LL)))));
                    var_30 = ((/* implicit */long long int) arr_34 [i_7 + 1] [i_7 + 1]);
                }
            } 
        } 
        arr_38 [i_7] [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) arr_35 [i_7 + 1]))));
    }
    /* LoopSeq 2 */
    for (long long int i_10 = 0; i_10 < 12; i_10 += 2) /* same iter space */
    {
        arr_41 [i_10] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_20 [i_10] [i_10]) / (arr_20 [i_10] [i_10]))))));
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (signed char i_12 = 1; i_12 < 10; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 3; i_13 < 11; i_13 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(17742641890978648646ULL)))) ? (((((/* implicit */_Bool) arr_31 [i_13 - 1] [i_10] [0ULL])) ? (-2533203064539013153LL) : (-5880266494475968258LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (unsigned short)3840))))))) ? ((~((~(-5880266494475968247LL))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_12] [i_12 - 1] [i_11] [i_11]))))))))));
                        /* LoopSeq 2 */
                        for (signed char i_14 = 0; i_14 < 12; i_14 += 1) 
                        {
                            arr_51 [i_12] [i_12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_12 + 2] [i_13 - 3] [i_13] [i_13 + 1])) ? (((/* implicit */int) arr_49 [i_12 + 2] [i_12] [i_13] [i_13 + 1] [i_13 - 2])) : (((/* implicit */int) arr_49 [i_12 + 2] [i_13] [i_13] [i_13 + 1] [i_13 - 2])))))));
                            var_32 = ((/* implicit */signed char) (+(((((arr_31 [i_14] [i_12] [i_10]) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_10] [i_11] [i_11] [i_14]))))) ? (var_10) : (max((arr_11 [i_14]), (((/* implicit */long long int) arr_42 [i_10] [i_11]))))))));
                            arr_52 [i_12] [i_11] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_14])) ? ((+(var_18))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_48 [(signed char)5] [i_12 + 1] [i_13] [i_13 - 3]), (arr_48 [i_10] [i_12 + 1] [i_12] [i_13 - 3])))))));
                            var_33 = ((((unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (6622824298811073558ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127)))))) << (((((((/* implicit */_Bool) arr_16 [i_12] [i_12 - 1] [i_12 + 1])) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_49 [i_10] [i_10] [i_10] [i_10] [i_10])), (536870911U)))) : (((((/* implicit */_Bool) var_5)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_14))))))) - (536870906LL))));
                        }
                        for (unsigned char i_15 = 2; i_15 < 10; i_15 += 2) 
                        {
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) arr_46 [i_10] [i_10] [i_10] [4U]))));
                            var_35 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-120))));
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13] [i_13 - 1] [i_13 - 2] [i_13 - 1] [i_13]))) + (((((/* implicit */_Bool) var_6)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_12 - 1] [i_13 - 3] [i_15 - 1])))))));
                            arr_56 [i_12] = ((/* implicit */_Bool) (~(-2533203064539013150LL)));
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_37 ^= ((((/* implicit */int) arr_50 [i_12 + 1] [i_12 + 1] [i_12 - 1] [i_12 + 1])) < ((+(((/* implicit */int) arr_19 [i_10] [i_12] [i_12])))));
                            arr_60 [(unsigned short)2] [i_11] [i_12] [i_13] [i_12] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))));
                        }
                    }
                } 
            } 
        } 
        var_38 += ((/* implicit */unsigned int) max(((+(arr_7 [i_10]))), ((+(6622824298811073558ULL)))));
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 12; i_17 += 2) /* same iter space */
    {
        arr_63 [i_17] [i_17] = ((/* implicit */unsigned int) ((_Bool) (+(((/* implicit */int) arr_54 [i_17] [i_17] [i_17] [(unsigned char)6] [i_17] [i_17])))));
        /* LoopNest 3 */
        for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
        {
            for (unsigned char i_19 = 3; i_19 < 9; i_19 += 4) 
            {
                for (unsigned long long int i_20 = 0; i_20 < 12; i_20 += 1) 
                {
                    {
                        var_39 = ((signed char) var_8);
                        var_40 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_55 [i_19] [i_19 + 3] [i_19 + 3] [i_19] [i_19 - 1] [i_19 - 3] [i_19])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((5880266494475968255LL) >> (((/* implicit */int) (_Bool)1))))));
                        var_41 = ((/* implicit */unsigned char) ((short) (signed char)-93));
                        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_45 [i_18] [i_19 + 3] [i_19 + 1] [i_17])) || (((/* implicit */_Bool) var_12))));
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) arr_29 [i_17] [i_17]))));
            var_44 = ((/* implicit */_Bool) max((var_44), (((arr_20 [i_21] [i_21]) < (arr_75 [i_17] [i_17] [i_17] [i_17])))));
        }
        for (signed char i_22 = 2; i_22 < 11; i_22 += 4) 
        {
            var_45 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_22 + 1] [i_17] [i_17] [i_17]))) - (arr_31 [i_22 - 1] [i_22] [i_22 - 2])));
            var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) arr_75 [i_22 - 1] [i_17] [i_17] [i_17]))));
            arr_82 [2LL] = ((/* implicit */long long int) var_1);
            arr_83 [i_17] [i_17] [i_22] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3516877213U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_22 - 2] [1] [i_22 - 1]))) : (((((/* implicit */_Bool) arr_71 [(_Bool)1])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-9223372036854775807LL - 1LL))))));
            /* LoopNest 2 */
            for (int i_23 = 2; i_23 < 9; i_23 += 4) 
            {
                for (unsigned short i_24 = 0; i_24 < 12; i_24 += 2) 
                {
                    {
                        var_47 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_22 - 1] [i_23])) ? (arr_20 [i_22 - 2] [i_23]) : (5880266494475968256LL)));
                        var_48 = ((/* implicit */unsigned char) ((-5880266494475968258LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)-93)))));
                        arr_89 [i_24] [9ULL] [i_23] = ((/* implicit */unsigned int) var_7);
                        var_49 = ((/* implicit */unsigned int) arr_62 [i_17]);
                    }
                } 
            } 
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            var_50 *= ((/* implicit */_Bool) ((long long int) arr_78 [i_17] [i_17] [i_17]));
            var_51 = (!(((/* implicit */_Bool) var_4)));
        }
    }
    var_52 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_15))));
}
