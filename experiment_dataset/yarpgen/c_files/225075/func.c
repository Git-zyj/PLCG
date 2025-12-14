/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225075
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
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_1] = ((/* implicit */short) (-(((/* implicit */int) ((var_10) == (((/* implicit */long long int) var_1)))))));
            var_15 = ((/* implicit */signed char) arr_0 [i_0]);
            var_16 = ((/* implicit */short) ((((/* implicit */int) var_13)) < (((/* implicit */int) arr_1 [i_0]))));
        }
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (int i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            arr_9 [(unsigned short)7] [i_0] [i_0] = ((/* implicit */unsigned short) (-(arr_7 [i_0] [i_2])));
            arr_10 [i_0] [4LL] [(unsigned char)6] = ((/* implicit */unsigned short) var_14);
            var_18 = ((/* implicit */unsigned short) ((unsigned int) arr_5 [(_Bool)1] [i_2] [i_2]));
        }
        arr_11 [i_0] = ((/* implicit */signed char) ((arr_3 [i_0] [i_0]) == (arr_3 [i_0] [i_0])));
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
    {
        arr_14 [i_3] = ((/* implicit */short) (signed char)3);
        arr_15 [i_3] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_13 [i_3])) ? (arr_13 [i_3]) : (((/* implicit */int) var_5)))) > ((((_Bool)1) ? (-1) : (((/* implicit */int) (_Bool)1))))));
    }
    for (signed char i_4 = 0; i_4 < 15; i_4 += 2) /* same iter space */
    {
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned short) arr_16 [(_Bool)1]);
        var_19 = (((~(((/* implicit */int) var_7)))) & (((((/* implicit */int) arr_17 [i_4])) & (((/* implicit */int) arr_17 [i_4])))));
        /* LoopNest 3 */
        for (short i_5 = 0; i_5 < 15; i_5 += 1) 
        {
            for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
            {
                for (signed char i_7 = 1; i_7 < 14; i_7 += 1) 
                {
                    {
                        arr_27 [i_4] [i_4] [i_6] [i_6] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) arr_21 [i_7 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1))) : (var_11))));
                        arr_28 [i_4] [i_4] [13] [i_7] [i_4] [(signed char)14] = ((/* implicit */unsigned char) (~(((((arr_13 [i_7 + 1]) + (2147483647))) >> (((arr_13 [i_7 + 1]) + (192505582)))))));
                        var_20 = ((/* implicit */long long int) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_25 [i_6] [i_7 - 1] [(unsigned char)2] [i_6] [i_6] [i_5])), (var_0)))) - (((((/* implicit */int) arr_25 [(unsigned char)3] [i_7 + 1] [11] [11] [i_5] [0])) % (((/* implicit */int) (unsigned char)236))))));
                    }
                } 
            } 
        } 
        arr_29 [i_4] = ((/* implicit */short) max((((arr_25 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_4)))), (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))));
    }
    /* vectorizable */
    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_9 = 0; i_9 < 15; i_9 += 2) 
        {
            for (short i_10 = 0; i_10 < 15; i_10 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        var_21 = ((/* implicit */short) ((arr_16 [i_8]) / (((/* implicit */long long int) var_1))));
                        var_22 = ((/* implicit */signed char) ((unsigned short) arr_21 [12LL]));
                    }
                    for (short i_12 = 0; i_12 < 15; i_12 += 1) 
                    {
                        var_23 = ((/* implicit */long long int) ((arr_39 [i_8] [i_9] [i_10] [i_12]) - (134217727ULL)));
                        arr_40 [i_12] [(short)13] [i_12] [i_12] [i_12] = ((/* implicit */signed char) var_9);
                        arr_41 [i_12] = ((/* implicit */unsigned int) var_7);
                    }
                    arr_42 [11U] [(_Bool)1] [i_9] [i_8] = ((/* implicit */signed char) arr_35 [(signed char)12] [(unsigned short)12] [(signed char)12] [(signed char)12]);
                }
            } 
        } 
        arr_43 [(signed char)14] = ((/* implicit */_Bool) var_2);
        /* LoopSeq 1 */
        for (short i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            var_24 = ((/* implicit */unsigned int) (~(arr_32 [i_8])));
            arr_46 [i_8] [i_8] = ((/* implicit */unsigned char) var_13);
            arr_47 [1] [1] [(_Bool)1] = ((/* implicit */unsigned char) arr_44 [i_8] [i_13]);
        }
    }
    var_25 = ((/* implicit */int) var_8);
}
