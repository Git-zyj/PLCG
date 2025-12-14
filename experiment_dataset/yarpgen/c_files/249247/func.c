/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249247
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
    var_16 |= ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) var_4))), (((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (signed char)-30))))) >> ((((~(((/* implicit */int) var_15)))) - (33)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_17 += ((/* implicit */short) var_13);
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_18 ^= ((/* implicit */unsigned short) max(((+(arr_0 [i_1] [i_1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)-26)) : (((/* implicit */int) (unsigned short)23680)))) : (((/* implicit */int) var_4)))))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1774236679)) ? (((/* implicit */int) (signed char)-5)) : (((/* implicit */int) (signed char)-68))));
        arr_7 [i_1] = ((/* implicit */unsigned short) (short)-14062);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_2)) + (2147483647))) << (((arr_11 [(unsigned char)15] [i_1] [6]) - (812598175772216873ULL)))))) + (((((/* implicit */_Bool) arr_11 [i_1] [15ULL] [i_2])) ? (arr_10 [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))))));
            arr_12 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)40)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))) : ((~(arr_8 [i_2] [i_2] [(short)8])))));
            /* LoopSeq 3 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_20 = ((/* implicit */unsigned short) (short)-26);
                var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (~(arr_11 [i_2 - 1] [i_2 + 1] [i_2 + 1]))))));
            }
            for (unsigned short i_4 = 1; i_4 < 15; i_4 += 4) /* same iter space */
            {
                arr_17 [i_2] [i_4] [i_4] [i_1] = (signed char)-40;
                arr_18 [i_2] [i_2] = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */int) (signed char)34)) * (((/* implicit */int) (short)-30961)))) : (((/* implicit */int) arr_15 [i_4 - 1] [i_2 + 2] [i_1] [i_1]))));
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 4) 
                {
                    for (long long int i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)45)))))));
                            arr_24 [i_1] [i_2] [10] [i_5] [i_6] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)0))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & ((-(((/* implicit */int) (signed char)-26)))))))));
                arr_28 [i_1] [i_2] [5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-17)) + (2147483647))) >> (((/* implicit */int) arr_26 [i_1] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) var_1)) ? (3301488816U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121)))))));
            }
        }
        for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) /* same iter space */
        {
            arr_32 [i_8] = ((/* implicit */signed char) max(((-(arr_11 [i_1] [i_1] [5LL]))), (((/* implicit */unsigned long long int) ((arr_5 [i_1]) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) arr_5 [i_1])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                {
                    for (int i_11 = 1; i_11 < 15; i_11 += 2) 
                    {
                        {
                            arr_41 [i_8] [i_8] [i_11] [(unsigned short)8] [i_11 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_39 [(unsigned short)12] [i_11 - 1] [i_11 - 1] [i_11 + 1] [i_1])) ? (((/* implicit */int) arr_39 [i_11] [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_1])) : (((/* implicit */int) var_8))));
                            arr_42 [i_1] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) arr_23 [i_11 + 1] [i_11] [i_11 - 1] [i_8] [i_11])) : (((((/* implicit */_Bool) (short)-14059)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25))) : (arr_10 [i_8])))));
                            var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_11 + 1] [i_11] [i_11 - 1] [i_11 + 1] [i_11 - 1] [i_11] [i_11])) ? (((/* implicit */long long int) var_12)) : (arr_19 [(short)14] [i_11] [i_11] [i_11 + 1] [(short)14])));
                        }
                    } 
                } 
                arr_43 [i_1] [i_8] [i_9] = ((/* implicit */unsigned short) arr_15 [i_9] [i_9] [i_8] [2U]);
                var_25 = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-10792)) ? (((/* implicit */int) (signed char)19)) : (((/* implicit */int) (unsigned short)64945)))) == (((/* implicit */int) (_Bool)0))));
            }
        }
        /* vectorizable */
        for (unsigned short i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
        {
            arr_46 [12U] = arr_15 [i_1] [i_1] [i_1] [i_12];
            var_26 = ((((/* implicit */int) var_0)) + (((int) var_8)));
        }
    }
}
