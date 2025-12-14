/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235200
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_16 &= ((/* implicit */unsigned char) (((-(((/* implicit */int) (signed char)65)))) > (((/* implicit */int) (unsigned char)138))));
        var_17 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) ((unsigned short) (unsigned char)138)))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((((/* implicit */_Bool) -1827200172)) ? (((/* implicit */int) arr_9 [i_0] [(unsigned short)15] [(unsigned short)15] [(unsigned short)15])) : (((/* implicit */int) (unsigned char)63)))) <= (((/* implicit */int) arr_10 [i_0] [i_0] [i_1 - 2] [i_2 + 2] [i_2 + 1])))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned short) (unsigned char)64)))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 2147483641)) ? (2147483641) : (((((/* implicit */_Bool) 16386628586576630502ULL)) ? (((/* implicit */int) arr_15 [i_2] [i_0] [i_2] [i_4])) : (((/* implicit */int) arr_9 [i_4] [i_2] [i_0] [i_0])))))))));
                        var_22 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [(_Bool)1] [(_Bool)1])))))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))));
    }
    for (unsigned short i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_24 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) 1827200184))))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (!(((/* implicit */_Bool) -2147483641)))))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 2) 
        {
            for (int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                {
                    var_26 = ((/* implicit */int) ((unsigned long long int) arr_21 [i_5]));
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)15915)) ? (((((/* implicit */int) arr_3 [i_6])) + (((/* implicit */int) arr_3 [i_5])))) : (((/* implicit */int) min((arr_4 [i_6]), (arr_4 [i_5]))))));
                }
            } 
        } 
        var_28 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-15)) ? (((/* implicit */int) (unsigned char)192)) : (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_13 [i_5] [(unsigned short)8] [i_5] [i_5])))))) ^ (((/* implicit */int) (unsigned short)31247))));
    }
    /* vectorizable */
    for (short i_8 = 4; i_8 < 12; i_8 += 2) /* same iter space */
    {
        var_29 *= ((unsigned char) ((((/* implicit */_Bool) arr_18 [i_8])) ? (((/* implicit */int) (short)15891)) : (((/* implicit */int) (unsigned short)12))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_8] [i_8 + 1])) ? (((/* implicit */int) arr_2 [i_8] [i_8 - 4])) : (((/* implicit */int) (unsigned char)201))));
    }
    for (short i_9 = 4; i_9 < 12; i_9 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 13; i_10 += 2) 
        {
            for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
            {
                {
                    var_31 |= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((int) arr_25 [i_9])), (((/* implicit */int) ((((/* implicit */int) (unsigned char)56)) > (((/* implicit */int) arr_31 [i_10])))))))), (min((((/* implicit */unsigned long long int) var_1)), (((unsigned long long int) arr_6 [i_9] [i_9] [i_9] [i_9]))))));
                    var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_18 [i_9 - 1]))))) ? (-2147483646) : (((/* implicit */int) min((arr_13 [i_9] [i_9] [i_9 - 3] [i_9 - 3]), (min(((unsigned char)42), (((/* implicit */unsigned char) (_Bool)0)))))))));
                    var_33 = ((/* implicit */_Bool) max((var_33), ((!(((/* implicit */_Bool) -1))))));
                }
            } 
        } 
        var_34 = ((/* implicit */signed char) (unsigned char)208);
        arr_36 [i_9 - 3] = ((/* implicit */unsigned long long int) arr_21 [i_9 - 1]);
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
        {
            for (unsigned char i_13 = 1; i_13 < 9; i_13 += 2) 
            {
                {
                    var_35 += ((/* implicit */signed char) var_11);
                    var_36 = ((/* implicit */unsigned short) (+(((unsigned int) arr_38 [i_9 - 1]))));
                    arr_41 [(unsigned short)2] [(unsigned short)2] [i_13] = ((/* implicit */unsigned short) (~((+(((/* implicit */int) (unsigned char)179))))));
                }
            } 
        } 
    }
    var_37 *= ((/* implicit */signed char) min((((unsigned char) ((((/* implicit */int) (unsigned char)130)) ^ (((/* implicit */int) var_6))))), (((/* implicit */unsigned char) var_8))));
    var_38 = (~(((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (max((((/* implicit */unsigned char) var_13)), (var_0)))))));
}
