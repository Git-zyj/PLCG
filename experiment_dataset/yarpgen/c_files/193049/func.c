/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193049
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 13; i_3 += 2) 
                    {
                        {
                            arr_10 [i_0] [i_2] [i_2] = ((/* implicit */short) var_7);
                            arr_11 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_9 [i_1] [i_2])))) ? ((~(((/* implicit */int) arr_2 [i_1] [i_3 + 1])))) : (((((/* implicit */_Bool) arr_6 [i_1 - 1] [i_3 - 1] [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)22867)) != (((/* implicit */int) var_4))))) : (((((/* implicit */int) var_6)) % (arr_5 [i_1] [i_2] [i_2])))))));
                        }
                    } 
                } 
                arr_12 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [(signed char)16] [i_0] [i_0] [i_1])) ? (((/* implicit */int) ((short) arr_6 [i_1 + 1] [i_1 + 1] [i_0] [i_0]))) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (-1411655274)))));
                arr_13 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1]))) <= (arr_9 [i_1 - 1] [i_1])))) * (((/* implicit */int) ((((_Bool) arr_6 [8LL] [16LL] [i_0] [i_1])) && (arr_3 [i_1 - 1]))))));
                /* LoopSeq 3 */
                for (signed char i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    arr_18 [i_4] [i_0] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)4080)) ? (((/* implicit */int) (unsigned short)22867)) : (((/* implicit */int) (_Bool)1))));
                    arr_19 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_1 + 1] [i_1 + 1])) ? (((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 1])) : (((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1])))), ((~(((/* implicit */int) arr_1 [i_1 - 1] [i_1 + 1]))))));
                    arr_20 [i_0] [12] [(short)16] [i_4] = ((/* implicit */_Bool) ((unsigned short) max((((((/* implicit */_Bool) 1411655267)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_16 [i_1] [i_1 + 1] [i_1])))));
                    arr_21 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((long long int) ((-2) * (((/* implicit */int) (unsigned short)65510)))));
                    arr_22 [i_4] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4]))) ^ (arr_15 [i_4])))) ? (((min((var_7), (((/* implicit */long long int) arr_8 [i_4])))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) (~(arr_9 [(unsigned short)0] [i_4])))))));
                }
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (long long int i_6 = 4; i_6 < 16; i_6 += 1) 
                    {
                        arr_30 [i_0] = ((/* implicit */unsigned short) (~((-(((/* implicit */int) arr_23 [i_0] [i_5] [i_0]))))));
                        arr_31 [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_26 [i_6] [i_6] [i_6 - 2] [i_6]))) & (((arr_15 [i_0]) & (var_7)))));
                        arr_32 [i_6] [i_0] [i_1] [i_0] [(unsigned short)3] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-16)) ^ ((~(((/* implicit */int) var_8))))));
                    }
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_37 [i_5] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_23 [i_0] [i_7 - 1] [i_0]))));
                        arr_38 [i_0] [(signed char)13] = ((/* implicit */signed char) ((((/* implicit */int) arr_14 [i_7 - 1] [i_7 - 1] [i_1 - 1])) * (((((/* implicit */int) arr_34 [i_0] [i_1 + 1] [i_5] [i_7 - 1])) >> (((((/* implicit */int) var_3)) - (73)))))));
                    }
                    arr_39 [i_0] [(unsigned short)12] [i_1 - 1] [(unsigned short)8] = ((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
                    {
                        for (short i_9 = 0; i_9 < 17; i_9 += 4) 
                        {
                            {
                                arr_44 [(signed char)16] [i_0] [(signed char)6] [1LL] [i_0] [i_0] = ((/* implicit */int) (!(((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) arr_41 [i_0]))))));
                                arr_45 [(signed char)13] [i_1] [(signed char)4] [i_0] [(signed char)0] = 68719476735LL;
                                arr_46 [i_0] [i_1] [i_1] [i_8] [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_26 [i_5] [16LL] [i_5] [10LL])) : (((/* implicit */int) arr_43 [i_5] [i_5] [(unsigned short)0] [i_8] [i_0])))) - (((/* implicit */int) arr_40 [i_1] [(signed char)3] [i_1] [i_1 - 1]))));
                                arr_47 [i_0] [i_5] [i_5] [(unsigned short)2] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_16 [(signed char)13] [(_Bool)1] [(signed char)1])) < (((/* implicit */int) arr_14 [i_0] [(signed char)12] [i_9])))) ? (((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1])) : ((~(((/* implicit */int) var_3))))));
                                arr_48 [(_Bool)1] [13] [13] [i_0] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1411655273)) ? (((/* implicit */int) (unsigned short)33)) : (((/* implicit */int) (signed char)22))));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (signed char i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    arr_53 [i_0] [i_0] [i_0] [i_10] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) / (((/* implicit */int) arr_36 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                    arr_54 [i_10] [i_10] [i_0] = (!(((/* implicit */_Bool) var_5)));
                    arr_55 [2LL] [i_1] [2LL] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_2 [i_10] [i_1 + 1]))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        for (signed char i_12 = 2; i_12 < 14; i_12 += 2) 
                        {
                            {
                                arr_61 [i_10] [i_10] [i_12] = ((/* implicit */long long int) (unsigned short)42681);
                                arr_62 [i_0] [i_0] [i_0] [5] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_50 [i_0]))));
                            }
                        } 
                    } 
                }
                arr_63 [i_0] [i_1 + 1] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)22867)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) != ((~(((/* implicit */int) arr_1 [(unsigned short)6] [i_1 + 1]))))));
            }
        } 
    } 
    var_10 = ((/* implicit */short) var_9);
    var_11 = ((/* implicit */unsigned short) var_4);
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (min((((/* implicit */long long int) var_3)), (min((1556165015398527454LL), (4827452097526845516LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
