/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243800
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 22; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [i_2] [i_1 + 1] [i_2] = ((/* implicit */unsigned char) var_3);
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
                        {
                            arr_14 [(unsigned short)0] [20U] [i_2] [i_3] [i_2] = ((/* implicit */signed char) min((1073741823), (((/* implicit */int) (signed char)-84))));
                            var_10 = -218304879;
                            arr_15 [i_2] [i_1] [3] [i_3] [6ULL] = ((max((arr_12 [i_4] [i_2] [i_2] [(short)4] [i_2] [0]), (arr_12 [i_4] [i_2] [i_4] [i_4] [i_2] [15ULL]))) ^ (((/* implicit */int) (signed char)-1)));
                            var_11 = ((/* implicit */short) arr_1 [i_0] [i_1]);
                            var_12 = ((/* implicit */long long int) arr_5 [i_4] [i_2 + 2] [i_4]);
                        }
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 4) /* same iter space */
                        {
                            var_13 = ((/* implicit */int) 9888431498373462281ULL);
                            var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) (~(-4452380965148900300LL)))) : (((4025559964284126255ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [4ULL])))))))) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 2] [i_2] [i_3] [i_5])) : (((((/* implicit */int) arr_17 [i_1 - 2] [(signed char)14] [i_2 + 1])) / (((/* implicit */int) arr_9 [i_1 - 2])))));
                        }
                        var_15 &= ((/* implicit */short) arr_2 [i_1]);
                        arr_18 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned int i_6 = 3; i_6 < 23; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) 3197591938U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_6)))) : (((((/* implicit */_Bool) arr_17 [i_0] [i_3] [i_6 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (4025559964284126244ULL)))));
                            var_17 = ((/* implicit */unsigned char) -218304879);
                            var_18 -= ((/* implicit */unsigned char) (+((+(var_9)))));
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            arr_23 [i_0] [i_2] [(unsigned char)9] = ((/* implicit */int) 4452380965148900294LL);
                            arr_24 [i_7] [i_2] [(unsigned char)11] [i_2] [(short)14] = ((/* implicit */short) var_5);
                        }
                    }
                    for (unsigned int i_8 = 1; i_8 < 22; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_9 = 0; i_9 < 24; i_9 += 4) 
                        {
                            arr_29 [9U] [i_2] [i_2] [i_8] [i_9] = ((/* implicit */long long int) max((var_0), (((/* implicit */short) (!(((/* implicit */_Bool) 218304883)))))));
                            arr_30 [i_2] [i_2 - 2] [i_1 + 1] [i_2] = ((/* implicit */short) (~(((((/* implicit */int) var_8)) << ((((~(-1024861307))) - (1024861283)))))));
                            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)166)))))));
                        }
                        for (int i_10 = 2; i_10 < 20; i_10 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned int) (unsigned short)56868);
                            var_21 = ((/* implicit */unsigned int) var_5);
                        }
                        var_22 = ((/* implicit */short) 16777215);
                    }
                    for (short i_11 = 0; i_11 < 24; i_11 += 2) 
                    {
                        var_23 = ((/* implicit */short) var_3);
                        var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (((((!(((/* implicit */_Bool) (short)-29138)))) && (((/* implicit */_Bool) max((((/* implicit */int) (signed char)-1)), (-16777216)))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (signed char)-31)))))));
                    }
                    arr_37 [i_2 - 1] [i_2] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_16 [(signed char)1] [4] [i_2] [i_1 - 2] [1ULL])) ? (arr_16 [i_0] [i_1] [i_0] [i_1 + 2] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)29137))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0] [i_1 - 2] [20ULL] [i_1 + 2] [i_1 + 1])) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) var_8)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_12 = 1; i_12 < 22; i_12 += 2) 
                    {
                        for (unsigned char i_13 = 1; i_13 < 21; i_13 += 4) 
                        {
                            {
                                var_25 = max(((~((~(((/* implicit */int) var_8)))))), (var_4));
                                var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) 524287LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 + 1] [(unsigned char)8] [i_2]))) : (-4452380965148900305LL)))));
                            }
                        } 
                    } 
                    arr_42 [i_0] [i_1] [i_2] = ((/* implicit */signed char) min((((/* implicit */long long int) var_0)), (var_9)));
                }
            } 
        } 
        var_27 = ((/* implicit */short) ((((/* implicit */int) arr_38 [(signed char)11] [(signed char)3] [(unsigned char)15] [i_0])) >> ((((+(((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_0])))) - (53651)))));
        arr_43 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_0] [(short)22] [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) ((unsigned int) var_1)))));
    }
    var_28 = ((/* implicit */short) var_6);
    var_29 -= ((/* implicit */signed char) var_2);
    var_30 = ((/* implicit */unsigned char) var_6);
    /* LoopSeq 1 */
    for (unsigned short i_14 = 2; i_14 < 16; i_14 += 3) 
    {
        var_31 = -1712630284;
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_16 [(short)1] [i_14 + 2] [i_14] [(unsigned char)8] [13ULL])))) ? (var_1) : (var_6)));
        var_33 = ((/* implicit */unsigned long long int) var_4);
        /* LoopSeq 3 */
        for (unsigned short i_15 = 0; i_15 < 18; i_15 += 1) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned short) (~(min((((/* implicit */long long int) (short)-29893)), (524302LL)))));
            /* LoopNest 3 */
            for (int i_16 = 0; i_16 < 18; i_16 += 2) 
            {
                for (int i_17 = 0; i_17 < 18; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        {
                            var_35 = max((((/* implicit */unsigned long long int) var_9)), (10000860647948990734ULL));
                            var_36 = (-(max((((/* implicit */unsigned long long int) arr_8 [i_14 + 2] [i_15] [i_16] [i_14])), (((((/* implicit */_Bool) var_0)) ? (11169347450770681558ULL) : (arr_27 [i_18] [i_17] [i_16] [i_16] [(unsigned char)0] [i_15] [i_14]))))));
                            var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-44))));
                            var_38 = ((/* implicit */short) min((((arr_49 [2ULL] [i_18]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_14 + 2] [i_14 + 2] [i_14]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) - (var_5))))));
                            var_39 -= ((/* implicit */signed char) ((((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_0 [i_14 + 1])) : (((/* implicit */int) arr_36 [i_14] [i_16] [i_18]))))) / (max((-4452380965148900302LL), (((/* implicit */long long int) 1140432338)))))) >> ((((~(((/* implicit */int) arr_53 [i_14 - 1] [16U] [i_16] [i_17] [i_14 + 1] [i_14] [i_15])))) - (30208)))));
                        }
                    } 
                } 
            } 
            var_40 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-75))));
        }
        for (unsigned short i_19 = 0; i_19 < 18; i_19 += 1) /* same iter space */
        {
            var_41 = ((/* implicit */signed char) (short)15748);
            arr_56 [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) ((1712630283) / (((/* implicit */int) (signed char)80)))))));
            var_42 = ((/* implicit */unsigned long long int) min((var_42), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_1)) - ((+(946982680930834701ULL)))))) ? (max((((14421184109425425360ULL) + (((/* implicit */unsigned long long int) -4452380965148900288LL)))), (((/* implicit */unsigned long long int) var_1)))) : (((((/* implicit */_Bool) arr_46 [i_14 + 2] [i_19])) ? (((arr_28 [i_19] [i_14] [i_14]) - (946982680930834701ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)1))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_20 = 0; i_20 < 18; i_20 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_21 = 2; i_21 < 16; i_21 += 1) 
                {
                    for (long long int i_22 = 0; i_22 < 18; i_22 += 3) 
                    {
                        {
                            var_43 = ((/* implicit */short) 946982680930834701ULL);
                            var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_50 [i_21] [i_21 - 1] [i_21 - 1] [i_21])) : (((/* implicit */int) (unsigned short)127))));
                        }
                    } 
                } 
                var_45 = ((/* implicit */unsigned int) max((var_45), (((/* implicit */unsigned int) 1712630283))));
                var_46 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_26 [i_14 + 1] [i_14 + 2] [i_14 + 1] [i_14 + 1])) + (2147483647))) >> ((((~(arr_41 [i_14 - 1] [i_19] [i_19] [i_19] [i_20] [i_20] [i_19]))) - (1491446764)))));
                var_47 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_4))));
            }
            for (unsigned long long int i_23 = 0; i_23 < 18; i_23 += 3) /* same iter space */
            {
                var_48 = var_1;
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned char i_24 = 1; i_24 < 16; i_24 += 4) 
                {
                    var_49 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))));
                    var_50 = ((/* implicit */short) ((((/* implicit */_Bool) 946982680930834701ULL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_50 [(unsigned short)10] [i_24 - 1] [i_14 - 2] [(signed char)3])))));
                    var_51 = ((/* implicit */signed char) (+(var_1)));
                    var_52 = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)342))))) ? (((/* implicit */int) var_0)) : (-152732424));
                }
                /* vectorizable */
                for (signed char i_25 = 0; i_25 < 18; i_25 += 1) 
                {
                    var_53 = ((/* implicit */long long int) ((17499761392778716916ULL) | (((/* implicit */unsigned long long int) 8191U))));
                    /* LoopSeq 1 */
                    for (signed char i_26 = 0; i_26 < 18; i_26 += 2) 
                    {
                        var_54 = var_0;
                        var_55 = ((/* implicit */short) 946982680930834694ULL);
                    }
                    arr_74 [i_14] [i_14] = ((/* implicit */short) -16777226);
                    arr_75 [i_14] [i_14] [i_23] [i_25] = ((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_14] [i_19] [i_23] [19LL]))));
                    var_56 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_47 [i_23] [i_19] [(unsigned short)12]))));
                }
                arr_76 [i_14] [(unsigned char)16] [i_23] = ((/* implicit */unsigned long long int) (~((~(arr_65 [i_23] [i_14 - 2])))));
                var_57 = min((((/* implicit */int) ((unsigned char) (unsigned short)40980))), (arr_5 [i_14] [i_14 + 1] [i_14]));
            }
        }
        for (long long int i_27 = 2; i_27 < 17; i_27 += 2) 
        {
            /* LoopNest 3 */
            for (int i_28 = 0; i_28 < 18; i_28 += 1) 
            {
                for (short i_29 = 2; i_29 < 15; i_29 += 3) 
                {
                    for (unsigned short i_30 = 0; i_30 < 18; i_30 += 2) 
                    {
                        {
                            var_58 = ((/* implicit */unsigned long long int) arr_5 [i_14] [i_28] [i_14]);
                            arr_88 [i_14] [(unsigned short)1] [i_28] [i_29] [i_14] = ((/* implicit */short) 14421184109425425372ULL);
                        }
                    } 
                } 
            } 
            var_59 = ((/* implicit */int) min((var_59), (((/* implicit */int) (short)24544))));
        }
    }
}
