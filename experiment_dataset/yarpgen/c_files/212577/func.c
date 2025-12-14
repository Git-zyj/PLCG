/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212577
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
    var_17 = ((/* implicit */int) 4294967293U);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_1] [i_0]))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 4; i_2 < 21; i_2 += 4) 
            {
                for (short i_3 = 3; i_3 < 22; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_4 = 3; i_4 < 21; i_4 += 2) 
                        {
                            var_19 |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))));
                            arr_16 [i_0] [i_1] [i_0] [i_3] [(short)0] = ((/* implicit */unsigned long long int) var_6);
                            var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_15)), (var_11)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_0))))) : (var_6))), (((/* implicit */long long int) var_15))));
                            arr_17 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) var_7)) & (((/* implicit */int) ((signed char) var_4)))))) / (arr_12 [11] [i_0] [i_1] [i_0] [i_2] [i_3] [i_0])));
                        }
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) min(((~(((/* implicit */int) (!(arr_9 [i_1] [i_5] [i_5] [i_1] [i_5])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_10 [i_1] [i_1] [i_1] [6]) ? (((/* implicit */int) arr_9 [i_5] [i_3] [i_2 + 2] [22U] [i_0])) : (((/* implicit */int) arr_14 [i_5] [i_3 - 2] [i_2] [i_1] [i_0])))))))))))));
                            arr_21 [i_0] [i_2] &= ((/* implicit */short) arr_6 [i_2]);
                        }
                        /* vectorizable */
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) 127U);
                            arr_25 [i_6] [i_0] [i_0] [6LL] = arr_23 [i_6] [i_6] [i_6] [i_6];
                        }
                        var_23 = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_1 [i_0] [i_1])) ^ (var_10)))));
                    }
                } 
            } 
            arr_26 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((var_6) | (arr_6 [i_0]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */unsigned int) 2147483647)) & (arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
            var_24 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0] [i_0])) != (var_4))))));
        }
        /* LoopNest 3 */
        for (short i_7 = 0; i_7 < 23; i_7 += 1) 
        {
            for (short i_8 = 0; i_8 < 23; i_8 += 1) 
            {
                for (signed char i_9 = 1; i_9 < 21; i_9 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned int) arr_29 [i_0] [i_0] [i_0] [i_0]);
                        arr_33 [i_0] [(_Bool)1] [i_8] [i_9] [i_0] [i_0] = ((/* implicit */_Bool) (+(max((((var_1) | (((/* implicit */int) arr_1 [i_0] [i_0])))), (((/* implicit */int) (signed char)3))))));
                        var_26 = ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), ((((!(((/* implicit */_Bool) arr_20 [16] [i_7] [(short)7])))) ? (((arr_29 [i_0] [i_7] [i_0] [i_9]) ? (((/* implicit */int) arr_30 [i_0])) : (((/* implicit */int) (short)255)))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (var_10)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 2) 
        {
            for (signed char i_11 = 2; i_11 < 22; i_11 += 3) 
            {
                for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
                {
                    {
                        arr_42 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) arr_24 [(unsigned short)14] [i_11 - 2] [i_0] [i_0] [3ULL])) : (((((/* implicit */_Bool) arr_7 [i_0] [i_10])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_37 [i_0] [i_12] [i_0] [i_0])))))) >> (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) arr_1 [i_10] [(signed char)14]))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)65528)), (var_9)))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            arr_45 [i_11 + 1] [i_11 + 1] [i_11] [i_0] [i_13] [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) var_10)) | (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0]))))) : ((~(23U)))))));
                            arr_46 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_11 [i_10 - 1] [i_10 - 1])) ? (((/* implicit */int) max((((/* implicit */short) arr_11 [i_0] [i_0])), (arr_19 [i_13] [(short)0] [1U] [i_10] [i_0] [i_0])))) : (((/* implicit */int) arr_36 [i_0] [i_10 + 1] [i_11 - 1]))))));
                        }
                        /* vectorizable */
                        for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                        {
                            arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_10 + 1] [i_11 - 1])) < (((/* implicit */int) var_13))));
                            arr_52 [i_0] [i_0] [i_10] [i_11] [i_10] [i_14] = ((/* implicit */signed char) (-(arr_28 [i_10 - 1] [i_10] [i_0])));
                        }
                        arr_53 [i_0] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */int) min((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_10 + 2] [i_10 - 1] [i_10]))) % (arr_18 [(signed char)16] [i_0] [i_0] [(signed char)16] [i_10 + 2] [i_11 + 1]))), (((/* implicit */unsigned long long int) var_11))));
                    }
                } 
            } 
        } 
        arr_54 [20ULL] &= arr_31 [14] [14] [14] [i_0] [14U] [2U];
    }
    var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_7)))))));
    var_28 = ((/* implicit */int) max((((/* implicit */long long int) (-(4294967295U)))), (((((/* implicit */_Bool) (-(var_9)))) ? (((/* implicit */long long int) var_9)) : (var_4)))));
}
