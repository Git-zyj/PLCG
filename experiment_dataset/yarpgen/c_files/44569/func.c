/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44569
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
    var_19 = ((/* implicit */signed char) var_13);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) var_7);
                                arr_13 [i_4] [i_3] [i_2] [i_1] = ((/* implicit */short) var_7);
                                arr_14 [i_0] [i_1] [i_1 - 1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))));
                                var_21 = ((/* implicit */unsigned char) arr_4 [i_0] [i_0]);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */signed char) arr_7 [i_0] [i_0] [i_0] [i_0]);
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 13; i_5 += 2) 
                    {
                        var_23 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [i_2])) <= (((((/* implicit */_Bool) arr_17 [i_5] [i_1] [i_1] [i_0] [i_0])) ? (((/* implicit */int) arr_5 [i_5])) : (((/* implicit */int) var_1)))))))) / (max((var_18), (((/* implicit */unsigned int) arr_9 [i_2]))))));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 - 1] [i_1])) ? (((arr_12 [i_0] [i_0] [i_2] [i_0] [i_1]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -9)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1] [i_1 - 1] [i_1 + 2] [i_1 + 3] [i_1 - 2])) + (((/* implicit */int) arr_8 [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2]))))))))));
                        arr_18 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_11) | (((/* implicit */long long int) arr_10 [i_0] [i_1 - 2]))))) ? (((arr_10 [i_0] [i_1 - 1]) | (arr_10 [i_1] [i_1 + 3]))) : (((/* implicit */unsigned int) (~(var_17))))));
                    }
                    arr_19 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) arr_2 [i_0] [i_0] [i_2]);
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) ^ (((((/* implicit */_Bool) arr_7 [i_1 - 2] [i_1 + 3] [i_1 + 2] [i_1 - 2])) ? (arr_0 [i_1 + 1] [i_1 - 2]) : (((/* implicit */int) arr_6 [i_1 - 1] [i_1 - 1]))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 2) 
        {
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                for (short i_8 = 0; i_8 < 13; i_8 += 1) 
                {
                    {
                        var_26 = ((/* implicit */int) max((var_26), ((~(((/* implicit */int) max((arr_17 [i_8] [3] [i_7] [i_6] [i_0]), (((/* implicit */short) (!(arr_28 [i_0] [i_0] [i_7] [i_8])))))))))));
                        var_27 &= ((/* implicit */unsigned long long int) var_15);
                        arr_29 [i_0] [i_6] [i_0] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-28773)) ? (((/* implicit */int) (short)18921)) : (((/* implicit */int) (short)18921))));
                        arr_30 [i_6] [i_6] [i_8] = ((/* implicit */signed char) (~(((min((((/* implicit */unsigned long long int) arr_9 [i_0])), (var_2))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18947)))))));
                    }
                } 
            } 
        } 
        var_28 = max((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0])) && (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) == (var_16)))))), (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0]))))) ? ((-(((/* implicit */int) arr_22 [5] [i_0])))) : (((/* implicit */int) (short)18909)))));
        var_29 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0]))) : (var_11))) <= (((/* implicit */long long int) arr_10 [i_0] [i_0]))));
        var_30 = ((/* implicit */signed char) (((-(((arr_25 [i_0] [i_0] [i_0]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0]))))))) + (((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (var_16) : (arr_24 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_0)), (var_7))))))));
    }
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_13))));
        var_32 &= (~(arr_31 [i_9] [i_9]));
    }
}
