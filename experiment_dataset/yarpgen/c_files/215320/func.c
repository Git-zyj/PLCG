/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215320
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
    var_10 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (min((max((-3869366558176611485LL), (((/* implicit */long long int) (signed char)33)))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)26016))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((unsigned short) 8388607LL)), (((/* implicit */unsigned short) var_8))))))));
    var_11 = ((/* implicit */_Bool) min((3869366558176611485LL), (((/* implicit */long long int) var_8))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) max(((+(8388609LL))), (((/* implicit */long long int) ((min((8388609LL), (((/* implicit */long long int) var_9)))) >= (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1 - 1]))))))));
                arr_6 [i_0] = max((var_0), (((/* implicit */unsigned char) var_3)));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)86)), (arr_0 [i_1 - 1])))) ? (max((arr_0 [i_1 + 2]), (((/* implicit */long long int) max((var_5), (((/* implicit */unsigned short) var_8))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0])), (var_4)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_2] = (+((+(((/* implicit */int) var_5)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_4 = 2; i_4 < 17; i_4 += 2) 
                {
                    arr_15 [i_2] [i_2] [16ULL] [i_2] = ((/* implicit */short) (-(((/* implicit */int) arr_8 [i_2 + 2]))));
                    var_13 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)48))));
                    arr_16 [i_2] [i_2 - 1] [i_2] = ((/* implicit */_Bool) (((-(((/* implicit */int) (signed char)57)))) | ((~(((/* implicit */int) var_8))))));
                    /* LoopSeq 2 */
                    for (int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_14 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_2 - 1] [i_2] [(signed char)12] [i_5]))));
                        arr_20 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */_Bool) var_1);
                    }
                    for (long long int i_6 = 3; i_6 < 17; i_6 += 2) 
                    {
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2 - 1]))) == (arr_11 [i_2])));
                        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (3869366558176611503LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                }
                for (int i_7 = 2; i_7 < 18; i_7 += 3) 
                {
                    arr_25 [i_2] [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) (+(max((arr_19 [i_2 - 1] [i_2] [i_2]), (arr_19 [i_2 + 2] [i_2 - 1] [i_2])))));
                    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (~(arr_23 [i_2] [i_7 - 1] [i_3] [i_2]))))));
                }
                for (short i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    arr_29 [i_2] [i_2] [i_8] = ((/* implicit */_Bool) 6475572241939295958LL);
                    /* LoopNest 2 */
                    for (signed char i_9 = 4; i_9 < 18; i_9 += 4) 
                    {
                        for (short i_10 = 2; i_10 < 18; i_10 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) var_8);
                                var_19 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_31 [i_2 + 2] [i_3] [i_9 + 1] [i_9 - 1] [i_10] [10])) ? (arr_31 [i_2 - 1] [i_3] [i_9 - 3] [i_2 - 1] [i_10] [i_10]) : (arr_31 [i_2] [i_3] [i_9 - 4] [i_9] [i_2] [i_3]))));
                            }
                        } 
                    } 
                }
                var_20 = ((/* implicit */unsigned short) max((var_1), (min((3869366558176611485LL), (min((((/* implicit */long long int) (signed char)-30)), (var_1)))))));
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 19; i_11 += 3) 
                {
                    var_21 |= ((((/* implicit */int) var_3)) >= ((+(((/* implicit */int) arr_18 [i_2] [(short)14] [i_2] [i_2])))));
                    var_22 = ((/* implicit */_Bool) var_6);
                }
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)33)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 223746160))));
            }
        } 
    } 
}
