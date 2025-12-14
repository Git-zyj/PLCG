/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40237
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
    var_10 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [14ULL] &= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((2336185138U) >> (((((/* implicit */int) var_4)) + (26257)))))) | (((arr_0 [14ULL]) >> (((arr_1 [i_0]) - (10344312224487374719ULL))))))) | (((/* implicit */unsigned long long int) 4294967295U))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned int) (((!(((/* implicit */_Bool) var_1)))) ? (arr_0 [i_0]) : (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) 4294967295U)))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) var_3)))));
        arr_5 [i_0] = (unsigned char)162;
    }
    /* vectorizable */
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 24; i_2 += 4) 
        {
            arr_12 [i_1 + 1] [i_2] [i_1] = ((/* implicit */_Bool) ((arr_6 [i_1]) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1])))))));
            arr_13 [i_1 + 1] [i_1 - 1] [i_2] &= ((/* implicit */unsigned short) (~(((/* implicit */int) var_6))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            arr_16 [i_1] [i_1] = (!(arr_7 [i_1]));
            var_11 *= ((/* implicit */short) ((arr_6 [i_1 - 1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_3])))));
        }
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
        {
            for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
            {
                {
                    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_3))));
                    var_13 ^= (-(arr_6 [i_1]));
                    arr_22 [i_1] [i_1] [i_1 + 2] [i_1] = ((_Bool) arr_6 [i_1 + 2]);
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
    {
        var_14 -= ((/* implicit */unsigned char) min((max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -606743245)) : (4579329227481609234ULL))), (((((/* implicit */_Bool) var_2)) ? (arr_18 [(unsigned short)18] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-90)) + (2147483647))) >> (((((/* implicit */int) arr_24 [i_6] [i_6])) - (14666)))))) | (arr_18 [i_6] [i_6])))));
        arr_27 [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_6])))))));
        arr_28 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned int) 606743244)) : (((((/* implicit */_Bool) var_2)) ? (2336185122U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_6] [i_6])))))));
        arr_29 [i_6] = ((/* implicit */unsigned char) var_5);
    }
    var_15 = ((/* implicit */unsigned char) var_8);
}
