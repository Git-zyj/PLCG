/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45306
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
    var_10 = min((((/* implicit */int) ((unsigned char) (~((-2147483647 - 1)))))), (var_7));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 21; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */int) max((var_11), (((((/* implicit */_Bool) min((max((var_1), (-2147483632))), (arr_1 [i_0] [i_0])))) ? (max((min((4194300), (var_7))), (max((65408), (arr_1 [i_0] [i_0]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((-65408), (arr_0 [i_0])))))))))));
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_0 [i_0]) : (var_4)))) ? (min(((~(arr_0 [i_0]))), (((/* implicit */int) (unsigned char)0)))) : (arr_1 [4] [i_0]));
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((var_7) | (min((((((/* implicit */_Bool) -2147483632)) ? (65408) : (var_0))), (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [18])) && (((/* implicit */_Bool) var_7))))))))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
        {
            for (int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                {
                    var_14 *= max((var_8), (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8))))))));
                    var_15 = ((int) (~(arr_3 [i_3])));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21; i_4 += 3) /* same iter space */
                    {
                        var_16 = ((((/* implicit */_Bool) ((int) 268419072))) ? (arr_8 [i_1] [i_1] [i_3] [i_4]) : (arr_9 [i_1] [i_2] [i_3] [i_4]));
                        arr_10 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) (((~(arr_1 [i_1] [i_1]))) <= (var_5)));
                        var_17 &= (unsigned char)8;
                    }
                    for (int i_5 = 0; i_5 < 21; i_5 += 3) /* same iter space */
                    {
                        arr_13 [i_2] [i_2] [i_1] [10] [i_5] = -268419072;
                        arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = 2147483632;
                        /* LoopSeq 1 */
                        for (int i_6 = 1; i_6 < 19; i_6 += 4) 
                        {
                            arr_17 [i_1] [17] [i_3] [i_5] [i_1] = min((arr_12 [i_1] [i_1] [i_3] [i_6]), ((~(((((/* implicit */_Bool) arr_0 [i_3])) ? (267911168) : (arr_3 [i_1]))))));
                            var_18 = arr_12 [i_6 + 1] [i_6 - 1] [i_6 + 1] [i_6];
                            var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_1 [i_1] [i_1]) : (arr_8 [i_3] [i_3] [i_3] [2])))));
                            arr_18 [i_1] [i_2] [i_3] [i_3] [i_1] [8] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_1] [i_5])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)62))))) : (arr_2 [i_1]))))));
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)56)))))));
                        }
                        arr_19 [i_1] = ((/* implicit */unsigned char) ((int) arr_12 [i_1] [i_1] [i_1] [i_1]));
                    }
                }
            } 
        } 
        var_21 = ((/* implicit */int) max((var_21), (max((max((((/* implicit */int) ((65408) == (arr_1 [(unsigned char)6] [i_1])))), (arr_6 [0] [i_1] [i_1]))), (((((/* implicit */_Bool) var_9)) ? (arr_3 [14]) : (((((/* implicit */int) var_9)) << (((8388607) - (8388592)))))))))));
        /* LoopNest 2 */
        for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) 
        {
            for (int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                {
                    arr_27 [19] [i_7] [i_1] = min((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)32)) || (((/* implicit */_Bool) arr_6 [i_1] [i_7] [i_8]))))), (((((/* implicit */_Bool) max((arr_4 [i_1]), (arr_12 [i_1] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) 2147483616)) ? (var_1) : (var_0))) : (((/* implicit */int) ((unsigned char) arr_25 [i_8] [i_8] [i_8] [i_8]))))));
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */int) min((var_22), ((((-(arr_9 [i_10] [(unsigned char)6] [i_10] [i_10]))) & (((int) (unsigned char)60))))));
                                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_28 [i_1] [i_1] [i_1] [i_1]))));
                                var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((int) var_8)))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned char) max(((~(var_5))), (((/* implicit */int) ((((/* implicit */int) arr_32 [20] [i_1] [i_7] [i_7])) != (max((var_2), ((-2147483647 - 1)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 4) 
        {
            for (int i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                {
                    var_26 = ((/* implicit */int) ((unsigned char) ((arr_2 [i_1]) == (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_31 [i_12] [i_12] [i_11] [(unsigned char)3] [(unsigned char)3]))))))));
                    var_27 = min((arr_16 [i_1]), (((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_32 [i_1] [i_1] [i_12] [i_12]))) || (((((/* implicit */_Bool) arr_26 [i_1] [i_1])) || (((/* implicit */_Bool) arr_7 [i_1] [i_11] [i_12] [i_11]))))))));
                }
            } 
        } 
        var_28 = ((int) max(((~(arr_5 [i_1] [2] [i_1]))), (min((((/* implicit */int) (unsigned char)237)), (arr_29 [i_1])))));
    }
    for (int i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) max((((((/* implicit */int) (unsigned char)235)) + ((~(100663296))))), (((((((/* implicit */_Bool) var_8)) ? (2147483647) : (arr_39 [i_13]))) & (max((var_8), (arr_40 [i_13] [(unsigned char)13]))))))))));
        var_30 = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) 32764)) ? (arr_20 [i_13] [i_13] [i_13]) : (var_1))))), (((/* implicit */int) (unsigned char)62))));
    }
    for (unsigned char i_14 = 0; i_14 < 14; i_14 += 2) 
    {
        arr_43 [i_14] [(unsigned char)13] &= ((int) max((((((/* implicit */_Bool) arr_38 [i_14] [i_14])) ? (arr_20 [i_14] [i_14] [(unsigned char)6]) : (arr_9 [i_14] [i_14] [i_14] [i_14]))), (arr_40 [i_14] [i_14])));
        /* LoopNest 2 */
        for (int i_15 = 2; i_15 < 12; i_15 += 4) 
        {
            for (unsigned char i_16 = 2; i_16 < 12; i_16 += 1) 
            {
                {
                    var_31 = ((/* implicit */int) min((var_31), (((int) ((((/* implicit */int) arr_46 [i_15 + 1] [i_15 + 2] [i_15 + 2] [i_16])) <= (((/* implicit */int) arr_46 [i_15 - 2] [11] [11] [i_15 - 2])))))));
                    var_32 ^= (((-(((/* implicit */int) ((unsigned char) -268419072))))) | (((((/* implicit */_Bool) min((1073217536), (((/* implicit */int) var_3))))) ? (arr_7 [9] [i_14] [i_15 + 1] [i_16 - 2]) : (((/* implicit */int) min((var_3), ((unsigned char)255)))))));
                }
            } 
        } 
        var_33 = ((/* implicit */int) max((var_33), (arr_1 [i_14] [i_14])));
    }
    /* LoopNest 2 */
    for (int i_17 = 0; i_17 < 21; i_17 += 4) 
    {
        for (int i_18 = 0; i_18 < 21; i_18 += 2) 
        {
            {
                var_34 ^= (~(((/* implicit */int) var_3)));
                var_35 = ((int) arr_35 [16] [i_18] [i_18] [i_17]);
                var_36 ^= ((/* implicit */int) arr_32 [i_17] [i_17] [i_18] [i_18]);
            }
        } 
    } 
}
