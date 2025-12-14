/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201746
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
    var_12 = ((/* implicit */unsigned int) ((var_5) == (((/* implicit */int) var_10))));
    var_13 = ((/* implicit */int) var_11);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                var_14 = var_1;
                /* LoopNest 3 */
                for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
                {
                    for (short i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */_Bool) ((((((((/* implicit */int) min(((short)(-32767 - 1)), (((/* implicit */short) arr_9 [i_0]))))) * (((((/* implicit */int) var_4)) | (((/* implicit */int) var_4)))))) + (2147483647))) << ((((((~(arr_3 [i_4] [i_1 - 1] [i_0]))) / (min((arr_13 [i_0] [i_0] [i_0]), (((/* implicit */long long int) arr_6 [i_0] [i_2])))))) - (9126579241LL)))));
                                arr_14 [i_0] [i_0] [(short)2] [i_3] [i_3] [i_0] [i_3] = (short)-32761;
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_9 [i_1 - 1]), (arr_9 [i_1 - 1])))) ? (((-1454850051) % (((/* implicit */int) arr_9 [i_1 - 1])))) : (((((/* implicit */int) arr_9 [i_1 - 1])) / (((/* implicit */int) var_7))))));
                /* LoopSeq 1 */
                for (long long int i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_20 [i_0] [i_0] = var_4;
                        var_16 -= ((/* implicit */signed char) arr_7 [2LL]);
                        var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) var_2)), (((((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_2)) - (3067))))) * (((/* implicit */int) var_8))))));
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_1)))), (((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_1))))))) ? (((((/* implicit */int) ((var_5) >= (arr_6 [i_1 - 1] [i_0])))) & (((((/* implicit */_Bool) (unsigned short)50570)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_0)))))) : (((/* implicit */int) arr_0 [i_1]))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_19 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_5 [(signed char)4] [(short)6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) ((_Bool) ((int) var_9))))));
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 10; i_8 += 2) 
                        {
                            arr_26 [i_8] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max((3780163237U), (((/* implicit */unsigned int) arr_1 [i_0]))));
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_17 [i_8] [i_1 - 1] [i_0] [i_0])))), (((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_17 [(_Bool)1] [i_1 + 1] [i_1] [(unsigned char)6])))))))));
                            arr_27 [i_8] [i_0] [i_0] [(_Bool)1] = ((int) (-(((((/* implicit */int) var_0)) * (((/* implicit */int) (short)0))))));
                        }
                        for (int i_9 = 0; i_9 < 10; i_9 += 1) 
                        {
                            var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (min((((/* implicit */long long int) var_6)), (arr_4 [i_1 + 1] [i_0] [i_5]))) : (((/* implicit */long long int) arr_29 [i_1 + 1] [i_1] [i_1 + 1] [i_1 - 1] [i_1] [i_7]))));
                            arr_30 [i_0] [i_1 - 1] [(short)4] [i_1 - 1] [(unsigned short)5] [(unsigned char)0] [i_1] = ((/* implicit */long long int) arr_21 [7U] [i_1] [i_5] [i_1] [i_9]);
                            arr_31 [i_0] [i_0] [(short)5] [i_7] [i_7] [i_9] [i_9] = ((/* implicit */int) arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1]);
                        }
                        for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            arr_34 [(signed char)2] [i_1] [i_1] [6] [i_1] [i_0] = ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]);
                            arr_35 [i_0] [i_1] = ((/* implicit */unsigned short) ((arr_5 [i_1] [i_0]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_1 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1 + 1])) ? (arr_21 [i_1 + 1] [i_1 - 1] [2U] [i_1 - 1] [i_1 + 1]) : (((/* implicit */int) var_9)))))));
                            arr_36 [i_0] [i_0] = ((/* implicit */short) min((arr_12 [i_10] [i_7] [i_7] [i_5] [i_0] [i_0] [i_0]), (((((/* implicit */_Bool) ((unsigned long long int) 1900811288))) ? (((((/* implicit */_Bool) var_3)) ? (var_11) : (((/* implicit */long long int) arr_33 [i_0] [i_1] [i_5] [i_7] [i_10])))) : (min((((/* implicit */long long int) var_2)), (var_11)))))));
                            arr_37 [i_0] [i_1] [4] [i_5] [i_5] [i_0] [i_0] = ((/* implicit */int) (!((_Bool)1)));
                        }
                    }
                    arr_38 [i_1] [i_0] = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((~(((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)3]))))));
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_2))))))) >> (((/* implicit */int) ((short) (short)0))))))));
                }
                arr_39 [i_0] [i_0] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)1)) && (((/* implicit */_Bool) (short)32073))));
            }
        } 
    } 
    var_24 = ((short) var_6);
}
