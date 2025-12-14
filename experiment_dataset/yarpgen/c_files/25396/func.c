/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25396
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(4294967295U)))), (((var_7) | (((/* implicit */unsigned long long int) -961401938269806600LL))))))) ? (((((/* implicit */unsigned long long int) var_2)) + (((var_3) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))))) : (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned char) ((_Bool) (~(((/* implicit */int) var_12)))));
            var_15 = ((/* implicit */signed char) arr_2 [i_0] [i_0]);
            arr_5 [i_0] = min((((/* implicit */signed char) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_2))) <= (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_2 [i_0] [i_0]))))))), (max((arr_4 [i_1]), (arr_4 [i_0]))));
            var_16 ^= ((/* implicit */signed char) arr_1 [8ULL] [8ULL]);
        }
        for (unsigned long long int i_2 = 0; i_2 < 13; i_2 += 3) /* same iter space */
        {
            var_17 = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) -4029739554905227906LL)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)1)))), (min((((/* implicit */int) arr_8 [i_0])), (var_4)))))));
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1]))) * (((arr_2 [i_0] [12LL]) ? (arr_6 [i_0] [(short)8]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 3) /* same iter space */
        {
            var_19 = ((/* implicit */long long int) (+(var_1)));
            arr_12 [8ULL] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0])) <= (min(((+(((/* implicit */int) arr_8 [i_0])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
        }
        for (unsigned int i_4 = 2; i_4 < 9; i_4 += 4) 
        {
            var_20 |= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_4 - 2] [i_4])))))));
            /* LoopSeq 4 */
            for (short i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                arr_17 [i_4] [i_4] [i_5] [i_4] |= ((/* implicit */unsigned short) (+(arr_15 [i_4 - 2])));
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    var_21 &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (unsigned char)1)), (1996632676440656238LL)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 3) 
                    {
                        arr_24 [i_4] &= ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9761))))) : ((~(((/* implicit */int) arr_16 [i_0] [i_5] [i_6] [i_7 - 1])))));
                        var_22 = ((/* implicit */long long int) arr_9 [i_0] [i_0] [i_0]);
                    }
                    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        arr_27 [i_0] [i_4] [i_5] = ((/* implicit */unsigned long long int) max(((+(arr_19 [i_4 - 2] [i_0]))), (((/* implicit */long long int) (-(var_0))))));
                        var_23 -= ((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)255)) ^ (((/* implicit */int) arr_16 [i_4 - 2] [i_4 + 1] [i_8] [i_8])))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_8] [i_5] [i_5] [i_0])) ? (arr_0 [i_5]) : (var_5)))) ? (((/* implicit */int) arr_7 [i_4 + 3] [i_4 + 3])) : ((~(((/* implicit */int) arr_2 [i_0] [i_8]))))))));
                        var_24 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((var_4) | (((/* implicit */int) arr_10 [i_5]))))))) & (min((((/* implicit */unsigned long long int) max((arr_20 [(_Bool)1] [i_5]), (((/* implicit */unsigned int) arr_16 [i_8] [(short)2] [i_4] [i_0]))))), (((unsigned long long int) arr_11 [i_6]))))));
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((signed char) arr_9 [i_0] [i_4 + 1] [i_8])))));
                    }
                    arr_28 [i_6] [i_0] [i_4] = ((/* implicit */long long int) var_6);
                }
                for (short i_9 = 2; i_9 < 12; i_9 += 4) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) ((_Bool) (+(((((/* implicit */_Bool) var_7)) ? (arr_15 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0]))))))));
                        var_27 = ((/* implicit */unsigned char) arr_22 [i_0] [i_5] [i_0]);
                    }
                    for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                    {
                        arr_36 [i_0] [i_0] [(unsigned char)3] [i_0] [i_0] = ((/* implicit */unsigned char) arr_13 [i_0]);
                        arr_37 [i_0] [i_0] [i_5] [i_9] [i_11] = ((/* implicit */unsigned short) var_8);
                        arr_38 [i_0] [i_4] [7ULL] [i_9 - 2] [i_9 - 2] [i_4 - 2] [i_0] = (+(-1996632676440656239LL));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_23 [i_0])) : (((/* implicit */int) arr_26 [i_0] [12])))) : (((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (signed char)-84)))))))) ? ((+(((((/* implicit */_Bool) (signed char)82)) ? (arr_19 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_4 + 1] [(signed char)1]))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [11U] [11U] [i_11])))));
                    }
                    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_39 [i_12 + 1] [i_9] [i_5] [(unsigned short)1] [i_5] [i_4] [i_0]))))) ? ((-(arr_35 [i_0] [i_4] [i_5] [(short)8] [i_9] [(short)8] [i_12 + 1]))) : ((+((-(((/* implicit */int) (signed char)-56))))))));
                        var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((/* implicit */int) arr_26 [i_4 - 2] [i_9 - 2])) : (((arr_9 [i_0] [i_9] [i_12 + 1]) ? (((/* implicit */int) arr_31 [i_12] [i_9 - 2] [i_5] [i_5] [i_4] [i_0])) : (((/* implicit */int) var_9))))))) ? (((unsigned long long int) arr_7 [i_4] [i_4])) : (((/* implicit */unsigned long long int) var_5)))))));
                    }
                    arr_41 [i_0] [i_4] [i_5] [i_0] = ((/* implicit */short) (((~(((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_20 [i_0] [i_0]))))) >> (((((/* implicit */int) (short)-8174)) + (8204)))));
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */short) arr_21 [i_9]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_9])) ? (((/* implicit */int) arr_21 [i_4])) : (((/* implicit */int) arr_21 [i_9]))))))))));
                }
            }
            for (signed char i_13 = 0; i_13 < 13; i_13 += 3) /* same iter space */
            {
                arr_45 [i_0] [i_0] [i_13] = ((/* implicit */unsigned char) max((arr_20 [i_0] [i_13]), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_3)))))))));
                var_32 = ((/* implicit */unsigned long long int) ((int) max((arr_19 [i_4 - 1] [i_0]), (arr_19 [i_4 - 1] [i_0]))));
            }
            for (signed char i_14 = 0; i_14 < 13; i_14 += 3) /* same iter space */
            {
                var_33 = ((/* implicit */unsigned char) arr_29 [i_4]);
                /* LoopNest 2 */
                for (short i_15 = 2; i_15 < 11; i_15 += 2) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            arr_53 [i_16] [i_0] [i_14] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)-9761)) && (((/* implicit */_Bool) arr_48 [i_4 + 1])))) ? (min(((-(((/* implicit */int) arr_18 [i_0] [i_0] [(unsigned char)4] [i_0])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11)))))) : (min(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_48 [i_4]))))));
                            arr_54 [i_4] [i_4] &= ((/* implicit */_Bool) (-((((((+(((/* implicit */int) var_11)))) + (2147483647))) >> (((var_0) - (1385983493U)))))));
                        }
                    } 
                } 
            }
            for (signed char i_17 = 0; i_17 < 13; i_17 += 3) /* same iter space */
            {
                var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) -1996632676440656239LL))));
                var_35 |= ((/* implicit */int) arr_10 [i_4]);
            }
            var_36 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32561)) ? (((/* implicit */unsigned int) arr_35 [i_0] [i_4 + 2] [i_0] [7ULL] [i_0] [i_4 - 2] [i_0])) : (min((((((/* implicit */_Bool) arr_14 [i_0] [i_0])) ? (arr_22 [i_0] [(signed char)3] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)35))))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_0])))))))));
            arr_57 [i_0] [i_4 + 2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_16 [2LL] [i_4] [i_4 - 2] [(_Bool)1])) : (2147483647)))), (arr_19 [i_0] [i_0]))))));
        }
        var_37 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
    }
    var_38 = ((/* implicit */unsigned char) var_9);
    var_39 = var_1;
}
