/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212980
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212980 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212980
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_2 [i_0 + 1] [i_0] [i_0 + 1]), (arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((/* implicit */int) var_7))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 15; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 3; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_9)), (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (arr_6 [i_0 + 1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_7 [i_1] [i_2] [i_0])) >= (((/* implicit */int) (unsigned char)11))))))))));
                                var_16 = arr_12 [(unsigned char)5];
                                arr_13 [i_0 + 1] [i_0] [(_Bool)1] [i_0] [i_0 + 1] = (i_0 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((max((((/* implicit */int) var_9)), (arr_8 [i_0] [i_1] [i_2] [i_3]))) - (64)))))) : (((unsigned long long int) (short)17785))))) : (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((max((((/* implicit */int) var_9)), (arr_8 [i_0] [i_1] [i_2] [i_3]))) - (64))) - (638609584)))))) : (((unsigned long long int) (short)17785)))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        arr_17 [i_1] [i_1] [10] [i_5] [i_5] [(unsigned short)4] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) (short)17785))));
                        arr_18 [i_0 + 1] [i_0] [i_0 + 1] [i_0] = ((((/* implicit */_Bool) arr_10 [i_0])) ? (arr_8 [i_0] [i_1] [i_0 + 1] [i_0]) : (((/* implicit */int) arr_3 [i_0])));
                        arr_19 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_3 [i_0]) ? (((/* implicit */int) (short)-17773)) : (((/* implicit */int) var_11))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        var_17 |= ((/* implicit */int) ((_Bool) arr_8 [i_2] [8ULL] [i_0 + 1] [i_2]));
                        var_18 &= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_9)) : (arr_2 [i_6] [(unsigned char)12] [i_2])))));
                    }
                }
                arr_23 [i_1] [i_0 + 1] [i_1] |= max((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_22 [i_1] [i_1] [(signed char)7] [i_1])))) : (((((/* implicit */int) arr_10 [i_1])) >> (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_1])))))), (((/* implicit */int) ((signed char) var_8))));
                var_19 = ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_7))))) ? (((/* implicit */int) max((((/* implicit */signed char) arr_5 [i_0 + 1] [i_0 + 1] [i_0] [i_0])), (var_9)))) : (((/* implicit */int) ((unsigned char) arr_3 [i_0])))))));
                arr_24 [i_0] [13] [i_1] = ((/* implicit */short) ((((_Bool) arr_12 [i_0 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2841407398067140113ULL))))) : (min((((/* implicit */int) ((var_4) > (((/* implicit */int) arr_3 [i_0]))))), (((((/* implicit */int) arr_21 [i_0] [i_0] [i_1] [i_0])) + (((/* implicit */int) var_14))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */signed char) (short)-7892);
    var_21 = ((/* implicit */_Bool) var_5);
    var_22 = ((/* implicit */unsigned long long int) var_12);
}
