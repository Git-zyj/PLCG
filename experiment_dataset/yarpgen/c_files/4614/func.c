/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4614
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
    for (unsigned int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 2718249202732401264LL))));
                    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1 + 1] [i_2]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_3 [i_1 - 1] [i_1 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))) ? (((((/* implicit */_Bool) var_0)) ? (arr_0 [(signed char)8]) : (((/* implicit */long long int) var_15)))) : ((+(var_17))))))));
                    var_22 -= ((/* implicit */unsigned long long int) arr_0 [i_2]);
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned int) arr_6 [i_0 + 1] [i_0 + 1]);
        var_24 = ((/* implicit */signed char) var_0);
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (short i_4 = 2; i_4 < 17; i_4 += 4) 
        {
            for (signed char i_5 = 0; i_5 < 18; i_5 += 3) 
            {
                for (unsigned int i_6 = 3; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) var_8);
                        arr_17 [i_3] [i_3] [i_5] [i_6 + 1] [i_6] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((4294967294U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))), (((((/* implicit */long long int) min((2588287244U), (((/* implicit */unsigned int) var_16))))) ^ (min((((/* implicit */long long int) 130023424)), (arr_11 [i_3] [i_3])))))));
                        arr_18 [0] [i_4 + 1] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((long long int) max((((((/* implicit */_Bool) arr_2 [i_5])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned long long int) ((arr_9 [(signed char)16] [i_4]) / (((/* implicit */long long int) 183503508U))))))));
                        arr_19 [i_4] [i_5] [i_4] [i_3] = ((/* implicit */unsigned long long int) max((max((var_9), (((/* implicit */unsigned int) arr_1 [i_4 - 2])))), (((/* implicit */unsigned int) arr_14 [i_3] [i_4] [(signed char)5] [i_4] [i_6]))));
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 3926659855U)) && (((/* implicit */_Bool) arr_11 [i_3] [i_3])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_11)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_16 [(unsigned char)1] [i_3] [i_3] [i_3])) : (2)))) ? (((var_4) >> (((arr_5 [i_3] [i_3] [i_3] [i_3]) - (6731288524171708436LL))))) : (((/* implicit */unsigned int) ((/* implicit */int) max(((signed char)26), (arr_7 [i_3])))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            var_27 -= ((/* implicit */short) (~(((var_5) >> (((((/* implicit */int) var_0)) - (25878)))))));
            arr_26 [i_7] = ((/* implicit */unsigned int) arr_21 [i_7]);
        }
        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 3) 
        {
            var_28 = var_1;
            /* LoopSeq 1 */
            for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
            {
                var_29 = ((/* implicit */long long int) (+(((unsigned int) 3818082524U))));
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                {
                    for (unsigned int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        {
                            var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) 8986004253411345020LL)) ? (576425567931334656LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64))))))));
                            arr_36 [i_7] [i_9] [i_10] [i_9] [i_7] = ((/* implicit */signed char) (-(((/* implicit */int) ((arr_0 [i_9]) > (((/* implicit */long long int) 368307447U)))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_7] [i_9] [i_10])) ? (1005933493U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))))))));
                arr_37 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1430414096)) ? (arr_13 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))));
            }
            var_32 = ((/* implicit */unsigned int) arr_3 [i_9] [i_7]);
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
            {
                var_33 = ((/* implicit */signed char) (+(((long long int) var_19))));
                var_34 &= ((/* implicit */int) arr_7 [i_7]);
                /* LoopNest 2 */
                for (short i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 17; i_15 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */unsigned long long int) var_17);
                            arr_45 [i_9] [i_9] [i_14] [i_14] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) <= (((unsigned int) arr_15 [7ULL] [i_13] [i_15]))));
                            var_36 *= ((/* implicit */signed char) ((((unsigned int) arr_23 [i_7] [i_9] [i_15])) > (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned int i_16 = 3; i_16 < 16; i_16 += 2) 
                {
                    var_37 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [15ULL] [15ULL] [i_13] [(short)14] [i_9]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_7])))))) : (arr_32 [(signed char)15])));
                    var_38 = (~(arr_2 [i_16 - 2]));
                }
            }
        }
        var_39 = ((/* implicit */short) (+((+(var_2)))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 1; i_17 < 16; i_17 += 4) 
        {
            for (signed char i_18 = 0; i_18 < 17; i_18 += 2) 
            {
                {
                    arr_52 [i_7] [i_7] [i_18] [16] = ((/* implicit */int) (short)-32766);
                    /* LoopSeq 4 */
                    for (signed char i_19 = 3; i_19 < 14; i_19 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_50 [i_7] [i_17] [i_18]))) <= (((arr_5 [i_7] [i_17 - 1] [i_18] [i_19 + 2]) / (((/* implicit */long long int) 2243403218U))))));
                        var_41 -= ((/* implicit */unsigned char) (+(((((/* implicit */int) var_19)) >> (((arr_29 [i_7] [i_7]) - (7360587191006973970LL)))))));
                    }
                    for (signed char i_20 = 3; i_20 < 14; i_20 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (short i_21 = 0; i_21 < 17; i_21 += 3) 
                        {
                            arr_61 [i_20] [i_17 + 1] [i_18] [i_20] [0LL] = ((/* implicit */unsigned long long int) ((signed char) ((arr_56 [i_20] [(short)1] [i_20 + 1] [i_21]) | (arr_47 [i_7] [i_7] [i_18] [i_20 + 2]))));
                            var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) var_11))) ? (((/* implicit */unsigned int) (~(-1651958231)))) : (((unsigned int) var_7))));
                        }
                        var_43 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))));
                        var_44 = ((/* implicit */unsigned int) ((signed char) var_9));
                    }
                    for (unsigned char i_22 = 1; i_22 < 14; i_22 += 1) 
                    {
                        arr_65 [i_7] [5] [i_7] [8U] [(signed char)16] = arr_0 [i_22 + 2];
                        var_45 = ((/* implicit */unsigned int) (~(var_5)));
                        arr_66 [i_7] = ((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7] [14U]))));
                    }
                    for (signed char i_23 = 0; i_23 < 17; i_23 += 3) 
                    {
                        var_46 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_22 [i_7] [(short)4]) <= (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))));
                        /* LoopSeq 3 */
                        for (signed char i_24 = 0; i_24 < 17; i_24 += 3) /* same iter space */
                        {
                            var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_32 [i_17])) ? (((((/* implicit */_Bool) (short)1)) ? (arr_32 [i_7]) : (((/* implicit */long long int) 611864584U)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0)))))));
                            var_48 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3587360149U)) ? (((/* implicit */long long int) ((unsigned int) var_9))) : (((((/* implicit */_Bool) var_16)) ? (arr_0 [i_18]) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_17 - 1] [i_18])))))));
                            var_49 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_57 [i_7] [i_17 + 1] [i_17 + 1] [i_24])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_17] [(short)6] [i_23] [i_24]))) : (var_13)));
                            arr_71 [i_7] [i_18] [i_18] [i_7] [i_7] = ((/* implicit */unsigned char) ((arr_43 [i_7] [(short)9] [i_7] [i_7] [i_7] [i_7] [i_7]) ^ (((/* implicit */int) ((short) var_6)))));
                        }
                        for (signed char i_25 = 0; i_25 < 17; i_25 += 3) /* same iter space */
                        {
                            var_50 = ((/* implicit */long long int) arr_10 [i_7] [i_23]);
                            var_51 = ((/* implicit */int) ((((/* implicit */_Bool) arr_28 [i_7] [i_17] [i_17 + 1])) ? ((-(arr_56 [i_25] [i_23] [i_25] [i_25]))) : (((/* implicit */unsigned long long int) arr_40 [(signed char)7] [i_23] [i_25]))));
                        }
                        for (signed char i_26 = 0; i_26 < 17; i_26 += 3) /* same iter space */
                        {
                            var_52 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_62 [i_7] [i_17] [i_18] [7ULL]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [5ULL] [i_18] [i_17] [i_7]))) : (arr_60 [i_7]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 805306368U))))));
                            var_53 = ((/* implicit */long long int) min((var_53), ((-((+(arr_29 [i_18] [i_26])))))));
                            var_54 = arr_68 [i_7];
                        }
                        var_55 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_72 [i_7] [i_17] [i_17] [i_18] [i_7] [i_18] [i_23])) ? (((/* implicit */int) arr_72 [i_18] [i_17] [(signed char)2] [i_23] [i_23] [i_18] [(signed char)2])) : (((/* implicit */int) arr_72 [14U] [i_7] [i_17] [i_17 - 1] [i_17 + 1] [i_18] [8]))));
                        arr_77 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
                    }
                    var_56 = ((/* implicit */signed char) ((((18075485557301067356ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_7] [(unsigned char)6]))))) <= (((unsigned long long int) 2655047936623085371ULL))));
                    arr_78 [i_7] [i_17 - 1] [i_17] [i_18] = ((/* implicit */short) var_14);
                    var_57 -= ((/* implicit */unsigned int) ((arr_6 [i_7] [i_7]) <= (((/* implicit */unsigned long long int) (~(arr_53 [i_7] [i_7] [i_7] [i_18]))))));
                }
            } 
        } 
    }
    var_58 = ((/* implicit */unsigned char) var_5);
    /* LoopNest 2 */
    for (long long int i_27 = 0; i_27 < 12; i_27 += 1) 
    {
        for (signed char i_28 = 0; i_28 < 12; i_28 += 4) 
        {
            {
                var_59 *= ((/* implicit */short) 3492673561224435207LL);
                var_60 = ((/* implicit */unsigned char) arr_49 [(signed char)0] [i_27] [i_28]);
                arr_84 [11LL] [i_28] [i_27] = (-(min((((/* implicit */unsigned long long int) 4294967288U)), (((arr_70 [i_27] [i_28] [i_27] [i_28] [i_28] [i_28] [i_27]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
                arr_85 [i_27] [i_28] [i_27] = ((/* implicit */int) ((((/* implicit */_Bool) (short)30449)) ? (-14LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)46)))));
            }
        } 
    } 
}
