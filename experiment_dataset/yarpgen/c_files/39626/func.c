/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39626
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) arr_2 [i_2 + 1] [i_0 + 1]);
                    arr_6 [(unsigned short)10] [(unsigned short)10] [i_1] [i_0] = 3497102028U;
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) /* same iter space */
    {
        var_21 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1809466269), (((/* implicit */int) arr_8 [i_3]))))) ? (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (3677968950U))) >= (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)31716)))))))) : ((~(((((/* implicit */_Bool) (unsigned short)58621)) ? (((/* implicit */int) arr_7 [i_3] [i_3 + 2])) : (((/* implicit */int) arr_7 [i_3] [i_3]))))))));
        arr_9 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_3 + 1] [i_3 + 2])) ? (((/* implicit */int) arr_8 [i_3 + 1])) : (((((/* implicit */int) ((((/* implicit */_Bool) -2019045906)) && (((/* implicit */_Bool) arr_7 [i_3] [i_3]))))) / (((/* implicit */int) (signed char)36))))));
        arr_10 [i_3] = arr_8 [i_3 + 1];
    }
    /* vectorizable */
    for (signed char i_4 = 1; i_4 < 17; i_4 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) arr_13 [i_4] [i_4 + 1]);
        /* LoopSeq 3 */
        for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) 
        {
            arr_18 [i_4] [i_4] [i_5] = ((/* implicit */long long int) ((unsigned short) arr_13 [i_4] [i_5 - 2]));
            var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)44317))));
        }
        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
        {
            arr_21 [i_4] = ((/* implicit */int) 4294967295U);
            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_15 [i_6]))))) || ((!(((/* implicit */_Bool) 232987361))))));
        }
        for (int i_7 = 1; i_7 < 18; i_7 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_8 = 0; i_8 < 19; i_8 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_9 = 2; i_9 < 16; i_9 += 2) 
                {
                    var_25 = ((((/* implicit */_Bool) arr_12 [i_4] [i_4])) ? (((/* implicit */int) var_18)) : (((((/* implicit */int) (unsigned short)51827)) / (arr_16 [i_4] [i_4] [i_4]))));
                    var_26 -= ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_4]))));
                    arr_31 [i_4] [i_8] [8LL] [i_4] = arr_16 [i_7] [i_7] [i_4];
                    arr_32 [i_4] [i_7] [i_7] [i_8] [i_9 - 2] [i_9] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_8]))))) >= (arr_23 [i_4] [i_7])));
                    arr_33 [i_4 - 1] [i_4] [i_4] [i_4] = ((/* implicit */int) arr_7 [i_4 + 2] [i_4]);
                }
                for (unsigned int i_10 = 0; i_10 < 19; i_10 += 4) 
                {
                    var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) var_19)) ? (var_9) : (arr_14 [i_10] [i_4]))) >= (((/* implicit */int) (unsigned short)8940))));
                    arr_36 [i_10] [i_4] [i_4] [(unsigned short)2] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_8]))) + (var_15)));
                    var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_4] [i_10] [i_4])) ? (arr_11 [i_4 + 2] [i_4 - 1]) : (((/* implicit */long long int) arr_14 [i_8] [i_10])))))));
                }
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                {
                    for (int i_12 = 3; i_12 < 18; i_12 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) ((unsigned short) arr_42 [8LL] [i_7] [i_7] [i_7 + 1] [i_4] [i_7] [i_7]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_12 - 2] [i_4] [i_8])))))));
                            var_30 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_30 [i_4])) ? (((/* implicit */int) (unsigned short)60280)) : (1394751702)))));
                            var_31 -= ((/* implicit */unsigned short) arr_7 [i_8] [i_8]);
                        }
                    } 
                } 
            }
            for (signed char i_13 = 0; i_13 < 19; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 4; i_14 < 18; i_14 += 2) 
                {
                    for (unsigned short i_15 = 3; i_15 < 17; i_15 += 3) 
                    {
                        {
                            var_32 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (70368744177663LL) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_13])))))) ? (((/* implicit */int) arr_15 [i_13])) : (((/* implicit */int) arr_24 [i_4] [i_15 - 3])));
                            var_33 ^= (+(((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_14])) && (((/* implicit */_Bool) (unsigned short)65535))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (signed char i_16 = 2; i_16 < 15; i_16 += 3) 
                {
                    arr_54 [i_4] [(unsigned short)7] [i_13] [i_16] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) -2114491755)) ? (arr_52 [i_4] [i_4] [i_7] [i_13] [i_4]) : (((/* implicit */long long int) 4294967293U))))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32660))) / (((arr_11 [i_4 + 2] [i_7 + 1]) / (arr_40 [i_4] [i_4] [i_4] [i_4])))));
                }
                for (unsigned int i_17 = 0; i_17 < 19; i_17 += 1) 
                {
                    var_35 = ((/* implicit */unsigned short) arr_53 [i_4 + 1] [i_4 + 1] [i_13] [i_17] [i_4]);
                    arr_57 [i_4 + 2] [i_4 + 2] [i_13] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (-1276886549) : (((/* implicit */int) arr_37 [i_4] [i_4] [i_13]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_56 [i_4] [i_4] [i_4] [i_4 - 1] [i_4]))) / (arr_30 [i_4]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8388608)) ? (arr_23 [i_7] [i_7]) : (((/* implicit */int) arr_19 [i_4 + 2] [i_4 + 2])))))));
                }
                arr_58 [i_4] = (+(((/* implicit */int) arr_39 [i_13] [i_4] [i_4] [i_4])));
            }
            for (unsigned short i_18 = 1; i_18 < 18; i_18 += 4) 
            {
                var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_39 [i_18 - 1] [(signed char)14] [(signed char)14] [i_4])) <= (-543470909)))) >> (((((/* implicit */int) arr_38 [i_4 + 2] [i_4 - 1] [i_7] [i_7 + 1] [i_7] [(unsigned short)0])) - (54012)))));
                var_37 = ((/* implicit */unsigned int) min((var_37), (((/* implicit */unsigned int) arr_60 [i_4] [i_18]))));
                var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (-(-852547741))))));
            }
            arr_62 [i_4] [i_4] = ((((/* implicit */long long int) ((/* implicit */int) arr_41 [i_4] [i_7 - 1]))) / (arr_52 [i_4 + 2] [(unsigned short)12] [i_4 - 1] [i_7 - 1] [i_4]));
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 19; i_19 += 1) 
            {
                for (int i_20 = 3; i_20 < 18; i_20 += 1) 
                {
                    {
                        var_39 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_56 [i_4] [i_4] [i_4 - 1] [18U] [i_4])) ? (((/* implicit */int) arr_56 [i_4] [i_4] [i_19] [i_4] [i_7])) : (((/* implicit */int) arr_56 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_20]))));
                        var_40 = ((/* implicit */unsigned short) min((var_40), (((/* implicit */unsigned short) (!(((arr_17 [i_4] [(unsigned short)16] [i_20]) <= (((/* implicit */int) (unsigned short)15)))))))));
                        var_41 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_7 + 1] [i_20 - 1])) - (((/* implicit */int) ((arr_65 [i_4] [i_7] [i_7]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_4] [i_4] [i_4] [i_19] [(unsigned short)8] [i_4] [i_20]))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned short i_21 = 3; i_21 < 16; i_21 += 3) /* same iter space */
            {
                arr_72 [i_4] [i_4] [i_21] = ((/* implicit */signed char) arr_28 [i_21 + 3] [i_21] [i_21 + 3] [i_4] [i_21] [i_21]);
                arr_73 [i_4] [i_7 - 1] [i_4] = arr_29 [i_21] [i_4 + 1] [i_21];
                /* LoopNest 2 */
                for (long long int i_22 = 1; i_22 < 18; i_22 += 1) 
                {
                    for (int i_23 = 2; i_23 < 17; i_23 += 3) 
                    {
                        {
                            arr_79 [i_4 + 2] [i_4 + 2] [i_4] [i_4] [i_4 + 2] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_20 [1LL] [i_4] [i_22 - 1])) & (((/* implicit */int) arr_19 [i_22 - 1] [i_4 + 1]))));
                            arr_80 [i_4] [i_4] [i_4] [i_4] [i_23 - 1] = ((/* implicit */int) (+(arr_64 [i_4] [i_21] [i_22 - 1])));
                            var_42 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_77 [i_4 + 1] [i_21 + 3] [i_22 - 1] [i_23 - 1] [i_23] [i_23 + 2])) ? (((((/* implicit */_Bool) arr_24 [i_21] [i_22 + 1])) ? (((/* implicit */int) arr_8 [i_21 + 3])) : (((/* implicit */int) arr_24 [11LL] [11LL])))) : ((+(((/* implicit */int) (unsigned short)58808))))));
                            var_43 = ((/* implicit */unsigned short) ((0LL) << (((/* implicit */int) ((((/* implicit */int) arr_38 [i_4] [i_4 + 2] [i_4] [8] [i_4] [i_4])) == (((/* implicit */int) (unsigned short)0)))))));
                        }
                    } 
                } 
                arr_81 [i_4] [i_4] [i_21] = ((/* implicit */unsigned short) (+(arr_27 [i_4] [i_7] [i_21] [i_21 - 3])));
            }
            for (unsigned short i_24 = 3; i_24 < 16; i_24 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_25 = 1; i_25 < 16; i_25 += 3) 
                {
                    for (long long int i_26 = 2; i_26 < 18; i_26 += 2) 
                    {
                        {
                            arr_91 [i_4] [i_7 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_4])) : (((/* implicit */int) arr_59 [i_7 - 1] [i_4] [i_4]))));
                            arr_92 [i_4 + 1] [i_4] [5] [i_25 + 1] = ((/* implicit */signed char) ((((/* implicit */int) ((arr_66 [i_4 + 1] [i_25] [i_4] [i_25] [13U]) != (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) <= (((/* implicit */int) arr_56 [i_4 + 1] [i_24 + 1] [i_25] [i_25 + 3] [i_26 - 1]))));
                        }
                    } 
                } 
                var_44 = (~(((-1397252209279578827LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)102))))));
                arr_93 [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_24 - 3])) && (((/* implicit */_Bool) var_3))));
                var_45 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_7 + 1])) ? (((/* implicit */long long int) arr_25 [i_7 - 1])) : (arr_27 [i_24 + 2] [i_7 + 1] [i_4 + 2] [i_4 + 1])));
            }
        }
        arr_94 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_82 [i_4 - 1] [i_4 - 1]) - (((/* implicit */long long int) ((/* implicit */int) arr_88 [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned short)0] [i_4 + 2])))))) ? (((/* implicit */int) arr_56 [i_4] [i_4 - 1] [i_4 + 2] [i_4 - 1] [i_4 - 1])) : (((((/* implicit */_Bool) arr_55 [i_4 + 1] [i_4] [i_4] [i_4 + 1])) ? (((/* implicit */int) arr_75 [i_4] [i_4] [i_4] [(unsigned short)10])) : (((/* implicit */int) arr_87 [i_4] [(unsigned short)17] [i_4] [i_4]))))));
    }
}
