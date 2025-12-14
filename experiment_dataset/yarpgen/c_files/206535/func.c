/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206535
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
    /* LoopNest 3 */
    for (short i_0 = 4; i_0 < 22; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    var_18 |= ((((/* implicit */_Bool) max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1])))) ? ((~(arr_0 [i_0 + 1]))) : (arr_0 [i_0 - 4]));
                    arr_8 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) || (((/* implicit */_Bool) arr_1 [i_0 - 4]))))), (arr_5 [i_0 - 1] [i_1])));
                    /* LoopSeq 2 */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) min(((unsigned short)65535), (((/* implicit */unsigned short) ((arr_11 [i_0]) <= (((/* implicit */unsigned long long int) var_17)))))))), (min((arr_7 [i_3] [(unsigned short)16] [i_1]), (arr_7 [i_0 - 1] [i_0] [i_2])))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) max(((unsigned short)65535), ((unsigned short)0))))));
                        var_21 = ((/* implicit */int) min((2081759859837295070LL), (((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) var_5)) : (658054144)))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)56894))) / (-1LL)))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967295U))))))))));
                        arr_16 [i_4] [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_11 [i_2])));
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned short) var_1);
    var_24 = ((/* implicit */int) var_12);
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_0 [i_5]) & (((/* implicit */unsigned long long int) 628105705U))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10615))) : (max((min((arr_7 [i_5] [i_5] [i_5]), (((/* implicit */long long int) 628105707U)))), (((/* implicit */long long int) 649674939U))))));
        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) (+(arr_3 [i_5]))))));
        var_27 |= ((/* implicit */long long int) min((arr_6 [i_5] [i_5] [i_5]), (max((arr_6 [i_5] [i_5] [i_5]), (arr_6 [i_5] [i_5] [i_5])))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 4) 
        {
            for (unsigned int i_8 = 0; i_8 < 19; i_8 += 4) 
            {
                {
                    arr_28 [i_6] [i_6] [i_6] = (-2147483647 - 1);
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_6] [i_6] [i_6]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_7]))) : (var_1))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (int i_9 = 3; i_9 < 18; i_9 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 1; i_10 < 18; i_10 += 2) 
            {
                for (signed char i_11 = 1; i_11 < 16; i_11 += 2) 
                {
                    {
                        var_29 -= ((/* implicit */unsigned long long int) 0LL);
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(2081759859837295070LL)))) ? (((/* implicit */int) (unsigned short)10615)) : (((/* implicit */int) var_16))));
                        var_31 = ((/* implicit */unsigned int) max((max((arr_7 [i_9 - 2] [i_10 - 1] [i_11 - 1]), (arr_7 [i_9 + 1] [i_10 - 1] [i_11 - 1]))), (((((/* implicit */_Bool) arr_7 [i_9 - 2] [i_10 + 1] [i_11 + 1])) ? (arr_7 [i_9 - 3] [i_10 + 1] [i_11 - 1]) : (arr_7 [i_9 - 3] [i_10 - 1] [i_11 - 1])))));
                    }
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_34 [i_9 - 3] [i_9 - 1] [(signed char)12])) ? (arr_34 [i_9 - 3] [i_9 - 1] [2LL]) : (arr_34 [i_9 - 3] [i_9 - 1] [(unsigned short)18]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_37 [i_6]))) <= (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_6]))) / (arr_7 [16LL] [i_9] [16LL]))))))));
        }
        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_5 [i_6] [i_6])), (max((((/* implicit */unsigned int) arr_13 [i_6] [i_6])), (max((var_17), (((/* implicit */unsigned int) arr_27 [i_6] [(short)13] [(short)13])))))))))));
    }
}
