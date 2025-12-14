/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232314
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
    for (unsigned int i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 327731490)) && (((/* implicit */_Bool) var_4))))), (-1077503694465011822LL)))) ? (((((/* implicit */_Bool) (unsigned char)45)) ? (0ULL) : (4611686018427387904ULL))) : (min(((+(12799122517889195590ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) && (((/* implicit */_Bool) var_7))))))))))));
        arr_2 [i_0] [i_0] = (!(((/* implicit */_Bool) 2045348363)));
        arr_3 [i_0] [i_0 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(2963191359U))))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((unsigned int) (~(((((/* implicit */long long int) var_1)) / (arr_8 [i_3] [i_2])))))))));
                        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_2)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))) : (min((arr_8 [i_0] [i_2]), (var_0)))));
                        var_13 = ((/* implicit */long long int) arr_5 [i_1]);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_4 = 1; i_4 < 18; i_4 += 1) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned int) ((((unsigned long long int) ((((((/* implicit */int) arr_10 [i_4] [i_4 + 1] [(signed char)15] [i_4 + 3] [i_4 + 3] [i_4])) + (2147483647))) << (((((/* implicit */int) (unsigned short)49208)) - (49208)))))) > (((/* implicit */unsigned long long int) 19))));
        arr_15 [i_4] = ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((var_9) & (arr_8 [i_4 + 1] [i_4 + 1]))) : ((-(var_0))));
    }
    for (unsigned char i_5 = 1; i_5 < 18; i_5 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            arr_20 [i_5] [i_5 - 1] [i_6] = ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)234)))))))) == (((/* implicit */int) var_7)));
            var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_3)) : ((((~(247057899U))) % (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)46))))))));
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                arr_24 [i_5] [i_7] [i_5] = (-(((arr_22 [i_7]) << (((var_6) + (1246338178545300431LL))))));
                var_16 = ((/* implicit */unsigned int) var_4);
            }
            for (unsigned int i_8 = 3; i_8 < 20; i_8 += 2) 
            {
                arr_27 [i_5] [i_8] [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)50))))))));
                var_17 = ((/* implicit */unsigned char) var_5);
            }
            for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 2) 
            {
                arr_30 [i_5] [i_6] [i_9] [i_9] = ((/* implicit */unsigned short) (_Bool)1);
                /* LoopSeq 1 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    arr_34 [i_6] [i_9] = ((/* implicit */signed char) arr_33 [i_5 - 1] [i_6] [i_9] [i_10]);
                    arr_35 [i_5] [i_5 + 2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(var_1)))) != (((((/* implicit */long long int) 1245073475U)) & (arr_8 [i_6] [i_6])))));
                    arr_36 [i_9] [i_9] = ((/* implicit */unsigned short) arr_5 [i_6]);
                    var_18 -= ((/* implicit */unsigned long long int) max(((-(var_6))), (((/* implicit */long long int) var_7))));
                }
            }
        }
        arr_37 [i_5] [i_5 + 3] = ((/* implicit */unsigned int) var_3);
    }
    var_19 = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (var_3) : (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_0)) ? (var_4) : (var_4)))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (var_6))) + ((-(var_9)))))) : (var_4));
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) var_0)), (((((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)171)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_8)))))) : (var_4)))));
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 4; i_11 < 13; i_11 += 2) 
    {
        for (long long int i_12 = 4; i_12 < 13; i_12 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_13 = 4; i_13 < 14; i_13 += 3) 
                {
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (long long int i_15 = 2; i_15 < 14; i_15 += 1) 
                            {
                                arr_48 [i_11 - 2] [i_12] [i_13 - 1] [i_14] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (1258889549753603579LL) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (((/* implicit */long long int) (~(((/* implicit */int) arr_21 [i_11]))))))))));
                                arr_49 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_15 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_17 [i_15 - 1])) ? (arr_17 [i_15 - 1]) : (arr_17 [i_15 - 1])))) : (((((/* implicit */_Bool) (unsigned short)16167)) ? (0ULL) : (((/* implicit */unsigned long long int) 3976042918U))))));
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((arr_12 [i_14] [i_12 - 1] [i_11 - 3]) > (arr_12 [i_13] [i_12 - 1] [i_11 - 1]))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_2))) : (min((var_4), (((/* implicit */unsigned long long int) arr_12 [i_14] [i_12 - 1] [i_11 - 2])))))))));
                            }
                            for (long long int i_16 = 0; i_16 < 15; i_16 += 4) 
                            {
                                arr_54 [i_14] |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_16] [i_14] [i_13 - 4] [i_13 + 1] [i_12 + 1] [i_11])))))))) ? (((/* implicit */unsigned long long int) (-(arr_44 [10LL] [i_13 - 3] [i_14] [i_16])))) : (var_4)));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) -1258889549753603579LL)) ? (var_9) : (((/* implicit */long long int) -2147483626)))))) ? (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)234)), (arr_28 [(unsigned char)8] [i_11] [i_13])))) > (((/* implicit */int) arr_4 [i_11] [i_11]))))) : (((/* implicit */int) ((((/* implicit */_Bool) -327731490)) || (((/* implicit */_Bool) arr_29 [i_11 - 3] [i_13 - 1] [i_16] [i_12 - 3])))))));
                                var_23 = ((/* implicit */short) var_8);
                            }
                            arr_55 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_14] = ((unsigned char) (+(arr_23 [i_11] [i_11 + 2] [i_11])));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) var_8)) ? (arr_44 [i_14] [i_12] [i_11] [i_11 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150))))) : (((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_0 [i_11])))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) arr_44 [i_11 + 2] [i_11 - 2] [i_11 + 2] [10]))));
                var_26 = ((/* implicit */unsigned short) arr_14 [i_11 - 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 1) 
    {
        for (unsigned short i_18 = 1; i_18 < 19; i_18 += 3) 
        {
            {
                var_27 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)24)) == (((/* implicit */int) var_7)))) || ((!(((/* implicit */_Bool) ((var_9) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)992))))))))));
                var_28 = ((/* implicit */int) arr_21 [i_17]);
                /* LoopNest 2 */
                for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 4) 
                {
                    for (int i_20 = 2; i_20 < 20; i_20 += 1) 
                    {
                        {
                            var_29 += ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((max((arr_7 [i_17] [i_18 + 1] [i_17]), (((/* implicit */long long int) var_8)))) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)123)))))) > (((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_20] [i_18] [i_18 + 1] [i_18])))))));
                            /* LoopSeq 3 */
                            for (int i_21 = 0; i_21 < 21; i_21 += 2) 
                            {
                                var_30 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) -327731490)) ? (-327731491) : (((/* implicit */int) arr_32 [i_17] [i_19] [i_17] [i_21]))))))) != (((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_6 [i_17] [i_17] [i_17])))) ? (((/* implicit */int) arr_29 [i_20] [13] [i_20] [i_20])) : (((/* implicit */int) (unsigned char)117)))))));
                                arr_73 [i_17] [i_17] [i_19] [i_20 - 2] [i_19] = ((max((-9223372036854775787LL), (((/* implicit */long long int) var_2)))) - (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 2991885222U)) : (var_6))));
                            }
                            for (short i_22 = 1; i_22 < 17; i_22 += 1) 
                            {
                                var_31 = arr_64 [i_19];
                                var_32 += ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(arr_33 [i_17] [i_19] [i_19] [i_22 + 1])))))) ? (18446744073709551604ULL) : (((((/* implicit */_Bool) (~(arr_63 [i_17] [i_17] [i_19] [i_17])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_20])))))) : (((((/* implicit */unsigned long long int) var_3)) + (7950286878001708678ULL)))))));
                            }
                            for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                            {
                                arr_79 [i_17] [11LL] [i_19] [i_17] [i_17] [i_18] = ((/* implicit */long long int) (~((-(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-75))) | (2862435034U)))))));
                                arr_80 [i_17] [i_17] [i_17] [i_17] [i_17] = (((((!(((/* implicit */_Bool) (unsigned short)40763)))) || (((/* implicit */_Bool) arr_0 [i_17])))) || (((/* implicit */_Bool) arr_12 [i_23] [i_19] [i_18])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
