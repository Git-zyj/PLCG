/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34616
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        var_17 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_15)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)59355)) : (((/* implicit */int) arr_0 [i_0] [i_0])))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (arr_3 [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) : (max((arr_4 [i_1]), (((/* implicit */long long int) ((unsigned short) (unsigned short)0)))))))));
        arr_5 [i_1] [(_Bool)1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */int) (unsigned short)59349)) : ((~(((/* implicit */int) (short)-14657))))));
        arr_6 [(unsigned char)7] = ((((/* implicit */long long int) min((arr_3 [i_1]), (((/* implicit */unsigned int) ((var_5) >= (((/* implicit */long long int) arr_3 [i_1])))))))) + (min((((-5636780776311377935LL) / (((/* implicit */long long int) ((/* implicit */int) (short)-14657))))), (((/* implicit */long long int) 386690129U)))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (unsigned short i_3 = 1; i_3 < 18; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20; i_4 += 4) 
                    {
                        for (unsigned int i_5 = 0; i_5 < 20; i_5 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned long long int) ((signed char) (+(arr_12 [i_3 - 1] [i_3] [i_3] [i_3]))));
                                arr_17 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min((arr_11 [i_2] [i_4] [i_5]), (((/* implicit */signed char) var_15))))), ((+(arr_3 [i_3 + 1])))))) ? ((+((+(((/* implicit */int) var_14)))))) : (((((_Bool) -1104462986)) ? ((~(((/* implicit */int) arr_13 [i_1] [i_1] [i_3])))) : (((((/* implicit */int) var_3)) / (((/* implicit */int) var_2))))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((9223372036854775803LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)127))))))))))));
                    arr_18 [i_1] [i_1] [i_3] |= ((/* implicit */unsigned int) ((min((arr_14 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1]), (arr_14 [i_3 + 2] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 + 2]))) ? (((int) 127LL)) : (((/* implicit */int) min((arr_14 [i_3 + 1] [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 1] [i_3 + 1] [i_3 + 1]), (arr_14 [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 + 2] [i_3 + 1]))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_6 = 2; i_6 < 21; i_6 += 3) 
    {
        arr_21 [i_6] = ((/* implicit */unsigned int) var_1);
        arr_22 [(_Bool)1] = ((/* implicit */int) (signed char)15);
        var_21 = ((unsigned long long int) arr_19 [i_6 - 1] [i_6 - 1]);
    }
    /* vectorizable */
    for (short i_7 = 0; i_7 < 18; i_7 += 4) 
    {
        arr_25 [i_7] = ((/* implicit */int) var_10);
        var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_4 [12U]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6175)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7])))))) : (((unsigned int) arr_19 [i_7] [i_7]))))));
        /* LoopNest 2 */
        for (short i_8 = 2; i_8 < 17; i_8 += 1) 
        {
            for (unsigned int i_9 = 2; i_9 < 15; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 1; i_10 < 15; i_10 += 4) 
                    {
                        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
                        {
                            {
                                arr_41 [i_8] = ((/* implicit */unsigned int) -6888235862806600226LL);
                                arr_42 [i_7] [i_9] [i_8] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_12))));
                                arr_43 [i_8] = ((/* implicit */long long int) (+(((var_13) ? (arr_29 [i_7] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) arr_26 [i_9])) & (((/* implicit */int) arr_26 [i_7])))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_11 [i_7] [i_8 + 1] [i_7])) != (((/* implicit */int) arr_38 [i_9] [i_8] [i_9] [i_8] [i_9 + 3] [i_9] [i_8 + 1])))))));
                    var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (-((~(var_11))))))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (((+(((/* implicit */int) arr_30 [i_7])))) + (((/* implicit */int) arr_10 [i_7] [i_7])))))));
    }
    var_27 = ((/* implicit */_Bool) var_0);
    var_28 = min((((/* implicit */unsigned int) var_4)), ((-(var_8))));
    /* LoopSeq 1 */
    for (int i_12 = 3; i_12 < 16; i_12 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_13 = 0; i_13 < 18; i_13 += 3) 
        {
            arr_48 [i_13] [i_13] = ((/* implicit */long long int) (_Bool)1);
            var_29 |= ((/* implicit */_Bool) var_14);
        }
        for (long long int i_14 = 1; i_14 < 16; i_14 += 1) 
        {
            arr_51 [i_12] [i_14 + 1] = ((/* implicit */long long int) ((unsigned short) (!(((/* implicit */_Bool) arr_28 [i_12 + 1])))));
            var_30 -= ((/* implicit */long long int) ((max((((/* implicit */long long int) (_Bool)1)), (-6888235862806600199LL))) >= (((/* implicit */long long int) ((/* implicit */int) var_15)))));
            var_31 = ((/* implicit */int) (~(((((/* implicit */_Bool) max((var_10), (((/* implicit */long long int) arr_50 [i_12 + 1] [i_14]))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_34 [(unsigned short)6]))) / (-6888235862806600215LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_31 [i_12] [i_12] [i_14])))))))));
        }
        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                for (long long int i_17 = 2; i_17 < 17; i_17 += 4) 
                {
                    {
                        var_32 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_27 [i_17 - 1] [i_16] [i_16 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_17 - 1] [i_16] [i_16 - 1]))) : (var_12)))));
                        arr_59 [i_16] [i_15] [i_15] [i_15] = ((/* implicit */signed char) var_7);
                        arr_60 [i_16] [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((int) (+(var_8))))), ((+(((487926689U) & (arr_3 [i_12])))))));
                        arr_61 [i_16] = ((/* implicit */unsigned int) ((long long int) (signed char)10));
                        var_33 = ((/* implicit */short) ((-1073741824) > ((~(((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
            var_34 = ((((/* implicit */_Bool) arr_27 [i_12] [i_15] [i_15])) ? ((~(((((/* implicit */_Bool) arr_37 [i_15] [i_15] [i_12 - 3] [i_12] [i_12] [i_12])) ? (-5636780776311377936LL) : (((/* implicit */long long int) arr_24 [i_12 - 1] [i_12 - 3])))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_9 [i_15] [i_15] [i_12 + 2] [i_12 - 3]) | (((/* implicit */int) arr_38 [i_12 + 1] [i_12 - 3] [i_12 - 1] [i_15] [2ULL] [i_15] [(unsigned short)0]))))))))));
            /* LoopNest 2 */
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                for (long long int i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                        {
                            arr_70 [i_20] [i_15] [i_18] [i_15] [i_12 - 2] |= ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)52818))))), (2799079704U))) : (((/* implicit */unsigned int) ((((((/* implicit */int) var_3)) > (((/* implicit */int) var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 144115188075855871LL))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_12] [i_15] [i_15] [i_15] [i_18] [i_19] [i_20]))) > (arr_65 [i_15])))))))));
                            arr_71 [i_12] [i_15] [i_18] [(unsigned short)12] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_12) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_15])) ? (var_11) : (((/* implicit */int) (unsigned short)59337)))))))) % (((/* implicit */int) max((arr_28 [i_12]), (((/* implicit */unsigned short) arr_49 [i_12] [i_12] [i_12 - 1])))))));
                            arr_72 [i_15] [i_18] [i_18] [i_20] = ((/* implicit */long long int) arr_46 [i_12] [i_12]);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) arr_36 [i_15] [i_21] [i_18] [i_18] [i_21] [i_12]))));
                            var_36 -= ((/* implicit */unsigned char) (((~(((var_11) | (((/* implicit */int) arr_44 [i_15] [i_18])))))) != (var_11)));
                            var_37 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)14656))));
                        }
                        var_38 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)24605)) ? (3908277174U) : (((/* implicit */unsigned int) 647652587)))));
                        arr_76 [i_12] [i_18] [i_18] [i_19] [i_12] = ((/* implicit */long long int) (-((~(((((/* implicit */_Bool) arr_27 [i_12 + 1] [i_18] [i_18])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)15))))))));
                    }
                } 
            } 
            var_39 = arr_32 [i_12] [i_15] [i_12];
        }
        for (unsigned int i_22 = 0; i_22 < 18; i_22 += 1) 
        {
            arr_79 [(unsigned short)0] [i_22] = ((/* implicit */unsigned long long int) ((var_16) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) var_1)))))))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_23 = 0; i_23 < 18; i_23 += 3) 
            {
                arr_82 [i_23] [i_23] [(unsigned short)8] [i_23] = ((((/* implicit */int) var_14)) >= (((/* implicit */int) arr_68 [i_12 + 2] [i_12] [i_12 + 2] [i_22] [i_22] [i_23] [i_23])));
                arr_83 [i_23] [i_22] = ((unsigned short) 6888235862806600225LL);
            }
        }
        arr_84 [i_12] = ((/* implicit */int) 1447514471U);
    }
}
