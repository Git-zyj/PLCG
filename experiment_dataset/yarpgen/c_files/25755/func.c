/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25755
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_0))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned short)28099))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2)));
                    arr_8 [i_0 - 1] [6U] [(unsigned short)7] = ((/* implicit */short) ((_Bool) (-(arr_5 [i_0] [i_1]))));
                    var_14 = ((/* implicit */unsigned short) arr_6 [i_2]);
                }
            } 
        } 
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            arr_14 [i_3] [(unsigned short)1] [9] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_3] [i_3 - 1] [i_4] [i_4])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3 - 1] [i_4] [i_3])))))) ? (((((/* implicit */int) arr_7 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_4])) / (((/* implicit */int) (short)-16)))) : ((+(((/* implicit */int) var_4))))));
            arr_15 [i_3] [7] = ((/* implicit */int) arr_7 [0U] [i_4] [i_3 - 1] [i_3 - 1]);
            var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((var_11), (((/* implicit */short) var_8)))))));
        }
        for (signed char i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
        {
            arr_18 [i_3] [(signed char)4] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((signed char) arr_1 [i_3])))))));
            arr_19 [i_3 - 1] [(short)8] [i_5] = ((/* implicit */unsigned char) ((355772555U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))));
            var_16 = ((/* implicit */unsigned long long int) (short)6717);
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_7 = 0; i_7 < 10; i_7 += 4) 
                {
                    arr_24 [i_3] [i_5] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)52854))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_4)) : (var_6)))) ? (max((arr_6 [i_3]), (((/* implicit */unsigned int) var_8)))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_17 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((unsigned int) var_0)) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) < (((/* implicit */int) (short)-20860))))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    arr_27 [i_3] [i_5] [i_6] [i_8] = arr_20 [i_3] [i_3] [i_3 - 1];
                    var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                }
                var_19 += ((/* implicit */unsigned long long int) (((~(((/* implicit */int) max((var_5), (var_1)))))) & (((((((((/* implicit */int) arr_13 [i_3] [5U] [i_3])) + (2147483647))) >> (((((/* implicit */int) (unsigned short)37430)) - (37406))))) / (((/* implicit */int) var_0))))));
            }
            for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
            {
                arr_32 [i_3] [(unsigned char)3] [i_9] [i_5] = ((/* implicit */signed char) max(((unsigned short)15690), (((/* implicit */unsigned short) (signed char)1))));
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((signed char) arr_6 [i_3 - 1]))), (((unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_2)))))))));
                var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_26 [i_3] [i_3] [(unsigned char)4] [i_3 - 1])) + (2147483647))) << (((((((/* implicit */int) max((arr_31 [i_3] [i_3 - 1]), (((/* implicit */short) (signed char)-1))))) + (10))) - (9)))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(arr_0 [i_3])))))) ? (((/* implicit */unsigned int) arr_11 [i_3 - 1] [i_3 - 1] [i_3 - 1])) : (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (4294967295U)))));
            }
        }
        for (signed char i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
        {
            arr_37 [i_10] [i_3] = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) arr_35 [i_3] [i_10])))));
            var_23 ^= ((/* implicit */unsigned int) var_8);
            arr_38 [2] = ((/* implicit */int) min((arr_22 [i_3] [i_3 - 1] [i_3 - 1]), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)1)))))));
            var_24 = ((/* implicit */int) arr_22 [i_3] [i_3] [i_3 - 1]);
        }
        var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_28 [i_3 - 1] [i_3 - 1] [i_3 - 1]))))) ? (((/* implicit */unsigned int) min((var_6), (((/* implicit */int) max((((/* implicit */short) arr_4 [i_3] [i_3] [i_3])), (var_0))))))) : (arr_6 [i_3 - 1])));
        /* LoopSeq 2 */
        for (unsigned int i_11 = 1; i_11 < 9; i_11 += 2) /* same iter space */
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
            {
                /* LoopSeq 2 */
                for (short i_13 = 2; i_13 < 8; i_13 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 10; i_14 += 2) 
                    {
                        arr_49 [i_3] [8U] = ((/* implicit */int) 1100484407U);
                        arr_50 [i_3] [i_12] [i_13] [i_14] = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_3 - 1]))));
                    }
                    var_26 = ((/* implicit */unsigned char) ((signed char) (signed char)0));
                    arr_51 [i_3] [i_11] [i_12] [i_12] [i_13 + 1] = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) var_9)) - (965287483U)))));
                }
                for (short i_15 = 2; i_15 < 8; i_15 += 2) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (short)-1)) ? (var_3) : (((/* implicit */long long int) 144213928U))))))));
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)7))) ? (var_2) : (var_3)));
                }
                /* LoopSeq 2 */
                for (int i_16 = 0; i_16 < 10; i_16 += 2) 
                {
                    var_29 = ((/* implicit */int) ((var_2) > (((/* implicit */long long int) arr_35 [(short)8] [i_11 + 1]))));
                    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) arr_53 [i_16] [i_12] [i_3]))));
                    var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
                }
                for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */_Bool) arr_12 [i_11 + 1] [i_11])) ? (((/* implicit */int) ((short) var_4))) : (((/* implicit */int) ((short) var_0)))))));
                    var_33 += ((/* implicit */unsigned short) (short)-13866);
                }
                var_34 = ((/* implicit */signed char) arr_57 [i_12] [i_11 - 1] [i_3]);
                arr_59 [(_Bool)1] [i_11] [i_12] [i_12] = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
            }
            for (signed char i_18 = 0; i_18 < 10; i_18 += 1) /* same iter space */
            {
                var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min(((~(((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (var_8)))))), (((((/* implicit */_Bool) (~(arr_34 [i_3] [i_3])))) ? (((((/* implicit */int) arr_16 [i_3] [i_3])) ^ (-1223748164))) : (((((/* implicit */_Bool) arr_44 [i_11] [i_18])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11)))))))))));
                var_36 = (~(((/* implicit */int) (_Bool)0)));
                var_37 = ((/* implicit */signed char) (-(((((/* implicit */int) (!(((/* implicit */_Bool) (short)-3540))))) >> (((((int) var_3)) - (631789847)))))));
            }
            var_38 = ((((/* implicit */_Bool) arr_11 [i_3] [i_11] [i_3 - 1])) ? (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_29 [i_3] [i_3] [i_11 - 1] [i_11 - 1])) : (((/* implicit */int) arr_54 [i_3] [i_3] [i_3] [i_3] [i_11 - 1] [i_3])))), (((((/* implicit */int) arr_7 [i_3 - 1] [i_3] [i_3] [i_11 + 1])) & (((/* implicit */int) arr_26 [i_3] [i_11] [i_3] [i_11 - 1])))))) : (490850058));
            arr_62 [i_3] = ((/* implicit */unsigned short) 2147483634);
            arr_63 [i_3] [i_3] [i_3] = ((/* implicit */int) var_8);
        }
        /* vectorizable */
        for (unsigned int i_19 = 1; i_19 < 9; i_19 += 2) /* same iter space */
        {
            arr_66 [i_3] [i_19] [i_19 + 1] = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_19 + 1])))))));
            arr_67 [i_3 - 1] [i_3] [i_19 - 1] = ((/* implicit */int) (unsigned char)12);
        }
    }
    var_39 = ((/* implicit */int) max((((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) | (var_3)))), (((/* implicit */unsigned long long int) (signed char)91))));
    var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_10))) ? (max((var_10), (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) -1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)19575)))))))));
}
