/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51469
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
    var_10 = ((/* implicit */_Bool) (((_Bool)0) ? (min((((/* implicit */unsigned long long int) (short)-369)), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (11389602249741842565ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))));
    var_11 = ((/* implicit */unsigned long long int) 730428757958502436LL);
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 4; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        arr_9 [i_3 - 2] [i_0] [i_0] [10U] = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((signed char) (~(arr_7 [i_0 + 1]))))), (((((/* implicit */_Bool) (short)-369)) ? (1678947731U) : (2616019564U)))));
                        var_12 = ((/* implicit */_Bool) (((~(arr_5 [i_2] [i_2] [i_0 - 1] [i_0 - 1]))) * (((/* implicit */int) ((_Bool) arr_8 [i_0] [(_Bool)1] [i_3] [i_0] [i_0])))));
                    }
                    arr_10 [i_0 + 4] [i_1] [i_0] = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_1])) ? (((/* implicit */int) (signed char)70)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_6 [i_0] [i_2 + 1] [i_0 + 1]))))));
                }
                for (unsigned long long int i_4 = 4; i_4 < 14; i_4 += 2) /* same iter space */
                {
                    arr_14 [i_4] [i_0] [i_0 + 4] = ((/* implicit */unsigned int) min((((unsigned long long int) ((arr_3 [8LL] [i_1] [i_4]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)368)))))), (((/* implicit */unsigned long long int) ((_Bool) 7195771616888473446LL)))));
                    var_13 ^= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (((_Bool)0) ? (arr_1 [i_0 + 4]) : (((/* implicit */long long int) 341191569U))))), (min((16622853786779366744ULL), (((/* implicit */unsigned long long int) arr_1 [i_0 + 3]))))));
                    arr_15 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 1792197737))) & (((/* implicit */int) (_Bool)0)))))));
                }
                for (unsigned long long int i_5 = 4; i_5 < 14; i_5 += 2) /* same iter space */
                {
                    var_14 = ((/* implicit */long long int) ((((arr_16 [i_0] [i_1] [i_0] [i_0]) <= (arr_2 [i_1] [i_0 + 4]))) ? ((+(((((/* implicit */_Bool) 0U)) ? (0ULL) : (((/* implicit */unsigned long long int) 5672128178211749266LL)))))) : (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_5 - 1] [i_0] [i_0 + 4])) ? (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_5] [i_0] [i_0 + 1])) : (8370060400342443107ULL)))));
                    var_15 = ((/* implicit */signed char) ((unsigned char) ((((_Bool) (_Bool)1)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -5672128178211749243LL)))) : (((((/* implicit */_Bool) (unsigned char)155)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [(_Bool)1] [7LL]))) : (arr_0 [i_0]))))));
                    arr_18 [(signed char)3] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0 + 4] [2U] [i_1] [i_5 - 4]))) & (arr_0 [i_0])))) ? (((/* implicit */long long int) (((!(((/* implicit */_Bool) (unsigned char)238)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 2235624119U)))) : (arr_2 [i_0] [i_0 - 1])))) : (-5672128178211749267LL)));
                    arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (signed char)11)) ^ (((/* implicit */int) (signed char)-115)))));
                }
                for (unsigned long long int i_6 = 4; i_6 < 14; i_6 += 2) /* same iter space */
                {
                    arr_22 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) (-(((/* implicit */int) ((_Bool) arr_3 [(_Bool)1] [(signed char)4] [i_6])))))) != (((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (18446744073709551615ULL))))));
                    var_16 = ((/* implicit */signed char) ((unsigned long long int) min((arr_3 [i_0 + 3] [i_6 + 1] [i_0 + 3]), (((/* implicit */unsigned int) (signed char)-18)))));
                }
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) max((var_17), ((+(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((arr_25 [i_0 + 4] [i_0 + 4] [i_1] [i_8]) - (15078487995752302222ULL)))))) ? ((~(1253884261U))) : (arr_23 [(short)10] [i_7 + 2] [i_7 - 2] [i_7 - 1])))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                            {
                                arr_30 [i_0] [i_1] [i_7] [i_8 - 2] [i_9] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_27 [i_8] [i_7 - 1] [i_0]) | (((/* implicit */unsigned long long int) arr_28 [i_0] [i_8]))))) ? (((((/* implicit */_Bool) arr_21 [i_0] [i_7 - 1] [i_8] [i_9])) ? (17747867300059848852ULL) : (((/* implicit */unsigned long long int) 4853869201420568398LL)))) : (((/* implicit */unsigned long long int) 5672128178211749266LL))))));
                                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_8] [i_8] [(_Bool)1] [i_8 + 2])) == (((/* implicit */int) arr_11 [i_0 + 4] [i_7 - 2] [10U] [i_7 + 1])))) ? ((~(3041083034U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) -7506112890364956845LL)))))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_24 [i_0 - 3]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_0 + 4])) ? (((/* implicit */int) arr_24 [i_0 - 1])) : (((/* implicit */int) arr_24 [i_0 - 1]))))) : (((((/* implicit */_Bool) arr_24 [i_0 + 1])) ? (3391614495302520168ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0 + 2])))))));
                                arr_31 [i_0] [i_0] [i_7] [i_8 + 2] [(_Bool)1] [i_0] [i_9] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_13 [i_0 - 2] [i_7 + 2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_8] [i_8 + 1] [i_1] [i_0 - 3]))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)244)), (arr_23 [i_9] [i_8] [i_0] [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 3659618202272730565LL))))) : (((((/* implicit */_Bool) arr_26 [i_9] [i_9] [8ULL] [i_9])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_4 [7LL] [(_Bool)1] [i_0]))))))));
                            }
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_17 [(_Bool)1]))));
                        }
                    } 
                } 
                var_21 ^= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 300927720U)) <= (17565371843244264954ULL))) ? (((arr_17 [(signed char)11]) / (((/* implicit */unsigned long long int) arr_13 [i_0] [i_0 - 3] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_0 + 2] [i_0 - 2] [i_1])) && (((/* implicit */_Bool) 4294967295U))))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 13; i_12 += 3) 
                        {
                            {
                                var_22 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))) >= (((((/* implicit */_Bool) -5672128178211749267LL)) ? (((/* implicit */long long int) 972826208U)) : (3659618202272730565LL)))));
                                arr_40 [i_0] [i_0] [i_10] [i_0] [i_0] = ((-3659618202272730559LL) != (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12 + 1] [i_1] [i_0 - 1] [i_0] [i_0]))));
                            }
                        } 
                    } 
                    var_23 ^= ((arr_8 [i_1] [i_10] [i_1] [i_1] [i_1]) < (arr_8 [i_1] [i_0 + 4] [i_0 + 4] [i_1] [i_10]));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                {
                    arr_43 [i_0] [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((16951139169360096141ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_17 [i_13])))))))));
                    var_24 = ((/* implicit */_Bool) ((((arr_27 [i_0] [i_1] [i_0 + 3]) < (arr_27 [i_1] [i_1] [i_0 + 3]))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [4ULL] [i_0 + 3]))) & (972826208U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_24 [i_0 + 2]), (((unsigned char) (unsigned char)135))))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    var_25 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_20 [(_Bool)1] [i_14] [i_14]))))))) > (((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) : (-3659618202272730565LL)))) % (((((/* implicit */unsigned long long int) arr_32 [i_14] [i_0] [i_14])) * (7017604173202219347ULL)))))));
                    arr_46 [i_1] [i_1] [i_14] [i_0] = ((/* implicit */signed char) ((unsigned long long int) min((arr_38 [i_14] [i_1] [i_1] [i_0] [i_0]), (arr_38 [i_0] [i_0] [i_1] [i_14] [i_14]))));
                }
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 2) 
    {
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 18; i_18 += 2) 
                    {
                        {
                            arr_59 [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_52 [i_15] [i_16]))))) <= (((/* implicit */int) ((_Bool) 9223372036854775807LL)))));
                            arr_60 [i_17] [i_16] [i_17] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_48 [i_18] [i_17])) << (((arr_50 [i_15]) - (1373285171U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_19 = 0; i_19 < 18; i_19 += 2) 
                {
                    for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 2) 
                    {
                        {
                            arr_66 [i_20] [i_20] [i_19] [i_16] [i_15] = ((/* implicit */unsigned int) (~(min((arr_47 [i_16] [i_20]), (arr_47 [i_15] [16U])))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) min(((~(((/* implicit */int) ((signed char) 1803388009U))))), (((/* implicit */int) (signed char)56)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_21 = 4; i_21 < 14; i_21 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 3; i_22 < 17; i_22 += 2) 
                    {
                        for (unsigned int i_23 = 3; i_23 < 14; i_23 += 1) 
                        {
                            {
                                arr_74 [i_22] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned long long int) arr_62 [i_15] [i_15] [i_16])), (min((arr_57 [i_23] [i_22] [i_16] [i_15]), (((/* implicit */unsigned long long int) arr_47 [i_15] [i_16])))))));
                                arr_75 [i_15] [i_16] [i_21 + 1] [i_22] [i_22] = ((unsigned int) (((-(((/* implicit */int) arr_55 [i_21] [i_22])))) > (((/* implicit */int) (!(arr_72 [i_15] [(unsigned char)4] [i_22] [i_23 - 2]))))));
                                var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 2854801304U)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_73 [i_22]))) <= (arr_51 [7LL] [i_16] [i_21])))) : (((/* implicit */int) (unsigned char)0)))) < (((/* implicit */int) ((((/* implicit */_Bool) 3266529316U)) && (((/* implicit */_Bool) (-(arr_51 [i_22] [i_21 + 2] [(_Bool)1])))))))));
                                arr_76 [i_22] [i_15] [i_21] [i_22] [i_23] [i_22] [i_16] = ((/* implicit */short) 0ULL);
                            }
                        } 
                    } 
                    var_28 ^= ((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-8)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                }
            }
        } 
    } 
}
