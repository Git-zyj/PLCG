/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212520
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 2; i_2 < 18; i_2 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 18; i_3 += 2) 
                    {
                        var_16 |= ((/* implicit */long long int) (-((~(arr_8 [i_3] [i_1] [(unsigned short)6] [8U] [i_0] [i_3 - 1])))));
                        arr_10 [(short)11] [i_0] = ((/* implicit */long long int) max((max((arr_2 [i_0]), ((+(((/* implicit */int) arr_0 [i_0])))))), ((~((+(arr_2 [i_0])))))));
                    }
                    for (unsigned short i_4 = 4; i_4 < 15; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) max((arr_2 [i_0]), (((((/* implicit */_Bool) (~(arr_4 [i_0] [i_0])))) ? (((/* implicit */int) (!(arr_7 [i_0] [i_2] [(signed char)6] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1] [i_0])))))))));
                        var_18 |= ((/* implicit */unsigned int) (~((~(arr_8 [(_Bool)0] [(_Bool)1] [i_2] [i_2 + 1] [i_2] [i_2 - 2])))));
                    }
                    for (short i_5 = 2; i_5 < 17; i_5 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) min(((!(((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0] [i_5 - 2] [i_5 - 2])))), ((!(((/* implicit */_Bool) arr_14 [i_0 - 3] [i_0] [i_5 + 1] [i_5]))))));
                        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) max(((+(4294967289U))), (min(((~(arr_1 [i_5] [(unsigned char)12]))), (((/* implicit */unsigned int) arr_14 [(unsigned char)10] [i_5] [(unsigned char)12] [i_0 + 1])))))))));
                    }
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 0; i_7 < 19; i_7 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [(short)10] [i_0])) ? (arr_11 [i_7] [i_0] [i_0] [i_0]) : (arr_11 [i_0] [i_2] [i_0] [i_7]))), (((((/* implicit */_Bool) arr_9 [i_0] [i_6] [i_2] [i_0])) ? (arr_11 [i_0 + 1] [2LL] [i_0] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_7] [i_1]))))))))));
                                var_22 |= ((/* implicit */_Bool) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [(short)4] [i_1])))))))));
                                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) (~(min((arr_5 [i_6] [i_0 - 2]), (arr_5 [i_0] [i_0 - 2]))))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */long long int) (~((+((-(((/* implicit */int) arr_15 [i_0] [17U] [i_0] [i_0]))))))));
                }
                for (unsigned char i_8 = 2; i_8 < 18; i_8 += 1) /* same iter space */
                {
                    var_25 |= ((/* implicit */short) arr_4 [14ULL] [14ULL]);
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0]))))), (min((arr_3 [i_0] [(unsigned short)14]), (((/* implicit */unsigned short) arr_7 [14] [14] [i_8] [i_8]))))))))))));
                }
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 2) 
                {
                    var_27 |= ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_9] [i_1] [i_9] [i_9]))))))))));
                    var_28 = ((/* implicit */unsigned char) (+((+(arr_6 [i_0 + 1] [i_1] [i_0 - 1] [i_0])))));
                    /* LoopNest 2 */
                    for (short i_10 = 1; i_10 < 16; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 0; i_11 < 19; i_11 += 4) 
                        {
                            {
                                arr_35 [(short)14] [(short)14] [(short)14] [i_10] [i_0] = ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_9 [i_0] [13U] [i_11] [i_0]))))));
                                arr_36 [i_11] [i_9] [i_9] [i_9] [i_1] [i_9] [(short)18] |= ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_24 [i_9] [i_11] [i_10 - 1] [(signed char)18]))))));
                                var_29 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [(signed char)3] [i_0] [i_0]))))) : ((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_10] [i_11]))))))));
                            }
                        } 
                    } 
                }
                arr_37 [i_0] [(signed char)2] [i_0] = min((((/* implicit */unsigned int) min((arr_28 [i_0] [i_0 - 1]), (((/* implicit */unsigned short) arr_0 [i_0]))))), (min((max((arr_5 [i_1] [i_0]), (((/* implicit */unsigned int) arr_25 [i_0] [(signed char)1] [i_0] [i_0])))), (((/* implicit */unsigned int) arr_18 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 2] [i_0] [i_0 - 1])))));
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0)))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_12 = 0; i_12 < 23; i_12 += 1) 
    {
        var_31 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_39 [i_12] [i_12]))))));
        /* LoopNest 2 */
        for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
        {
            for (signed char i_14 = 0; i_14 < 23; i_14 += 3) 
            {
                {
                    arr_47 [5LL] [i_13] [i_12] = ((/* implicit */short) arr_43 [i_12] [i_12] [i_14]);
                    var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (~(((/* implicit */int) arr_40 [i_13] [i_14])))))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        for (int i_16 = 0; i_16 < 24; i_16 += 2) 
        {
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                {
                    var_33 = ((/* implicit */long long int) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-10637)))))))));
                    arr_54 [16LL] [i_17] |= (-(((((/* implicit */_Bool) arr_50 [i_15] [i_16] [i_17])) ? ((~(arr_49 [i_17]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_50 [i_15] [i_16] [i_17])))))))));
                }
            } 
        } 
    } 
}
