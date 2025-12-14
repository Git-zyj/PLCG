/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22824
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22824 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22824
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
    var_17 = ((unsigned long long int) ((((/* implicit */_Bool) 9585906145574060695ULL)) || (((/* implicit */_Bool) var_9))));
    var_18 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) max((0ULL), (13630319291045154984ULL)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 3; i_1 < 23; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                arr_6 [i_0] [i_0] = ((/* implicit */signed char) ((arr_4 [i_1 - 1] [i_1 + 1]) / (arr_4 [i_1 + 1] [i_1 - 1])));
                arr_7 [(signed char)3] [i_1 - 1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-85)) || (((/* implicit */_Bool) arr_5 [16LL] [i_0]))));
                arr_8 [i_0] [6LL] [i_1] [i_1 + 2] = ((((/* implicit */_Bool) ((signed char) 5780878172028421216LL))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))));
            }
            for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    for (signed char i_5 = 0; i_5 < 25; i_5 += 3) 
                    {
                        {
                            var_19 -= ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5] [i_4] [i_4] [i_1]))) > (0LL))) || (((/* implicit */_Bool) 14693243850374866250ULL))));
                            arr_19 [i_0] [i_5] [i_4] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 6114582330608194187ULL))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                    {
                        {
                            arr_26 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_11)))) ? ((-(arr_13 [i_0] [i_1 - 2]))) : (arr_9 [i_1] [i_6] [i_7])));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -9223372036854775801LL);
                        }
                    } 
                } 
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 - 3])) <= ((+(((/* implicit */int) arr_1 [23LL]))))));
            }
            for (long long int i_8 = 0; i_8 < 25; i_8 += 1) 
            {
                var_21 ^= ((((/* implicit */unsigned long long int) arr_25 [(signed char)4] [i_1] [i_1])) & (((((/* implicit */_Bool) 314769449823736080ULL)) ? (8ULL) : (((/* implicit */unsigned long long int) var_16)))));
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                {
                    var_22 = arr_31 [i_1 + 2] [i_1] [i_1] [i_1 + 2];
                    arr_35 [i_9] [i_0] [10ULL] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) var_8));
                    arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) (~(arr_17 [i_0] [i_1 + 2] [i_0] [i_1 - 3] [i_1])));
                }
                var_23 = ((/* implicit */long long int) (((+(18131974623885815536ULL))) ^ (arr_31 [i_8] [i_1 - 1] [i_0] [i_0])));
            }
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 2) 
                {
                    {
                        arr_41 [i_10] [i_0] [i_1] [i_10] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 2])))));
                        arr_42 [i_10] [i_1] [i_11 + 1] [i_0] [(signed char)4] = ((/* implicit */signed char) arr_20 [i_1 + 1] [i_0]);
                        var_24 &= ((/* implicit */signed char) (-(arr_30 [8ULL] [i_10] [8ULL] [8ULL])));
                        var_25 = ((arr_29 [i_1] [i_1] [i_10] [i_0]) ^ (arr_30 [i_0] [i_0] [i_10] [i_11 - 1]));
                        arr_43 [i_0] [i_11] [i_10] [i_1 - 3] [i_0] = ((/* implicit */unsigned long long int) var_12);
                    }
                } 
            } 
        }
        for (signed char i_12 = 3; i_12 < 23; i_12 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
            /* LoopSeq 3 */
            for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 2) 
            {
                arr_50 [i_0] [i_0] [i_0] [i_13] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_9 [i_0] [i_13] [i_0]) != (0LL))))) & (arr_30 [i_0] [i_0] [i_0] [i_0]));
                arr_51 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_15 [i_0] [i_0]))));
                arr_52 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_0] [11ULL] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_34 [i_13] [i_13] [i_13] [i_0] [(signed char)4])))))));
            }
            for (long long int i_14 = 0; i_14 < 25; i_14 += 3) /* same iter space */
            {
                arr_56 [i_0] [i_0] [i_12] [i_0] = (+(arr_25 [i_0] [i_12 - 3] [i_0]));
                arr_57 [(signed char)6] [i_12] [(signed char)6] [i_12 + 2] &= ((/* implicit */unsigned long long int) ((72053195991416832ULL) >= (2243366615865387549ULL)));
            }
            for (long long int i_15 = 0; i_15 < 25; i_15 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned long long int) (~(arr_4 [i_15] [i_12 - 3])));
                var_28 = (+(var_13));
                var_29 = (-(arr_13 [12ULL] [i_12 + 1]));
                var_30 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 18111731698530627388ULL)))))) : (var_2)));
            }
        }
        for (signed char i_16 = 3; i_16 < 23; i_16 += 1) /* same iter space */
        {
            var_31 ^= ((/* implicit */long long int) arr_39 [i_0] [22LL] [i_0] [i_0]);
            var_32 ^= ((/* implicit */long long int) 0ULL);
            /* LoopSeq 1 */
            for (signed char i_17 = 2; i_17 < 23; i_17 += 1) 
            {
                arr_66 [i_0] [i_16 - 1] [i_17 + 1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) && (((/* implicit */_Bool) 0LL))))))));
                var_33 |= ((/* implicit */unsigned long long int) arr_23 [i_16 + 1] [i_16 - 1] [(signed char)10] [i_16 - 1]);
                arr_67 [i_0] [(signed char)7] [i_17] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8967209122717590516ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : ((-9223372036854775807LL - 1LL))));
                arr_68 [i_0] [24ULL] [i_0] = ((/* implicit */long long int) (~((+(((/* implicit */int) arr_0 [i_0] [i_0]))))));
            }
        }
        var_34 = ((/* implicit */signed char) (+((~(((/* implicit */int) arr_39 [15LL] [i_0] [13LL] [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_18 = 0; i_18 < 16; i_18 += 4) 
    {
        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_18] [i_18] [i_18])) || (((/* implicit */_Bool) arr_1 [i_18]))));
        arr_71 [i_18] [4LL] = ((/* implicit */long long int) (-(((/* implicit */int) arr_15 [i_18] [i_18]))));
        arr_72 [i_18] = ((/* implicit */signed char) ((arr_18 [i_18]) >> (((arr_18 [i_18]) - (14199296454650698933ULL)))));
        var_36 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_70 [i_18] [i_18])) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_49 [i_18] [i_18] [i_18])))))) ? ((~(18131974623885815535ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_18]))));
        /* LoopNest 2 */
        for (long long int i_19 = 2; i_19 < 13; i_19 += 3) 
        {
            for (long long int i_20 = 0; i_20 < 16; i_20 += 3) 
            {
                {
                    arr_78 [i_19] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_44 [i_19 + 2] [i_19 + 2]))));
                    /* LoopNest 2 */
                    for (signed char i_21 = 2; i_21 < 14; i_21 += 2) 
                    {
                        for (unsigned long long int i_22 = 1; i_22 < 15; i_22 += 4) 
                        {
                            {
                                arr_84 [i_18] [i_19] [i_21 + 1] = ((((/* implicit */_Bool) arr_33 [i_22 + 1] [i_20] [0LL] [i_18])) ? (arr_62 [i_18] [i_19 + 2]) : (((/* implicit */unsigned long long int) arr_33 [i_22 - 1] [i_20] [i_19 + 2] [i_18])));
                                arr_85 [8LL] [i_21] [i_19] [i_20] [i_19] [(signed char)10] [i_18] = ((/* implicit */long long int) ((arr_77 [i_21] [i_19] [i_19] [i_18]) & (arr_77 [i_19 + 3] [i_20] [i_19] [i_22 + 1])));
                                arr_86 [i_20] [i_22] [i_20] [i_18] [i_22] [i_20] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_76 [i_18] [i_18] [i_18])) || (((/* implicit */_Bool) var_3))));
                                var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((arr_30 [i_21] [i_21 + 1] [i_20] [i_21]) % (((/* implicit */unsigned long long int) -1LL)))))));
                                var_38 = ((/* implicit */long long int) 6898433564347965764ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_39 = ((/* implicit */signed char) (~((~(var_10)))));
}
