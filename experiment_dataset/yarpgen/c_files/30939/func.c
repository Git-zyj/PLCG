/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30939
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
    var_19 = ((/* implicit */short) var_2);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) max((-1542221224), (((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            arr_5 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1 - 2] [i_1 - 2] [i_1])) && ((_Bool)1)));
            arr_6 [i_0] [i_1 - 2] |= ((/* implicit */unsigned long long int) var_17);
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_3 = 1; i_3 < 17; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) /* same iter space */
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3 + 2] [i_3 + 1] [i_3 + 3])) ? (288439775) : (((/* implicit */int) arr_11 [i_2]))));
                    arr_14 [i_0] [i_2] [7ULL] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) * (0U)));
                }
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        var_21 += ((/* implicit */int) arr_17 [i_5] [i_5] [i_2] [i_2 + 1] [i_2 + 1]);
                        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) arr_7 [i_0]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        arr_21 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned int) (!(arr_13 [i_0] [i_3 + 3] [i_2] [i_2])));
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_15))));
                        arr_22 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_19 [i_2] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2])) * (((/* implicit */int) (unsigned char)110))));
                    }
                    /* LoopSeq 2 */
                    for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_8] [i_5] [i_3] [(signed char)18] [i_2 + 1] [(signed char)18])) >> (((/* implicit */int) arr_3 [i_3 + 3] [i_5]))));
                        arr_26 [i_0] [i_2] [i_0] [i_2] [i_8] [18] = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_2 + 1])) ? (((/* implicit */int) arr_18 [i_2 + 1])) : (((/* implicit */int) arr_18 [i_2 + 1]))));
                        var_25 -= ((/* implicit */int) ((((/* implicit */int) (signed char)-55)) > (((/* implicit */int) (short)-24164))));
                        var_26 = ((/* implicit */unsigned int) arr_10 [i_0] [i_0] [i_3 + 4]);
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */int) min((var_27), ((-(((/* implicit */int) (signed char)37))))));
                        var_28 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_3 + 4] [i_3 - 1] [(short)19] [19U] [i_3 - 1] [i_3] [i_2]))) - (2805113027U)));
                    }
                }
                arr_31 [i_0] [i_2] [i_3] = ((int) (short)6490);
            }
            var_29 = ((/* implicit */unsigned int) ((short) arr_19 [i_0] [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_0]));
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_16))));
            /* LoopSeq 1 */
            for (signed char i_10 = 0; i_10 < 21; i_10 += 3) 
            {
                var_31 = ((/* implicit */signed char) max(((+(min((((/* implicit */unsigned long long int) (signed char)127)), (9106781046323067650ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-45))) + (4294967295U))))));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 4) 
                    {
                        arr_39 [i_12] [i_12] [i_12] [i_2] [i_12] = ((/* implicit */int) ((((/* implicit */int) arr_18 [i_12])) >= (((/* implicit */int) ((((/* implicit */int) (signed char)33)) < (((/* implicit */int) (unsigned short)49923)))))));
                        var_32 = ((/* implicit */signed char) arr_17 [i_2] [i_12] [i_10] [i_12] [i_2]);
                    }
                    arr_40 [i_2] [i_2] [i_2 + 1] [i_11] = ((/* implicit */unsigned int) max(((-(max((0ULL), (arr_37 [i_0] [i_2] [i_10] [(short)10] [(unsigned char)9] [i_2 + 1] [i_0]))))), (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 + 1] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2 + 1] [i_2 + 1] [i_2 + 1]))) : (3259874558674654658ULL)))));
                    arr_41 [i_11] [i_2] [i_2] = (~(((arr_12 [i_10] [i_2] [i_2] [i_0]) ? (((/* implicit */int) arr_12 [(unsigned char)16] [i_2] [i_2] [i_0])) : (452963835))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 21; i_13 += 4) 
                    {
                        var_33 ^= ((/* implicit */unsigned long long int) ((((1398457694) < (((/* implicit */int) (short)26415)))) && (((/* implicit */_Bool) var_9))));
                        arr_45 [i_2] [i_11] [(unsigned char)19] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_14)))) ? (arr_27 [i_0] [i_0] [i_0] [8] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_1 [i_11])))))));
                        var_34 ^= ((/* implicit */signed char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_11] [i_2] [i_11] [i_11] [i_13] [i_2 + 1]))) : (var_14)));
                    }
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_48 [i_2] [i_10] [i_2] = ((/* implicit */signed char) (short)6490);
                        arr_49 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) arr_30 [i_0] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))) & (max((15ULL), (((/* implicit */unsigned long long int) max((var_18), (((/* implicit */int) (short)18077)))))))));
                    }
                    arr_50 [i_2] [i_2] [i_10] [i_11] = ((/* implicit */unsigned int) ((var_18) <= ((~(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                }
            }
            var_35 -= ((/* implicit */short) (!(((/* implicit */_Bool) (~(2636205521U))))));
        }
    }
    /* vectorizable */
    for (int i_15 = 0; i_15 < 12; i_15 += 3) 
    {
        arr_54 [i_15] = ((/* implicit */unsigned long long int) (-(arr_32 [i_15] [i_15] [i_15] [i_15])));
        var_36 = ((/* implicit */int) arr_11 [i_15]);
    }
    for (short i_16 = 0; i_16 < 19; i_16 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            var_37 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_46 [i_17]))))), (((unsigned int) arr_46 [i_17]))));
            var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) var_11))));
        }
        arr_62 [i_16] = ((/* implicit */unsigned int) arr_11 [i_16]);
    }
}
