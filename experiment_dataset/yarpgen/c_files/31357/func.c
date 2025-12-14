/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31357
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
    var_17 ^= ((/* implicit */int) 1028071591836370533ULL);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 1) 
    {
        var_18 = ((/* implicit */signed char) arr_1 [i_0]);
        var_19 = ((/* implicit */int) min((var_19), (var_16)));
        /* LoopNest 2 */
        for (unsigned short i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (arr_6 [i_0] [i_0 + 1] [16ULL]))))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_16))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 22; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0 + 1]))));
                        var_23 = ((/* implicit */unsigned char) ((_Bool) var_11));
                        var_24 = ((/* implicit */signed char) (!((_Bool)0)));
                        var_25 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (signed char)7))))));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) (+(arr_5 [(unsigned short)10] [(unsigned short)10])));
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_14 [i_0] [10U] [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) var_2))));
    }
    for (unsigned short i_6 = 2; i_6 < 20; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_7 = 1; i_7 < 20; i_7 += 2) 
        {
            for (unsigned int i_8 = 2; i_8 < 18; i_8 += 2) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) min(((~(((var_1) & (var_3))))), (var_1)));
                    arr_25 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8 + 2] [18ULL] [6U])) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) arr_24 [i_8 - 1] [i_7] [i_8]))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((((/* implicit */int) arr_24 [i_8 - 1] [i_7] [(_Bool)1])) != (-90900674))))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned int) min((((/* implicit */long long int) max((var_1), (arr_1 [i_6 + 1])))), (((((/* implicit */_Bool) arr_1 [i_6 - 1])) ? (var_0) : (((/* implicit */long long int) arr_1 [i_6 - 2]))))));
        /* LoopNest 2 */
        for (unsigned char i_9 = 2; i_9 < 20; i_9 += 1) 
        {
            for (short i_10 = 1; i_10 < 20; i_10 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_11 = 2; i_11 < 19; i_11 += 4) 
                    {
                        for (int i_12 = 1; i_12 < 20; i_12 += 2) 
                        {
                            {
                                var_30 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)153)) ? ((-(arr_19 [i_10] [6LL]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_5) >= (((/* implicit */int) (unsigned char)170))))))));
                                var_31 = ((/* implicit */int) -2LL);
                                var_32 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_9 [i_6 - 1] [i_10] [i_11] [i_12])) : (((/* implicit */int) arr_13 [i_6] [i_11])))))))));
                            }
                        } 
                    } 
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)57)) ? (((/* implicit */long long int) 2147483647)) : (-1552723123403043175LL)))) ? (((/* implicit */long long int) arr_8 [i_9])) : (min((arr_30 [i_6]), (((/* implicit */long long int) var_2)))))) % (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */int) (unsigned char)250)) : (var_5))), ((+(((/* implicit */int) arr_14 [i_10] [i_6] [i_10] [i_6] [i_6]))))))))))));
                    arr_38 [i_10] [i_9] [i_9] [i_6] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_12 [i_6]), (((/* implicit */unsigned char) arr_32 [i_6 - 2] [i_9] [i_10])))))) & (((((/* implicit */_Bool) arr_6 [i_6 + 1] [i_9] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_4)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_13 = 4; i_13 < 22; i_13 += 3) 
    {
        /* LoopNest 3 */
        for (int i_14 = 4; i_14 < 23; i_14 += 2) 
        {
            for (signed char i_15 = 1; i_15 < 21; i_15 += 1) 
            {
                for (long long int i_16 = 2; i_16 < 22; i_16 += 4) 
                {
                    {
                        var_34 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_13] [i_14] [i_15] [i_15])) ? (var_6) : (18446744073709551615ULL))))));
                        arr_48 [(short)2] [i_14] [i_15] [i_15] = ((/* implicit */int) 661149747U);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (int i_17 = 4; i_17 < 21; i_17 += 2) 
        {
            for (signed char i_18 = 1; i_18 < 21; i_18 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_19 = 1; i_19 < 21; i_19 += 1) 
                    {
                        for (unsigned long long int i_20 = 1; i_20 < 23; i_20 += 2) 
                        {
                            {
                                var_35 &= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [i_13]))) != (((((/* implicit */_Bool) var_14)) ? (var_14) : (arr_3 [i_18] [i_17])))));
                                var_36 -= ((/* implicit */unsigned short) (-(arr_42 [i_13 - 3] [i_13 - 2])));
                                var_37 = ((/* implicit */unsigned long long int) arr_54 [(unsigned short)14] [i_20] [i_20]);
                                var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_11 [i_13] [i_17] [23] [i_19]))))) ? ((-(var_16))) : (arr_5 [i_17] [i_19])));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) var_3))));
                    var_40 ^= ((/* implicit */signed char) arr_0 [i_17]);
                    /* LoopNest 2 */
                    for (short i_21 = 2; i_21 < 22; i_21 += 3) 
                    {
                        for (int i_22 = 3; i_22 < 21; i_22 += 1) 
                        {
                            {
                                var_41 = ((/* implicit */signed char) (+(((/* implicit */int) arr_58 [i_13 + 1] [i_17] [11LL] [i_21 - 1] [i_21]))));
                                var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_62 [i_17] [i_18 + 2] [i_18 + 1] [i_18 + 2] [i_17])) ? (var_1) : (arr_62 [i_17] [i_18] [i_18 + 2] [i_18 + 2] [i_17]))))));
                                var_43 &= (signed char)47;
                                var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((unsigned long long int) (~(var_6)))))));
                                var_45 = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) * (arr_61 [i_17] [i_18] [i_21]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                            }
                        } 
                    } 
                    var_46 &= ((/* implicit */signed char) ((((var_1) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))))) % (((((/* implicit */_Bool) var_16)) ? (arr_61 [i_18] [i_17] [(unsigned short)15]) : (((/* implicit */unsigned int) var_5))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_23 = 1; i_23 < 23; i_23 += 4) 
        {
            for (signed char i_24 = 4; i_24 < 23; i_24 += 2) 
            {
                for (int i_25 = 2; i_25 < 23; i_25 += 1) 
                {
                    {
                        arr_71 [i_25] [(unsigned short)18] [(unsigned short)18] [i_23] [i_13] [i_13] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_6 [i_13] [i_13] [i_24])) ? (((/* implicit */int) arr_58 [i_13] [i_13] [i_13] [i_13] [i_24])) : (((/* implicit */int) (_Bool)1))))));
                        var_47 |= ((/* implicit */short) ((unsigned int) arr_3 [i_25] [i_24]));
                    }
                } 
            } 
        } 
        var_48 = ((/* implicit */unsigned char) min((var_48), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_55 [i_13] [6ULL] [0U] [i_13]))) : (arr_66 [i_13 - 3] [i_13]))))));
    }
    for (unsigned short i_26 = 1; i_26 < 16; i_26 += 1) 
    {
        var_49 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned short)61105))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) (signed char)117))))) : (((((/* implicit */_Bool) (unsigned short)4430)) ? (344303151) : (344303159)))))) ? (((/* implicit */int) var_15)) : ((~(((/* implicit */int) arr_65 [i_26 - 1] [i_26]))))));
        /* LoopNest 2 */
        for (unsigned short i_27 = 2; i_27 < 14; i_27 += 1) 
        {
            for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_29 = 1; i_29 < 15; i_29 += 2) 
                    {
                        for (signed char i_30 = 3; i_30 < 13; i_30 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */long long int) ((short) var_1));
                                var_51 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) arr_46 [i_27] [i_26 - 1] [i_28 - 1] [i_26])) < (((/* implicit */int) arr_41 [i_30 - 1] [i_29 + 1])))))));
                                var_52 = ((/* implicit */int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))) ? (((/* implicit */long long int) (~(var_3)))) : ((+((-(var_0)))))));
                                var_53 = ((/* implicit */unsigned char) 2053189556);
                            }
                        } 
                    } 
                    arr_84 [i_26] [(short)4] [i_26] [i_26] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_13)) ? (((((/* implicit */_Bool) arr_45 [i_26] [i_28 - 1])) ? (((/* implicit */unsigned long long int) var_16)) : (8725663046302253841ULL))) : (min((((/* implicit */unsigned long long int) arr_35 [i_26] [i_26] [i_27] [i_28] [i_26])), (var_6))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) min((117440512LL), (((/* implicit */long long int) (unsigned short)32760)))))))));
                    /* LoopNest 2 */
                    for (int i_31 = 4; i_31 < 15; i_31 += 2) 
                    {
                        for (int i_32 = 3; i_32 < 15; i_32 += 2) 
                        {
                            {
                                var_54 = ((/* implicit */signed char) (+(((/* implicit */int) (_Bool)1))));
                                var_55 -= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) arr_81 [2]))))))), (((((/* implicit */_Bool) max(((unsigned short)40191), (((/* implicit */unsigned short) (unsigned char)142))))) ? (max((((/* implicit */unsigned int) var_2)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)19610), ((unsigned short)32596)))))))));
                                var_56 = ((/* implicit */signed char) var_14);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
