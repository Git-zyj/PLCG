/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225916
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))) : (arr_0 [i_0])));
        var_11 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
    }
    for (int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_1 [i_1])), (arr_3 [i_1])))) ? (arr_5 [0ULL] [i_1]) : (((((/* implicit */_Bool) var_2)) ? (arr_5 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))), (max((arr_0 [i_1 + 1]), (((/* implicit */unsigned long long int) var_6))))));
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1]))));
    }
    for (unsigned int i_2 = 0; i_2 < 20; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                {
                    arr_15 [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-126), ((signed char)-126))))) / (min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [i_3] [i_4]))) & (var_7)))), (max((arr_9 [i_2]), (((/* implicit */unsigned long long int) var_5))))))));
                    arr_16 [i_2] [i_3] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_2]))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) arr_9 [i_2]);
                        var_14 = ((/* implicit */unsigned int) var_5);
                        arr_19 [i_2] [i_3] [i_5 + 1] = ((/* implicit */long long int) var_3);
                        var_15 ^= ((/* implicit */int) max((var_7), (((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) var_3))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 2; i_6 < 19; i_6 += 1) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned char) max((arr_11 [i_2] [i_2] [i_2]), (((/* implicit */unsigned short) arr_13 [i_2] [i_3] [6LL] [i_2]))));
                                arr_27 [i_3] [i_3] [i_3] [i_2] [i_3] = max((((int) var_1)), (max((2147483647), (((/* implicit */int) (signed char)125)))));
                                var_17 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_13 [i_7] [i_7] [i_6 - 1] [i_6 - 1])), (((unsigned int) (signed char)119))));
                                var_18 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) arr_13 [i_3] [i_3] [i_3] [i_3])) : (var_6))) >= (((/* implicit */int) arr_11 [i_2] [(short)4] [i_2])))) ? (((int) arr_22 [i_2] [i_2] [(unsigned char)18] [i_7])) : (max((((int) arr_21 [i_2] [i_7])), (((/* implicit */int) arr_20 [i_7] [i_6] [i_2] [(_Bool)1] [(signed char)18] [i_2]))))));
                                var_19 = max((min((arr_8 [i_2]), (((arr_24 [i_2] [i_3] [i_4] [i_6 - 2] [i_2] [i_7]) | (((/* implicit */int) arr_17 [i_2] [i_2] [i_4] [11U] [i_7])))))), (((/* implicit */int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) arr_17 [i_2] [i_3] [i_4] [i_6] [i_7])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_28 [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_22 [(unsigned short)5] [i_2] [i_2] [i_2])) / (arr_23 [i_2] [i_2])))))) ? (((/* implicit */int) min((arr_17 [i_2] [i_2] [i_2] [i_2] [i_2]), (((/* implicit */short) var_1))))) : (max((((/* implicit */int) arr_10 [(unsigned char)16])), (((((/* implicit */_Bool) arr_20 [i_2] [9U] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))))))));
        arr_29 [i_2] = ((/* implicit */unsigned char) ((arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) + (((/* implicit */int) var_8))));
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            for (unsigned short i_10 = 0; i_10 < 19; i_10 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) min((min((max((arr_26 [i_8] [4U] [i_9] [i_9] [i_8] [i_9] [i_10]), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-1625128683) : (((/* implicit */int) (unsigned char)198)))), (((/* implicit */int) arr_34 [18U] [i_9])))))));
                    arr_37 [i_8] [i_9] [(short)9] = ((/* implicit */unsigned long long int) ((unsigned char) (!(((/* implicit */_Bool) min((arr_14 [i_8]), (arr_10 [i_10])))))));
                }
            } 
        } 
        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_8] [i_8] [5U] [i_8] [i_8])) ? (((/* implicit */int) max((arr_17 [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_17 [i_8] [i_8] [(signed char)18] [i_8] [i_8])))) : (((/* implicit */int) max(((unsigned short)17323), ((unsigned short)47918))))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((short) max((((/* implicit */int) max((arr_11 [i_8] [(unsigned char)0] [i_8]), (((/* implicit */unsigned short) var_1))))), (arr_23 [i_8] [i_8])))))));
        arr_38 [i_8] = ((/* implicit */int) var_9);
    }
    var_23 = min((((/* implicit */int) var_5)), (max((((/* implicit */int) var_3)), (max((((/* implicit */int) var_5)), (var_6))))));
}
