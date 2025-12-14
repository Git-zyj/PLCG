/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222166
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
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    var_10 *= ((/* implicit */signed char) var_1);
                    arr_8 [i_0] = ((/* implicit */int) ((long long int) ((unsigned char) (((_Bool)1) && (((/* implicit */_Bool) arr_2 [i_2]))))));
                    var_11 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) (~(var_2))))) || (var_4)));
                    arr_9 [i_2] [i_0] [i_0] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
                    var_12 = ((/* implicit */int) (short)26372);
                }
            } 
        } 
        var_13 -= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (67108863)))))))));
    }
    for (signed char i_3 = 1; i_3 < 9; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_4 = 2; i_4 < 8; i_4 += 1) 
        {
            var_14 *= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3 + 1] [i_4 - 1]))))) % (((/* implicit */int) min((arr_14 [i_3 + 1] [i_4 + 2]), (((/* implicit */short) (signed char)69)))))));
            var_15 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) var_1))))) ? (arr_1 [i_3] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_3] [i_4])))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_4 [i_4] [4] [(short)6]))))))));
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28672)) ? ((~(var_1))) : (((/* implicit */int) ((short) (_Bool)1)))))) ? (max((((((/* implicit */unsigned long long int) arr_0 [(signed char)6])) ^ (var_7))), (((/* implicit */unsigned long long int) 1755203108)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_3 + 1])) ? (var_1) : (((/* implicit */int) arr_2 [i_3 + 1])))))));
            var_17 |= ((var_2) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-70)) ? (((/* implicit */int) arr_5 [i_4 + 1] [i_3])) : (((/* implicit */int) arr_5 [i_3] [i_4 + 2]))))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 7; i_5 += 3) 
        {
            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((long long int) arr_11 [i_3])))));
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */int) ((signed char) arr_4 [i_3] [(short)4] [(unsigned char)0]))) : ((-(((/* implicit */int) ((signed char) var_3))))))))));
        }
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            arr_24 [i_3] [i_6] = ((/* implicit */signed char) (-((-(var_7)))));
            var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)112))))) ? (-4966748237760390572LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(523264U)))))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_7 = 4; i_7 < 9; i_7 += 1) 
        {
            for (unsigned short i_8 = 0; i_8 < 10; i_8 += 1) 
            {
                {
                    arr_32 [(signed char)7] [i_8] [i_8] [i_8] = (~(arr_4 [i_3] [i_8] [i_8]));
                    arr_33 [i_3] [i_3] [i_7] [(short)6] &= ((/* implicit */signed char) ((_Bool) (signed char)-94));
                    var_21 ^= ((_Bool) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (-67108847)))) >= (((/* implicit */int) arr_22 [4U]))));
                }
            } 
        } 
    }
    for (signed char i_9 = 1; i_9 < 9; i_9 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-22519))))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */long long int) 2504080969U)) / (min((arr_1 [i_9] [i_9 - 1]), (((/* implicit */long long int) (short)16382))))))));
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            var_23 ^= ((/* implicit */unsigned char) arr_1 [i_10] [(signed char)6]);
            var_24 += ((/* implicit */short) var_7);
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) ((signed char) 2593362261U))) : (((/* implicit */int) (_Bool)1))));
            arr_41 [i_11] [i_11] = ((/* implicit */unsigned long long int) arr_18 [i_9] [i_9] [i_9 - 1]);
        }
        /* LoopSeq 1 */
        for (unsigned int i_12 = 4; i_12 < 9; i_12 += 3) 
        {
            arr_44 [i_9] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (short)252)))) ? (((/* implicit */int) arr_14 [i_9 - 1] [i_12 + 1])) : ((-(((/* implicit */int) (signed char)6))))));
            var_26 = ((/* implicit */unsigned char) arr_29 [8] [i_12] [i_12 - 2] [8]);
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_5 [i_14] [i_9])))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)252)) : (((/* implicit */int) arr_48 [i_14])))))) | (((/* implicit */int) arr_25 [i_9] [i_14]))));
                        var_28 *= ((/* implicit */signed char) arr_5 [i_12] [i_12]);
                        arr_51 [i_9] [i_12] [i_13] [i_14] [(unsigned short)8] [i_14] = ((/* implicit */short) ((_Bool) arr_37 [i_13] [i_12]));
                    }
                } 
            } 
        }
        var_29 = ((/* implicit */int) (unsigned char)13);
        var_30 = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (((/* implicit */int) min((arr_45 [(unsigned char)2]), (((/* implicit */unsigned char) var_0))))) : (arr_20 [i_9 + 1] [i_9 + 1] [i_9 + 1]))));
    }
    var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) var_6))));
    var_32 = var_2;
}
