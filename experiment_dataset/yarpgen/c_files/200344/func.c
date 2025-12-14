/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200344
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
    for (unsigned char i_0 = 3; i_0 < 8; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 6; i_2 += 3) 
            {
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 1])) < ((-(((/* implicit */int) arr_7 [i_0 - 2] [i_0 + 1]))))));
                    arr_11 [i_2] [9U] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0 + 2])) ? (((((arr_8 [i_2 + 1] [i_1] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(_Bool)1] [i_1]))))) : (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_2 [(short)7] [(unsigned short)1])))))))));
                }
            } 
        } 
        arr_12 [i_0] |= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_0 + 2] [i_0 - 1]))))), ((-(arr_0 [i_0 + 2] [i_0 + 1])))));
    }
    for (int i_3 = 0; i_3 < 13; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) arr_13 [i_3]);
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 13; i_4 += 1) /* same iter space */
        {
            arr_19 [6LL] [i_4] [i_4] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-17433))) > (-1152921504606846976LL)))) == ((-(((/* implicit */int) var_11)))))))));
            arr_20 [i_4] [3] [i_4] = ((/* implicit */unsigned short) (~(arr_16 [i_4])));
        }
        for (int i_5 = 0; i_5 < 13; i_5 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 13; i_7 += 4) 
                {
                    {
                        arr_30 [i_3] [i_5] [i_5] [i_3] |= ((/* implicit */unsigned short) (((+(((/* implicit */int) (short)17432)))) & (min((((/* implicit */int) arr_26 [i_5])), (((arr_15 [(signed char)10] [(signed char)10]) ? (((/* implicit */int) arr_23 [i_6] [(signed char)2])) : (((/* implicit */int) (short)17432))))))));
                        var_18 += ((/* implicit */signed char) ((((/* implicit */int) var_11)) + (((((/* implicit */_Bool) arr_25 [i_7] [i_5] [i_3])) ? (((/* implicit */int) arr_25 [i_3] [i_5] [i_5])) : (((/* implicit */int) arr_25 [i_3] [i_6] [i_7]))))));
                        var_19 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)24576))))) ? (((/* implicit */int) ((signed char) arr_28 [i_7]))) : (((/* implicit */int) ((755247757U) < (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-110))))))));
                    }
                } 
            } 
            arr_31 [i_5] = var_8;
        }
        /* LoopNest 3 */
        for (short i_8 = 2; i_8 < 9; i_8 += 1) 
        {
            for (signed char i_9 = 3; i_9 < 10; i_9 += 1) 
            {
                for (int i_10 = 4; i_10 < 10; i_10 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_32 [i_3] [i_3])) || (((/* implicit */_Bool) arr_24 [i_10 - 1] [i_9 - 1] [i_8 + 2])))), (((((/* implicit */_Bool) arr_32 [i_3] [i_3])) || (((/* implicit */_Bool) arr_34 [i_10 - 4] [i_9 + 2] [i_8 + 4])))))))));
                        var_21 = ((/* implicit */signed char) arr_25 [i_3] [i_3] [i_10]);
                        arr_39 [i_3] [i_3] [i_3] [i_3] [i_3] [i_8] = arr_38 [i_8] [i_10] [i_10] [i_9] [i_8] [i_8];
                    }
                } 
            } 
        } 
        var_22 -= ((/* implicit */unsigned char) (((+(((3178053917437999333LL) >> (((arr_17 [i_3]) + (8553429412241040638LL))))))) * (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_17 [i_3]))) >> (((arr_29 [i_3] [i_3]) >> (((((/* implicit */int) arr_34 [i_3] [i_3] [i_3])) - (60785))))))))));
        /* LoopNest 2 */
        for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            for (short i_12 = 0; i_12 < 13; i_12 += 1) 
            {
                {
                    var_23 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [4LL] [i_3]))) & (((unsigned long long int) 1284017513))));
                    var_24 -= ((unsigned char) ((((/* implicit */_Bool) (short)17432)) ? (((/* implicit */int) (signed char)63)) : (-1261155414)));
                }
            } 
        } 
    }
    for (int i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
    {
        var_25 = arr_45 [i_13] [i_13];
        /* LoopNest 3 */
        for (unsigned short i_14 = 1; i_14 < 11; i_14 += 3) 
        {
            for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    {
                        arr_58 [i_13] [i_15] [i_13] [i_15] [i_15] [i_13] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_16] [i_15] [i_13])) * (((/* implicit */int) arr_13 [(unsigned char)10])))))));
                        arr_59 [i_15] [i_15] = ((_Bool) (+(((/* implicit */int) arr_25 [i_14 + 1] [i_14 - 1] [i_14 + 1]))));
                    }
                } 
            } 
        } 
    }
    var_26 |= ((/* implicit */unsigned short) (+(var_14)));
    var_27 = min((var_15), (((/* implicit */unsigned char) var_13)));
    var_28 = ((/* implicit */signed char) (-(var_7)));
    var_29 = ((/* implicit */unsigned char) var_1);
}
