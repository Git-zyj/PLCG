/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204423
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) arr_2 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((arr_1 [(unsigned char)21]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1])))))))), (((((/* implicit */_Bool) max((arr_0 [i_0]), (((/* implicit */long long int) var_15))))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_14))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 4) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                {
                    {
                        var_19 &= ((/* implicit */signed char) ((arr_4 [i_1]) | (((((/* implicit */_Bool) (signed char)-58)) ? (-1779837139) : (arr_4 [i_1])))));
                        arr_14 [i_4] [i_3] [i_2] [i_1] = (+(((/* implicit */int) arr_11 [i_1] [(signed char)12] [(signed char)12] [i_4])));
                        arr_15 [i_1] [i_1] [18] [i_1] [i_1] = ((/* implicit */unsigned int) (-((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_3] [i_4])))))));
                        var_20 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (short)22228))) ^ (arr_0 [i_4]))));
                        var_21 |= ((/* implicit */unsigned short) ((unsigned char) arr_9 [i_1] [0ULL] [i_3] [i_4]));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */signed char) 3596584432169692880LL);
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((arr_9 [i_1] [i_1] [i_1] [i_1]) | (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [i_1] [i_1] [(short)2] [(short)2] [i_1] [i_1])) | (((/* implicit */int) var_11))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 20; i_5 += 2) /* same iter space */
    {
        /* LoopNest 3 */
        for (short i_6 = 2; i_6 < 18; i_6 += 3) 
        {
            for (unsigned short i_7 = 2; i_7 < 19; i_7 += 2) 
            {
                for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_26 [i_6 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_6 + 1] [i_7 - 1])) ? (arr_5 [i_6 + 2] [i_7 - 1]) : (arr_5 [i_6 - 1] [i_7 - 2])));
                        arr_27 [i_5] [i_5] = ((((/* implicit */_Bool) (short)-28436)) ? (((((/* implicit */int) arr_19 [16LL] [i_5] [i_5])) >> (((arr_22 [i_5] [i_5] [i_7 - 2]) + (550314282063017132LL))))) : (((/* implicit */int) arr_23 [13ULL])));
                        var_24 = ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_23 [i_5])) | (((/* implicit */int) (signed char)96))))) : (arr_21 [(unsigned short)7] [i_5] [(unsigned short)7]));
                    }
                } 
            } 
        } 
        var_25 = ((/* implicit */unsigned short) (-(arr_2 [i_5])));
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (~(arr_22 [i_5] [i_5] [i_5]))))));
            arr_30 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_9] [i_5]))) < (arr_18 [i_9] [7])));
        }
        var_27 = ((/* implicit */int) arr_29 [i_5]);
    }
    var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) var_8)), (var_0))))))) ? (4095U) : (((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (1779837139))), (((/* implicit */int) max(((short)30482), (((/* implicit */short) var_1))))))))));
}
