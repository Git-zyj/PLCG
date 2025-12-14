/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246003
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
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 2; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_16 += ((/* implicit */unsigned int) var_6);
                                arr_11 [i_0] [i_1] [i_4 + 1] [i_0] [i_1] [i_4] [i_1] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)88)), ((unsigned char)7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) : (arr_3 [i_0] [i_1] [i_2])))));
                                var_17 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_9 [i_4 - 1] [(signed char)6] [i_2] [1] [i_4 + 2] [i_1] [i_3])) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))))), (arr_3 [i_3] [i_3] [i_3])));
                            }
                        } 
                    } 
                } 
                arr_12 [i_1] = ((/* implicit */signed char) var_2);
                arr_13 [i_0] &= ((/* implicit */unsigned long long int) (signed char)71);
                arr_14 [i_1] = ((/* implicit */unsigned char) (unsigned short)22769);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) 2180824149U);
    var_19 = ((/* implicit */unsigned char) var_15);
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (short i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 2; i_8 < 9; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */signed char) ((((((((((/* implicit */_Bool) 3273606911U)) ? (((/* implicit */int) arr_25 [i_5] [i_5])) : (((/* implicit */int) arr_17 [(short)3])))) + (2147483647))) >> (((((/* implicit */int) arr_25 [i_5 - 1] [i_5 - 1])) + (12374))))) <= (((((/* implicit */int) arr_15 [i_9])) & (((/* implicit */int) (unsigned short)48455))))));
                                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((((-1347966684) + (2147483647))) >> (((var_6) - (8263849888267354014ULL))))))) ? (var_13) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [i_5] [i_5 - 1] [i_5 + 1] [4ULL])) ? (((/* implicit */int) arr_24 [i_5] [i_5 - 1] [i_5 - 1] [i_5])) : (((/* implicit */int) arr_24 [(unsigned short)2] [i_5 - 1] [i_5 - 1] [i_5])))))));
                                arr_26 [i_5] [(_Bool)1] [i_7] [i_5] [i_9] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-71)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_8))))))) != (var_6)));
                            }
                        } 
                    } 
                    arr_27 [i_5] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)42770)) : (1663051031)))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_10 = 0; i_10 < 13; i_10 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4096))) <= (8387942131594255882ULL))))));
                        arr_32 [i_5] [i_6] [i_7] [i_10] = ((/* implicit */unsigned short) (signed char)-100);
                        var_23 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_5]))))) ? (((/* implicit */unsigned long long int) arr_21 [(unsigned short)5] [i_6] [(unsigned short)5])) : (((arr_20 [i_5] [i_7] [i_10]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_31 [i_5] [i_5 - 1] [i_5] [i_5 - 1])))));
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 1; i_11 < 12; i_11 += 1) 
                        {
                            arr_35 [i_5] [2] [(unsigned short)6] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_17 [i_5 + 1]))));
                            var_24 = ((/* implicit */unsigned char) (signed char)106);
                            arr_36 [i_5] [i_5] [i_5] [i_5] [i_5 - 1] [i_5] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_34 [(unsigned short)12] [1] [i_7] [i_10] [i_11])) ? (1125899906842623ULL) : (var_13))));
                            var_25 += ((/* implicit */signed char) ((int) arr_28 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5]));
                        }
                        for (int i_12 = 2; i_12 < 11; i_12 += 4) 
                        {
                            arr_40 [i_5 - 1] [i_6] [i_5 - 1] [i_10] [i_12] = ((/* implicit */int) ((unsigned char) arr_37 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]));
                            arr_41 [i_12] [i_12] [i_5] [i_10] [i_12] [12U] [i_6] = ((/* implicit */short) ((arr_18 [i_12 + 1]) << (((((/* implicit */int) var_2)) - (52926)))));
                            arr_42 [i_6] [i_7] [i_10] = ((/* implicit */unsigned long long int) arr_34 [i_5] [i_6] [i_7] [(_Bool)1] [(unsigned short)4]);
                        }
                    }
                    arr_43 [i_5] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_5 - 1])) ? (((((/* implicit */int) arr_19 [i_6])) >> (((((/* implicit */int) var_2)) - (52968))))) : (((/* implicit */int) arr_24 [i_5] [i_5 - 1] [i_7] [i_7]))))) || (((/* implicit */_Bool) 2679257908449296284ULL))));
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */int) var_1);
}
