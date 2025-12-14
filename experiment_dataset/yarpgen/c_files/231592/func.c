/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231592
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
    var_11 += ((/* implicit */long long int) max((var_9), (((/* implicit */signed char) ((min((var_6), (10LL))) > (((/* implicit */long long int) var_4)))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-11LL)));
        var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) (_Bool)1)) : (-1)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */long long int) (((_Bool)1) ? (0) : (((/* implicit */int) (unsigned char)48))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_4 [i_1]))));
        var_15 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_6)))) ? ((+(arr_1 [i_1] [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) var_2)))));
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_4 = 2; i_4 < 22; i_4 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2])) ? (var_8) : (5867073575256118805LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_4] [i_4] [i_4] [i_4 + 1]))) : (var_8)));
                        arr_17 [i_1] [i_2] [i_2] [i_4] = (!(((/* implicit */_Bool) arr_11 [i_4] [i_4 + 1] [i_4 - 2] [i_4])));
                    }
                    /* vectorizable */
                    for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) /* same iter space */
                    {
                        arr_21 [i_1] [i_2] [i_2] [i_2] [i_5 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3857462169556976781LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : (((var_8) * (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_5])))))));
                        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_2] [i_2] [i_1])) ? (((/* implicit */int) arr_18 [i_5] [i_5] [i_5 - 1] [i_5 - 2] [i_5 + 1] [i_5 + 1])) : ((+(((/* implicit */int) var_7))))));
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 3; i_6 < 22; i_6 += 2) 
                        {
                            arr_26 [i_2] |= ((/* implicit */long long int) ((arr_12 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (((/* implicit */int) arr_12 [i_5 - 2] [i_5 - 2] [i_6] [i_6 + 1])) : (((/* implicit */int) arr_3 [i_5 - 2]))));
                            arr_27 [i_6] [i_6] = ((/* implicit */long long int) (-(-1724526797)));
                        }
                        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) arr_5 [i_2] [i_1]))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 1) 
                        {
                            {
                                arr_34 [i_1] [i_2] [i_7] [i_3] [i_7] [i_8] [i_8] = ((/* implicit */unsigned int) ((var_6) % (((/* implicit */long long int) arr_8 [i_1] [i_1]))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (arr_23 [i_1] [i_2] [i_1] [i_7] [i_8]) : (arr_23 [i_8] [i_1] [i_3] [i_1] [i_1]))))));
                                arr_35 [i_1] [i_2] [i_7] [i_7] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_8 [i_2] [i_2]))) | ((-(arr_8 [i_1] [i_3])))));
                                var_20 += ((((/* implicit */_Bool) ((arr_3 [i_3]) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_1]))))) ? (((long long int) var_9)) : (((/* implicit */long long int) ((/* implicit */int) min((arr_22 [i_1] [i_1] [i_2] [i_3] [i_7] [i_8]), (arr_22 [i_1] [i_2] [i_3] [i_7] [i_2] [i_8]))))));
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_12 [i_8] [i_2] [i_3] [i_2]) ? ((~(((/* implicit */int) (unsigned char)252)))) : (((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1]))))) ? (var_6) : (((/* implicit */long long int) var_0))));
                            }
                        } 
                    } 
                    arr_36 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (-1396233560) : (((/* implicit */int) arr_10 [i_1]))))) : ((-(((((/* implicit */_Bool) arr_31 [i_1] [i_3] [i_3])) ? (arr_8 [i_2] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81)))))))));
                    arr_37 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_0 [i_3] [i_1])))) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                }
            } 
        } 
    }
}
