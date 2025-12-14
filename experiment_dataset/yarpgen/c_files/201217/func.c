/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201217
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
    for (int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_15 -= ((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) % ((+(((/* implicit */int) arr_3 [17ULL]))))));
                var_16 &= ((/* implicit */int) arr_5 [i_1] [i_0] [i_0]);
                var_17 |= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)4484)) ? (((/* implicit */unsigned long long int) 2147483647)) : (18446744073709551615ULL)))));
                                var_19 -= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)61440)) == (arr_8 [i_0] [i_3])));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_20 ^= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_5] [i_5])) != (((/* implicit */int) arr_15 [i_5] [i_2] [i_1] [i_0]))));
                                arr_21 [i_0] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((2147483632) / (-2147483633)));
                                arr_22 [i_2] [i_5] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */signed char) arr_13 [i_6] [i_5] [i_2] [i_0] [i_0]);
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_1] [(signed char)2] [i_2] = arr_6 [i_0] [i_0] [i_0] [i_0];
                    arr_24 [(unsigned short)12] [i_2] [i_2] = ((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_0] [2] [14ULL] [(signed char)0]));
                }
                for (short i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    var_21 &= ((/* implicit */unsigned short) max((((arr_10 [i_0]) / (arr_10 [i_0]))), (((/* implicit */int) ((signed char) (_Bool)1)))));
                    var_22 ^= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_7])) ? (arr_8 [i_0] [i_7]) : (((/* implicit */int) arr_27 [i_0]))))))) ? ((((!((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [i_1] [i_0]))) : (4294967294U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [(unsigned short)8] [i_1] [i_1] [(_Bool)1] [(_Bool)1] [i_1])))))));
                    arr_28 [i_7] [i_1] [i_7] [i_7] = var_8;
                    arr_29 [i_7] [i_1] [(short)5] [i_1] = (+(max((arr_7 [14] [i_1] [i_1] [i_1]), (arr_7 [i_0] [i_0] [i_1] [i_7]))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 1; i_8 < 16; i_8 += 4) 
                {
                    var_23 -= ((/* implicit */unsigned short) var_9);
                    var_24 -= ((/* implicit */unsigned short) ((short) var_6));
                }
            }
        } 
    } 
    var_25 ^= ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_9 = 2; i_9 < 23; i_9 += 1) 
    {
        for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 4) 
        {
            {
                var_26 ^= ((/* implicit */unsigned short) max((((/* implicit */int) arr_33 [i_9 + 1])), (((((/* implicit */int) arr_34 [i_9 - 2])) & (((/* implicit */int) arr_34 [i_9 - 1]))))));
                arr_36 [i_9] [i_10] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_32 [i_9]))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 4; i_11 < 22; i_11 += 1) 
                {
                    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        {
                            arr_42 [i_10] [i_10] [i_10] [i_12] &= ((/* implicit */unsigned short) (-(((/* implicit */int) ((_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))))));
                            var_27 -= ((/* implicit */signed char) (~(var_6)));
                            var_28 -= ((/* implicit */unsigned int) ((min((502018869), (((/* implicit */int) arr_40 [i_9] [i_10] [i_10] [i_11 + 2] [14ULL] [i_12])))) * (((((/* implicit */_Bool) arr_35 [i_11 + 2])) ? (((/* implicit */int) arr_40 [i_9 + 1] [(signed char)13] [i_11] [i_11 - 1] [i_11] [i_12])) : (var_13)))));
                        }
                    } 
                } 
                arr_43 [i_10] = ((/* implicit */short) ((((/* implicit */int) ((_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) var_1)))))) > (((/* implicit */int) max((arr_40 [i_9 - 2] [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9]), (arr_40 [i_9 - 2] [i_9] [i_9 - 1] [i_9 - 1] [i_9] [i_9]))))));
            }
        } 
    } 
    var_29 ^= ((/* implicit */unsigned short) var_0);
}
