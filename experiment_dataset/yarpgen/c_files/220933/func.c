/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220933
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
    var_14 = ((/* implicit */unsigned long long int) (~(var_1)));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    arr_9 [i_1] [(signed char)4] [4LL] = ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(unsigned char)5])))))) - (min((((/* implicit */unsigned int) (_Bool)1)), (arr_0 [i_0])))))));
                    arr_10 [6U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_0 [i_0])))) || (((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)3749))) + (arr_8 [i_0] [i_1] [i_2])))), (((var_13) ? (6316271952574281438LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))))));
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 6; i_4 += 3) 
                    {
                        arr_17 [(_Bool)1] [i_3] [i_3] [i_3 - 1] [i_0] = ((/* implicit */signed char) (+((~(((/* implicit */int) ((_Bool) arr_6 [(signed char)1] [i_1] [i_3 + 1])))))));
                        arr_18 [i_0] [i_0] = ((/* implicit */short) arr_13 [i_0] [i_0] [i_0]);
                        arr_19 [i_4] [(signed char)2] [(signed char)2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_15 [(signed char)8] [(_Bool)1] [i_1] [i_1] [(signed char)8] [i_4 + 4])), (arr_16 [i_0] [2U])))) ? (((/* implicit */int) arr_15 [i_3] [(signed char)6] [(signed char)6] [i_3 + 2] [i_4 + 2] [i_4 + 3])) : (((arr_15 [i_3 + 1] [6LL] [i_4 + 2] [i_4] [i_4] [i_4 + 1]) ? (((/* implicit */int) arr_15 [i_0] [(short)2] [i_4] [i_4] [i_4 + 2] [i_4 - 1])) : (((/* implicit */int) (signed char)44))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 3) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_25 [i_0] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_24 [1U] [i_1] [7ULL]))));
                                arr_26 [(short)1] [i_1] [i_1] [i_0] [i_1] = ((/* implicit */long long int) 3027039558U);
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned int i_7 = 0; i_7 < 10; i_7 += 3) /* same iter space */
                {
                    arr_30 [i_7] [i_0] = ((/* implicit */unsigned int) arr_1 [i_7]);
                    arr_31 [i_1] [(unsigned char)2] &= ((/* implicit */unsigned int) (unsigned char)63);
                }
                for (unsigned int i_8 = 0; i_8 < 10; i_8 += 3) /* same iter space */
                {
                    arr_34 [i_0] [i_8] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1])))))));
                    arr_35 [i_8] [i_0] [(short)6] = ((/* implicit */short) (!(((/* implicit */_Bool) (((-(6433528211224487473ULL))) & (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_8] [(signed char)0])) : (((/* implicit */int) (_Bool)1))))))))));
                    arr_36 [(signed char)6] [i_1] [(signed char)6] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */int) arr_7 [i_0] [i_0] [i_8] [(signed char)7])) ^ ((~(((/* implicit */int) var_2)))))));
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_39 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((arr_11 [i_0] [i_0] [i_9]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)120))))) : (12013215862485064142ULL)))) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-81)) != (((/* implicit */int) arr_1 [i_9]))))) : (((/* implicit */int) arr_2 [i_1]))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        for (signed char i_11 = 1; i_11 < 8; i_11 += 3) 
                        {
                            {
                                arr_44 [i_0] = ((/* implicit */unsigned int) arr_14 [i_11] [i_9] [i_1] [(short)2]);
                                arr_45 [i_11] [i_0] [i_9] [i_0] [i_0] = ((((((/* implicit */int) ((signed char) arr_5 [i_11 - 1] [1U] [(signed char)4]))) < ((~(((/* implicit */int) (signed char)33)))))) && (((/* implicit */_Bool) ((arr_23 [i_11 + 1] [i_11] [i_11 + 2] [(signed char)3] [i_9]) / (arr_23 [i_11 + 1] [i_11] [i_11 + 2] [i_9] [(short)5])))));
                            }
                        } 
                    } 
                    arr_46 [i_0] = ((/* implicit */signed char) min((min((min((((/* implicit */unsigned long long int) (signed char)63)), (12013215862485064119ULL))), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_29 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_9]))) == (12013215862485064166ULL)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_0] [i_1]))))))))));
                    arr_47 [0ULL] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3088891476U)) || (((/* implicit */_Bool) arr_20 [2LL] [i_9]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)252))) : (3499815304U)))), (arr_40 [(signed char)2] [i_1])))));
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_52 [(_Bool)1] [i_13] = ((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (signed char)30))));
                                arr_53 [i_0] [0U] [i_12] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_37 [(_Bool)1] [i_12] [i_1] [7U])) ? (-6451894327135223225LL) : (((/* implicit */long long int) 2U))))))) ? (12013215862485064143ULL) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_4))))))));
                            }
                        } 
                    } 
                }
                arr_54 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (short)31036);
                arr_55 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_0] [i_1])) ? (arr_40 [i_0] [i_0]) : (1125899906842368ULL))))));
                arr_56 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)13))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            for (signed char i_16 = 4; i_16 < 10; i_16 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
                    {
                        arr_65 [i_14] [i_15] [i_16 - 1] [i_14] [i_17 + 1] = ((/* implicit */signed char) ((arr_57 [i_14]) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_62 [i_14] [i_15])) ? (((/* implicit */int) (short)-7181)) : (((/* implicit */int) var_10)))))));
                        arr_66 [i_14] [i_15] [(short)10] [i_16 - 3] [i_17 + 1] = ((/* implicit */unsigned int) ((((var_3) / (((/* implicit */long long int) ((/* implicit */int) (short)-10428))))) + (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_16 + 1] [(signed char)4] [i_17 + 1])))));
                    }
                    arr_67 [i_14] [i_15] [i_15] = ((/* implicit */signed char) (~(var_8)));
                    arr_68 [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_8)) : (((((/* implicit */_Bool) arr_57 [i_14])) ? (18445618173802709217ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_63 [i_16 - 3] [(_Bool)1] [i_15] [10LL] [(signed char)1] [(signed char)1])))))))) ? ((-(((/* implicit */int) arr_60 [i_14] [i_14] [i_14])))) : (((/* implicit */int) min((((/* implicit */short) arr_60 [i_14] [i_14] [(_Bool)1])), (arr_64 [(short)5] [i_15] [i_16] [i_15]))))));
                    arr_69 [0U] [(signed char)4] |= (-(min((var_3), (((/* implicit */long long int) arr_59 [i_16 - 4] [i_16 - 3])))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((long long int) var_3)) < (((/* implicit */long long int) ((/* implicit */int) var_9)))));
}
