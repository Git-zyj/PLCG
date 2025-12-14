/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219103
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_20 = ((/* implicit */int) min((var_20), (((((/* implicit */_Bool) max((((/* implicit */int) arr_2 [i_0])), ((~(((/* implicit */int) (unsigned char)105))))))) ? ((-(((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_2 [i_0]))))))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 1]))) : (var_8)))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)2463)) >> (((((/* implicit */int) (short)28776)) - (28765))))) + (((/* implicit */int) ((((/* implicit */int) (signed char)-31)) >= (((/* implicit */int) (unsigned short)48077)))))));
                        var_23 += ((/* implicit */int) ((max((2866551132U), (((/* implicit */unsigned int) (unsigned short)18507)))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_2] [10] [i_2])) ? (arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_3]) : (arr_8 [i_1 - 1] [i_2 + 1] [i_3] [i_3]))))));
                    }
                    var_24 = ((((/* implicit */int) arr_6 [i_0] [i_1] [i_2 + 1])) == (((int) arr_4 [i_2 + 1] [i_2 + 1])));
                    var_25 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((((/* implicit */int) (signed char)0)) >= (((/* implicit */int) var_9))))) : (((-1885070303) % (-1885070294)))))));
                }
            } 
        } 
        var_26 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1885070283)))))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 1; i_4 < 16; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                arr_16 [(signed char)13] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-26566)) ? (((/* implicit */int) (unsigned short)46187)) : (((/* implicit */int) (_Bool)1))));
                arr_17 [17] [i_5] [i_6] = ((/* implicit */int) ((unsigned int) (!(((/* implicit */_Bool) var_15)))));
                var_27 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [(unsigned char)9] [i_5] [i_5]))))) ? ((~(520899386456021996LL))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_4])))))));
                var_28 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_12 [i_6] [i_5] [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_5] [i_6])) : (1885070292)))));
            }
            for (unsigned char i_7 = 2; i_7 < 17; i_7 += 2) 
            {
                var_29 += ((/* implicit */short) ((((/* implicit */int) arr_15 [i_7] [i_4 + 1] [i_7 + 1])) | (((/* implicit */int) arr_14 [i_7 + 1]))));
                arr_21 [3] [i_5] [i_7 + 1] = ((2718871746U) % (((/* implicit */unsigned int) 1885070303)));
                var_30 -= ((/* implicit */short) ((arr_13 [i_4 - 1]) ? (((/* implicit */int) arr_13 [i_5])) : (((/* implicit */int) arr_13 [i_7 - 1]))));
            }
            for (short i_8 = 2; i_8 < 18; i_8 += 2) 
            {
                /* LoopNest 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    for (signed char i_10 = 2; i_10 < 17; i_10 += 3) 
                    {
                        {
                            var_31 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 2718871746U)) && (((/* implicit */_Bool) var_0)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_4])) ? (((/* implicit */int) arr_15 [i_4] [i_10] [i_10])) : (((/* implicit */int) arr_15 [i_4 - 1] [i_5] [i_8]))))) : ((~(arr_19 [i_9 - 1] [i_4] [i_4] [i_4])))));
                            var_32 *= ((/* implicit */unsigned char) (~(arr_18 [i_4] [i_9 - 1] [i_8 - 2])));
                        }
                    } 
                } 
                var_33 = ((/* implicit */int) ((((/* implicit */int) arr_28 [i_8 - 2] [i_8 - 2] [i_4 + 3] [i_5] [(unsigned short)10])) == (((/* implicit */int) arr_28 [i_8 - 2] [i_8 - 2] [i_4 + 3] [i_8 + 1] [(_Bool)1]))));
                arr_31 [i_5] = ((/* implicit */int) arr_29 [i_4] [i_4 + 3] [i_4] [5] [i_4] [i_8 - 2]);
                var_34 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (short)23212))) : (arr_12 [i_4] [i_5] [i_4]))) != (((/* implicit */long long int) arr_18 [i_8 - 2] [i_8 + 1] [i_4 + 3]))));
            }
            arr_32 [i_4 + 1] = ((/* implicit */unsigned short) (~(((1428416163U) << (((((/* implicit */int) arr_15 [i_4] [i_5] [i_5])) + (34)))))));
            var_35 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_19 [(unsigned char)13] [5LL] [i_4 + 1] [i_5])) && (((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4] [i_4 + 3] [i_5]))));
            arr_33 [(unsigned char)7] [i_5] = ((/* implicit */int) ((short) 2994793075U));
        }
        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) 
        {
            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_34 [i_4] [i_11])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)153))))))))));
            arr_38 [i_4] [i_4] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_4 + 1]))));
            var_37 = ((/* implicit */long long int) (~(((/* implicit */int) arr_22 [(short)8] [i_11] [i_11]))));
        }
        arr_39 [i_4] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) / (1286586107U)));
        var_38 = arr_35 [i_4] [i_4] [i_4];
    }
    /* LoopSeq 2 */
    for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
    {
        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) (-(((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) >= (1552657111056924341ULL))) || (((/* implicit */_Bool) (unsigned char)128))))))))));
        /* LoopNest 2 */
        for (unsigned char i_13 = 1; i_13 < 24; i_13 += 2) 
        {
            for (int i_14 = 2; i_14 < 23; i_14 += 1) 
            {
                {
                    var_40 &= ((/* implicit */signed char) var_13);
                    arr_46 [i_12] [i_12] [i_13] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) ((arr_40 [i_12 + 1] [i_13 - 1]) >= (((((/* implicit */_Bool) arr_40 [i_13 - 1] [i_12])) ? (arr_40 [i_13 - 1] [i_13 - 1]) : (arr_40 [i_14] [1]))))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 3; i_15 < 21; i_15 += 3) 
                    {
                        for (short i_16 = 3; i_16 < 24; i_16 += 3) 
                        {
                            {
                                arr_54 [i_12 + 1] [i_13] [i_14] [i_14 + 1] [5] [i_15] [i_16] = ((/* implicit */signed char) ((short) (-(((/* implicit */int) ((((/* implicit */int) (short)14591)) == (((/* implicit */int) (_Bool)1))))))));
                                arr_55 [i_12] [i_13 - 1] [i_13 - 1] [i_14] [i_14 - 2] [i_15] [i_16 - 3] = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned char)249)) + (((/* implicit */int) (signed char)-12))))));
                            }
                        } 
                    } 
                    var_41 *= ((/* implicit */short) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12] [i_12] [i_13 + 1] [(_Bool)1]))) % (arr_44 [i_12] [i_13] [i_14 - 2]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))))) > (((/* implicit */unsigned long long int) ((((var_15) % (((/* implicit */unsigned int) ((/* implicit */int) var_17))))) ^ (((((/* implicit */_Bool) arr_49 [i_12] [i_12] [(short)14] [i_12])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_14]))) : (var_16))))))));
                }
            } 
        } 
    }
    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
    {
        var_42 = ((/* implicit */unsigned short) max((var_42), (((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_19 [i_17] [(short)14] [i_17] [i_17])) ? (((/* implicit */int) arr_50 [i_17] [(short)24] [i_17])) : (((/* implicit */int) (unsigned char)209)))) != (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)0)), ((unsigned char)148)))) : (((/* implicit */int) ((((/* implicit */int) arr_26 [3] [3] [i_17] [i_17])) > (((/* implicit */int) arr_29 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))))))));
        var_43 = ((/* implicit */unsigned long long int) 2866551133U);
    }
    var_44 = ((/* implicit */unsigned char) var_13);
    var_45 = ((/* implicit */unsigned int) min((((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) > (var_15)))) >> (((((((/* implicit */int) var_17)) ^ (((/* implicit */int) var_6)))) - (40113))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_12)))))));
}
