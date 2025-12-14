/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37416
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
    var_18 = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))) + (var_8))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(var_0))))));
            arr_4 [i_0] [i_1 - 1] = ((((/* implicit */_Bool) arr_1 [i_1 - 1] [i_1 - 1])) ? (arr_2 [i_1 + 2] [(unsigned short)15]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1]))));
            arr_5 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_3 [20LL] [i_1 + 2] [i_1 - 1]))));
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)245)) ^ (((/* implicit */int) arr_3 [i_1] [i_1] [i_1 + 2]))));
        }
        arr_6 [i_0] = var_1;
        arr_7 [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (unsigned char)255)), (arr_2 [i_0] [i_0]))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 3) 
            {
                {
                    arr_12 [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((unsigned char)11), (((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_2] [i_2] [i_0]))) : (((((/* implicit */int) arr_3 [i_0] [i_2] [i_3])) ^ (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))));
                    arr_13 [i_0] [i_2] [i_3] = ((/* implicit */int) ((unsigned short) (-(var_8))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 22; i_4 += 3) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_5 = 0; i_5 < 22; i_5 += 1) 
                        {
                            var_21 &= ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) & (var_0))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)110))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_10 [i_0])), (var_13))))) : (0U)))));
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1226795693)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_0 [i_3]))))), (max((var_6), (((/* implicit */unsigned long long int) (signed char)3))))))) ? (min((((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [(signed char)19])) : (var_6))), (var_6))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7)))))));
                            var_23 = ((/* implicit */unsigned short) ((-1226795693) ^ (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [i_2] [(unsigned char)3] [i_5])) < (var_2))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
                        {
                            arr_21 [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2])))))));
                            arr_22 [i_6] [i_4] [i_0] [i_2] [i_0] = ((/* implicit */unsigned long long int) (((-(arr_8 [i_0] [i_2] [i_3]))) - (((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (arr_8 [i_0] [i_0] [i_0])))));
                            var_24 |= ((/* implicit */signed char) (~(((((/* implicit */int) arr_3 [i_0] [i_3] [i_6])) & (((/* implicit */int) (unsigned char)188))))));
                        }
                        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            arr_25 [(unsigned short)15] [i_2] [4] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) 15668159528770028169ULL))) != (((/* implicit */int) ((((/* implicit */int) var_15)) >= (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_16 [i_7] [i_3] [i_7])))))))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) ((unsigned short) var_6))) != (((((/* implicit */int) arr_19 [i_0] [i_2] [i_0])) | (((/* implicit */int) var_16))))))) - ((-((-(var_3)))))));
                            arr_27 [i_0] [i_2] [i_3] |= ((/* implicit */signed char) (-(((var_0) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 1; i_8 < 21; i_8 += 4) 
                        {
                            arr_30 [i_0] [i_8] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_4] [i_8])) * (((/* implicit */int) arr_29 [i_8 - 1] [i_4] [i_4] [i_4] [(signed char)6] [i_4] [i_4]))));
                            arr_31 [i_0] [i_2] [i_8] [i_4] [i_8] [i_2] = ((/* implicit */unsigned char) arr_17 [i_8] [i_8] [i_8 - 1] [i_8 + 1] [i_8 + 1] [i_8]);
                            var_25 |= ((/* implicit */unsigned int) ((unsigned short) arr_15 [i_8] [i_8 - 1] [i_8] [i_8] [i_8 - 1]));
                            var_26 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_7))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)215)))))));
                        }
                        var_27 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (signed char)-20)) <= (((((/* implicit */int) (unsigned char)49)) / (var_3)))))) ^ (((/* implicit */int) var_15))));
                        arr_32 [i_0] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */int) arr_28 [i_0] [i_2] [i_3] [i_4] [i_4]))))) || (((/* implicit */_Bool) arr_9 [i_0]))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        arr_37 [2U] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_13)))) * (max((8729055790209336929ULL), (((/* implicit */unsigned long long int) arr_19 [i_9] [i_9] [i_9]))))));
        var_28 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_9] [i_9])) ? (arr_14 [i_9] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)111)))))) - ((-(var_8)))));
    }
    for (unsigned short i_10 = 1; i_10 < 16; i_10 += 4) 
    {
        arr_40 [i_10] = ((/* implicit */unsigned int) arr_9 [(unsigned short)12]);
        arr_41 [i_10 + 1] [i_10] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_24 [i_10 - 1] [i_10])), (arr_2 [i_10] [i_10])))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_6))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 130905050514979696LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_9))))))));
        var_29 = ((/* implicit */signed char) ((long long int) ((((/* implicit */int) var_16)) + (var_3))));
        arr_42 [i_10] [i_10 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_28 [i_10 - 1] [i_10 - 1] [i_10] [i_10 + 1] [i_10 + 1]))))) - (((3705078868U) | (1318185634U)))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_10] [1U]))))))) : ((-(((/* implicit */int) var_1))))));
    }
    var_30 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_12))) | (var_17)))), (var_8)))));
}
