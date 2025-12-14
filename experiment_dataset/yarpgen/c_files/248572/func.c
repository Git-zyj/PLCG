/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248572
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
    var_10 = ((/* implicit */long long int) var_0);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-40))) : (15804956137818590482ULL)))) ? (((var_0) - (var_5))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [7U]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) (~(3125456365U)))))));
    }
    for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            arr_12 [i_1] = (signed char)67;
            arr_13 [12U] [(unsigned char)0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)52)) ? ((+((-(9223372036854775807LL))))) : (var_2)));
        }
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            arr_26 [i_5] [(short)16] [i_4] [i_4] = ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7841))) : (1073479680U));
                            arr_27 [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_25 [i_1] [i_3] [i_4] [i_1] [i_6])) ? (arr_7 [i_4]) : (((/* implicit */unsigned long long int) var_2)))) % (((/* implicit */unsigned long long int) (-(6570778530600649822LL))))));
                            arr_28 [13U] [i_3] [i_4] [i_5] [i_5] [i_3] [i_1] = ((/* implicit */unsigned int) (~(arr_11 [i_5] [i_1])));
                            arr_29 [i_6] [i_5] [i_6] [i_6] [(signed char)10] = ((/* implicit */unsigned int) ((signed char) (+(var_8))));
                            arr_30 [i_4] [i_4] = ((/* implicit */unsigned char) arr_18 [i_1] [i_3] [i_1]);
                        }
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 2) 
                        {
                            arr_35 [i_1] [2U] [8U] [(unsigned char)10] [2U] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_1] [i_1] [i_4]))) ^ (max((((/* implicit */unsigned long long int) 0LL)), (14403541195735202805ULL)))));
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((0U), (4294967295U)))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_4)) : (arr_33 [i_1] [i_1] [i_5])))))) ? (((/* implicit */unsigned long long int) min((0U), (4294967295U)))) : (max((((/* implicit */unsigned long long int) ((long long int) 9223372036854775807LL))), (var_3)))));
                            arr_37 [i_5] = min((((((/* implicit */_Bool) arr_31 [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))) : (((-6570778530600649823LL) % (((/* implicit */long long int) 1001066228U)))))), (((/* implicit */long long int) ((unsigned char) ((arr_4 [i_7]) % (arr_15 [(signed char)7] [i_5] [i_7]))))));
                        }
                        arr_38 [i_1] [i_4] [i_1] [i_5] = (~(max((var_3), (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (5184673963380361190ULL))))));
                    }
                } 
            } 
            arr_39 [i_1] [i_1] = ((/* implicit */long long int) ((arr_9 [i_1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [12U])))));
            arr_40 [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)32))));
            arr_41 [2ULL] |= ((/* implicit */unsigned char) ((((unsigned long long int) 0LL)) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1])))))));
        }
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 2) 
        {
            arr_44 [i_1] [i_8] [(unsigned char)14] = ((/* implicit */unsigned long long int) ((134217727U) < (((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_1])))))));
            /* LoopNest 3 */
            for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                for (signed char i_10 = 0; i_10 < 19; i_10 += 1) 
                {
                    for (long long int i_11 = 0; i_11 < 19; i_11 += 1) 
                    {
                        {
                            arr_52 [3ULL] [i_9] [i_9] [i_9] [i_9] [3U] [i_9] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)238))) + (-2274474519200865284LL))) + (((/* implicit */long long int) (-(((/* implicit */int) (short)-23375)))))))) & (var_3)));
                            arr_53 [i_1] [i_8] [i_10] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 13630429518806370991ULL)) ? (arr_22 [i_8] [i_8] [i_10] [i_11]) : (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [11ULL] [i_8] [12ULL] [i_8] [i_8]))) : (arr_9 [i_9])))));
                        }
                    } 
                } 
            } 
        }
        arr_54 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (859443740U) : (var_4)))))) ? (max((max((((/* implicit */unsigned long long int) arr_50 [i_1] [7ULL] [i_1] [i_1] [i_1])), (var_0))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_9)) : (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [i_1] [i_1] [(unsigned char)4])))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_12 = 0; i_12 < 19; i_12 += 3) 
        {
            arr_57 [i_1] = ((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_1]);
            arr_58 [i_12] [i_1] [i_1] = ((/* implicit */unsigned char) (+(1445250378U)));
        }
        for (long long int i_13 = 0; i_13 < 19; i_13 += 3) 
        {
            arr_61 [i_1] [i_13] = ((/* implicit */unsigned long long int) arr_51 [2ULL] [(short)11] [2ULL] [i_13] [i_13]);
            arr_62 [i_1] [i_13] [i_13] = ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)237)))), (((/* implicit */int) arr_20 [i_13]))));
        }
        arr_63 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) ((short) (signed char)39))) | (((/* implicit */int) ((signed char) 4294967295U)))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
    {
        arr_67 [8LL] [i_14] = ((/* implicit */unsigned char) (-(4704709056962163492ULL)));
        arr_68 [i_14] [i_14] = (~(1292008546U));
        arr_69 [i_14] = ((/* implicit */unsigned int) ((unsigned char) arr_15 [5ULL] [i_14] [i_14]));
        arr_70 [i_14] [14ULL] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775803LL))));
        arr_71 [8ULL] = ((/* implicit */short) 16413600961723876010ULL);
    }
}
