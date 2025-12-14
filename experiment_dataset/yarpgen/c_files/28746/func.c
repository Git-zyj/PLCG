/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28746
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
    var_12 = ((/* implicit */signed char) var_7);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)255)))) + (((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) var_4))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            arr_5 [(unsigned short)7] [i_0] [i_1 + 1] &= ((/* implicit */short) max((-1LL), (((/* implicit */long long int) (unsigned char)91))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 3) 
            {
                arr_8 [(short)0] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned long long int) (~(26LL)));
            }
            /* vectorizable */
            for (short i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_4 = 1; i_4 < 9; i_4 += 2) 
                {
                    arr_15 [(short)2] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) var_6);
                    arr_16 [i_0] = ((/* implicit */long long int) var_2);
                    arr_17 [1U] = ((/* implicit */unsigned char) ((arr_1 [i_1 - 1]) ? (((/* implicit */int) arr_14 [i_1 - 1] [i_1 - 1] [i_4 + 1] [i_4])) : (((/* implicit */int) var_1))));
                }
                for (unsigned short i_5 = 1; i_5 < 10; i_5 += 3) 
                {
                    arr_20 [i_0] [i_1 - 1] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_1 - 1] [i_5 - 1] [9])) % (((/* implicit */int) arr_4 [i_1 - 1] [i_5 - 1] [i_5 - 1]))));
                    arr_21 [i_5] [i_3] [(unsigned short)7] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) 5LL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                    arr_22 [i_0] [(short)0] [(unsigned char)8] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_3] [i_3] [i_1] [i_0])) ? (((((/* implicit */_Bool) var_9)) ? (-11LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(signed char)7] [i_1] [(signed char)10] [i_5 - 1]))))) : (((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_3)) - (158))))))));
                }
                arr_23 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-2147483647 - 1));
            }
        }
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                {
                    arr_31 [i_0] [(unsigned char)10] = ((/* implicit */int) ((((((/* implicit */_Bool) max(((signed char)-111), ((signed char)110)))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_6)) ? (9LL) : (((/* implicit */long long int) arr_19 [i_7] [i_6] [(_Bool)1])))))) | (-8256461528473916477LL)));
                    /* LoopSeq 1 */
                    for (signed char i_8 = 1; i_8 < 10; i_8 += 3) 
                    {
                        arr_35 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_9 = 1; i_9 < 8; i_9 += 4) 
                        {
                            arr_38 [i_8] [i_8] [i_7] [i_8] [i_9] = var_7;
                            arr_39 [i_0] &= ((/* implicit */unsigned long long int) ((int) (-2147483647 - 1)));
                        }
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                        {
                            arr_43 [i_0] [(short)7] [i_7] [i_8] = ((/* implicit */short) ((int) arr_25 [i_7] [(signed char)6] [i_0]));
                            arr_44 [(short)10] [i_7] [i_8] [i_10] = ((/* implicit */unsigned short) (short)-28729);
                        }
                        arr_45 [i_8] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_42 [i_0] [i_0] [i_8])), (min((((/* implicit */unsigned long long int) arr_28 [7U] [i_7])), (arr_13 [i_7] [i_7] [i_6] [i_0]))))))));
                    }
                    arr_46 [i_0] = (signed char)-118;
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned short i_11 = 0; i_11 < 11; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    {
                        arr_53 [i_13] [i_12] [i_11] = ((/* implicit */short) var_2);
                        arr_54 [i_13] [i_12] [i_11] [i_0] = ((/* implicit */int) arr_37 [i_0] [i_0] [i_12] [i_13] [i_13]);
                        arr_55 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) (short)32764)), (-1LL))), (5LL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(arr_7 [i_13])))), (((((/* implicit */_Bool) arr_47 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_0] [i_11] [i_12]))) : (arr_13 [i_13] [i_12] [10U] [i_0]))))))));
                        arr_56 [i_0] [i_11] [1LL] [i_13] = ((/* implicit */short) ((((/* implicit */long long int) -2147483646)) > (arr_52 [i_0])));
                        arr_57 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -5LL)) ? (var_7) : (((/* implicit */int) var_5))))), (arr_49 [i_0] [(signed char)8] [i_12] [i_13]))), (((/* implicit */unsigned int) arr_29 [(short)9]))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        arr_60 [i_14] = ((/* implicit */long long int) min((((unsigned short) 33030144)), (((/* implicit */unsigned short) ((((/* implicit */int) (signed char)78)) < (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)0)))))))));
        arr_61 [i_14] [(signed char)14] &= ((/* implicit */short) (-(201138937U)));
        arr_62 [5LL] [(unsigned char)8] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((var_7), (((/* implicit */int) arr_59 [i_14] [i_14]))))) * (max((((/* implicit */unsigned long long int) ((var_6) % (((/* implicit */int) var_8))))), (arr_58 [(short)14])))));
    }
    var_13 = ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (var_6)))), (max((576460752303423488ULL), (((/* implicit */unsigned long long int) (short)4490)))))), (((/* implicit */unsigned long long int) var_7))));
    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) var_4))));
}
