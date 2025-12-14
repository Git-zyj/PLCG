/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30279
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_13)) - (25)))))) ? (((((/* implicit */_Bool) (signed char)62)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) : (1654722048U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) var_4)))))))) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))))));
    var_16 = ((/* implicit */unsigned char) min(((+(((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_10))))))), (((/* implicit */int) var_11))));
    var_17 |= ((/* implicit */short) ((((/* implicit */int) (short)641)) <= (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */short) (~(((/* implicit */int) (signed char)-62))));
        arr_4 [i_0] = ((/* implicit */short) ((((min((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) arr_0 [i_0])))) + (((/* implicit */unsigned int) (~(arr_0 [i_0])))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (max((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0]))) : (((/* implicit */int) ((arr_1 [i_0]) && (((/* implicit */_Bool) arr_0 [i_0]))))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_0]))))))) && (((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-62)) + (2147483647))) >> (((((/* implicit */int) (signed char)62)) - (58))))))));
            arr_8 [i_1] = ((/* implicit */unsigned short) arr_0 [i_0]);
        }
        arr_9 [i_0] [i_0] = ((/* implicit */unsigned char) var_14);
        /* LoopSeq 4 */
        for (short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_14 [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_2])) ? ((-(((arr_11 [i_0] [i_2] [i_0]) + (arr_2 [i_0] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_0] [i_2] [i_2])))));
            arr_15 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) arr_13 [i_0]);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            arr_19 [i_0] [i_3] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) arr_18 [i_0] [i_0] [i_3])) : (((/* implicit */int) arr_18 [i_0] [i_0] [i_3]))));
            arr_20 [i_0] [i_3] [i_3] = ((/* implicit */long long int) arr_1 [i_0]);
            arr_21 [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((_Bool) 2147483647)))))));
            /* LoopNest 3 */
            for (short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                for (unsigned char i_5 = 3; i_5 < 18; i_5 += 2) 
                {
                    for (unsigned char i_6 = 2; i_6 < 18; i_6 += 2) 
                    {
                        {
                            arr_30 [i_0] [i_3] [i_3] [i_4] [i_4] [i_5 + 2] [i_3] = ((/* implicit */unsigned short) arr_25 [i_6 + 1] [i_5 - 2]);
                            arr_31 [i_0] [i_3] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_0])) ? ((+(((/* implicit */int) (_Bool)1)))) : ((-((-(((/* implicit */int) var_5))))))));
                            arr_32 [i_3] [i_3] [i_4] [i_5] [i_5] [i_5 - 3] = ((/* implicit */short) (+(min((min((((/* implicit */long long int) arr_13 [i_5])), (var_8))), (((/* implicit */long long int) (unsigned char)128))))));
                        }
                    } 
                } 
            } 
        }
        for (short i_7 = 2; i_7 < 17; i_7 += 4) 
        {
            arr_36 [i_7] [i_7] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_25 [i_7] [i_0])) ? (((/* implicit */int) arr_25 [i_0] [i_7])) : (((/* implicit */int) arr_1 [i_7])))), (((/* implicit */int) arr_25 [i_0] [i_7]))))) >= (max((((/* implicit */unsigned int) var_10)), (arr_33 [i_0] [i_7 + 3] [i_0])))));
            arr_37 [i_0] [i_0] [i_7] = (+(((arr_10 [i_7] [i_0] [i_0]) ? (max((((/* implicit */unsigned long long int) var_2)), (arr_22 [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_0] [i_0] [i_0] [i_7] [i_7] [i_0]))) == (arr_27 [i_0] [i_0] [i_0] [i_0]))))))));
            /* LoopSeq 2 */
            for (unsigned char i_8 = 1; i_8 < 19; i_8 += 4) 
            {
                arr_40 [i_0] [i_7] [i_8] = ((/* implicit */_Bool) arr_16 [i_0]);
                arr_41 [i_0] [i_0] [i_0] [i_8] = (!(((/* implicit */_Bool) ((arr_33 [i_0] [i_7 + 1] [i_8 - 1]) * (arr_23 [i_7] [i_0] [i_8 + 1] [i_8])))));
                arr_42 [i_8] = min((((/* implicit */short) arr_13 [i_0])), (arr_26 [i_0] [i_7] [i_0]));
                arr_43 [i_0] = ((/* implicit */unsigned short) arr_13 [i_0]);
            }
            for (unsigned char i_9 = 3; i_9 < 18; i_9 += 3) 
            {
                arr_46 [i_0] [i_7 + 2] [i_7] [i_9] = (short)29995;
                arr_47 [i_0] [i_7 + 2] [i_7] [i_0] = ((/* implicit */unsigned long long int) (!(((arr_22 [i_0]) > (arr_22 [i_7])))));
                arr_48 [i_9] [i_7 + 2] [i_9] [i_9] = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_35 [i_0] [i_7])) && (((/* implicit */_Bool) max(((unsigned short)33077), (((/* implicit */unsigned short) var_10)))))))));
            }
        }
        for (int i_10 = 0; i_10 < 20; i_10 += 1) 
        {
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                arr_54 [i_0] [i_0] &= ((/* implicit */unsigned int) arr_22 [i_0]);
                arr_55 [i_0] [i_0] [i_0] &= ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_35 [i_11] [i_0])))) >= (((/* implicit */int) arr_34 [i_10]))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_58 [i_0] [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_9))));
                arr_59 [i_10] [i_10] = ((/* implicit */unsigned int) arr_38 [i_0] [i_10] [i_12]);
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_13 = 1; i_13 < 18; i_13 += 1) 
            {
                arr_63 [i_0] [i_10] [i_10] = ((/* implicit */unsigned long long int) var_9);
                arr_64 [i_0] [i_10] [i_0] [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [i_13 - 1] [i_13 + 1]))));
            }
            arr_65 [i_10] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_11 [i_10] [i_10] [i_10])))) && (((arr_11 [i_0] [i_0] [i_10]) <= (arr_11 [i_0] [i_10] [i_10])))));
        }
    }
}
