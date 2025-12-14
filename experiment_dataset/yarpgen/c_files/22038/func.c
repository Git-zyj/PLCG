/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22038
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
    var_12 = var_3;
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */signed char) ((arr_0 [i_0 + 1]) > (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((arr_0 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)223), (((/* implicit */unsigned char) var_10))))))))));
        arr_3 [i_0] |= max((((/* implicit */long long int) (!(var_7)))), (((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) * (arr_0 [i_0]))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 4; i_1 < 16; i_1 += 1) 
        {
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 - 1] [i_0 + 1]))));
            var_14 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_4 [i_0] [i_0 + 1])) < (((/* implicit */int) arr_4 [i_0] [i_0 + 1]))));
        }
        for (unsigned short i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
        {
            var_15 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_8 [i_2 + 3] [i_0 + 1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_0 + 1])) && (((/* implicit */_Bool) arr_8 [i_2 - 2] [i_0 + 1]))))) : (((/* implicit */int) max((var_11), ((unsigned short)32095))))));
            var_16 = ((/* implicit */unsigned short) arr_9 [i_0] [i_2] [i_0]);
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                for (long long int i_4 = 2; i_4 < 13; i_4 += 3) 
                {
                    {
                        arr_14 [i_3] [i_4] = ((/* implicit */int) var_5);
                        arr_15 [i_0] = ((/* implicit */unsigned short) var_4);
                        arr_16 [i_0] [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_1)), ((~((-(arr_7 [i_0] [i_0])))))));
                    }
                } 
            } 
            var_17 ^= ((/* implicit */long long int) ((unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)13))) & (arr_0 [i_2]))), (((/* implicit */long long int) (+((-2147483647 - 1))))))));
        }
        /* vectorizable */
        for (unsigned short i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */signed char) (_Bool)1);
            /* LoopSeq 3 */
            for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    arr_27 [i_6] [i_5] [i_6 - 1] [i_7] = ((/* implicit */short) arr_12 [i_5 + 1] [i_5 + 1] [i_6 - 1] [i_0]);
                    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) arr_1 [i_0 - 1])))))));
                }
                for (int i_8 = 3; i_8 < 15; i_8 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 14; i_9 += 1) 
                    {
                        arr_33 [i_9] [i_6] [i_6 - 1] [i_6] [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_5] [i_6 - 1] [i_9 + 3]);
                        var_21 ^= ((/* implicit */unsigned short) (_Bool)1);
                    }
                    arr_34 [i_0 + 1] [i_5] [i_5] [i_6] [i_8 + 2] [i_6] |= ((/* implicit */signed char) arr_6 [i_6] [i_6 - 1]);
                }
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 17; i_10 += 3) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 2) 
                    {
                        {
                            var_22 = ((/* implicit */int) ((_Bool) arr_7 [i_6 - 1] [i_0 - 1]));
                            arr_39 [i_0] [i_5 + 2] [i_6 - 1] [i_6] = ((/* implicit */int) var_3);
                            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1]))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5 + 2] [i_5 - 1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_6 - 1] [i_6] [i_6 - 1] [i_6] [i_6] [i_0 + 1]))) : (arr_11 [i_5 + 2] [i_5 + 3] [i_5]))))));
            }
            for (signed char i_12 = 0; i_12 < 17; i_12 += 3) 
            {
                arr_43 [i_0] [i_5] [i_12] = ((/* implicit */unsigned long long int) arr_35 [i_12] [i_5 + 1] [i_5 - 1] [i_5] [i_0]);
                arr_44 [i_12] [i_5] [i_12] = ((/* implicit */signed char) var_6);
                /* LoopSeq 1 */
                for (int i_13 = 2; i_13 < 15; i_13 += 1) 
                {
                    var_25 -= ((((/* implicit */_Bool) arr_9 [i_13 - 1] [i_13 - 1] [i_13 - 1])) ? (((/* implicit */int) arr_32 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) ((_Bool) arr_21 [i_12]))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_5 + 3])) : (((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_5 + 3]))));
                    arr_47 [i_0] [i_12] [i_12] [i_13 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_17 [i_13 - 1] [i_13 - 1] [i_13 + 2])) : (((((arr_37 [i_13] [i_12] [i_12] [i_5] [i_0]) + (2147483647))) << (((var_0) - (2348663498U)))))));
                }
            }
            for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                var_27 = ((/* implicit */unsigned int) max((var_27), (arr_12 [i_0] [i_5] [i_14] [i_5])));
                arr_51 [i_5 + 3] [i_5 - 1] [i_5 + 3] [i_5 - 2] = ((/* implicit */unsigned char) ((arr_26 [i_14] [i_0] [i_5] [i_0]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_24 [i_0 - 1] [i_14] [i_0 - 1] [i_0])) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) (unsigned short)32095)) ? (arr_46 [i_0] [i_14] [i_14] [i_5 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_0 - 1] [i_0] [i_0 - 1] [i_0 + 1])))))));
            }
        }
        arr_52 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)198))));
    }
    /* LoopNest 2 */
    for (int i_15 = 2; i_15 < 18; i_15 += 1) 
    {
        for (signed char i_16 = 0; i_16 < 22; i_16 += 1) 
        {
            {
                arr_59 [i_15 + 1] [i_15 + 1] [i_15] = ((/* implicit */short) var_4);
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) var_0))))))));
            }
        } 
    } 
}
