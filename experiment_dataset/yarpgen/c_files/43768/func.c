/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43768
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                {
                    var_17 = arr_2 [i_0 + 1] [i_1] [i_2 - 1];
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_6 [i_2 - 1] [i_0] [i_0 - 2])) : (((/* implicit */int) arr_6 [i_2 - 1] [15U] [i_0 - 2]))))) ? (((((/* implicit */int) arr_5 [i_2 - 1] [i_0 + 3] [i_2])) | (((/* implicit */int) arr_6 [i_2 - 1] [i_0 + 3] [i_0 + 2])))) : (((1762672599) | (-1762672596)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 4; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_19 += max((arr_8 [i_0]), (((/* implicit */unsigned int) (unsigned char)184)));
                                arr_11 [i_2] = ((/* implicit */_Bool) max((((/* implicit */short) var_1)), (arr_1 [i_0 - 1])));
                                arr_12 [(signed char)6] [i_1] [i_2 - 1] [i_2 - 1] [i_2] = ((/* implicit */unsigned long long int) (short)18655);
                            }
                        } 
                    } 
                    arr_13 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1762672599)) ? (min((((/* implicit */int) ((0) <= (-1762672599)))), (((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2])) : (((/* implicit */int) arr_0 [i_2])))))) : (((/* implicit */int) var_1))));
                    /* LoopSeq 1 */
                    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_20 -= min((((unsigned long long int) arr_6 [i_1] [i_2 - 1] [i_6])), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) 1762672599)), (var_3))) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [(_Bool)1] [i_0])) ? (var_9) : (var_9))))))));
                            arr_19 [2LL] [i_0] [12U] [i_2] [i_5] [12U] [i_6] = ((/* implicit */signed char) min((((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(unsigned char)0] [i_1] [i_1] [i_5 + 2] [i_6] [i_1] [i_6]))) : (3886779042U)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_14 [i_2] [i_1] [i_2] [i_5] [i_1]))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_6])))))))));
                            var_21 *= ((/* implicit */unsigned int) (signed char)0);
                        }
                        for (unsigned char i_7 = 1; i_7 < 19; i_7 += 1) 
                        {
                            arr_22 [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2 + 2] [i_1] [i_7 + 1] [i_2 + 1] [i_7 + 1])) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1] [i_0 + 1] [i_2 - 1] [i_7 + 1] [i_2 + 1] [i_7 - 1])) : (((/* implicit */int) arr_9 [i_0] [(unsigned char)7] [i_2 + 1] [i_5 + 2] [i_7 - 1] [i_2 + 2] [i_7 + 1]))))) ? (((unsigned int) (-(((/* implicit */int) arr_18 [i_7] [i_5] [i_5] [i_5] [i_2 + 2] [i_1] [i_0]))))) : (((/* implicit */unsigned int) min((var_6), (((/* implicit */int) arr_10 [i_7] [i_5] [(unsigned char)1] [i_1])))))));
                            var_22 = ((/* implicit */unsigned short) arr_5 [i_0 + 1] [i_1] [i_2]);
                            var_23 = ((/* implicit */unsigned short) ((unsigned char) (!((!(var_15))))));
                        }
                        arr_23 [i_0 + 1] [i_0 + 1] [i_2] [i_5 - 2] = ((/* implicit */short) var_7);
                    }
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */unsigned short) min((var_2), ((+(((/* implicit */int) ((-9223372036854775807LL) >= (((/* implicit */long long int) var_2)))))))));
    var_25 = ((/* implicit */short) ((((((/* implicit */int) var_16)) + (2147483647))) >> (((min((max((590164460), (var_2))), (((/* implicit */int) ((unsigned char) var_2))))) - (174)))));
    /* LoopNest 2 */
    for (short i_8 = 1; i_8 < 19; i_8 += 4) 
    {
        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            {
                arr_31 [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */int) var_16)) * (((/* implicit */int) arr_17 [i_8] [i_8] [0LL] [i_8 - 1] [i_9] [i_9])))))) ? (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_8 + 1] [i_9] [i_9] [i_8] [i_8 + 1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((var_4), (((/* implicit */unsigned long long int) (signed char)0)))) <= (((/* implicit */unsigned long long int) min((((/* implicit */int) var_1)), (0))))))))));
                var_26 *= ((/* implicit */signed char) ((-6753621960722052072LL) | (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_8 + 1] [i_8 - 1] [i_8 + 1])) ? (arr_2 [i_8] [i_8 - 1] [i_8 + 1]) : (arr_2 [i_8] [i_8 - 1] [i_8 + 1]))))));
                /* LoopNest 3 */
                for (unsigned char i_10 = 4; i_10 < 19; i_10 += 4) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        for (int i_12 = 1; i_12 < 18; i_12 += 4) 
                        {
                            {
                                arr_39 [i_9] [i_9] [i_9] [i_11] [i_12] = ((/* implicit */unsigned char) arr_21 [i_9] [i_11 - 1] [i_11 + 1] [i_9] [(signed char)17] [(signed char)17] [i_9]);
                                var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_35 [i_12] [i_11 + 1] [i_9]))))) * ((~(max((721143312U), (((/* implicit */unsigned int) var_11))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
