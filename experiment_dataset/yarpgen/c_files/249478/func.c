/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249478
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
    var_20 = ((/* implicit */int) max((var_5), (var_7)));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 3) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) <= (arr_1 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */int) var_14);
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (-((+((-(((/* implicit */int) arr_0 [6])))))))))));
        var_23 ^= ((((((/* implicit */_Bool) var_18)) ? ((+(((/* implicit */int) (unsigned char)5)))) : ((~(((/* implicit */int) var_19)))))) % ((-(758251756))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 18; i_1 += 3) /* same iter space */
    {
        var_24 -= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [12LL]))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    arr_11 [(unsigned short)14] [i_3] [i_3] [i_3] &= ((/* implicit */signed char) ((((/* implicit */int) var_15)) <= (arr_9 [i_1 + 2] [i_1] [i_2 - 2] [i_3])));
                    var_25 = (-((~(-758251756))));
                    /* LoopSeq 3 */
                    for (unsigned short i_4 = 4; i_4 < 16; i_4 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4 - 1] [i_4 + 2] [(unsigned char)4]))));
                        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) var_11)))) == ((-(var_16))))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                    {
                        var_28 = ((/* implicit */short) (+(758251773)));
                        var_29 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_12 [3LL] [i_1 - 1] [1U] [i_1 - 1] [13]))) - ((+(2794844977U)))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                    {
                        arr_19 [i_1] [(_Bool)1] [i_3] [i_6] = ((/* implicit */int) arr_6 [i_1] [i_1] [i_1]);
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 3; i_7 < 16; i_7 += 2) 
                        {
                            arr_22 [i_6] [i_1] [i_1] [i_6] [i_6] = (~(((/* implicit */int) var_13)));
                            var_30 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 4095U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_6))))));
                            arr_23 [i_1] [i_2] [9U] [(unsigned char)0] = ((/* implicit */unsigned int) 12834215251280679973ULL);
                            var_31 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_17 [i_2] [9LL] [i_2 - 2] [9LL] [9LL] [i_2 + 2])) << (((((/* implicit */int) var_15)) - (97)))));
                            var_32 = ((/* implicit */unsigned char) arr_21 [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1 + 2] [i_1]);
                        }
                        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            arr_26 [(unsigned char)19] [i_2] [(unsigned char)19] [10U] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                            arr_27 [8] [i_1] [i_2] [(short)8] [i_6] [i_8] = ((/* implicit */long long int) var_4);
                        }
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned char) 4095U);
                            var_34 = ((/* implicit */_Bool) arr_1 [i_1]);
                            var_35 = ((/* implicit */unsigned char) min((var_35), (arr_14 [i_2 + 2] [(unsigned char)9] [i_2 + 2] [i_2 + 3] [6U] [i_1 - 1])));
                            var_36 = ((/* implicit */unsigned char) (!(((((/* implicit */int) arr_2 [i_1])) >= (((/* implicit */int) arr_17 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))));
                        }
                        for (unsigned char i_10 = 3; i_10 < 18; i_10 += 3) 
                        {
                            arr_34 [i_1 + 2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */unsigned long long int) 3676733873U)) ^ (var_3)))));
                            arr_35 [i_1] [i_2 - 2] [i_3] [i_6] [i_10 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_10 - 2] [i_2 - 2] [i_1 - 1] [(unsigned short)5])) ? (arr_18 [i_10 - 3] [i_2 - 3] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) -2147483619))));
                            arr_36 [i_10] [i_1] [i_1] [i_1] [i_2 + 3] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_10 - 2] [i_10 - 2] [i_10 - 1] [i_2 + 3] [i_2 + 3] [i_1 - 1])) ? (arr_16 [19U] [i_10 - 1] [i_10 - 3] [19U] [i_2 - 3] [i_1 - 1]) : (arr_16 [i_10 + 1] [i_10 - 3] [i_10 + 1] [i_2 + 3] [i_2 - 1] [i_1 - 1])));
                            var_37 *= ((/* implicit */unsigned long long int) var_16);
                            var_38 = ((/* implicit */signed char) var_18);
                        }
                        arr_37 [i_6] [i_3] [i_3] [i_2 + 2] [i_2 - 3] [i_6] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_6] [i_6])) ? (((((/* implicit */_Bool) arr_29 [i_6] [i_6] [i_3] [i_3] [(_Bool)1] [i_1])) ? (-7257664132733172830LL) : (((/* implicit */long long int) 758251759)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 2] [i_1]))))))));
                    }
                }
            } 
        } 
        var_39 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_29 [(short)6] [i_1 - 2] [i_1] [(signed char)15] [(short)7] [(_Bool)0]))));
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 18; i_11 += 3) /* same iter space */
    {
        var_40 += ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) arr_24 [i_11] [7ULL] [i_11] [i_11] [i_11 + 2]))))) ? ((-(arr_18 [(_Bool)1] [(unsigned short)1] [(short)12] [i_11 + 2]))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)218))))));
        arr_42 [i_11] [i_11 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? ((~(4294963195U))) : (4094U)));
    }
}
