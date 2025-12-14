/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248954
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248954 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248954
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */signed char) ((unsigned int) 14U));
            var_19 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)5))))) / (arr_5 [i_0] [i_1 - 2])));
        }
        var_20 ^= ((/* implicit */unsigned char) arr_6 [i_0] [i_0]);
        var_21 = ((/* implicit */unsigned int) ((signed char) arr_0 [i_0]));
    }
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) arr_5 [i_2] [i_2]);
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
            {
                {
                    var_23 = ((/* implicit */signed char) (+(max((arr_5 [i_3] [i_3]), (arr_8 [i_2])))));
                    arr_14 [i_2] [i_2] [i_3] [i_2] = max((min((arr_13 [i_4]), (arr_13 [i_2]))), (((/* implicit */unsigned int) ((signed char) arr_13 [i_3]))));
                }
            } 
        } 
        arr_15 [i_2] [i_2] = ((/* implicit */_Bool) ((signed char) ((arr_12 [i_2] [i_2] [i_2]) ? (((((/* implicit */_Bool) (unsigned char)249)) ? (18446744073709551600ULL) : (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) arr_8 [i_2])))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 25; i_5 += 4) /* same iter space */
    {
        arr_19 [i_5] [i_5] &= ((unsigned int) (-(arr_13 [i_5])));
        /* LoopNest 3 */
        for (short i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (signed char i_7 = 4; i_7 < 23; i_7 += 2) 
            {
                for (unsigned char i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    {
                        var_24 = ((/* implicit */unsigned char) arr_29 [i_8] [i_8] [i_8]);
                        var_25 -= ((/* implicit */unsigned char) arr_1 [i_6]);
                        arr_30 [i_6] [i_8] [i_7] [i_6] = ((/* implicit */signed char) ((unsigned int) (+(var_10))));
                        arr_31 [i_5] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_25 [i_5] [i_5] [i_7 - 2] [i_7 - 2]) : (((/* implicit */unsigned long long int) arr_17 [i_8]))))) ? (arr_28 [i_5] [i_6] [i_7 + 1] [i_5]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-126)))))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */unsigned int) var_7);
        arr_32 [i_5] &= ((/* implicit */_Bool) ((unsigned long long int) 133651938U));
    }
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 4) /* same iter space */
    {
        arr_37 [i_9] [i_9] = ((/* implicit */unsigned int) (unsigned char)179);
        var_27 = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [i_9] [i_9] [i_9] [i_9]))))), ((unsigned char)251))), (((/* implicit */unsigned char) (_Bool)1))));
        var_28 ^= ((/* implicit */unsigned int) ((short) ((unsigned char) arr_10 [i_9] [i_9])));
        var_29 = ((/* implicit */short) min((var_29), ((short)8128)));
        /* LoopSeq 3 */
        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) /* same iter space */
        {
            arr_40 [i_9] [i_10] [i_10] = ((/* implicit */short) (((!(((/* implicit */_Bool) 19ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_28 [i_9] [i_9] [i_9] [i_9])))) : (max((((((/* implicit */_Bool) (unsigned char)5)) ? (11581849147350245030ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))))), (((/* implicit */unsigned long long int) (-(4294967295U))))))));
            var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((/* implicit */int) max((arr_2 [i_10]), (arr_20 [i_10])))) & (((((/* implicit */int) arr_2 [i_9])) + (((/* implicit */int) arr_2 [i_9])))))))));
        }
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) /* same iter space */
        {
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_11])) ? (arr_17 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9] [i_9]))))))));
            var_32 |= ((/* implicit */signed char) (-(arr_38 [i_11] [i_9] [i_9])));
            arr_43 [i_11] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_33 [i_11]))));
            /* LoopNest 3 */
            for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
            {
                for (signed char i_13 = 0; i_13 < 25; i_13 += 2) 
                {
                    for (short i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        {
                            arr_52 [i_14] [i_14] = ((/* implicit */unsigned int) ((unsigned long long int) 18446744073709551601ULL));
                            arr_53 [i_9] [i_9] [i_9] [i_9] [i_14] = ((/* implicit */short) (signed char)-1);
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_15 = 4; i_15 < 23; i_15 += 2) 
        {
            var_33 = ((unsigned int) arr_20 [i_15 - 4]);
            var_34 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) 11581849147350245021ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))));
            arr_56 [i_15] [i_9] = ((signed char) (unsigned char)251);
            var_35 = ((/* implicit */signed char) (-(arr_33 [i_15 + 1])));
            /* LoopSeq 3 */
            for (short i_16 = 0; i_16 < 25; i_16 += 3) 
            {
                var_36 = ((/* implicit */unsigned int) ((_Bool) arr_51 [i_15 - 4] [i_15 + 2] [i_15 + 1] [i_15 + 1] [i_15 + 2] [i_15 - 3]));
                var_37 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (11581849147350245030ULL))));
            }
            for (unsigned int i_17 = 3; i_17 < 24; i_17 += 1) 
            {
                arr_62 [i_9] [i_15 - 2] [i_17] = ((/* implicit */_Bool) arr_50 [i_9] [i_15 + 1]);
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 1843119507U)) >= (2254507925673686277ULL)));
                var_39 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2484118042U))));
                var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) var_7))));
                /* LoopSeq 4 */
                for (unsigned int i_18 = 0; i_18 < 25; i_18 += 1) /* same iter space */
                {
                    arr_65 [i_9] [i_15] [i_17] [i_15] &= ((/* implicit */signed char) ((short) arr_0 [i_17 - 1]));
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)18501))))) ? (((/* implicit */int) arr_46 [i_9] [i_17 - 3] [i_17] [i_18])) : (((/* implicit */int) (short)8118))));
                }
                for (unsigned int i_19 = 0; i_19 < 25; i_19 += 1) /* same iter space */
                {
                    arr_68 [i_9] [i_17] [i_9] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)18))));
                    var_42 = ((/* implicit */signed char) ((unsigned long long int) arr_67 [i_15 + 1] [i_17 - 1]));
                    var_43 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 1843119521U)))) ? (((/* implicit */int) (_Bool)1)) : (((arr_16 [i_9]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_36 [i_9]))))));
                }
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 1) /* same iter space */
                {
                    var_44 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_72 [i_9] [i_15] [i_15 - 1] [i_9])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_72 [i_15] [i_15] [i_15 - 2] [i_15]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_21 = 0; i_21 < 25; i_21 += 1) 
                    {
                        var_45 *= ((/* implicit */unsigned int) ((short) 1U));
                        var_46 ^= ((/* implicit */unsigned long long int) var_0);
                        var_47 = ((/* implicit */unsigned int) ((unsigned long long int) arr_72 [i_15 - 1] [i_15 - 1] [i_17 - 1] [i_17]));
                        var_48 *= (~(arr_50 [i_17] [i_9]));
                        var_49 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_66 [i_9] [i_15] [i_15 - 2] [i_15 - 3] [i_15 + 1])) ? (((/* implicit */int) arr_66 [i_15] [i_15] [i_15] [i_15] [i_15 - 3])) : (((/* implicit */int) var_12))));
                    }
                    for (unsigned int i_22 = 0; i_22 < 25; i_22 += 1) 
                    {
                        var_50 = var_8;
                        var_51 = ((/* implicit */signed char) min((var_51), (((/* implicit */signed char) (~(2080374784U))))));
                        arr_77 [i_22] [i_22] [i_17] [i_17] [i_15 - 2] [i_9] [i_9] = 2219646833U;
                        var_52 = ((/* implicit */unsigned int) arr_38 [i_9] [i_22] [i_15]);
                        var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) (short)18502))));
                    }
                    for (unsigned int i_23 = 3; i_23 < 24; i_23 += 1) 
                    {
                        var_54 = ((/* implicit */unsigned char) (-(((unsigned int) (signed char)-115))));
                        arr_80 [i_17] [i_17] = ((/* implicit */short) ((unsigned char) arr_79 [i_17] [i_15 - 4] [i_15 - 4] [i_15 - 3] [i_15 - 3] [i_15 - 2]));
                    }
                    arr_81 [i_9] [i_15] [i_17] [i_17 - 1] [i_20] = ((/* implicit */short) arr_48 [i_9] [i_15] [i_17 - 1] [i_20]);
                    arr_82 [i_15] [i_9] [i_17] [i_15] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)114)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_15] [i_15]))) : (var_4)))));
                }
                for (signed char i_24 = 0; i_24 < 25; i_24 += 3) 
                {
                    var_55 = arr_44 [i_9] [i_15] [i_17] [i_24];
                    var_56 &= ((/* implicit */signed char) ((arr_58 [i_9] [i_15 - 2] [i_17 - 1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_9] [i_17 - 3] [i_15 + 1] [i_15 + 1])))));
                }
            }
            for (signed char i_25 = 2; i_25 < 24; i_25 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_26 = 0; i_26 < 25; i_26 += 1) 
                {
                    var_57 = arr_72 [i_9] [i_15 - 3] [i_25 - 1] [i_26];
                    var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) ((arr_78 [i_9] [i_25 - 1] [i_9] [i_26] [i_9] [i_9] [i_26]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_9] [i_15 + 1] [i_25 - 1]))))))));
                    var_59 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-18)) == (((/* implicit */int) arr_26 [i_9] [i_15] [i_25 + 1] [i_26]))));
                }
                arr_89 [i_25] [i_15 - 1] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)64)) ? (14137731415007622589ULL) : (11581849147350245025ULL)));
                var_60 += ((/* implicit */unsigned char) ((short) arr_17 [i_25 + 1]));
                var_61 = (~(2398659857U));
            }
        }
    }
    var_62 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)69));
    var_63 = ((/* implicit */signed char) var_10);
}
