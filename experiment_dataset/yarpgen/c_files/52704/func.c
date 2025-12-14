/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52704
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
    var_10 = min((((/* implicit */int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */int) var_8))))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 7U)) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) arr_0 [i_0]))))));
        var_12 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 1) /* same iter space */
                    {
                        arr_12 [i_3] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_7 [i_3] [i_2] [i_1] [(signed char)2]))));
                        arr_13 [i_3] [i_3] [i_2] [i_3] = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_6))))));
                    }
                    for (unsigned int i_4 = 1; i_4 < 23; i_4 += 1) /* same iter space */
                    {
                        arr_16 [i_0] [i_0] [i_2] [i_0] [i_4 - 1] |= ((/* implicit */short) (+(((unsigned int) var_0))));
                        var_13 &= ((/* implicit */unsigned char) (+(arr_1 [i_2] [i_2])));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 1; i_5 < 22; i_5 += 3) 
                        {
                            var_14 = (+(((/* implicit */int) arr_0 [i_0])));
                            arr_21 [i_0] [i_0] [20] [20] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_4)) ? (arr_2 [(unsigned char)9]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                            var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) arr_7 [i_1] [i_1] [13] [i_4 + 1]))));
                        }
                        for (int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            var_16 -= ((/* implicit */unsigned short) (((~(arr_20 [i_0] [i_1] [i_1] [i_0] [i_6]))) != (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_0]))));
                            var_17 = (+(((/* implicit */int) arr_0 [i_4 + 1])));
                            var_18 = ((/* implicit */signed char) ((arr_18 [i_0] [i_0] [i_2] [i_0] [i_0]) & (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)47326)) >> (((((/* implicit */int) arr_24 [i_0] [i_1] [i_0] [i_0] [i_4 + 1] [i_0])) - (52133))))))));
                            arr_26 [i_0] [i_1] [i_0] [i_6] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [4LL] [i_0]))));
                            arr_27 [19] [19] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_9 [i_6] [i_4] [i_1] [i_1] [i_1] [i_0]))))) == ((+(4294967295U)))));
                        }
                        arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_4]))));
                    }
                    var_19 = ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [7] [i_1] [7])) ? (arr_8 [i_2] [i_2] [i_2]) : (arr_8 [i_0] [i_0] [i_0]));
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 24; i_8 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) (-(((unsigned long long int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                                arr_34 [i_7] [i_7] [i_7] [4U] [i_7] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_11 [i_7] [i_1] [(unsigned char)13] [i_7])) ? (arr_11 [i_8] [4] [4] [(short)7]) : (arr_11 [i_0] [i_7] [i_0] [i_7])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
