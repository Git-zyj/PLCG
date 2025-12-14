/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229795
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
    var_16 = ((/* implicit */signed char) var_12);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)3239)), (((((/* implicit */_Bool) var_9)) ? (arr_3 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [(unsigned short)9])))))))))))));
                                var_18 &= ((_Bool) arr_8 [i_0] [i_0] [i_2] [(unsigned char)6] [i_4] [i_4]);
                                arr_13 [i_4] [i_4] [i_4] [i_4] [i_3] [i_4] = ((max((arr_0 [i_1 + 2]), (arr_0 [i_1 + 3]))) / (arr_0 [i_1 - 1]));
                                arr_14 [i_0] [(unsigned short)8] [i_2] [(unsigned short)8] [i_2] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-2957))))) ? (((int) arr_4 [i_3])) : (((((/* implicit */_Bool) arr_4 [i_1 + 2])) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) arr_4 [i_2]))))));
                            }
                        } 
                    } 
                    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_10 [i_1 + 3] [i_1 + 4] [i_1 + 4])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_2])) : (arr_0 [i_1 - 1]))) : ((-(((/* implicit */int) ((((/* implicit */int) (short)-2964)) >= (((/* implicit */int) var_7)))))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_11)) ? (arr_5 [i_1] [(short)1] [i_6]) : (((/* implicit */int) arr_11 [1U] [i_6] [1U])))) > (((/* implicit */int) arr_2 [(signed char)1] [i_2]))))) >> (((((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) - (47663)))));
                                arr_20 [i_0] [i_1] [i_2] [4LL] [i_5] [i_6] |= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_9 [i_1 + 1] [(_Bool)1] [i_2] [i_2] [i_1 - 1])) ? (arr_9 [i_1] [i_1] [i_2] [(unsigned char)2] [i_1 - 1]) : (arr_9 [i_0] [i_1] [i_0] [i_0] [i_1 - 1])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) != (min((var_11), (4294967295U)))))), (((((/* implicit */int) arr_15 [i_1 + 3] [i_1 - 1])) + (((/* implicit */int) arr_15 [i_1 + 1] [i_1 + 4])))))))));
                                arr_28 [i_0] [i_0] [i_2] [i_7] [i_8] = ((/* implicit */long long int) ((signed char) 2898284547U));
                            }
                        } 
                    } 
                    arr_29 [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_7))))))), (min((((unsigned int) arr_15 [(signed char)3] [i_1])), (((/* implicit */unsigned int) (short)-2962))))));
                }
            } 
        } 
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2898284547U)) || ((_Bool)1)));
        var_23 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((unsigned char) arr_0 [i_0]))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0] [i_0] [6])) ? (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)-2957))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max((arr_10 [5LL] [i_0] [i_0]), (((/* implicit */unsigned short) (short)-2960)))))))));
        arr_30 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_15 [i_0] [8LL]))))) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0])) : ((~(((/* implicit */int) (short)-2947)))))) - (((/* implicit */int) ((((((/* implicit */_Bool) arr_12 [i_0] [i_0] [(unsigned short)0] [i_0] [(unsigned short)0] [i_0])) ? (((/* implicit */int) arr_27 [i_0] [(unsigned char)4] [(unsigned char)4] [(unsigned char)4] [i_0])) : (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [(short)9] [i_0] [i_0])))) <= (((/* implicit */int) max((arr_2 [i_0] [(signed char)8]), (((/* implicit */short) var_2))))))))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) arr_6 [i_0]))));
            var_25 = ((/* implicit */signed char) (unsigned char)235);
            arr_35 [i_9] = ((/* implicit */long long int) ((((unsigned int) ((short) (unsigned char)156))) >= (((/* implicit */unsigned int) ((/* implicit */int) min((arr_4 [i_0]), (arr_4 [i_9])))))));
        }
    }
    /* vectorizable */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        arr_38 [(unsigned char)10] &= ((/* implicit */signed char) arr_37 [7ULL]);
        /* LoopSeq 1 */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            var_26 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_13)))))));
            arr_42 [i_11] [i_10] |= ((/* implicit */int) (~(((((/* implicit */_Bool) var_0)) ? (1396682759U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34683)))))));
        }
    }
    var_27 |= ((/* implicit */int) min((var_11), (((/* implicit */unsigned int) var_5))));
}
