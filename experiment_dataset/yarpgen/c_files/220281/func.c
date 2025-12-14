/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220281
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
    var_20 = ((/* implicit */int) var_17);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        var_21 = ((/* implicit */unsigned char) (-(arr_2 [i_0] [i_1])));
                        arr_10 [2LL] [3] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) arr_8 [i_0]))));
                    }
                } 
            } 
            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((unsigned int) arr_8 [i_0])))));
            var_23 = ((/* implicit */unsigned char) var_1);
            /* LoopNest 3 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                for (unsigned char i_5 = 0; i_5 < 11; i_5 += 2) 
                {
                    for (unsigned long long int i_6 = 3; i_6 < 9; i_6 += 3) 
                    {
                        {
                            arr_21 [i_4] [i_1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) var_15);
                            arr_22 [i_0] [i_0] [(unsigned char)3] [i_4] [(_Bool)0] = ((/* implicit */unsigned int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0] [i_1] [i_4] [i_5]))) > (var_1)))));
                            arr_23 [i_4] = ((/* implicit */unsigned int) (+(-1442769521)));
                            arr_24 [i_4] [i_5] [i_6] = var_15;
                            var_24 = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_7 = 3; i_7 < 10; i_7 += 2) 
        {
            var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) && (var_16)));
            arr_29 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)18992))));
            var_26 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_7 - 3] [(signed char)4] [i_0] [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_7 - 2] [i_7 - 2] [i_0] [i_7 - 3]))) : (1658809034197732933ULL)));
        }
        var_27 = ((/* implicit */long long int) (~(arr_5 [i_0])));
        var_28 -= ((/* implicit */signed char) var_19);
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
    {
        arr_32 [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_8] [i_8])) > (((/* implicit */int) arr_14 [(unsigned char)4] [(unsigned char)4] [0U] [(unsigned char)4] [i_8]))));
        var_29 = ((((/* implicit */_Bool) arr_28 [i_8] [i_8])) ? (var_11) : (((/* implicit */unsigned int) arr_28 [i_8] [i_8])));
        arr_33 [i_8] = 18446744073709551612ULL;
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)223)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8])))))) || (((var_13) < (((/* implicit */unsigned long long int) arr_31 [i_8]))))));
    }
    for (long long int i_9 = 0; i_9 < 14; i_9 += 1) 
    {
        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((unsigned int) (~(var_11)))))));
        arr_36 [(short)0] [(short)0] &= ((/* implicit */unsigned int) arr_35 [6ULL]);
        var_32 ^= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_35 [(unsigned short)10])) > (((/* implicit */int) arr_35 [(signed char)4])))));
    }
    for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            arr_42 [i_11] = ((/* implicit */_Bool) arr_41 [i_11] [i_10] [i_10]);
            arr_43 [i_11] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_34 [i_11])) ? (((/* implicit */int) arr_34 [i_10])) : (((/* implicit */int) arr_41 [i_10] [i_10] [i_11])))), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)236)) || (((/* implicit */_Bool) arr_38 [i_10] [i_11])))))));
            arr_44 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [(_Bool)1] [i_10])) ? ((~(((/* implicit */int) var_16)))) : (((/* implicit */int) arr_35 [i_11]))));
        }
        for (unsigned int i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
            {
                var_33 += ((/* implicit */signed char) arr_34 [i_10]);
                var_34 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_47 [i_13] [i_12] [i_13]))));
                var_35 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_13]))) ^ (arr_40 [i_13])));
            }
            /* vectorizable */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                var_36 += ((((/* implicit */_Bool) arr_52 [i_14] [i_12] [i_10])) || (((/* implicit */_Bool) arr_52 [i_10] [i_12] [i_14])));
                var_37 = ((/* implicit */int) ((arr_52 [i_10] [i_12] [i_14]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_14])))));
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 13; i_15 += 1) 
                {
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)110)) ^ (((/* implicit */int) var_16)))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
                    arr_57 [i_15] = ((/* implicit */signed char) ((((/* implicit */int) arr_45 [i_10] [i_10] [i_15])) >> (((((/* implicit */int) arr_51 [i_12])) - (4048)))));
                }
                arr_58 [i_10] [i_14] &= ((/* implicit */unsigned char) var_1);
                var_39 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_41 [i_10] [i_10] [i_14]))));
            }
            for (unsigned short i_16 = 0; i_16 < 13; i_16 += 3) 
            {
                arr_61 [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)236)) >> (((max((((/* implicit */unsigned int) arr_41 [(signed char)8] [(unsigned char)11] [i_10])), (((unsigned int) arr_39 [i_10])))) - (2120495317U)))));
                var_40 ^= ((/* implicit */unsigned int) var_9);
            }
            var_41 = ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_10))) + (((223373972U) + (3329394824U)))))));
        }
        var_42 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_14)))) ? (((((/* implicit */_Bool) arr_60 [i_10] [i_10])) ? (var_1) : (((/* implicit */unsigned long long int) var_7)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-2147483647 - 1)))))));
        var_43 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))) < (arr_60 [i_10] [i_10])))), ((signed char)-127)))), (max((((/* implicit */unsigned long long int) ((long long int) 580832139))), (arr_46 [i_10] [i_10])))));
        arr_62 [i_10] [9LL] = ((/* implicit */long long int) var_18);
    }
}
