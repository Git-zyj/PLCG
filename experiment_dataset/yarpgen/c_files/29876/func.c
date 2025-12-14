/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29876
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
    var_12 = ((/* implicit */long long int) var_11);
    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)192)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_14 += ((/* implicit */unsigned short) (~(arr_0 [i_0] [i_0])));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            arr_4 [i_0] [i_1] = ((((((/* implicit */_Bool) (unsigned char)38)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_5)))) + (((/* implicit */int) ((((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_1] [i_1])))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_1])))))))));
            /* LoopNest 3 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    for (signed char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        {
                            var_15 &= ((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_3])))));
                            var_16 += var_7;
                        }
                    } 
                } 
            } 
            var_17 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_0] [(unsigned char)0] [9]))));
            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0 - 2])) : (((/* implicit */int) arr_3 [i_0] [i_0 + 1] [i_0 - 1]))))))));
        }
        for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
        {
            arr_18 [i_5] [i_0] [i_0] |= ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_10 [i_5])))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_5])) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]))))))))) : (arr_8 [16U] [i_0] [i_0] [i_0] [i_0]));
            /* LoopSeq 2 */
            for (unsigned short i_6 = 1; i_6 < 17; i_6 += 2) 
            {
                arr_21 [i_6] [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) ((signed char) var_5));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 4) 
                    {
                        {
                            var_19 |= ((/* implicit */unsigned short) ((long long int) 240));
                            var_20 += ((/* implicit */long long int) (unsigned char)214);
                        }
                    } 
                } 
            }
            for (short i_9 = 4; i_9 < 18; i_9 += 4) 
            {
                var_21 = ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_5] [i_9] [i_9] [i_9])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_3 [i_9] [i_5] [i_9 + 1])))))) : (((((/* implicit */int) ((short) 9223372036854775807LL))) / (((/* implicit */int) (unsigned char)22)))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 3) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 3) 
                    {
                        {
                            arr_35 [i_0 - 2] [i_5] [i_11] [i_9 - 1] [i_10] [i_11] [i_11] = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) * (((((/* implicit */long long int) ((/* implicit */int) (short)32767))) / (var_3))))) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL))))) <= (((/* implicit */int) ((unsigned short) (_Bool)1)))))))));
                            var_22 &= ((/* implicit */unsigned int) min((arr_8 [i_0] [i_11] [i_9 - 3] [i_10] [i_11]), (((/* implicit */long long int) (+(var_2))))));
                            var_23 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_9 + 1])) ? (arr_0 [i_0 - 1] [i_9 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)32760)))))));
                            var_24 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)32767))))), (arr_15 [i_0]))) | (((/* implicit */unsigned int) max((min((arr_23 [i_0] [i_0] [i_0 - 2] [i_0]), (((/* implicit */int) (unsigned char)87)))), (((/* implicit */int) arr_28 [i_0 + 1] [i_9 - 2] [i_0 + 1] [i_11])))))));
                            var_25 = ((/* implicit */unsigned char) (+(((arr_25 [7] [i_10] [i_9 - 1]) / (arr_31 [i_0 + 1] [i_9])))));
                        }
                    } 
                } 
            }
            arr_36 [i_5] = ((/* implicit */_Bool) ((18446744073709551615ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) min((var_9), (arr_28 [i_0 - 1] [i_0 - 2] [i_5] [(unsigned short)6])))) <= (min((((/* implicit */int) var_7)), (arr_23 [(short)13] [9LL] [i_5] [i_5])))))))));
            arr_37 [i_0 - 2] [i_0] [(signed char)12] = ((/* implicit */unsigned char) (-2147483647 - 1));
            arr_38 [i_0] |= ((/* implicit */short) max((arr_34 [i_0] [i_0 - 1] [4U]), (((((/* implicit */int) var_10)) / (-269933841)))));
        }
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) 
        {
            for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                {
                    arr_45 [i_13] [i_12] [i_0 - 1] [i_0 + 1] = arr_34 [i_12] [i_12] [i_12];
                    /* LoopSeq 2 */
                    for (unsigned int i_14 = 3; i_14 < 18; i_14 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_13] [i_14 - 3])) / (((/* implicit */int) arr_2 [i_13] [i_14 - 1])))) * (((/* implicit */int) arr_2 [i_13] [i_14 - 2])))))));
                        var_27 += ((/* implicit */short) arr_34 [i_0 - 2] [i_12] [i_12]);
                        arr_50 [i_0] [i_0] [i_13] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), (((int) arr_43 [(short)14]))))) || (((/* implicit */_Bool) var_4))));
                    }
                    for (short i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        arr_55 [i_15] [i_15] [i_13] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_29 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))) ? (arr_51 [i_0] [i_12] [i_13] [i_13] [i_15] [i_15]) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0]))) + (((arr_40 [i_15]) / (((/* implicit */unsigned int) 902674454)))))))));
                        arr_56 [i_15] [i_15] [i_0] [i_15] [i_0] = ((/* implicit */_Bool) 497644190U);
                    }
                    var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (~((~(arr_24 [i_0 - 2] [i_0 + 1] [i_13] [i_0 + 1]))))))));
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_13])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))), (((((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_32 [i_0] [i_0 - 1] [i_0 - 2] [i_0 - 2] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_10)))))))) ? (((/* implicit */long long int) ((arr_40 [i_0 + 1]) * (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) : (min((((/* implicit */long long int) max((var_6), (((/* implicit */signed char) arr_33 [i_0] [i_12] [i_13]))))), (((((/* implicit */_Bool) arr_16 [i_0] [4LL])) ? (var_1) : (arr_30 [i_0 - 1] [i_0 - 2] [i_0 - 1] [i_12] [i_13])))))));
                    arr_57 [i_12] [i_13] &= ((/* implicit */int) var_0);
                }
            } 
        } 
    }
    var_30 = ((/* implicit */int) min((((/* implicit */long long int) var_2)), (var_3)));
    /* LoopSeq 2 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_31 = ((/* implicit */unsigned char) arr_12 [i_16] [i_16]);
        arr_61 [i_16] = ((/* implicit */unsigned char) min((((((/* implicit */int) arr_43 [i_16])) * (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)-44)) : (((/* implicit */int) var_9)))))), ((+((-(((/* implicit */int) var_8))))))));
        arr_62 [i_16] = ((/* implicit */unsigned short) arr_0 [13U] [i_16]);
    }
    for (unsigned short i_17 = 0; i_17 < 16; i_17 += 1) 
    {
        var_32 = ((/* implicit */short) (~((~(arr_30 [(unsigned char)11] [i_17] [i_17] [i_17] [i_17])))));
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) arr_51 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))));
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((var_1) / (((/* implicit */long long int) 3903142181U)))))));
    }
}
