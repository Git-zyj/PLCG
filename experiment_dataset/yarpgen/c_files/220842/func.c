/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220842
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((signed char) var_12));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        arr_11 [i_3] = ((/* implicit */unsigned char) ((var_2) != (((/* implicit */int) var_0))));
                        arr_12 [i_3] [(signed char)8] [i_2 + 2] [(signed char)8] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_2] [i_2 + 1] [i_2])) ? (((((/* implicit */_Bool) arr_6 [i_1 + 2] [i_2 + 2] [i_2])) ? (arr_6 [i_0] [i_2 + 2] [i_1]) : (arr_6 [i_2] [i_2 + 2] [i_2]))) : (arr_6 [i_0] [i_2 + 2] [i_2])));
                        var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)6)) <= (((/* implicit */int) (signed char)12)))) ? (((/* implicit */int) arr_2 [i_1 + 2] [i_2 + 2])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_0] [i_3] [i_3] [i_0])) : (((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((((/* implicit */int) var_10)) == (((/* implicit */int) max(((signed char)2), ((signed char)-4))))))) : (((/* implicit */int) arr_8 [i_0] [i_1 + 1] [i_2 - 1] [i_3]))));
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) var_4))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) arr_5 [i_4] [i_2 - 2] [i_1 - 1] [i_0]);
                        arr_17 [i_0] [i_1 + 1] [i_2] [i_4] = ((/* implicit */signed char) ((((((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_0])) <= (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(short)1])) || (((/* implicit */_Bool) var_12))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [13LL] [i_0] [i_1 + 2] [i_2 - 2] [i_2]))))) : (((/* implicit */int) arr_4 [i_2] [i_0] [i_0]))));
                    }
                    for (unsigned int i_5 = 0; i_5 < 17; i_5 += 1) /* same iter space */
                    {
                        var_17 = ((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_13 [i_0] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_5]))))) ? (((/* implicit */int) arr_4 [i_0] [i_2 - 1] [i_5])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_6 [i_0] [i_1] [i_2 - 2]))))))));
                        /* LoopSeq 3 */
                        for (short i_6 = 0; i_6 < 17; i_6 += 3) 
                        {
                            arr_24 [i_0] [i_1] = ((/* implicit */_Bool) ((var_10) ? (((((/* implicit */int) arr_20 [i_1 + 1] [i_1 - 1] [i_2 + 2] [i_2] [i_2 + 1] [i_5])) - (((/* implicit */int) arr_20 [i_0] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_2 - 1] [i_6])))) : (((/* implicit */int) arr_9 [i_0] [2U] [i_0] [i_0]))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) (!(arr_4 [i_2] [i_1 - 1] [5U])))) : (((int) arr_3 [11U]))))) ? (((((/* implicit */_Bool) arr_9 [i_1] [i_2] [i_0] [i_6])) ? (((/* implicit */unsigned int) var_2)) : (((unsigned int) arr_14 [i_0] [i_1 + 2] [(unsigned char)6] [i_5] [i_6] [16])))) : (((/* implicit */unsigned int) ((((/* implicit */int) min(((short)1), (((/* implicit */short) (_Bool)1))))) << (((arr_10 [i_2 + 2] [i_2 + 2] [i_0] [i_2 - 2] [2LL]) - (388981943))))))))));
                        }
                        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            arr_27 [i_0] [i_1 + 2] [i_1] [i_2 - 2] [i_5] [1U] = ((/* implicit */signed char) ((_Bool) (unsigned char)247));
                            var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_25 [i_0] [(short)2] [i_2 - 2] [i_2] [11] [i_7])) ? (((/* implicit */long long int) ((((arr_10 [i_7] [i_5] [i_7] [i_1] [i_0]) <= (((/* implicit */int) var_3)))) ? (((int) arr_6 [i_7] [i_5] [(_Bool)1])) : (((/* implicit */int) arr_8 [i_2 - 1] [i_1 - 1] [i_1 - 1] [i_1]))))) : (((((/* implicit */_Bool) (+(var_12)))) ? (arr_26 [7] [i_1 + 2] [i_1 + 2] [i_2 + 2] [i_5] [i_7] [i_1 + 2]) : (var_12)))));
                            var_21 = ((/* implicit */short) ((int) (signed char)-1));
                            var_22 |= ((/* implicit */signed char) (~(((/* implicit */int) arr_18 [i_0] [i_1 + 2] [i_0] [i_5]))));
                        }
                        for (unsigned long long int i_8 = 1; i_8 < 16; i_8 += 1) 
                        {
                            arr_30 [i_0] [i_0] [i_2 - 1] [i_5] [(unsigned short)15] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_22 [i_1 + 2] [i_8 - 1] [i_5] [i_5] [i_1 + 2])) - (((/* implicit */int) min((arr_1 [i_1 + 1] [i_1 + 2]), (((/* implicit */unsigned short) var_8)))))));
                            var_23 = ((/* implicit */int) max((var_23), (((((((/* implicit */_Bool) arr_28 [i_0] [i_1 - 1] [i_2 - 2] [i_0] [(signed char)11] [i_1 + 2])) ? (((/* implicit */int) arr_18 [i_0] [i_1] [i_2 + 1] [i_1 - 1])) : (arr_28 [(short)7] [i_5] [i_2] [i_5] [i_5] [i_0]))) | (((arr_10 [i_8 - 1] [i_1 - 1] [i_0] [i_1 - 1] [i_0]) | (((/* implicit */int) arr_14 [i_0] [i_8 - 1] [i_2 + 2] [i_8 - 1] [i_8] [i_2 - 2]))))))));
                            var_24 = ((/* implicit */signed char) ((_Bool) ((long long int) ((arr_15 [i_0]) > (arr_15 [i_0])))));
                            var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_23 [i_5] [i_1 - 1] [i_1 + 2] [i_2 - 1] [i_8 - 1])))) ? (arr_23 [i_0] [i_1 + 2] [i_1 + 2] [i_2 - 1] [i_8 - 1]) : (((arr_23 [i_0] [i_1 - 1] [i_1 + 2] [i_2 - 2] [i_8 - 1]) ^ (arr_23 [(unsigned short)10] [16] [i_1 - 1] [i_2 + 1] [i_8 + 1])))));
                        }
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_2 - 2] [i_1] [i_1 - 1])) || (((/* implicit */_Bool) var_3))))))));
                    }
                    arr_31 [i_0] [i_0] [i_1 + 1] [i_0] = ((/* implicit */_Bool) ((unsigned int) arr_1 [16] [i_2 - 1]));
                }
            } 
        } 
    }
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 2596631063U)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-4))))))) ? (((((/* implicit */int) arr_9 [i_9] [14ULL] [(signed char)8] [i_9 - 1])) + (((/* implicit */int) arr_9 [i_9] [i_9] [(signed char)8] [i_9])))) : (((/* implicit */int) ((((((/* implicit */unsigned long long int) arr_10 [i_9] [i_9 - 1] [(unsigned char)4] [i_9] [(short)0])) - (arr_6 [i_9] [i_9] [i_9]))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (arr_0 [i_9 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(unsigned short)5] [i_9 - 1] [i_9] [i_9 - 1] [i_9] [i_9 - 1])))))))))));
        /* LoopNest 3 */
        for (signed char i_10 = 1; i_10 < 12; i_10 += 3) 
        {
            for (unsigned short i_11 = 0; i_11 < 14; i_11 += 3) 
            {
                for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    {
                        var_28 ^= var_12;
                        arr_43 [i_12] [i_10] [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) arr_18 [i_9 - 1] [i_10 + 2] [i_11] [i_9 - 1]))));
                        var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) max((((arr_32 [i_9 - 1]) ? (((/* implicit */int) arr_32 [i_9 - 1])) : (((/* implicit */int) arr_32 [i_9 - 1])))), (((((/* implicit */int) arr_32 [i_9 - 1])) - (((/* implicit */int) arr_32 [i_9 - 1])))))))));
                    }
                } 
            } 
        } 
    }
    var_30 = ((/* implicit */unsigned char) var_3);
    /* LoopSeq 1 */
    for (unsigned char i_13 = 1; i_13 < 7; i_13 += 4) 
    {
        arr_46 [i_13] = ((/* implicit */unsigned short) ((signed char) max((var_12), (((/* implicit */long long int) arr_33 [i_13])))));
        arr_47 [i_13 + 1] [(_Bool)1] |= ((/* implicit */short) min((((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (arr_15 [i_13]) : (((/* implicit */long long int) var_11)))))), (var_2)));
    }
    var_31 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? ((+(var_7))) : (((/* implicit */unsigned int) var_2))))));
}
