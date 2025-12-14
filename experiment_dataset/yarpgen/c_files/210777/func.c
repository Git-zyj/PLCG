/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210777
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210777 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210777
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
    var_18 = ((/* implicit */signed char) 3639521170639389147ULL);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        arr_11 [(unsigned char)9] [i_0] [i_2] [i_3] = ((/* implicit */short) ((unsigned char) var_10));
                        /* LoopSeq 4 */
                        for (short i_4 = 1; i_4 < 11; i_4 += 4) 
                        {
                            arr_15 [i_0] [i_2] [(signed char)3] = ((/* implicit */short) (~(((3639521170639389147ULL) + (((/* implicit */unsigned long long int) 7306259995001539027LL))))));
                            var_19 ^= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_12 [7ULL] [i_1] [i_2] [i_3] [i_4]))));
                        }
                        for (unsigned long long int i_5 = 2; i_5 < 10; i_5 += 2) /* same iter space */
                        {
                            var_20 = ((/* implicit */short) (+(arr_14 [i_0] [i_5 - 2] [i_2] [i_3 + 1] [i_0])));
                            arr_19 [i_0] [i_1] [i_0] [i_2] [i_2] [i_5] [9LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)480)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : ((~(-4615776073198512088LL)))));
                            arr_20 [5] [5] [i_0] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? (((unsigned int) 1368989903U)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)6639)) || (((/* implicit */_Bool) var_6))))))));
                            var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_18 [5U] [i_3 + 1] [i_3 - 1] [i_3]))));
                            var_22 = ((/* implicit */unsigned long long int) var_0);
                        }
                        for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 2) /* same iter space */
                        {
                            arr_24 [i_0] [2] [i_0] [i_2] [i_3 - 1] [i_3] [i_6 - 1] = ((/* implicit */unsigned short) arr_3 [i_0]);
                            var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_0 [i_0]) & (((/* implicit */int) arr_8 [i_1] [i_2] [i_2]))))) ? (((/* implicit */unsigned long long int) (-(135230661U)))) : (arr_12 [i_6 - 1] [i_6 - 2] [i_6 - 2] [i_6 - 1] [i_6 - 1]))))));
                        }
                        for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_7 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_7 - 2]))) : (4398046511103ULL)));
                            arr_29 [i_0] [11U] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_17 [i_3 - 1] [i_7 + 1] [i_3 + 1] [i_3 + 2] [i_2])) + (2147483647))) << (((((var_10) + (3112641010164937055LL))) - (19LL)))));
                        }
                        arr_30 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */int) (unsigned char)245)) != (((/* implicit */int) (short)15)))));
                        arr_31 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */long long int) ((unsigned int) var_16));
                        var_25 = ((short) (short)-15294);
                    }
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 4) 
                    {
                        arr_34 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_0 [i_0])) / (var_6)));
                        arr_35 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) var_10);
                    }
                    var_26 &= ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(8502996676506267183LL)))) ^ (((((/* implicit */_Bool) 140737488355327ULL)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3097)))))));
                    /* LoopNest 2 */
                    for (long long int i_9 = 4; i_9 < 10; i_9 += 4) 
                    {
                        for (short i_10 = 2; i_10 < 10; i_10 += 4) 
                        {
                            {
                                arr_40 [i_0] [2ULL] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_9] [i_9 + 1]))) : (arr_12 [i_0] [(short)3] [i_2] [i_9 - 2] [i_10 + 1])));
                                arr_41 [i_10] [i_9] [i_9] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_9 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_21 [i_9 - 3])));
                                arr_42 [i_0] [i_1] [i_1] [i_1] [3] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)86))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_43 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)1276)) ? (arr_21 [i_0]) : (((/* implicit */long long int) -1265564098))));
    }
    /* vectorizable */
    for (signed char i_11 = 3; i_11 < 23; i_11 += 4) 
    {
        /* LoopSeq 2 */
        for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-5647)) ? (((/* implicit */int) (unsigned short)50367)) : (63)));
            arr_50 [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) 140737488355342ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49793))) : (8685810250459894924LL))));
            arr_51 [i_11] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-490)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (short)2044))))) ^ (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6639))) : (var_9)))));
            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-57)) % (((/* implicit */int) var_2)))))));
        }
        for (long long int i_13 = 0; i_13 < 24; i_13 += 4) 
        {
            arr_56 [i_13] [i_11] [i_11] = ((/* implicit */long long int) var_0);
            arr_57 [i_11] = ((/* implicit */unsigned short) ((var_8) / (((/* implicit */unsigned long long int) var_3))));
            var_29 = ((/* implicit */unsigned long long int) ((int) var_9));
        }
        var_30 = ((/* implicit */long long int) -1158794972);
    }
    for (unsigned long long int i_14 = 4; i_14 < 9; i_14 += 4) 
    {
        arr_60 [i_14] [i_14] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_45 [i_14 - 2])) : (((/* implicit */int) arr_45 [i_14 - 3])))), ((+(((/* implicit */int) arr_45 [i_14 - 1]))))));
        arr_61 [i_14] [(signed char)8] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_14] [i_14 - 1] [i_14])) && (((/* implicit */_Bool) arr_7 [i_14 - 4] [i_14 - 4] [i_14]))))), (var_13)));
    }
}
