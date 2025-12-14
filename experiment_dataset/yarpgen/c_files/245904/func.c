/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245904
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
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] |= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) (signed char)0)) : (698874107))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -698874094)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-77)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_0 [17LL] [i_0]) : (arr_2 [i_0])))) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_1 [i_0])))) : (((((/* implicit */_Bool) 6645627574473057237ULL)) ? (arr_2 [i_0]) : (arr_0 [i_0] [i_0]))))))));
        var_14 ^= ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (signed char i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_15 -= (+(((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_1] [i_1]))));
        var_16 = ((/* implicit */unsigned long long int) ((-9223372036854775804LL) ^ (-9223372036854775804LL)));
    }
    for (signed char i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        arr_11 [i_2] = arr_4 [i_2] [0ULL];
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 698874089)) ? (((/* implicit */unsigned long long int) 1288256015U)) : (11942893567212574134ULL)));
        var_18 |= ((/* implicit */unsigned int) arr_2 [i_2]);
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 14; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 16; i_4 += 3) 
            {
                {
                    arr_18 [i_4] [i_3] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (arr_16 [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (((/* implicit */int) arr_17 [i_4] [i_4]))))))));
                    var_19 += ((/* implicit */unsigned long long int) arr_17 [i_2] [i_2]);
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 1) 
        {
            arr_21 [i_5] [i_5] [i_5] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_2])) ? ((-(arr_13 [i_2] [i_2]))) : (arr_13 [i_2] [i_2])));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) 
            {
                var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) arr_19 [i_2] [i_2])))));
                arr_24 [i_6] [i_2] [7LL] [i_6] = ((/* implicit */long long int) arr_19 [i_2] [3LL]);
                var_21 |= ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_5 + 2] [i_5 - 1]))) : (((((/* implicit */_Bool) (signed char)15)) ? (17646671422205584489ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))))));
            }
        }
    }
    /* vectorizable */
    for (signed char i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
    {
        arr_27 [i_7] [i_7] = ((int) arr_9 [i_7]);
        /* LoopSeq 1 */
        for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 16123515907254664374ULL)) ? (((/* implicit */int) (signed char)11)) : (-766987848)));
            var_23 = ((/* implicit */unsigned long long int) var_9);
        }
        var_24 = arr_8 [i_7] [i_7];
        arr_30 [i_7] [i_7] = arr_29 [i_7] [i_7] [i_7];
        /* LoopSeq 2 */
        for (long long int i_9 = 0; i_9 < 16; i_9 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_7] [i_9])) ? (arr_7 [i_7]) : (((unsigned long long int) arr_29 [i_9] [i_9] [i_7])))))));
            /* LoopSeq 4 */
            for (unsigned char i_10 = 0; i_10 < 16; i_10 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 16; i_11 += 3) 
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((long long int) arr_14 [i_10] [i_10] [i_7]))));
                    arr_40 [i_9] [i_7] [i_7] [i_9] [i_10] [i_11] = ((/* implicit */unsigned int) arr_32 [i_9] [i_9] [i_9]);
                    arr_41 [i_7] [i_7] [i_7] [i_9] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2323228166454887241ULL))));
                    var_27 = ((/* implicit */unsigned short) var_0);
                }
                var_28 = ((/* implicit */long long int) min((var_28), (var_4)));
                var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */_Bool) ((unsigned short) arr_33 [i_7] [i_7] [i_7]))) ? (((/* implicit */int) arr_28 [i_10] [i_7] [i_7])) : (((/* implicit */int) arr_5 [(unsigned short)14] [i_9]))))));
                arr_42 [i_7] &= ((/* implicit */unsigned int) arr_38 [i_10] [i_9] [i_9] [i_7] [i_7] [i_7]);
            }
            for (long long int i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                arr_45 [i_9] = ((/* implicit */long long int) ((unsigned int) 12108813819997687295ULL));
                arr_46 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) ^ (var_8)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 800072651503967127ULL)) && (((/* implicit */_Bool) -766987848))))) : (((/* implicit */int) arr_26 [i_7]))));
                var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_16 [14] [i_7] [i_9] [i_7])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [2U]))) : ((-(arr_33 [i_9] [i_9] [i_12 + 3])))));
                var_31 ^= ((/* implicit */unsigned long long int) arr_20 [i_12] [i_7] [i_7]);
            }
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 4) 
            {
                arr_51 [i_7] [i_13] [i_13] [i_7] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 4ULL)) ? (((/* implicit */unsigned long long int) 2085419451)) : ((+(18446744073709551597ULL)))));
                var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) ((signed char) 11801116499236494392ULL)))));
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_7])) && (((/* implicit */_Bool) arr_10 [4] [i_9]))))))));
                var_34 = ((/* implicit */unsigned int) arr_6 [i_9] [i_13]);
                var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)18842))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)14546)) >> (((((/* implicit */int) (unsigned char)121)) - (113)))))) : (arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] [i_13])));
            }
            for (int i_14 = 1; i_14 < 14; i_14 += 3) 
            {
                var_36 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) (unsigned short)30381))) ? (((((/* implicit */_Bool) 499974196)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_0 [i_7] [i_7]))) : (var_8)));
                arr_55 [i_7] [i_9] [i_9] [i_14] = arr_26 [i_9];
            }
        }
        for (unsigned short i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            arr_58 [i_15] = (((((~(arr_57 [i_7] [i_7] [i_7]))) + (9223372036854775807LL))) << (((17646671422205584489ULL) - (17646671422205584489ULL))));
            var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) ((((((/* implicit */_Bool) arr_26 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) arr_54 [i_15]))) : (arr_23 [i_15] [i_7] [i_7]))) == (arr_25 [i_7]))))));
            /* LoopSeq 3 */
            for (unsigned char i_16 = 2; i_16 < 15; i_16 += 3) 
            {
                var_38 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_7] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_57 [i_16] [i_15] [i_7])))) : ((~(arr_19 [i_15] [i_15])))));
                arr_63 [i_7] |= ((/* implicit */long long int) ((766987848) >> (((arr_16 [i_7] [i_15] [i_16 + 1] [i_16 + 1]) - (511698911U)))));
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_7] [(unsigned short)12] [i_16])) ? (((((/* implicit */_Bool) (unsigned short)7888)) ? (4764310894046367757ULL) : (18446744073709551615ULL))) : (0ULL)));
                var_40 = ((/* implicit */unsigned long long int) min((var_40), ((((!(((/* implicit */_Bool) var_1)))) ? (arr_22 [i_7] [i_15] [i_15] [i_15]) : (arr_37 [i_7])))));
                arr_64 [i_15] [i_15] [i_7] = ((((/* implicit */_Bool) ((arr_44 [i_7] [i_7] [i_7]) + (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7] [i_15] [i_16 - 1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_16 - 1] [i_16 - 1] [13U] [13U]))) : (((((/* implicit */_Bool) arr_44 [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) 2085419449)) : (8ULL))));
            }
            for (unsigned short i_17 = 0; i_17 < 16; i_17 += 2) /* same iter space */
            {
                var_41 += arr_48 [i_7] [i_7] [i_17];
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 3; i_18 < 13; i_18 += 3) 
                {
                    var_42 ^= ((/* implicit */int) ((((/* implicit */_Bool) 6645627574473057237ULL)) ? (((/* implicit */unsigned long long int) 2085419456)) : (17988101111209285203ULL)));
                    arr_69 [i_7] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_43 [i_7] [i_7])) ? ((~(18446744073709551612ULL))) : (0ULL)));
                    var_43 = ((/* implicit */unsigned long long int) (-(-766987875)));
                }
                arr_70 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11989)) ? (((/* implicit */unsigned long long int) 1835644272)) : (arr_56 [i_15])))) ? (-2) : ((~(((/* implicit */int) (signed char)52))))));
            }
            for (unsigned short i_19 = 0; i_19 < 16; i_19 += 2) /* same iter space */
            {
                var_44 += ((unsigned long long int) arr_7 [i_7]);
                arr_73 [i_19] = ((/* implicit */signed char) ((int) var_4));
                arr_74 [i_19] = ((/* implicit */unsigned long long int) arr_34 [i_7] [(unsigned short)3] [(unsigned short)3]);
                var_45 = arr_17 [i_19] [i_15];
            }
            var_46 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_36 [i_7] [i_15] [i_15])) ? (((/* implicit */unsigned long long int) ((long long int) arr_12 [i_15]))) : (((((/* implicit */_Bool) var_3)) ? (arr_19 [i_7] [i_7]) : (((/* implicit */unsigned long long int) var_9))))));
            var_47 = ((/* implicit */signed char) (unsigned short)60551);
        }
    }
    var_48 |= ((/* implicit */long long int) min((((unsigned long long int) 3482877802604037964ULL)), (((/* implicit */unsigned long long int) var_6))));
}
