/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34822
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
    var_18 |= ((/* implicit */unsigned short) -9223372036854775798LL);
    var_19 += ((/* implicit */unsigned short) max((((/* implicit */long long int) var_2)), (((min((9223372036854775800LL), (((/* implicit */long long int) var_15)))) >> (((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) var_13))))) - (71)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (((-(((/* implicit */int) ((unsigned char) arr_4 [6LL] [6LL] [i_0]))))) > ((~(((/* implicit */int) max((arr_4 [(unsigned char)2] [i_1] [(unsigned char)2]), (arr_1 [i_1])))))))))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
                {
                    var_21 ^= ((/* implicit */unsigned char) (~(min((max((((/* implicit */long long int) arr_2 [i_0] [i_0 + 1])), (var_4))), (((/* implicit */long long int) min((((/* implicit */unsigned short) (signed char)4)), ((unsigned short)1))))))));
                    var_22 = ((/* implicit */unsigned short) ((-9223372036854775798LL) / (var_16)));
                    arr_8 [i_2] |= ((/* implicit */unsigned char) arr_2 [i_1] [i_2]);
                }
                /* vectorizable */
                for (unsigned char i_3 = 0; i_3 < 20; i_3 += 3) 
                {
                    var_23 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_7 [(signed char)0] [(unsigned char)18] [(signed char)0])) | (((/* implicit */int) (unsigned char)138))));
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 20; i_5 += 3) 
                        {
                            arr_17 [i_0 - 3] [i_1] [i_3] [(unsigned short)6] [i_5] &= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_7 [(unsigned char)0] [i_3] [(unsigned char)0]))));
                            var_25 |= ((/* implicit */unsigned char) arr_9 [i_0] [i_1]);
                        }
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) (unsigned short)15974))));
                    }
                    for (signed char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        arr_22 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) (unsigned char)5)));
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) arr_12 [i_0] [i_0] [(unsigned short)8]))));
                    }
                }
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) max((max((var_2), (var_7))), (var_2))))));
    /* LoopNest 3 */
    for (unsigned char i_7 = 3; i_7 < 21; i_7 += 3) 
    {
        for (long long int i_8 = 0; i_8 < 22; i_8 += 1) 
        {
            for (unsigned char i_9 = 0; i_9 < 22; i_9 += 3) 
            {
                {
                    var_29 ^= ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_25 [i_7] [i_7])) ? (((/* implicit */int) arr_24 [i_7])) : (((/* implicit */int) var_13)))) * (((/* implicit */int) min((((/* implicit */unsigned char) arr_28 [i_7 + 1] [i_8] [i_7 + 1] [i_9])), (arr_24 [i_7])))))) / (((/* implicit */int) ((signed char) 9223372036854775803LL)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 22; i_10 += 3) 
                    {
                        arr_31 [i_7] [i_8] [i_9] [i_10] = min((arr_29 [i_10] [i_10] [i_9] [i_9] [i_8] [i_7]), (((unsigned short) ((((/* implicit */_Bool) arr_23 [i_8])) ? (((/* implicit */int) arr_28 [i_7] [(signed char)7] [i_9] [i_10])) : (((/* implicit */int) var_17))))));
                        var_30 = ((/* implicit */unsigned char) ((max(((-(9223372036854775779LL))), (((/* implicit */long long int) (-(((/* implicit */int) arr_28 [i_7] [i_8] [i_9] [i_10]))))))) < (((/* implicit */long long int) ((/* implicit */int) min(((unsigned short)1725), ((unsigned short)17)))))));
                    }
                    /* vectorizable */
                    for (signed char i_11 = 0; i_11 < 22; i_11 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 1) 
                        {
                            arr_36 [i_11] [i_11] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_7] [i_8])) ? (9223372036854775784LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_7 - 3] [i_8] [i_9] [(unsigned char)2] [(signed char)14] [i_12])))))) ? (((long long int) (unsigned char)6)) : (((/* implicit */long long int) ((/* implicit */int) ((arr_33 [(unsigned char)13] [(unsigned char)13] [(unsigned char)21]) <= (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_12] [15LL] [(unsigned short)8] [(unsigned short)3] [i_7] [i_7 - 3])))))))));
                            arr_37 [i_7 - 2] = ((/* implicit */signed char) ((unsigned char) arr_32 [i_7] [i_7] [i_7 - 2] [i_7 + 1] [i_12] [i_12]));
                            arr_38 [i_7] [i_8] [i_9] [i_11] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_27 [i_8] [i_11] [i_11]))) % (((/* implicit */int) (unsigned char)63))));
                            arr_39 [i_7] [i_7 + 1] [i_7 - 2] [i_7] = ((/* implicit */long long int) ((unsigned char) arr_32 [i_7] [i_7] [i_7] [i_7 + 1] [i_7] [i_7 - 2]));
                            var_31 = ((/* implicit */unsigned short) min((var_31), (arr_25 [i_7 - 2] [i_7 - 2])));
                        }
                        for (unsigned short i_13 = 3; i_13 < 21; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned char) ((signed char) (~(((/* implicit */int) var_14)))));
                            var_33 += ((/* implicit */unsigned char) ((signed char) arr_40 [i_7] [i_7 - 3] [i_7] [i_7 - 3] [i_9]));
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(4790382255073196041LL)))) ? (((/* implicit */int) ((unsigned short) arr_23 [i_9]))) : (((((/* implicit */int) var_8)) ^ (((/* implicit */int) (signed char)71))))));
                        }
                        for (unsigned char i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            arr_46 [i_7] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) ((long long int) arr_28 [i_14] [i_9] [i_8] [(unsigned short)10])))));
                            var_35 &= arr_26 [i_7];
                            arr_47 [i_14] [8LL] [i_9] [i_11] [i_14] = ((/* implicit */unsigned char) (unsigned short)8);
                        }
                        var_36 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) arr_41 [(unsigned char)15] [i_9] [i_8] [i_7]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7 + 1]))) : (arr_42 [i_11] [i_11] [i_9] [i_8] [i_7] [i_7])));
                        arr_48 [i_8] [(unsigned short)12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)79)) % (((/* implicit */int) (signed char)8))))) ? (((/* implicit */int) ((unsigned short) (unsigned char)113))) : (((/* implicit */int) var_1))));
                    }
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_37 = (unsigned short)41889;
                        arr_51 [i_7 - 3] [i_8] [i_9] [i_15] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-11)) ? (arr_41 [i_7 - 1] [i_7 - 1] [i_7] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)237)))))))));
                        arr_52 [i_7] [i_8] [i_9] [i_9] [i_15] = ((/* implicit */unsigned char) var_16);
                        var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) var_11))));
                    }
                    var_39 ^= ((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)29)) % (((/* implicit */int) (unsigned short)23450))))));
                }
            } 
        } 
    } 
}
