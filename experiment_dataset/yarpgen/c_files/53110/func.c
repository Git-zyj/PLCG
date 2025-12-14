/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53110
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */signed char) ((unsigned int) (_Bool)1));
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (((-(((/* implicit */int) (unsigned char)1)))) <= (((/* implicit */int) ((_Bool) (signed char)-95))))))) - (((long long int) max((((/* implicit */int) (signed char)95)), (-2108473440))))));
                    var_22 ^= ((/* implicit */short) var_3);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (+(((((/* implicit */int) (unsigned char)0)) & (((/* implicit */int) arr_0 [i_0])))))))));
            arr_9 [i_0] = ((/* implicit */unsigned short) (+(((var_19) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_3])))))));
        }
        /* vectorizable */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
        {
            arr_13 [i_4] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_0] [i_4]))));
            arr_14 [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 954343841))));
        }
        for (unsigned short i_5 = 1; i_5 < 9; i_5 += 3) 
        {
            var_24 |= ((/* implicit */unsigned int) (_Bool)1);
            arr_19 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (short)-29558)) : (-1243309243));
            var_25 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (signed char)-110)))) : (((/* implicit */int) var_17))));
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                arr_23 [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-62))));
                arr_24 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((2022655379U), (((/* implicit */unsigned int) arr_7 [i_5 - 1]))))) ? (((/* implicit */int) (short)12113)) : (((/* implicit */int) (unsigned short)6840))));
            }
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                arr_27 [i_0] [6LL] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [i_5 - 1] [i_7] [i_0]), (arr_4 [i_5 - 1] [i_5 - 1] [i_0])))) ? (((/* implicit */int) max((arr_4 [i_5 - 1] [i_5] [i_0]), (arr_4 [i_5 - 1] [i_5] [i_0])))) : ((-(((/* implicit */int) arr_4 [i_5 - 1] [i_5 - 1] [i_0]))))));
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    for (long long int i_9 = 1; i_9 < 8; i_9 += 3) 
                    {
                        {
                            var_26 = ((((/* implicit */_Bool) (~(var_2)))) ? (((((/* implicit */_Bool) arr_22 [i_0] [i_5] [(unsigned char)0] [3LL])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 2491971463U)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) : (arr_5 [i_0] [i_5 - 1] [i_7]))) : (((/* implicit */long long int) ((((/* implicit */int) arr_4 [i_0] [i_5 - 1] [i_0])) | (((/* implicit */int) arr_4 [i_0] [i_5 + 1] [i_0]))))));
                            arr_33 [i_0] [i_8] [i_8] [i_7] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) var_14)) | (4389121641575895401LL))) >> (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_28 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)116))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) : (var_14)))));
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                for (short i_11 = 0; i_11 < 10; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_42 [i_0] [i_5 + 1] [1LL] [i_11] [i_12] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (max((3929465669U), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))) ? (((arr_40 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_11]) * (arr_40 [i_5 + 1] [i_5 - 1] [i_5] [i_5 + 1] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_12] [i_5] [i_5]))));
                            var_27 = ((/* implicit */short) (-(((unsigned int) (+(var_18))))));
                            var_28 *= ((/* implicit */unsigned short) (+(((arr_38 [i_10] [i_11]) >> (((((((/* implicit */_Bool) 9223372036854775804LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (-4389121641575895401LL))) - (65510LL)))))));
                            var_29 *= ((/* implicit */short) ((max((((/* implicit */long long int) arr_35 [i_5 - 1] [i_5] [i_5 + 1] [i_5 + 1])), (arr_29 [i_5 - 1] [i_5 - 1] [i_5 - 1]))) < (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
                            var_30 = ((signed char) ((1540023777U) - (arr_8 [i_5 + 1])));
                        }
                    } 
                } 
            } 
        }
    }
    var_31 = ((/* implicit */short) (+(max((((/* implicit */long long int) (+(var_4)))), (9223372036854775804LL)))));
}
