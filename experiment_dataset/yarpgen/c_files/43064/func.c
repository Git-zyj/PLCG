/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43064
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [(unsigned char)10] = ((/* implicit */short) (~(arr_2 [10ULL])));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((int) 15852578150818573795ULL));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned short i_3 = 3; i_3 < 13; i_3 += 1) 
                {
                    {
                        arr_12 [i_0] [0] [i_0] [10] [i_2] [i_3 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) var_7)) != (((/* implicit */int) var_8)))))));
                        /* LoopSeq 3 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_0] [(unsigned char)6] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_8 [i_1 + 1] [i_0]))));
                            arr_17 [i_0] [i_1 - 1] [i_1] [4ULL] [i_1 - 3] [i_1 - 1] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_6 [(signed char)5] [i_1 - 2])) < ((-(((/* implicit */int) arr_9 [(unsigned short)12] [i_2] [(unsigned short)15]))))));
                            arr_18 [(signed char)10] [i_1] [i_2] [(unsigned short)6] [i_3 + 1] [i_0] [i_4] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                        }
                        for (signed char i_5 = 0; i_5 < 16; i_5 += 1) 
                        {
                            arr_22 [i_0] [i_0] = ((/* implicit */unsigned int) arr_15 [(signed char)0] [i_1 + 2] [13U] [i_2] [i_5] [i_2]);
                            arr_23 [i_0] [i_1 - 1] [i_2] [i_5] = ((/* implicit */int) ((arr_10 [i_3] [i_3 + 3] [i_3] [i_3] [(signed char)9] [i_3]) <= (((/* implicit */unsigned long long int) var_4))));
                        }
                        for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            arr_27 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1426183988)) ? (((/* implicit */long long int) -1494567975)) : (((arr_20 [(signed char)14] [i_0] [(short)9] [i_3] [i_6 - 1]) / (((/* implicit */long long int) 262144))))));
                            arr_28 [i_0] [i_1] [i_2] [i_1] [i_6 + 1] = ((/* implicit */unsigned char) arr_24 [(unsigned char)8] [i_1] [i_2] [i_3] [i_3 + 2] [15ULL] [i_3]);
                        }
                    }
                } 
            } 
        } 
        arr_29 [6ULL] [i_0] |= ((/* implicit */signed char) ((short) arr_21 [i_0] [4LL]));
    }
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) ((var_6) - (((((/* implicit */_Bool) var_0)) ? (var_6) : (((/* implicit */unsigned int) var_0)))))))));
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 18; i_7 += 2) 
    {
        for (unsigned short i_8 = 3; i_8 < 18; i_8 += 3) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                {
                    arr_37 [i_7 - 1] [17] [i_7 + 4] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((short) arr_34 [i_8])))));
                    /* LoopNest 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 4; i_11 < 21; i_11 += 1) 
                        {
                            {
                                arr_43 [i_8] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */short) ((unsigned int) ((arr_40 [i_8] [1] [i_8] [i_8 + 2] [i_8]) * (arr_40 [i_7] [i_7] [i_7] [i_8 - 1] [(unsigned short)9]))));
                                arr_44 [i_7] [i_8 + 1] [i_7] [i_10] [19LL] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_35 [i_7 + 4] [i_7 + 4] [i_7]), (((/* implicit */unsigned int) arr_34 [i_7]))))) * ((~(arr_36 [i_7] [20U] [i_9])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 21; i_12 += 1) 
                    {
                        for (long long int i_13 = 1; i_13 < 20; i_13 += 3) 
                        {
                            {
                                arr_49 [i_7] [i_7] [i_12] = (-(((arr_47 [i_7 + 4] [i_7 - 1] [i_8 + 2] [i_8 + 3] [i_12 + 1]) / (((/* implicit */int) arr_46 [i_7 + 4] [i_7 + 4] [i_8 - 1] [i_8 + 4] [i_12 - 1])))));
                                arr_50 [(unsigned char)20] [i_12] [i_9] [i_12] [(unsigned char)12] = ((/* implicit */short) var_9);
                            }
                        } 
                    } 
                    arr_51 [i_7] [i_7 + 2] = ((/* implicit */unsigned char) var_8);
                }
            } 
        } 
    } 
}
