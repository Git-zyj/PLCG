/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217018
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
    var_14 = ((/* implicit */unsigned char) ((var_1) > (((((/* implicit */_Bool) min((var_2), (var_4)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_10))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    var_15 = max(((~(((((/* implicit */int) arr_7 [i_0] [(unsigned char)6])) + (((/* implicit */int) arr_2 [i_2])))))), (((int) min((((/* implicit */int) arr_0 [i_1])), (-982748466)))));
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 15; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 2147483647))));
                            var_17 = ((/* implicit */int) arr_7 [i_1] [i_4]);
                            var_18 = (+(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_2])))));
                        }
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_3 - 2] [i_3 - 1] [i_0]))) ^ (max((arr_10 [i_3 - 2] [i_3 - 2] [i_3 - 1] [i_3 - 2] [i_0]), (min((arr_4 [i_0] [i_1] [i_3]), (arr_11 [i_1] [i_2] [i_1])))))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        arr_16 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_13), (((/* implicit */int) var_2))))) ? (arr_13 [i_0] [(unsigned char)11]) : (((/* implicit */int) arr_7 [i_0] [(unsigned char)14])))) - (((/* implicit */int) min((arr_9 [i_0]), (arr_9 [i_0]))))));
                        arr_17 [i_0] [i_2] [i_2] &= ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_15 [i_0] [i_1] [(unsigned char)14] [8] [(unsigned char)2])) ? (((int) arr_10 [i_0] [i_1] [i_0] [5] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)78))))))), (((/* implicit */int) min((min(((unsigned char)111), (arr_15 [i_0] [i_1] [i_1] [(unsigned char)6] [i_5]))), (max((arr_0 [i_1]), (var_10))))))));
                        var_20 = ((((/* implicit */int) (unsigned char)175)) | (-982748479));
                        var_21 = ((/* implicit */unsigned char) ((int) max(((unsigned char)132), (arr_8 [i_0] [i_0] [i_0]))));
                    }
                    for (unsigned char i_6 = 3; i_6 < 13; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (int i_7 = 2; i_7 < 15; i_7 += 2) 
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_2] [i_6] [i_2] |= ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)226)) >> (((((/* implicit */int) (unsigned char)110)) - (82)))))) ? (((/* implicit */int) ((unsigned char) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [i_6] [i_7])) ^ (((/* implicit */int) arr_3 [i_0] [i_2] [i_6 + 3])))));
                            arr_23 [i_0] = ((/* implicit */unsigned char) var_5);
                            var_22 = (+(((((/* implicit */int) (unsigned char)121)) << (((((/* implicit */int) (unsigned char)106)) - (82))))));
                        }
                        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (min((arr_11 [i_6 - 1] [i_6 - 1] [i_6]), (15))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)184))))))))));
                    }
                    /* LoopSeq 3 */
                    for (int i_8 = 0; i_8 < 16; i_8 += 4) 
                    {
                        arr_26 [i_0] [i_0] [i_2] [i_2] = min((min((((((/* implicit */_Bool) arr_20 [i_2] [i_2] [i_1])) ? (arr_11 [i_1] [i_2] [i_8]) : (arr_13 [i_0] [i_0]))), (max((((/* implicit */int) var_4)), (-475704202))))), (((((/* implicit */_Bool) max((-475704202), (((/* implicit */int) (unsigned char)90))))) ? (((int) arr_6 [i_0] [i_1] [i_1])) : (((int) -641401349)))));
                        var_24 = ((unsigned char) arr_14 [12] [i_0] [i_0] [i_8] [i_8] [i_8]);
                    }
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        arr_29 [i_0] [i_9] [i_2] [i_2] [1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) max(((unsigned char)7), (max((arr_2 [i_0]), (arr_1 [i_0])))))) | (((/* implicit */int) var_10))));
                        arr_30 [i_2] |= ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_0] [i_1] [i_2] [(unsigned char)11] [(unsigned char)10])) ^ (((/* implicit */int) min(((unsigned char)34), ((unsigned char)56))))));
                        arr_31 [11] [i_1] [i_0] = ((/* implicit */unsigned char) min((max(((-(((/* implicit */int) var_4)))), (arr_14 [i_0] [i_0] [i_0] [4] [i_0] [i_0]))), ((~(((int) arr_1 [i_2]))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 16; i_10 += 2) 
                    {
                        var_25 *= ((/* implicit */unsigned char) ((int) min((var_2), (arr_1 [i_0]))));
                        arr_34 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (unsigned char)0)) == (897513384))) ? (((/* implicit */int) max((arr_25 [i_0] [i_1] [i_2] [i_10]), (arr_25 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) arr_1 [i_1]))));
                        var_26 ^= ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 860156637))))), (min((arr_24 [i_0]), (arr_24 [i_2])))));
                        arr_35 [i_0] [i_0] [i_0] [13] = ((/* implicit */unsigned char) ((int) ((((arr_27 [i_1] [i_10]) == (((/* implicit */int) var_6)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_2] [i_10])) ? (((/* implicit */int) (unsigned char)255)) : (var_5)))))));
                    }
                    var_27 += ((/* implicit */int) ((unsigned char) (unsigned char)220));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 16; i_11 += 1) 
                    {
                        var_28 |= ((/* implicit */unsigned char) max((max((max((arr_33 [i_0] [i_0] [i_2] [i_2]), (((/* implicit */int) var_3)))), (((((/* implicit */int) (unsigned char)196)) * (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))), ((-(var_5)))));
                        var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0]))));
                        var_30 = ((/* implicit */int) min((var_30), (max(((+(((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) arr_2 [i_2]))))));
                        /* LoopSeq 2 */
                        for (int i_12 = 0; i_12 < 16; i_12 += 3) 
                        {
                            var_31 = ((/* implicit */unsigned char) ((int) (+(((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] [i_0])))));
                            var_32 += ((/* implicit */unsigned char) arr_5 [i_2] [i_2] [i_12]);
                        }
                        for (unsigned char i_13 = 0; i_13 < 16; i_13 += 2) 
                        {
                            var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) (unsigned char)106)))) ? (var_0) : (((/* implicit */int) (unsigned char)176))));
                            var_34 = (((!(((/* implicit */_Bool) (unsigned char)105)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((1044480), (((/* implicit */int) (unsigned char)255)))))))) : (arr_6 [i_0] [i_1] [(unsigned char)0]));
                            arr_46 [(unsigned char)4] [i_2] [i_2] [i_2] [i_2] [i_2] |= arr_11 [i_0] [i_1] [(unsigned char)9];
                        }
                    }
                }
            } 
        } 
    } 
    var_35 = var_2;
    var_36 = ((/* implicit */unsigned char) ((int) max((((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */int) (unsigned char)106)))), (min((var_11), (((/* implicit */int) (unsigned char)252)))))));
}
