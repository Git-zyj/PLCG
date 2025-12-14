/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214755
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 20; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_1 + 3] [i_2 + 1] |= ((/* implicit */unsigned short) max((((((/* implicit */int) arr_2 [i_2])) / (11))), (((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_2]))));
                    /* LoopSeq 4 */
                    for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(155432203)))) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (arr_5 [i_0] [13] [i_2 - 2])))) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_3])) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_7 [i_2 - 1] [i_1 + 1] [i_0 + 4])), (max((((/* implicit */unsigned short) arr_6 [(short)3] [i_0])), ((unsigned short)15592))))))));
                        var_18 = ((/* implicit */short) arr_11 [i_0 + 3] [i_0]);
                        /* LoopSeq 4 */
                        for (unsigned short i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            arr_16 [5] [i_3] [i_4] [i_0 - 1] [i_0 - 1] = (unsigned short)26537;
                            arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)251)) ? ((+(((/* implicit */int) (unsigned char)5)))) : (min((((/* implicit */int) arr_14 [i_4] [i_3] [i_2 - 1] [i_1 + 2] [i_0] [i_0 - 2] [i_0 + 1])), (((((/* implicit */int) arr_4 [(unsigned short)18] [i_2] [i_2])) >> (((((/* implicit */int) arr_6 [i_3] [i_3])) - (106)))))))));
                            var_19 -= (~(((((/* implicit */_Bool) 155432223)) ? (((/* implicit */int) (signed char)-102)) : (-155432208))));
                        }
                        for (signed char i_5 = 1; i_5 < 22; i_5 += 4) 
                        {
                            arr_20 [i_5] [i_5] [i_2] [i_3] = ((/* implicit */signed char) (short)0);
                            arr_21 [i_0 - 1] [i_5] [i_0 - 1] [i_3] [i_5] = arr_4 [i_0] [i_1] [i_2 + 1];
                            arr_22 [i_5 - 1] [i_0] [i_2 - 1] [i_0] [i_0] |= ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)603)) % ((-(((/* implicit */int) (unsigned short)10638))))));
                        }
                        for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                        {
                            arr_25 [i_0] [i_1] [i_2] [i_0] [i_6] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26932)) ? (((/* implicit */int) arr_11 [i_0] [i_6])) : (((/* implicit */int) arr_11 [i_3] [i_1 + 2]))))) ? (arr_15 [i_0 + 3] [i_0] [i_2 - 1] [i_3] [i_6]) : (((((/* implicit */_Bool) (unsigned short)595)) ? (-155432210) : (((/* implicit */int) arr_8 [i_2 - 1] [i_2 - 1] [i_1 + 2] [i_0])))))))));
                            arr_26 [i_3] [i_1] [i_1 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_6] [i_1 + 2] [i_1 + 2] [i_0])) ? (((/* implicit */int) arr_14 [(signed char)11] [i_1] [i_1] [i_1] [(signed char)11] [i_2 + 1] [i_6])) : (max((arr_24 [i_0] [i_0] [i_2] [i_0] [i_6]), (arr_15 [i_1 - 1] [i_0] [i_1 - 1] [i_3] [i_2 + 1])))));
                            var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)55325)) ? ((-(((/* implicit */int) arr_4 [i_2 + 1] [i_1 + 1] [i_0 + 4])))) : (((/* implicit */int) arr_19 [i_0] [i_1] [i_0] [i_2 + 1] [i_3] [i_6])))))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_21 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)19491))));
                            var_22 += (~(((/* implicit */int) arr_6 [i_1 - 1] [i_0 - 1])));
                        }
                    }
                    for (signed char i_8 = 0; i_8 < 23; i_8 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_29 [i_0] [i_0] [i_0 + 4] [i_1 - 1] [i_8] [i_8])))))));
                        arr_31 [i_1 + 2] [i_8] = ((/* implicit */signed char) ((arr_10 [i_0] [i_1] [i_2] [i_8]) | (((/* implicit */int) (unsigned short)10653))));
                    }
                    for (unsigned short i_9 = 1; i_9 < 21; i_9 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_29 [i_0] [i_1] [i_9 - 1] [i_0] [i_0 + 4] [i_1 + 3]), (arr_13 [i_0] [i_1 + 3] [i_2 + 1])))))))));
                        arr_36 [i_0 - 2] [i_1] [i_0] [i_9] [i_1] [i_2] |= ((/* implicit */unsigned short) min((((/* implicit */int) arr_7 [i_0] [i_1] [i_2])), (-24)));
                        arr_37 [i_9] [i_1] = ((/* implicit */signed char) arr_6 [i_1] [(unsigned short)11]);
                        arr_38 [i_0 + 4] [i_1 + 1] [i_2] [i_9] [i_0] [i_1 + 2] = arr_19 [i_0] [i_1] [i_2 - 2] [i_9 - 1] [i_0 + 2] [i_0 + 2];
                        var_25 -= ((/* implicit */signed char) arr_32 [i_9 - 1]);
                    }
                    for (unsigned short i_10 = 1; i_10 < 21; i_10 += 4) /* same iter space */
                    {
                        arr_41 [i_1] [i_2] [i_1] [i_0 + 4] = ((/* implicit */int) ((((/* implicit */int) arr_39 [i_10 + 1] [i_10 + 2] [(unsigned short)0] [i_0] [i_1 + 3] [i_0])) == ((+(((/* implicit */int) (unsigned short)65535))))));
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)65527)), (8)))) ? (max((arr_15 [i_10 + 1] [i_0] [i_10] [i_10 + 1] [i_0]), (arr_15 [i_10] [i_0] [i_10] [i_10 - 1] [12]))) : (((/* implicit */int) arr_8 [(unsigned short)15] [i_0 - 2] [i_2 - 2] [i_10]))));
                    }
                    arr_42 [i_0] [i_1] [i_0] &= ((((/* implicit */int) arr_12 [i_0 + 3] [i_1] [i_1] [i_2])) / (arr_10 [i_0 + 4] [i_2] [i_2] [i_2]));
                    var_27 = ((((/* implicit */int) (!(((/* implicit */_Bool) 131071))))) - (-436140412));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 3; i_11 < 23; i_11 += 4) 
    {
        for (short i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            {
                arr_49 [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((-1681790894) / (arr_47 [i_11])))))))));
                arr_50 [i_11] [i_12] = (~(((/* implicit */int) (signed char)-78)));
                var_28 = ((/* implicit */short) ((((/* implicit */int) arr_48 [i_11 + 2] [i_11 + 2] [i_11 - 1])) == (((/* implicit */int) max((arr_48 [i_11 - 1] [i_11] [i_11 + 1]), (arr_48 [i_11 + 2] [i_11 - 2] [i_11 + 1]))))));
            }
        } 
    } 
}
