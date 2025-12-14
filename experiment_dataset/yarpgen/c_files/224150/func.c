/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224150
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
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 85618421U)) ? (arr_0 [i_0]) : (var_13))) % (((/* implicit */unsigned long long int) 85618423U))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) ((unsigned short) var_13)))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))) | (4209348902U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_13)));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            /* LoopSeq 4 */
            for (signed char i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                var_20 *= ((/* implicit */signed char) arr_0 [i_2]);
                arr_7 [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_0 [i_1]))));
                var_21 = ((/* implicit */unsigned short) 4209348863U);
            }
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                arr_10 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_1] [i_1] [i_3]))));
                arr_11 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_9 [i_1] [i_0]))));
                arr_12 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-64)) ? (((/* implicit */int) (signed char)98)) : (((/* implicit */int) (unsigned short)35451))));
            }
            for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_1] [i_4])) ? (arr_0 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)53)))));
                arr_15 [i_1] [i_1] [i_4] = ((/* implicit */unsigned long long int) arr_4 [i_1]);
                /* LoopSeq 2 */
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_6 = 1; i_6 < 9; i_6 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(arr_4 [i_1])))) >= (((((/* implicit */_Bool) 85618421U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-110)))))));
                    }
                    for (int i_7 = 1; i_7 < 9; i_7 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned long long int) var_17);
                        arr_23 [i_1] [i_1] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-67)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-55)))))) ? (((/* implicit */unsigned long long int) arr_22 [i_0] [i_1] [i_4] [i_5] [i_7] [i_7])) : (arr_20 [i_7 + 1] [i_1] [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_1] [i_7 - 1])));
                        arr_24 [i_1] [i_5] [i_4] [i_1] [i_1] [i_1] = var_17;
                    }
                    arr_25 [i_1] [i_0] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_18 [i_0] [i_1] [i_4] [i_5] [i_5])) > (((/* implicit */int) arr_18 [i_4] [i_1] [i_4] [i_1] [i_5]))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 8; i_8 += 2) 
                {
                    var_26 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_22 [i_0] [i_1] [i_1] [i_0] [i_4] [i_0]) / (((/* implicit */int) arr_6 [i_0] [i_1] [i_4] [i_0]))))) ? (4209348860U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    var_27 = var_14;
                    var_28 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_6 [i_0] [i_8 + 1] [i_8 - 1] [i_0]))));
                    arr_28 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_8 [i_0] [i_1] [i_4] [i_8]));
                }
            }
            for (unsigned short i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
            {
                var_29 += ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_7))))));
                arr_31 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))) : (arr_20 [i_9] [i_1] [i_1] [i_1] [i_1] [i_1] [i_0])));
                arr_32 [i_9] [i_1] [i_0] = ((((/* implicit */_Bool) 6447047826222578529ULL)) ? (((/* implicit */unsigned long long int) 85618432U)) : (18446744073709551615ULL));
            }
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_3))));
            var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) : ((-(0ULL)))));
        }
        arr_33 [i_0] = ((/* implicit */unsigned char) 436875022);
    }
    for (unsigned long long int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        arr_36 [i_10] = ((/* implicit */int) max((max((((((/* implicit */_Bool) var_15)) ? (3762420087U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_3))))))), (((/* implicit */unsigned int) ((((unsigned long long int) arr_34 [i_10])) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (arr_35 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)98)))))))))));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 13; i_11 += 4) 
        {
            for (unsigned char i_12 = 4; i_12 < 14; i_12 += 2) 
            {
                {
                    arr_44 [i_12] [i_11] [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-27)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_39 [i_10] [i_12])), (var_6))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_11 - 2] [i_12 - 4] [i_12]))) : (4209348876U)))))))) : (min((var_0), (((/* implicit */unsigned long long int) ((85618444U) % (var_11))))))));
                    arr_45 [i_12 + 1] [i_11] [i_10] = ((85618420U) | (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (-(-1398088755)))))));
                    arr_46 [i_12 - 3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_42 [i_12 + 1] [i_11 - 2] [i_12 - 4]))) ? (max((((/* implicit */unsigned int) ((signed char) (signed char)-116))), (((((/* implicit */_Bool) var_6)) ? (arr_40 [i_12] [i_11 - 1]) : (4209348874U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((var_0), (((/* implicit */unsigned long long int) arr_40 [i_12] [i_12 - 2])))))))));
                }
            } 
        } 
    }
    var_32 = (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) >= (var_6))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_10))));
}
