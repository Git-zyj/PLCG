/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212765
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
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) (short)17555);
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    for (short i_4 = 4; i_4 < 22; i_4 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)150)) ? (1470659682U) : (arr_8 [i_0] [i_4 - 4] [i_1])));
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? ((~(((/* implicit */int) (signed char)124)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)158)))))));
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1470659682U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 6362030915877462197LL)))))) : (10470736885807219231ULL))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */short) arr_4 [i_1]);
                var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-97))));
            }
            for (signed char i_5 = 2; i_5 < 23; i_5 += 2) 
            {
                arr_18 [i_1] [7U] [i_0] = ((/* implicit */unsigned int) var_8);
                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 3597204862U))));
                arr_19 [i_1] = ((/* implicit */unsigned int) 7976007187902332384ULL);
                /* LoopNest 2 */
                for (unsigned int i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    for (long long int i_7 = 3; i_7 < 20; i_7 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */short) (((_Bool)1) && ((_Bool)0)));
                            arr_26 [i_0] [i_1] [i_5] [i_6 + 1] [i_0] [i_5] [i_5] = ((/* implicit */unsigned long long int) (unsigned char)255);
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)68)) | (((/* implicit */int) (_Bool)1))));
            }
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                var_25 -= ((/* implicit */unsigned short) arr_12 [i_8] [i_1] [i_1] [i_8]);
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) << ((((+(((/* implicit */int) (unsigned short)17644)))) - (17626)))));
                var_27 -= ((/* implicit */long long int) var_0);
            }
            /* LoopNest 2 */
            for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
            {
                for (unsigned char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    {
                        var_28 -= ((/* implicit */long long int) (unsigned char)143);
                        var_29 = ((/* implicit */unsigned char) (-(563151504U)));
                    }
                } 
            } 
        }
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            var_30 -= ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */long long int) 1737790197U)) : (0LL))), (((/* implicit */long long int) (unsigned char)230)))) == (((/* implicit */long long int) 1737790197U))));
            var_31 = ((/* implicit */short) arr_13 [i_0] [i_11] [i_11] [i_11]);
            var_32 = ((/* implicit */unsigned long long int) var_2);
        }
        for (unsigned char i_12 = 1; i_12 < 22; i_12 += 1) 
        {
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)96)))))));
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) arr_10 [i_12] [i_0] [i_0] [i_0]))));
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((unsigned char)63), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)54))) == (0U))))))) ? (-2164282848885632859LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 0U)) > (min((var_3), (((/* implicit */long long int) (_Bool)0))))))))));
            var_36 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-23414)) : (((/* implicit */int) (short)24884))))));
            var_37 -= ((/* implicit */unsigned int) var_1);
        }
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        arr_41 [i_13] [i_13] = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned char)69)) ? (((((/* implicit */_Bool) (unsigned short)56692)) ? (((/* implicit */long long int) 3207235662U)) : (3268198544589764658LL))) : (((/* implicit */long long int) 0U))))));
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 23; i_15 += 4) 
            {
                {
                    arr_46 [i_13] [i_15] [i_15] [i_13] = ((/* implicit */_Bool) var_13);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        var_38 -= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-29))));
                        var_39 -= ((/* implicit */unsigned int) ((short) (short)-14339));
                        arr_49 [i_13] [i_14] [(unsigned char)22] [i_16] = ((/* implicit */long long int) (~(((/* implicit */int) arr_48 [(_Bool)1] [i_15] [i_14]))));
                        var_40 = ((/* implicit */long long int) (unsigned char)0);
                    }
                    for (short i_17 = 2; i_17 < 22; i_17 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned int) (_Bool)0);
                        arr_54 [i_13] [i_14] [i_15] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((5435834138165521482LL), (((/* implicit */long long int) (signed char)0)))))));
                        arr_55 [i_13] [i_17 - 1] [i_15] [i_17] = ((/* implicit */_Bool) (((((_Bool)1) ? (arr_9 [i_17 - 2] [12U] [i_17] [i_17]) : (arr_9 [i_17 - 2] [i_17 + 1] [i_17] [i_17 - 1]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32547))) < (2801155226156376352ULL)))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_18 = 3; i_18 < 21; i_18 += 4) /* same iter space */
                        {
                            var_42 -= ((/* implicit */unsigned char) (~(3268198544589764658LL)));
                            var_43 = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_23 [i_17 + 1] [i_18 + 2] [i_18 + 2] [i_13] [i_18 + 2]), (arr_23 [i_17 - 1] [i_18 - 3] [i_18] [i_13] [i_18 + 1]))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_19 = 3; i_19 < 21; i_19 += 4) /* same iter space */
                        {
                            arr_61 [i_13] = ((/* implicit */_Bool) (unsigned char)0);
                            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) arr_40 [i_17] [i_13]))));
                            var_45 -= ((/* implicit */short) (unsigned char)0);
                        }
                        for (unsigned char i_20 = 3; i_20 < 21; i_20 += 4) /* same iter space */
                        {
                            var_46 -= ((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned char)0))))));
                            var_47 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3284731161U)) ? (12855659105668576397ULL) : (((/* implicit */unsigned long long int) 0U)))))));
                        }
                        for (unsigned int i_21 = 1; i_21 < 20; i_21 += 1) 
                        {
                            arr_68 [20ULL] [i_13] [i_15] [i_17] [21U] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)173))));
                            var_48 = ((/* implicit */short) max((var_48), (((/* implicit */short) var_1))));
                        }
                        var_49 = ((/* implicit */unsigned long long int) min((var_49), (((/* implicit */unsigned long long int) ((3997771847U) | (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                    }
                    for (unsigned int i_22 = 0; i_22 < 23; i_22 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned int) (signed char)-46);
                        var_51 = ((/* implicit */_Bool) min((var_51), (((/* implicit */_Bool) max((arr_57 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]), (((/* implicit */unsigned long long int) 3080414585U)))))));
                    }
                    var_52 -= ((/* implicit */short) (unsigned char)255);
                    /* LoopSeq 2 */
                    for (unsigned char i_23 = 1; i_23 < 21; i_23 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_24 = 0; i_24 < 23; i_24 += 1) 
                        {
                            var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((((/* implicit */_Bool) 753506582U)) ? (0LL) : (((/* implicit */long long int) 3666004807U)))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                            var_54 = ((/* implicit */unsigned char) 1630523394U);
                            arr_79 [i_13] [i_14] [21U] [i_13] [i_24] = 0U;
                        }
                        for (unsigned short i_25 = 3; i_25 < 22; i_25 += 2) 
                        {
                            var_55 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned char)126)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-14320))) ^ (0U))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13374)))))));
                            var_56 -= ((/* implicit */long long int) 0U);
                            arr_82 [i_13] [i_14] [i_13] [i_23 + 1] [i_25] [i_14] = ((/* implicit */short) 0U);
                        }
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                        {
                            var_57 -= ((/* implicit */unsigned char) ((short) 0U));
                            arr_87 [i_13] [i_14] [i_23] [i_23 + 2] [i_26] [i_13] [i_26] = ((/* implicit */unsigned char) 3541460714U);
                        }
                        arr_88 [i_13] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)0))));
                        arr_89 [i_13] [i_13] [i_15] = ((/* implicit */short) arr_9 [i_23] [i_15] [i_14] [i_13]);
                    }
                    for (unsigned int i_27 = 2; i_27 < 20; i_27 += 3) 
                    {
                        var_58 = ((/* implicit */signed char) (+((~(((/* implicit */int) (short)0))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            arr_95 [i_13] [i_14] [i_15] [i_13] [(signed char)0] [i_13] [(_Bool)1] = ((/* implicit */signed char) (~(0LL)));
                            var_59 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_28] [i_27 - 2] [i_27] [i_27 + 2] [i_27 - 1]))));
                            var_60 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 3035763261U))));
                        }
                        for (long long int i_29 = 0; i_29 < 23; i_29 += 4) 
                        {
                            arr_98 [i_13] [i_13] [i_15] [6U] [i_29] [i_27 + 3] = ((/* implicit */long long int) var_9);
                            var_61 = ((/* implicit */short) ((signed char) (short)0));
                        }
                        arr_99 [i_13] [i_15] = ((/* implicit */unsigned int) -1LL);
                        var_62 = ((/* implicit */unsigned char) max((var_62), (((/* implicit */unsigned char) var_3))));
                    }
                }
            } 
        } 
    }
    var_63 -= ((/* implicit */signed char) var_0);
    var_64 = ((/* implicit */unsigned int) (short)-2581);
}
