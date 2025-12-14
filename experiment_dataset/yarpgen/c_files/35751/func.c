/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35751
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (unsigned int i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [i_2 - 3])) : (min((((/* implicit */unsigned long long int) arr_4 [i_0] [22] [i_0])), (var_15))))) * ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [(unsigned char)21]))) : (var_8)))))));
                    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((((/* implicit */_Bool) (unsigned char)242)) ? (2199022206976ULL) : (((/* implicit */unsigned long long int) 2147483632))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) arr_3 [i_0] [i_0]))))) : (((/* implicit */int) max((arr_3 [i_0] [i_0]), (arr_3 [(signed char)12] [i_0]))))));
    }
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 17; i_3 += 4) 
    {
        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) 1485608562)) || (((/* implicit */_Bool) 18194095032420885911ULL))))) << (((-1485608557) + (1485608560)))));
                var_20 = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((long long int) arr_5 [i_4] [i_3] [i_3] [i_3]))) ? (((((/* implicit */_Bool) 252649041288665720ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_6)))));
                arr_15 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_12 [(_Bool)1] [(_Bool)1] [i_4]);
                /* LoopNest 3 */
                for (unsigned long long int i_5 = 1; i_5 < 14; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                    {
                        for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                        {
                            {
                                arr_25 [i_4] [16ULL] |= ((/* implicit */unsigned char) arr_5 [i_3] [i_3] [(short)11] [(unsigned short)18]);
                                var_21 = ((/* implicit */unsigned long long int) var_14);
                                arr_26 [i_7] [i_6] [(unsigned char)15] [(unsigned char)15] [(unsigned char)15] = ((int) ((((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 1262258692555638140ULL)))) && (((((/* implicit */_Bool) arr_19 [i_3] [(unsigned short)7] [i_3] [(unsigned short)0] [i_3])) && (((/* implicit */_Bool) var_2))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 4) 
                {
                    var_22 -= ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_21 [i_3] [i_3] [(signed char)13] [i_8])))) * (((/* implicit */int) (short)-28273))));
                    arr_29 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_5);
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 2) 
    {
        arr_32 [i_9] [i_9] = ((/* implicit */int) 0U);
        arr_33 [i_9 - 1] |= ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_4 [i_9 - 1] [i_9 - 2] [i_9 - 1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_4 [i_9 - 1] [i_9 - 2] [i_9 + 1])))));
        var_23 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1485608562)) ? (((/* implicit */int) arr_6 [5] [i_9] [i_9 + 1])) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned long long int) 1485608551)) : (18446744073709551607ULL)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (arr_30 [i_9 + 1] [i_9 + 1])));
        arr_34 [i_9] [(signed char)17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_9 - 2] [i_9 + 1] [i_9 + 1])) ? (((unsigned long long int) 1485608551)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned char)176))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_9 + 1] [i_9] [(unsigned short)11]))) : (((((/* implicit */unsigned long long int) -2147483631)) / (8803161819485891027ULL)))));
    }
    for (unsigned char i_10 = 2; i_10 < 6; i_10 += 2) 
    {
        var_24 = ((/* implicit */unsigned long long int) -2147483613);
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 1) 
        {
            for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                {
                    var_25 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) ((unsigned char) arr_28 [i_10] [2] [i_11 - 1] [i_12]))) - (((/* implicit */int) max((arr_0 [i_11 + 1]), (arr_3 [i_11] [i_12])))))));
                    arr_42 [i_10] [i_10] [i_12] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) arr_12 [i_11 - 1] [i_10 + 4] [i_10 - 1]))) || (((/* implicit */_Bool) (-(1485608537))))));
                }
            } 
        } 
    }
    for (unsigned short i_13 = 0; i_13 < 24; i_13 += 4) 
    {
        var_26 = ((/* implicit */unsigned char) 428673754);
        arr_45 [i_13] = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_9)))) + (((/* implicit */int) ((unsigned short) arr_44 [i_13] [i_13])))));
    }
    var_27 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) * (var_3))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5)))))));
}
