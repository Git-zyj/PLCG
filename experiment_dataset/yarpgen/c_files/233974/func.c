/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233974
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((arr_0 [i_0]) >> (((((/* implicit */int) arr_1 [i_0])) - (4723)))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (arr_4 [i_1] [i_1] [i_1])));
            var_17 = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (_Bool)0)))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_12 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */signed char) arr_0 [i_0]);
                        var_18 = ((((arr_8 [i_1] [i_1] [i_2] [i_1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_3)))) | (((int) arr_9 [i_3] [i_0] [i_1] [i_0])));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
                        {
                            arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) (~(((/* implicit */int) arr_6 [i_0] [i_3 + 1] [i_2] [i_3 + 1]))));
                            var_19 += ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        }
                    }
                } 
            } 
            arr_16 [i_0] [i_0] = ((/* implicit */short) ((unsigned char) arr_1 [i_0]));
        }
        for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
        {
            arr_19 [i_0] [i_5] = ((/* implicit */int) (((_Bool)1) ? (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            var_20 = ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (unsigned short)42447))));
        }
        for (unsigned short i_6 = 0; i_6 < 21; i_6 += 4) /* same iter space */
        {
            arr_22 [i_6] = ((((/* implicit */_Bool) arr_17 [i_0] [i_6])) ? (((/* implicit */int) arr_17 [i_6] [i_0])) : (((/* implicit */int) arr_17 [i_6] [i_6])));
            arr_23 [i_0] [i_6] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_6] [i_6] [i_0])) ? (var_0) : (arr_4 [i_0] [i_0] [i_0])));
        }
        /* LoopNest 3 */
        for (short i_7 = 3; i_7 < 20; i_7 += 1) 
        {
            for (unsigned char i_8 = 1; i_8 < 20; i_8 += 1) 
            {
                for (unsigned short i_9 = 1; i_9 < 19; i_9 += 1) 
                {
                    {
                        var_21 ^= ((/* implicit */_Bool) ((unsigned short) arr_13 [i_9 + 2] [i_9] [i_9 + 2] [i_9] [i_9] [i_9]));
                        arr_30 [i_0] [i_0] [i_8] [i_0] |= ((((((/* implicit */_Bool) arr_10 [i_9] [i_8] [i_7] [i_7] [i_0])) ? (((/* implicit */int) arr_7 [i_7])) : (((/* implicit */int) arr_8 [i_0] [i_7] [i_8] [i_9])))) + ((+(((/* implicit */int) arr_20 [i_8])))));
                        var_22 += ((/* implicit */unsigned char) ((signed char) ((arr_8 [i_7] [i_9] [i_7] [i_7]) ? (((/* implicit */int) arr_7 [i_7])) : (var_9))));
                    }
                } 
            } 
        } 
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(arr_26 [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopSeq 1 */
        for (int i_10 = 1; i_10 < 18; i_10 += 1) 
        {
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21; i_11 += 3) 
            {
                for (signed char i_12 = 2; i_12 < 18; i_12 += 1) 
                {
                    for (unsigned short i_13 = 2; i_13 < 17; i_13 += 2) 
                    {
                        {
                            arr_40 [i_0] [i_0] [i_11] [i_0] [i_13] = ((/* implicit */unsigned char) arr_10 [i_10] [i_10] [i_10 + 3] [i_12] [i_12]);
                            arr_41 [i_0] [i_10] [i_10] [i_12] [i_11] &= ((/* implicit */unsigned short) -784018441);
                        }
                    } 
                } 
            } 
            arr_42 [i_0] &= ((((/* implicit */_Bool) arr_31 [i_10 + 1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_10 + 3] [i_10 - 1])));
        }
    }
    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) /* same iter space */
    {
        arr_46 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)177)) * (((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) min((max(((unsigned short)39577), (arr_31 [i_14]))), (((/* implicit */unsigned short) arr_45 [i_14] [i_14]))))), ((-(((/* implicit */int) var_13))))));
        arr_47 [i_14] = ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_6 [i_14] [i_14] [i_14] [i_14])) : (((/* implicit */int) arr_6 [i_14] [i_14] [i_14] [i_14])))) * (((/* implicit */int) max((arr_6 [i_14] [i_14] [i_14] [i_14]), (arr_6 [i_14] [i_14] [i_14] [i_14])))));
    }
    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) (~(min(((~(var_15))), (((/* implicit */int) var_3))))));
        arr_50 [i_15] [i_15] = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */short) (signed char)119)), (arr_20 [i_15]))))));
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) max((arr_4 [i_15] [i_15] [i_15]), (((/* implicit */int) arr_43 [i_15]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_15] [i_15] [i_15]))))) : (((/* implicit */int) arr_38 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])))), (((/* implicit */int) (unsigned short)12913)))))));
        var_27 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((arr_18 [i_15]) / (((/* implicit */int) (unsigned short)5550))))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_37 [i_15] [i_15] [i_15])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            arr_55 [i_15] [i_15] [i_15] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) - (((/* implicit */int) (short)5231)));
            arr_56 [i_15] = ((/* implicit */signed char) (+(arr_53 [i_15])));
        }
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 22; i_17 += 2) 
    {
        for (short i_18 = 0; i_18 < 22; i_18 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_19 = 2; i_19 < 19; i_19 += 2) 
                {
                    var_28 = ((/* implicit */unsigned short) arr_61 [i_19] [i_18] [i_17] [i_17]);
                    var_29 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_58 [i_18])) && (((_Bool) arr_61 [i_17] [i_17] [i_17] [i_19 + 1]))));
                    arr_65 [i_19] [i_18] [i_17] = ((/* implicit */unsigned char) (+(arr_61 [i_17] [i_17] [i_19] [i_19])));
                    var_30 += ((/* implicit */unsigned char) -784018441);
                }
                /* LoopNest 2 */
                for (unsigned short i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    for (short i_21 = 1; i_21 < 21; i_21 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned short i_22 = 0; i_22 < 22; i_22 += 1) 
                            {
                                arr_73 [i_20] [i_20] |= ((/* implicit */_Bool) var_8);
                                var_31 |= ((/* implicit */unsigned short) (+((((_Bool)1) ? (((/* implicit */int) (signed char)120)) : (((/* implicit */int) (_Bool)1))))));
                            }
                            var_32 |= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((signed char) arr_67 [i_18]))) ? ((-(((/* implicit */int) arr_71 [i_20] [i_17] [i_20] [i_21] [i_21] [i_18])))) : (var_8)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned short i_23 = 1; i_23 < 15; i_23 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_24 = 2; i_24 < 13; i_24 += 3) 
        {
            arr_80 [i_24] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(max((((/* implicit */int) arr_36 [i_23] [i_24] [i_24] [i_24] [i_23])), (var_16)))))) ? (((((/* implicit */_Bool) (+(arr_35 [i_23] [i_23])))) ? (((/* implicit */int) max((var_6), (((/* implicit */unsigned short) var_12))))) : (((/* implicit */int) max(((unsigned short)40450), (((/* implicit */unsigned short) (signed char)-14))))))) : (((/* implicit */int) min((arr_76 [i_24] [i_24] [i_23 - 1]), (arr_76 [i_24] [i_24] [i_23 + 1]))))));
            var_33 ^= ((/* implicit */unsigned short) (_Bool)1);
        }
        var_34 = (_Bool)0;
    }
    /* vectorizable */
    for (_Bool i_25 = 1; i_25 < 1; i_25 += 1) 
    {
        var_35 -= ((/* implicit */unsigned int) arr_81 [i_25]);
        var_36 += ((/* implicit */unsigned short) arr_81 [i_25]);
        var_37 = ((/* implicit */short) arr_83 [i_25 - 1] [i_25]);
        arr_85 [i_25] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_83 [i_25] [i_25]))));
    }
}
