/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40617
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
    for (unsigned char i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0])))) <= (((/* implicit */int) var_13)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) 9223372036854775805LL))) <= (((((/* implicit */_Bool) var_11)) ? (-9223372036854775806LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))) : (((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (2709)))))));
        var_15 = ((/* implicit */short) (-((~(((/* implicit */int) arr_1 [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_16 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5865))))) + (((/* implicit */long long int) (-(((/* implicit */int) (short)18357)))))));
        /* LoopSeq 1 */
        for (long long int i_2 = 2; i_2 < 16; i_2 += 2) 
        {
            var_17 = ((/* implicit */int) var_12);
            /* LoopSeq 2 */
            for (short i_3 = 4; i_3 < 16; i_3 += 2) 
            {
                arr_10 [9LL] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_8 [(signed char)1] [(signed char)1] [i_2])) ? (arr_2 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_1] [i_3])))))));
                var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)1096)) || (((/* implicit */_Bool) (unsigned short)0))));
                /* LoopSeq 2 */
                for (long long int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64453)) ? (arr_2 [i_2 + 2]) : (arr_2 [i_4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)0)) || (((/* implicit */_Bool) arr_8 [i_4] [i_3] [i_1])))))) : (((unsigned long long int) arr_6 [(unsigned char)7]))));
                    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_2))));
                    arr_14 [i_4] [i_4] [i_3] [i_2] [i_1] [(unsigned char)10] = ((/* implicit */short) (-(((((/* implicit */int) (short)14)) - (((/* implicit */int) (unsigned short)12747))))));
                    var_21 = ((/* implicit */signed char) ((long long int) arr_12 [i_1] [i_1] [i_1] [(_Bool)1]));
                }
                for (long long int i_5 = 4; i_5 < 14; i_5 += 1) 
                {
                    var_22 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_7 [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_1 [i_2]))))));
                    arr_17 [i_1] [i_1] [i_5] [i_5 - 4] = ((/* implicit */unsigned int) var_1);
                    arr_18 [i_2] [(short)12] [i_5] = ((/* implicit */int) arr_15 [i_1] [i_3] [i_3]);
                }
                var_23 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)5865)) > (((/* implicit */int) var_5)))) ? (((/* implicit */int) arr_1 [i_2])) : (((((/* implicit */_Bool) arr_8 [i_1] [i_2 + 1] [i_3])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_4 [i_2] [8LL]))))));
                arr_19 [i_2] [i_2] [i_3] &= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)64440)) || (((/* implicit */_Bool) arr_1 [i_1])))))) : (arr_15 [i_3 - 1] [(short)5] [i_1]));
            }
            for (int i_6 = 0; i_6 < 18; i_6 += 4) 
            {
                arr_22 [i_2] [i_1] = ((/* implicit */unsigned long long int) (~((-(arr_8 [i_6] [i_2 - 2] [i_1])))));
                arr_23 [i_6] [i_2 + 1] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [7] [1] [i_2 - 2] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)0))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1083))) < (17873661021126656ULL)))) : (((/* implicit */int) var_0))));
                arr_24 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (arr_6 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2] [i_2]))) == (arr_12 [(unsigned char)4] [i_1] [i_2] [i_6])))))));
            }
            arr_25 [i_2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)126)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_13 [i_1] [i_2 - 1] [i_1] [i_2 - 1] [i_1]))))) ? (((int) (unsigned short)57157)) : (((((/* implicit */int) arr_11 [i_1] [i_2] [i_2] [i_2])) / (((/* implicit */int) var_13))))));
            var_24 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) (signed char)-122)) == (((/* implicit */int) arr_7 [(unsigned char)7] [i_1] [i_1])))))));
        }
        var_25 = ((/* implicit */short) (~(arr_12 [i_1] [i_1] [i_1] [i_1])));
    }
    /* vectorizable */
    for (unsigned char i_7 = 1; i_7 < 18; i_7 += 3) 
    {
        var_26 = ((/* implicit */_Bool) (unsigned short)64426);
        arr_30 [14ULL] [14ULL] |= ((/* implicit */unsigned char) ((_Bool) arr_28 [i_7]));
        /* LoopSeq 2 */
        for (unsigned char i_8 = 3; i_8 < 19; i_8 += 2) 
        {
            var_27 ^= ((/* implicit */unsigned short) (signed char)-41);
            var_28 = ((/* implicit */_Bool) min((var_28), ((!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [8]))) / (var_12))))))));
            arr_33 [i_7] [i_7] = ((/* implicit */short) ((unsigned short) arr_29 [i_7 + 1] [i_7 + 1]));
            var_29 = ((/* implicit */int) max((var_29), (((((/* implicit */int) arr_32 [(unsigned short)8])) ^ (((/* implicit */int) arr_31 [6LL]))))));
            arr_34 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_7 + 1])) ? (((((/* implicit */int) (unsigned short)57159)) % (((/* implicit */int) (unsigned short)28548)))) : (((/* implicit */int) arr_27 [(signed char)13]))));
        }
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            /* LoopSeq 2 */
            for (long long int i_10 = 2; i_10 < 19; i_10 += 3) 
            {
                var_30 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_38 [(unsigned short)13] [i_9])) : (((/* implicit */int) (unsigned short)1068))))));
                arr_41 [i_7] [4] [(unsigned char)6] [(_Bool)1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_37 [(short)0] [(signed char)19] [i_10])) & (((/* implicit */int) arr_35 [14] [14]))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)4))));
            }
            for (signed char i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                /* LoopSeq 4 */
                for (short i_12 = 4; i_12 < 17; i_12 += 3) 
                {
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_28 [i_9])) == (arr_39 [(signed char)14] [i_9] [i_7])))) >= (((/* implicit */int) arr_31 [i_7]))));
                    arr_47 [i_7] [i_7] [i_7] [7ULL] = ((/* implicit */unsigned long long int) arr_40 [i_12] [i_11] [18] [i_7]);
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) arr_40 [i_12 + 3] [i_12] [(short)8] [i_12 + 3]))));
                        arr_50 [i_7] [i_7] [i_7] [i_7] [3LL] = (~(((8979158071117416189LL) + (((/* implicit */long long int) ((/* implicit */int) arr_42 [i_12] [i_12] [(signed char)1] [i_12]))))));
                        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_36 [i_9])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_11])) ? (((/* implicit */int) arr_27 [3LL])) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) (signed char)-46)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))))))));
                    }
                    for (unsigned int i_14 = 0; i_14 < 20; i_14 += 1) 
                    {
                        arr_54 [i_7 - 1] [i_9] [i_7 - 1] [i_12] [i_7] = ((/* implicit */int) var_11);
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) arr_29 [i_14] [i_7]))));
                        arr_55 [i_7] [i_9] [i_11] [i_7] [i_12] [i_9] [i_7 + 2] = ((/* implicit */unsigned short) (((+(var_9))) - (((/* implicit */unsigned long long int) arr_43 [i_9]))));
                        var_35 += ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_38 [i_12] [i_9])) > (((/* implicit */int) (short)3137))))) & (((/* implicit */int) (_Bool)1))));
                    }
                    var_36 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (signed char)-64)))) ? (arr_52 [i_12 - 1] [i_11] [(signed char)11] [(_Bool)1] [(_Bool)1]) : (((/* implicit */int) arr_32 [i_7]))));
                }
                for (long long int i_15 = 1; i_15 < 17; i_15 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (short i_16 = 1; i_16 < 19; i_16 += 1) 
                    {
                        arr_62 [i_7] [5LL] [i_11] [i_7] [i_7] [i_7] [i_16 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_26 [i_7 + 1])) ? (((/* implicit */int) ((signed char) var_4))) : (((/* implicit */int) var_1))));
                        arr_63 [i_7] [i_7] [i_11] [i_15] [i_7] = ((/* implicit */_Bool) arr_38 [i_11] [i_9]);
                    }
                    for (short i_17 = 1; i_17 < 18; i_17 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_58 [i_7] [i_7] [i_15] [i_7]))));
                        arr_67 [i_7] [i_7 + 1] [i_7 + 1] [i_7] [i_7] = ((/* implicit */int) ((short) ((unsigned long long int) arr_44 [i_7] [i_9])));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_32 [i_7]) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [(short)10] [i_7] [2U] [i_7] [(short)10] [(unsigned short)15]))) : (var_4)))) && (((/* implicit */_Bool) arr_64 [i_7 - 1] [i_7 - 1] [i_7] [17ULL] [(short)9] [(short)9]))));
                        arr_68 [i_7] [i_7] [i_17] [i_15] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) arr_31 [i_7])) > (((/* implicit */int) arr_31 [i_7]))));
                    }
                    for (short i_18 = 1; i_18 < 18; i_18 += 1) /* same iter space */
                    {
                        arr_72 [i_7] [i_7] [i_7] [i_7] [(signed char)14] [i_11] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_66 [i_7] [i_7] [i_11] [i_9])) ? (arr_36 [i_7]) : (((/* implicit */unsigned long long int) 8979158071117416189LL)))))));
                        var_39 = ((/* implicit */signed char) ((((((/* implicit */long long int) arr_29 [4ULL] [(short)19])) / (9223372036854775805LL))) / (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_7] [i_9] [3] [i_18])))));
                        var_40 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_51 [i_7] [(signed char)16] [i_18 + 2] [i_15 + 2] [4U] [i_7])) + (((((/* implicit */_Bool) (short)-2048)) ? (((/* implicit */int) arr_32 [i_7])) : (((/* implicit */int) var_11))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_19 = 2; i_19 < 17; i_19 += 1) 
                    {
                        arr_77 [i_11] [i_15] [4U] [i_15] [i_11] [i_15] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_7] [i_7 + 1] [i_7 + 1] [i_19])) ? ((~(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)31744)) < (((/* implicit */int) arr_51 [i_11] [i_9] [i_9] [6ULL] [i_9] [i_9]))))))));
                        var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_52 [i_7] [i_9] [i_19 + 2] [i_15] [3LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_7] [i_11] [(unsigned short)10] [i_15] [i_15] [i_19]))) != (arr_36 [i_11]))))) : ((~(18305635471581901217ULL))))))));
                        var_42 -= ((/* implicit */unsigned char) arr_40 [i_19 - 1] [i_19 + 1] [i_19] [2ULL]);
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        arr_80 [(signed char)0] [i_9] [i_11] [i_11] [i_11] &= ((/* implicit */short) (((_Bool)1) ? ((~(((/* implicit */int) arr_48 [i_7] [i_7] [i_11] [i_7])))) : (((/* implicit */int) arr_28 [i_20]))));
                        var_43 += ((/* implicit */short) ((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (var_8))));
                        var_44 &= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */int) (unsigned short)64453)) != (((/* implicit */int) var_11)))));
                        arr_81 [i_7] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 268427264U))));
                    }
                }
                for (long long int i_21 = 1; i_21 < 17; i_21 += 1) /* same iter space */
                {
                    var_45 ^= arr_73 [(_Bool)1] [i_11] [i_21];
                    arr_84 [i_7] [i_21] [i_11] [i_9] [i_7] = ((/* implicit */unsigned int) var_2);
                }
                for (unsigned char i_22 = 2; i_22 < 19; i_22 += 3) 
                {
                    arr_87 [i_7] [i_11] [17LL] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (short)0))));
                    arr_88 [i_9] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) arr_86 [i_7] [i_9] [i_11] [i_11] [i_9] [i_22])) * (((/* implicit */int) (unsigned short)45276))));
                }
                arr_89 [i_9] [i_7] = ((/* implicit */short) (+((+(2244907115006971456LL)))));
            }
            arr_90 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) arr_69 [i_7] [i_7] [i_9] [i_9] [i_7]);
            var_46 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 562932773552128LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_83 [(unsigned short)4] [(_Bool)1] [i_7 + 2] [i_9] [(short)6] [i_9]))) : (-562932773552128LL))))));
        }
        arr_91 [i_7] = ((/* implicit */_Bool) (-(((long long int) arr_39 [i_7] [i_7] [i_7]))));
    }
    var_47 &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) 8589934591LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14580))) : (var_8))) < (var_8)))) & (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_0))))))));
    var_48 &= ((/* implicit */signed char) ((var_9) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) * (var_8)))))))));
}
