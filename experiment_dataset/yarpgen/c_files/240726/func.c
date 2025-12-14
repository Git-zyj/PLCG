/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240726
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
    var_20 = ((/* implicit */int) (-(3713681391313504658LL)));
    var_21 -= ((/* implicit */unsigned short) ((min((((/* implicit */long long int) (unsigned short)59086)), (((-5704423923928236882LL) & (((/* implicit */long long int) var_12)))))) ^ ((~(min((((/* implicit */long long int) var_11)), (var_17)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_22 = ((((/* implicit */_Bool) var_3)) ? (arr_0 [7] [i_0 + 1]) : (arr_2 [i_0 + 1]));
        var_23 = (+(((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (-5704423923928236876LL))));
    }
    for (long long int i_1 = 2; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_4)) ? (-2042237023607329869LL) : (438419541047620399LL))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) var_18)) && (((/* implicit */_Bool) -5704423923928236882LL))))) != (((/* implicit */int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))))))))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            for (long long int i_3 = 3; i_3 < 23; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                        {
                            arr_16 [i_1] [i_4] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)59086))) + (-5704423923928236882LL))) == (((((-5704423923928236876LL) + (9223372036854775807LL))) << (((/* implicit */int) ((var_10) <= (9223372036854775807LL))))))));
                            arr_17 [i_1] [i_1] [i_4] = min((-5704423923928236871LL), (((/* implicit */long long int) arr_10 [i_2] [i_2] [i_4] [i_5])));
                            var_24 = ((((/* implicit */int) var_8)) - (((((/* implicit */_Bool) arr_5 [(unsigned short)8])) ? (((((/* implicit */int) var_18)) & (((/* implicit */int) var_8)))) : (((/* implicit */int) ((9223372036854775807LL) < (-9223372036854775794LL)))))));
                        }
                        var_25 = var_7;
                        arr_18 [(unsigned short)24] [i_2] [i_3] [i_4] [i_2] = var_19;
                    }
                } 
            } 
        } 
        arr_19 [i_1 - 1] [i_1 - 1] = ((/* implicit */int) min((((/* implicit */long long int) ((((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned short)6468)))) >= (min((244107947), (((/* implicit */int) var_11))))))), (arr_2 [i_1])));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_7 = 2; i_7 < 17; i_7 += 4) 
        {
            arr_27 [i_6] [i_6] [i_7 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(arr_15 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
            arr_28 [i_6] [i_6] |= ((/* implicit */unsigned short) ((8778843429937493830LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24044)))));
            arr_29 [i_6] [i_6] &= ((/* implicit */unsigned short) 524284);
            arr_30 [i_6] [(unsigned short)16] = ((/* implicit */int) var_2);
        }
        for (int i_8 = 2; i_8 < 17; i_8 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) arr_15 [i_6] [i_6] [i_6] [i_8] [i_8 - 2] [i_8]);
            var_27 = arr_2 [i_6];
            arr_33 [i_8] = ((/* implicit */unsigned short) arr_11 [i_6] [i_6] [i_6] [i_6]);
        }
        for (int i_9 = 2; i_9 < 17; i_9 += 1) /* same iter space */
        {
            arr_36 [i_6] = ((/* implicit */long long int) ((((/* implicit */int) var_3)) <= (((((/* implicit */_Bool) arr_4 [i_6] [i_6])) ? (((/* implicit */int) (unsigned short)3244)) : (((/* implicit */int) (unsigned short)6450))))));
            arr_37 [i_6] [i_9] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)6452))) - (((((/* implicit */_Bool) var_7)) ? (-5704423923928236876LL) : (arr_2 [i_9])))));
            arr_38 [i_6] [i_9] = ((/* implicit */long long int) ((arr_32 [i_6] [i_9]) != (((/* implicit */int) (unsigned short)6449))));
            var_28 = ((/* implicit */int) var_19);
        }
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 19; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                {
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_6])) ? (9223372036854775807LL) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56436))) % (arr_23 [i_6] [i_6] [i_11])))));
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 19; i_12 += 3) 
                    {
                        var_30 ^= ((/* implicit */int) (-(arr_31 [i_6])));
                        arr_46 [i_12] [i_12] [i_11] [i_12] [i_6] = ((/* implicit */unsigned short) arr_0 [i_6] [i_6]);
                        var_31 = ((/* implicit */int) ((((/* implicit */long long int) var_1)) + ((((-9223372036854775807LL - 1LL)) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6452)))))));
                        var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1228610680)) ? (0) : (((/* implicit */int) (unsigned short)36722))))) ? (arr_7 [i_6] [i_6] [i_6]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_6])) && (((/* implicit */_Bool) arr_7 [i_6] [i_6] [i_12]))))));
                    }
                    /* LoopNest 2 */
                    for (int i_13 = 0; i_13 < 19; i_13 += 4) 
                    {
                        for (long long int i_14 = 1; i_14 < 17; i_14 += 3) 
                        {
                            {
                                var_33 = ((/* implicit */int) ((arr_0 [i_11] [i_6]) | (((/* implicit */long long int) ((/* implicit */int) var_8)))));
                                arr_51 [i_10] [i_11] [i_13] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_11)) + (arr_9 [i_6] [i_10] [i_11])))) != (((((/* implicit */long long int) ((/* implicit */int) var_14))) / ((-9223372036854775807LL - 1LL))))));
                                var_34 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9)) && (((/* implicit */_Bool) var_19))));
                                var_35 = ((/* implicit */long long int) arr_22 [i_13] [i_13]);
                                arr_52 [i_6] [i_13] [i_11] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((((/* implicit */long long int) -1499303999)) > (-7942314793644710312LL)))) : (-136496635)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_15 = 1; i_15 < 18; i_15 += 4) 
    {
        var_36 = ((/* implicit */unsigned short) var_7);
        var_37 = ((/* implicit */long long int) var_7);
        var_38 = var_10;
        var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_8))));
        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */int) arr_53 [i_15 + 1] [i_15 + 1])) <= (-1))))));
    }
    /* vectorizable */
    for (int i_16 = 2; i_16 < 18; i_16 += 3) /* same iter space */
    {
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_9) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62885)))))) << (((arr_8 [i_16 - 2]) + (8093899147110205912LL)))));
        /* LoopNest 3 */
        for (int i_17 = 0; i_17 < 21; i_17 += 4) 
        {
            for (unsigned short i_18 = 0; i_18 < 21; i_18 += 4) 
            {
                for (int i_19 = 2; i_19 < 17; i_19 += 2) 
                {
                    {
                        arr_68 [i_16] [i_17] [i_18] [i_19 + 4] = ((/* implicit */unsigned short) ((arr_11 [i_16] [i_17] [i_17] [i_19]) & (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (-136496613)))));
                        arr_69 [i_17] = ((/* implicit */int) 1051748326186110094LL);
                    }
                } 
            } 
        } 
        arr_70 [i_16] = ((/* implicit */int) (((~((-9223372036854775807LL - 1LL)))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) == (arr_57 [i_16] [i_16])))))));
    }
    for (int i_20 = 2; i_20 < 18; i_20 += 3) /* same iter space */
    {
        var_42 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_20])) ? (((((/* implicit */long long int) 2147483647)) ^ (1051748326186110086LL))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_20 + 3] [i_20 - 1] [i_20 - 1] [i_20])))));
        var_43 |= ((/* implicit */long long int) arr_13 [i_20] [i_20] [i_20] [i_20]);
    }
    /* LoopSeq 1 */
    for (unsigned short i_21 = 3; i_21 < 14; i_21 += 4) 
    {
        var_44 = ((/* implicit */int) max((((/* implicit */long long int) -1499303999)), ((-9223372036854775807LL - 1LL))));
        arr_78 [i_21] = ((/* implicit */int) min((max((((1051748326186110086LL) + (((/* implicit */long long int) ((/* implicit */int) var_14))))), (((/* implicit */long long int) (+(((/* implicit */int) var_14))))))), (((((/* implicit */_Bool) ((((/* implicit */int) arr_58 [i_21] [i_21 - 1])) - (((/* implicit */int) var_14))))) ? (1023LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))));
        var_45 = ((/* implicit */long long int) var_11);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_22 = 3; i_22 < 17; i_22 += 3) 
        {
            /* LoopSeq 2 */
            for (int i_23 = 1; i_23 < 17; i_23 += 2) 
            {
                arr_83 [i_21] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((1328158324) >= (((/* implicit */int) arr_66 [i_21] [i_21 + 4])))))));
                arr_84 [i_21] [i_21] = ((/* implicit */unsigned short) ((1125322673) > (((/* implicit */int) (unsigned short)14866))));
                var_46 -= ((/* implicit */long long int) ((((/* implicit */int) var_19)) > (arr_32 [i_22 - 3] [i_21 + 3])));
                var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)57614)))))));
            }
            for (long long int i_24 = 1; i_24 < 14; i_24 += 2) 
            {
                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_43 [i_21 - 2] [i_21 - 2] [i_24])) ? (1001473966) : (arr_59 [i_24])))) && (((/* implicit */_Bool) ((((/* implicit */int) arr_71 [i_21] [i_21])) << (0LL))))));
                arr_88 [i_21] [i_22] [i_24 + 4] [i_22] = ((/* implicit */long long int) ((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */int) arr_85 [i_24 + 2] [i_22] [i_22 + 1] [i_21 + 4])) : (((((/* implicit */int) (unsigned short)0)) ^ (-9)))));
            }
            var_49 = ((/* implicit */int) arr_49 [i_21] [i_22] [i_21] [i_21] [i_21]);
            var_50 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_54 [i_21 - 1] [i_21 - 2]))) <= (arr_50 [i_22] [12] [i_22 + 1] [12] [i_21])));
            var_51 = ((/* implicit */long long int) ((arr_74 [i_22 + 1] [i_21 + 2]) << (((((/* implicit */int) arr_53 [i_22] [i_22])) - (43714)))));
        }
    }
}
