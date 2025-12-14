/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239753
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = 17855476145106605985ULL;
        var_17 ^= ((/* implicit */unsigned long long int) (unsigned char)96);
        var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)12))));
        var_19 = ((/* implicit */unsigned int) var_8);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_20 = arr_6 [i_1] [i_1] [i_1];
                    arr_10 [i_3] [i_3] [i_3] = arr_5 [i_1] [i_1] [i_1];
                    var_21 = (-(((18446744073709551613ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))));
                }
            } 
        } 
        arr_11 [i_1] = ((/* implicit */_Bool) arr_8 [i_1] [(unsigned char)2] [(unsigned char)2] [i_1]);
    }
    for (unsigned int i_4 = 0; i_4 < 15; i_4 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 15; i_8 += 3) 
                    {
                        {
                            arr_24 [i_4] [i_5] [i_4] [i_4] = ((((/* implicit */_Bool) (unsigned char)243)) ? (((unsigned long long int) arr_12 [i_4])) : (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4] [i_5] [i_4])));
                            arr_25 [i_7] [i_7] [i_7] [i_7] [i_7] [(unsigned char)10] |= ((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2));
                        }
                    } 
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (unsigned char i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        {
                            arr_33 [i_4] = arr_9 [i_10] [i_5] [i_9] [i_9];
                            var_22 = ((/* implicit */unsigned long long int) var_5);
                            var_23 = ((unsigned int) arr_22 [i_4] [i_4] [i_5] [i_4] [i_4] [i_4]);
                            arr_34 [i_4] [i_5] [i_5] [(_Bool)0] [i_5] |= (unsigned char)2;
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 15; i_13 += 3) 
                {
                    {
                        var_24 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
                        var_25 = ((/* implicit */_Bool) (+(var_9)));
                        var_26 ^= ((/* implicit */unsigned int) 7ULL);
                    }
                } 
            } 
            var_27 = arr_13 [i_5] [i_4];
            var_28 = ((/* implicit */unsigned int) arr_35 [i_4] [i_5] [i_5] [i_5]);
        }
        /* LoopSeq 2 */
        for (unsigned char i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            var_29 = ((/* implicit */unsigned long long int) (!((_Bool)1)));
            arr_41 [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_5);
        }
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_16 = 0; i_16 < 15; i_16 += 3) 
            {
                var_30 = arr_6 [i_4] [i_4] [i_4];
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (unsigned int i_18 = 0; i_18 < 15; i_18 += 3) 
                    {
                        {
                            var_31 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 6072522149495064196ULL)) ? ((~(var_9))) : ((+(var_6)))));
                            var_32 = arr_4 [i_4];
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((unsigned int) var_9)))));
                            var_34 ^= ((/* implicit */unsigned int) ((((_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) 67092480U)) ? (arr_45 [(_Bool)1] [i_17] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)209)))))));
                        }
                    } 
                } 
                arr_53 [8U] [8U] |= ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned long long int) (unsigned char)238)));
                arr_54 [2ULL] [i_16] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_0))));
                var_35 = ((/* implicit */unsigned char) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_48 [i_4] [i_4] [i_4] [i_4] [i_4])))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_19 = 0; i_19 < 15; i_19 += 3) 
            {
                for (unsigned long long int i_20 = 1; i_20 < 11; i_20 += 3) 
                {
                    {
                        var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned char)2), (var_16)))))))));
                        var_37 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)254))));
                        arr_61 [i_20] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned long long int) (+(15U))));
                        var_38 = ((/* implicit */unsigned char) max((arr_35 [i_4] [i_4] [i_4] [i_4]), (((/* implicit */unsigned long long int) 4294967281U))));
                        arr_62 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_63 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)255))));
            arr_64 [i_15] [i_4] [i_4] = ((((/* implicit */_Bool) 2725239827U)) ? (13835058055282163712ULL) : (((/* implicit */unsigned long long int) 4294967287U)));
            var_39 = ((/* implicit */_Bool) arr_12 [i_4]);
        }
        var_40 = ((/* implicit */unsigned char) var_0);
    }
    for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 3) 
    {
        arr_68 [i_21] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_21] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)200))) : (arr_65 [i_21] [i_21]))))));
        arr_69 [i_21] = ((/* implicit */unsigned char) arr_67 [i_21]);
        /* LoopNest 2 */
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 3) 
            {
                {
                    arr_76 [i_21] [i_23] [i_22] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)52)) ? (((arr_72 [i_21] [i_21] [i_21] [i_22]) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17179869152ULL)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_21])) ? (arr_71 [i_21] [i_21]) : (arr_65 [i_23] [i_22])))) ? (var_15) : (arr_72 [i_21] [i_21] [i_21] [i_22])))));
                    var_41 = ((/* implicit */unsigned long long int) ((_Bool) var_4));
                }
            } 
        } 
        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned char)77)))), (((/* implicit */int) (unsigned char)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (arr_74 [22U])))))) : (1587687021770403221ULL)));
    }
    /* LoopNest 3 */
    for (unsigned char i_24 = 0; i_24 < 13; i_24 += 3) 
    {
        for (unsigned char i_25 = 0; i_25 < 13; i_25 += 3) 
        {
            for (unsigned char i_26 = 0; i_26 < 13; i_26 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_27 = 0; i_27 < 13; i_27 += 3) 
                    {
                        for (unsigned int i_28 = 0; i_28 < 13; i_28 += 3) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) arr_38 [i_24] [10U] [i_24] [i_24] [i_24]))));
                                arr_91 [i_26] = (+(88591542554294897ULL));
                                arr_92 [i_24] [i_24] [i_24] [i_28] [i_24] [i_28] [i_26] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_65 [i_24] [i_27]))));
                                var_44 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned char)1)))) ? (((/* implicit */int) ((_Bool) var_1))) : (((/* implicit */int) arr_5 [i_24] [i_25] [i_25]))));
                                var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) arr_16 [i_24] [i_24] [4ULL]))));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */unsigned char) max((var_46), (((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_24] [(_Bool)1] [i_24] [i_24] [i_24] [i_24]))))))))));
                    var_47 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (4294967295U)));
                }
            } 
        } 
    } 
}
