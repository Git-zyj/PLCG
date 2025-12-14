/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21412
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
    var_14 = ((/* implicit */int) var_7);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */_Bool) var_0);
        arr_5 [0ULL] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) min((min((var_10), (var_0))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (var_9) : (((/* implicit */int) arr_0 [12])))))))) >= (((((var_7) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) / (var_5)))) : ((~(var_11)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_8 [i_1] = ((/* implicit */long long int) ((unsigned short) ((var_2) != (var_2))));
        arr_9 [i_1] = ((/* implicit */signed char) ((unsigned long long int) arr_7 [i_1]));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 1; i_2 < 24; i_2 += 3) 
        {
            arr_12 [i_2] = ((/* implicit */long long int) var_6);
            /* LoopSeq 3 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) /* same iter space */
            {
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 25; i_4 += 2) 
                {
                    arr_19 [i_2] [i_3] [i_2] [(unsigned short)14] [i_1] = ((/* implicit */long long int) var_4);
                    arr_20 [i_4] [i_2] [i_3] [i_3] [i_4] = ((/* implicit */signed char) (+(((arr_16 [i_1] [i_1] [i_4] [i_1]) * (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
                }
                for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                {
                    arr_23 [i_1] [i_1] [i_1] [i_1] [i_2] [i_1] = var_3;
                    arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_6)) | (var_9)));
                }
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                {
                    arr_28 [i_2] [(_Bool)1] = ((/* implicit */_Bool) ((arr_27 [i_2] [i_3 - 1] [i_6 + 1]) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))));
                    arr_29 [i_1] [i_1] [i_1] [i_6] [i_1] |= ((/* implicit */int) ((long long int) ((unsigned char) arr_17 [i_1] [i_2] [i_3 - 1] [i_6 + 1])));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 25; i_7 += 3) 
                    {
                        arr_33 [i_1] [i_2] [i_3] [i_1] [i_7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_3 - 1] [i_3 - 1] [i_3 - 1]))));
                        arr_34 [i_1] [i_1] [i_3] [i_6 + 1] [i_6] [i_2] = ((((/* implicit */_Bool) arr_30 [i_2])) ? (((/* implicit */unsigned long long int) var_10)) : (arr_30 [i_2]));
                        arr_35 [i_1] [7] [i_3] [i_2] [(signed char)10] = arr_21 [i_2] [i_2] [i_2] [14ULL] [i_2];
                    }
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                    {
                        arr_38 [i_2] [i_2 - 1] [i_6] = ((/* implicit */long long int) ((signed char) ((arr_32 [i_2]) < (arr_32 [i_2]))));
                        arr_39 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_2] [i_2 - 1] [i_3 - 1] [i_6 + 1] [i_6 + 1] [i_2]))));
                    }
                }
                arr_40 [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_18 [i_2] [i_1] [i_2 - 1]))));
                arr_41 [i_1] [i_2] [i_2] [i_3 - 1] = ((/* implicit */int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2 + 1] [i_2] [i_3 - 1])))));
                arr_42 [i_1] [i_1] [i_1] [i_2] = ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)93))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_0)))))) : ((-(arr_26 [i_2] [(signed char)8] [i_2] [i_2]))));
            }
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_45 [i_1] [i_1] [i_1] &= ((/* implicit */int) arr_17 [i_2] [i_2 + 1] [i_9 - 1] [i_9 - 1]);
                arr_46 [i_1] |= ((/* implicit */short) (-(((/* implicit */int) (signed char)-119))));
            }
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) /* same iter space */
            {
                arr_50 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)26)) / (((/* implicit */int) (signed char)100))));
                arr_51 [i_2] [4] [(_Bool)1] [4] = ((/* implicit */_Bool) (+(var_7)));
            }
            arr_52 [i_2] [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) (signed char)100)))))) - (arr_32 [i_2])));
        }
        for (unsigned short i_11 = 0; i_11 < 25; i_11 += 3) 
        {
            arr_56 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) 818825335U);
            arr_57 [i_1] [i_1] [i_11] &= ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_49 [i_1] [i_1] [i_1]))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_61 [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (arr_32 [i_1]) : (arr_25 [4ULL] [14LL] [i_1] [i_1] [4ULL] [i_1])));
            arr_62 [i_1] [i_12] = ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) ^ (arr_36 [(short)14] [i_1] [i_12] [i_12] [i_1] [12])));
            arr_63 [i_1] = ((/* implicit */unsigned int) ((long long int) var_7));
        }
        arr_64 [i_1] [i_1] = ((/* implicit */unsigned int) var_1);
        arr_65 [i_1] [i_1] = ((/* implicit */int) arr_48 [i_1]);
    }
    /* LoopNest 3 */
    for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
    {
        for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) 
        {
            for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                {
                    arr_75 [i_14] [i_14] [i_14] [i_14] = max((7212363724473348447LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) | (arr_26 [i_14] [6ULL] [i_13] [i_14])))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_0)) / (var_11))))))));
                    arr_76 [i_13] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)98)) ? (((((/* implicit */unsigned int) (-2147483647 - 1))) & (arr_7 [i_14]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)235)) || (((/* implicit */_Bool) arr_25 [i_13] [i_13] [i_13] [13LL] [i_13] [i_14]))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) max((92844311U), (((/* implicit */unsigned int) var_4))))))) : (((((((/* implicit */int) arr_11 [i_14])) > (arr_53 [i_13] [i_14]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 6653233081561384589LL)) || (var_8))))) : ((~(15951543001289487963ULL)))))));
                    arr_77 [i_14] [(unsigned short)20] [i_14] [i_15] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_16 [i_13] [i_13] [i_14] [i_14])) : (1654607164643260656ULL))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) var_6)) ^ (var_12))), (((((/* implicit */int) arr_58 [i_13])) & (((/* implicit */int) var_1)))))))));
                }
            } 
        } 
    } 
}
