/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245225
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
    var_17 = 1890328941;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        for (signed char i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) (+(((((((/* implicit */int) var_1)) != (((/* implicit */int) arr_1 [i_0] [(signed char)0])))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (arr_10 [i_0] [i_0 - 2] [i_1 - 2] [i_2 - 1] [i_3 + 1] [i_0]))) : (((((/* implicit */_Bool) arr_10 [i_3] [i_2 - 3] [i_1 + 3] [i_0 - 1] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_3])) : (-911174795)))))));
                        arr_11 [(short)1] [i_3] [i_0] [(short)1] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((-1890328942) - (((/* implicit */int) (signed char)-12))))) ? (min((arr_4 [i_0]), (arr_4 [i_2 - 1]))) : (max((-1890328951), (((/* implicit */int) var_4)))))));
                    }
                    /* vectorizable */
                    for (long long int i_4 = 3; i_4 < 9; i_4 += 3) 
                    {
                        arr_14 [i_0 - 3] [(_Bool)1] [i_0] [i_0] = var_15;
                        arr_15 [i_0] [i_1 + 2] [i_1 + 2] [i_2] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_16)) : (var_15)))) ? (((long long int) (signed char)0)) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_0))))));
                    }
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (short i_6 = 3; i_6 < 7; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) 1890328941)) ? (911174811) : (-1890328941)));
                            var_20 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_1 + 3])) ^ (((((/* implicit */_Bool) var_7)) ? (-1890328937) : (arr_19 [i_0] [i_1] [i_0] [2LL] [i_5] [i_6])))))), (((long long int) (~(var_0))))));
                            arr_21 [i_6] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (-1890328937)))) ? (((((/* implicit */_Bool) arr_17 [i_6] [i_5] [i_2 - 3] [i_1])) ? (arr_17 [5] [i_1 + 2] [i_2 - 2] [i_5]) : (((/* implicit */int) arr_6 [i_0 - 4] [i_5] [i_0 - 4])))) : (((/* implicit */int) arr_13 [i_0 - 1] [i_1 + 2] [i_2 - 3] [i_5])));
                            arr_22 [i_0] [i_0] [i_0] [i_5] [i_0] [i_6 + 2] = ((/* implicit */int) arr_7 [i_0] [i_2] [i_2] [i_6]);
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 1; i_7 < 7; i_7 += 3) 
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_10))));
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) var_2))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 2) 
                        {
                            arr_30 [i_0] [i_2] [i_2 - 3] = ((/* implicit */signed char) (((_Bool)1) || (arr_29 [i_1 + 1] [i_1 + 1] [i_0] [i_1 + 3])));
                            arr_31 [i_0] [i_5] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */short) (((((_Bool)1) ? (1890328932) : (((/* implicit */int) arr_29 [i_0 - 3] [i_2 + 1] [i_0] [i_8])))) > (((/* implicit */int) ((911174801) >= (((/* implicit */int) var_6)))))));
                            arr_32 [i_8 - 2] [i_5] [i_0] [i_0] [i_1 + 3] [i_0] = ((/* implicit */long long int) ((int) (+(((/* implicit */int) (signed char)-21)))));
                            var_23 = -1890328937;
                        }
                        var_24 += ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [3LL] [i_0] [i_1] [i_0])) : (((/* implicit */int) ((unsigned char) arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_7)) : (((((/* implicit */_Bool) (signed char)13)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) arr_28 [i_1] [(unsigned short)0] [i_2] [i_5] [i_5] [i_5]))))))))));
                        var_26 = var_6;
                        arr_33 [i_0] = ((/* implicit */int) max((max((arr_6 [(signed char)6] [i_1 - 2] [i_2 - 1]), (((/* implicit */unsigned short) var_13)))), (((/* implicit */unsigned short) arr_1 [i_0] [i_0]))));
                    }
                    arr_34 [i_0] [(unsigned char)8] [i_0] = ((/* implicit */long long int) var_16);
                }
            } 
        } 
    } 
}
