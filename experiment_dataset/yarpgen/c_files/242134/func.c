/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242134
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
    var_17 = ((/* implicit */int) var_13);
    var_18 &= ((/* implicit */int) (!(((/* implicit */_Bool) var_10))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+((-(((/* implicit */int) arr_3 [i_0])))))))));
                var_19 = ((/* implicit */_Bool) (+(((/* implicit */int) var_10))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 2; i_2 < 10; i_2 += 2) /* same iter space */
    {
        arr_7 [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((((/* implicit */int) arr_2 [i_2] [i_2] [i_2 + 3])) >> (((var_5) - (2610720599229656310LL))))) : (((/* implicit */int) arr_2 [i_2 + 2] [i_2 - 2] [i_2 + 2])))) <= (((/* implicit */int) var_4))));
        /* LoopNest 3 */
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
        {
            for (unsigned short i_4 = 4; i_4 < 10; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    {
                        arr_16 [i_2] [i_2] [i_2] [2] [i_2] [i_2] |= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_6 [i_4 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_4 - 3])))) & (((/* implicit */int) min((arr_6 [i_4 + 3]), (arr_6 [i_4 + 2]))))));
                        arr_17 [i_2] [i_3] [i_4 + 2] [i_2] [i_3] [i_4] = ((/* implicit */int) arr_14 [i_5] [i_4] [i_2 + 3] [i_4] [i_2]);
                    }
                } 
            } 
        } 
        arr_18 [i_2 - 1] = var_11;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 12; i_7 += 2) 
            {
                for (signed char i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    {
                        arr_27 [i_2] [i_6] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((arr_14 [i_2] [6] [6] [i_2] [(short)12]), (((/* implicit */unsigned short) arr_11 [i_2 + 1] [i_2 + 2] [i_2]))))) ? (max((((/* implicit */long long int) var_8)), (arr_1 [i_2]))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_23 [i_6] [i_6] [i_7] [i_6]))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_5 [i_2 + 1]), (arr_5 [i_2 + 2])))))))));
                        var_21 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_5) : (max((arr_20 [i_2 - 1] [i_6] [3]), (((/* implicit */long long int) arr_19 [i_7]))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_8)))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 2) 
        {
            for (signed char i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                {
                    arr_34 [i_2] [i_9 + 1] [i_10] = ((/* implicit */unsigned int) (+(max((((/* implicit */int) arr_8 [i_9 - 1] [i_2 + 2])), (arr_22 [i_9 - 2])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_11 = 4; i_11 < 12; i_11 += 2) 
                    {
                        for (int i_12 = 0; i_12 < 13; i_12 += 2) 
                        {
                            {
                                var_22 = arr_25 [i_2 + 1] [i_9 + 1] [i_10] [i_11 + 1] [i_12];
                                arr_40 [i_2] [i_2] [i_10] [i_11] [(unsigned char)12] [i_9] = var_9;
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_16))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_9 + 1])) ? (arr_22 [i_9 - 1]) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_22 [i_9 - 2])) ? (arr_22 [i_9 - 1]) : (arr_22 [i_9 - 1]))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_9 - 2])) || (((/* implicit */_Bool) var_8)))))));
                    arr_41 [(unsigned short)3] [(unsigned short)3] [i_10] [(unsigned short)3] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_35 [12] [i_2 - 1] [i_2 + 2] [i_2 + 2])) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) var_15))))))));
                }
            } 
        } 
    }
    for (signed char i_13 = 2; i_13 < 10; i_13 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned short) var_15)), (arr_14 [i_13] [0] [i_13] [i_13] [i_13]))), (max((arr_30 [i_13] [i_13]), (((/* implicit */unsigned short) arr_29 [i_13] [i_13] [i_13 - 2])))))))));
        arr_45 [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_30 [i_13] [(unsigned short)2])) : (((/* implicit */int) arr_13 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13 - 1])))) * (((arr_24 [i_13] [i_13 + 3]) ? (((/* implicit */int) arr_13 [i_13] [i_13] [i_13 + 1] [i_13] [i_13 + 3] [i_13 + 3])) : (((/* implicit */int) var_3))))))) ? (((/* implicit */int) ((((/* implicit */int) arr_43 [i_13 - 2])) >= (arr_15 [i_13 - 1] [i_13 + 1] [i_13 + 2] [i_13 - 2] [i_13 + 3] [i_13 + 2])))) : (((/* implicit */int) arr_13 [i_13 - 1] [(_Bool)1] [i_13] [i_13] [i_13 - 1] [i_13]))));
        arr_46 [i_13 - 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((arr_39 [i_13] [i_13 - 1] [i_13] [i_13 - 1] [i_13 + 3] [(unsigned short)9]) ? (arr_10 [i_13] [i_13 - 1] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))))))));
    }
    for (signed char i_14 = 2; i_14 < 10; i_14 += 2) /* same iter space */
    {
        var_26 = arr_14 [i_14 - 2] [i_14] [i_14 - 2] [i_14] [i_14 - 2];
        arr_50 [i_14] [12] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_30 [i_14] [i_14])) << (((max((((/* implicit */int) arr_6 [i_14 - 1])), (arr_15 [i_14 + 3] [i_14] [i_14 + 2] [i_14 + 2] [i_14] [(short)0]))) - (143)))));
    }
}
