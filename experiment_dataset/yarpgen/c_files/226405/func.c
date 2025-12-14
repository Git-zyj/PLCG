/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226405
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
    var_16 = (~(((/* implicit */int) var_15)));
    /* LoopSeq 4 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((signed char) 36028797018962944LL)))));
        arr_3 [(signed char)1] = max(((~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])))), (((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])))));
        arr_4 [i_0] [i_0] = (-(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])));
        arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0] [(signed char)19])) ? ((((+(((/* implicit */int) var_14)))) | (((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) | (((/* implicit */int) arr_0 [i_0] [5])))))) : (((/* implicit */int) (short)-27640))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_13 [i_2] [(signed char)12] [i_2] = ((/* implicit */long long int) ((signed char) ((((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) / (((/* implicit */long long int) ((((/* implicit */int) (short)-27640)) / (((/* implicit */int) var_7))))))));
                    arr_14 [(short)0] [i_2] [i_1] = var_14;
                }
            } 
        } 
    }
    for (signed char i_3 = 0; i_3 < 16; i_3 += 2) 
    {
        arr_18 [(signed char)6] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) arr_15 [i_3])) + (2147483647))) << (((((((/* implicit */int) arr_15 [i_3])) + (126))) - (19))))))));
        arr_19 [15LL] [15LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_3])) ? (((((/* implicit */int) ((signed char) (unsigned short)14336))) % ((+(((/* implicit */int) (signed char)-41)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11))))))))));
        arr_20 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (short)-27636)) - (((/* implicit */int) var_4))))) / (arr_7 [i_3] [5LL] [(signed char)3])))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_12 [i_3]), (arr_12 [i_3]))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) * (((/* implicit */int) arr_17 [i_3]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */long long int) (signed char)54)), (arr_6 [8] [i_3] [i_3])))))));
        /* LoopSeq 1 */
        for (long long int i_4 = 0; i_4 < 16; i_4 += 4) 
        {
            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_3] [i_3])) <= (((((/* implicit */int) (signed char)127)) - (((/* implicit */int) (short)-27640)))))))) != (((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3])) ? (arr_11 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)37)) && (((/* implicit */_Bool) arr_22 [i_3]))))))))));
            arr_24 [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)-27640))) - ((~(-1552255426994656124LL)))));
            arr_25 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
            arr_26 [i_3] = ((/* implicit */long long int) ((signed char) var_5));
        }
    }
    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
    {
        arr_30 [(signed char)18] [i_5] &= ((/* implicit */_Bool) arr_27 [(signed char)10]);
        /* LoopSeq 3 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            arr_33 [(signed char)16] [(signed char)16] = ((/* implicit */signed char) arr_29 [i_5]);
            arr_34 [i_5] = ((signed char) (+(((/* implicit */int) (signed char)28))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            arr_37 [i_5] [i_5] [i_5] = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) arr_29 [i_5 + 1])))))));
            /* LoopNest 2 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (signed char i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    {
                        arr_42 [i_5 + 1] [i_5 + 1] [i_8] [i_5] = ((/* implicit */unsigned short) 1044480);
                        arr_43 [i_5] [i_9] [i_8] [i_9] [i_9] = ((((/* implicit */int) ((short) (-(arr_41 [i_5]))))) + (((((/* implicit */_Bool) (short)27645)) ? (arr_39 [i_5] [i_8 - 1] [i_8 - 1] [i_8 - 1]) : (arr_39 [i_5] [(short)6] [i_5] [i_9]))));
                        arr_44 [i_5] [i_7] [i_7] [i_7] [i_9] [i_5] = ((/* implicit */signed char) ((short) (+(((/* implicit */int) arr_36 [i_8 - 1] [i_8 - 1] [i_8 - 1])))));
                        arr_45 [i_9] = ((/* implicit */long long int) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_27 [i_9])) ? (((/* implicit */int) arr_36 [i_5] [i_8 - 1] [i_9])) : (((/* implicit */int) (signed char)-97)))))) != (((/* implicit */int) arr_28 [i_9]))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_10 = 0; i_10 < 22; i_10 += 4) 
        {
            arr_48 [i_5] [i_10] [i_5] = ((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)4)))) != (arr_39 [i_5] [i_10] [i_10] [i_10])));
            arr_49 [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)0)) != (((/* implicit */int) (_Bool)1))));
            arr_50 [i_5] = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)1))));
            /* LoopNest 2 */
            for (long long int i_11 = 2; i_11 < 18; i_11 += 1) 
            {
                for (short i_12 = 1; i_12 < 19; i_12 += 4) 
                {
                    {
                        arr_55 [i_5 + 1] [i_5 + 1] [i_10] [i_12] [i_12 + 3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((signed char) -827187884)))));
                        arr_56 [i_10] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) arr_51 [i_5 + 1] [i_10] [16] [i_12 - 1])) ? ((+(8945400989272458816LL))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                        arr_57 [i_5] = (unsigned short)35707;
                    }
                } 
            } 
            arr_58 [i_5] [i_5] [i_5] = ((/* implicit */_Bool) arr_54 [i_5 + 1] [i_5] [i_5] [(signed char)13]);
        }
    }
    /* vectorizable */
    for (long long int i_13 = 1; i_13 < 21; i_13 += 2) 
    {
        arr_61 [i_13] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) (short)1048)) + (((/* implicit */int) arr_59 [i_13 + 3]))));
        arr_62 [i_13] = ((/* implicit */signed char) (-(((/* implicit */int) arr_60 [i_13 + 3]))));
    }
    /* LoopSeq 1 */
    for (signed char i_14 = 0; i_14 < 13; i_14 += 2) 
    {
        arr_65 [i_14] = ((/* implicit */signed char) (short)32764);
        arr_66 [i_14] = ((/* implicit */signed char) (~((+(((/* implicit */int) ((signed char) arr_27 [i_14])))))));
        arr_67 [i_14] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_60 [i_14])) + (((/* implicit */int) var_6))))));
    }
    var_17 = ((/* implicit */signed char) ((((/* implicit */int) var_13)) <= ((+(((/* implicit */int) var_13))))));
}
