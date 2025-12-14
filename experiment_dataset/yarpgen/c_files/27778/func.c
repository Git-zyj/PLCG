/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27778
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
    var_18 = ((/* implicit */unsigned int) var_5);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_19 *= ((/* implicit */short) (~(2214399212U)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (+(arr_0 [i_3] [4U]))))));
                        var_21 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_4))) ? (((/* implicit */unsigned long long int) var_1)) : (((15177852748620384330ULL) / (14692231706408214179ULL)))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        var_22 = ((/* implicit */unsigned int) arr_9 [i_0]);
                        var_23 *= max((136094355U), (((/* implicit */unsigned int) (_Bool)0)));
                        var_24 *= ((/* implicit */long long int) ((unsigned short) ((_Bool) arr_12 [i_1] [i_1 + 1] [i_2] [i_2] [i_2] [i_1 + 1])));
                        arr_14 [i_4] [i_2] [i_0] &= ((/* implicit */long long int) min((((unsigned short) 17592186044412ULL)), (max((arr_4 [(short)6] [i_2] [i_1 + 1]), (((/* implicit */unsigned short) arr_6 [i_2] [i_2]))))));
                        var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((838779858848010863ULL), (((/* implicit */unsigned long long int) (short)627))))) ? (arr_8 [2LL] [i_0] [i_1 + 2] [i_1 + 1]) : (15177852748620384330ULL)))) ? (max((var_8), (((/* implicit */unsigned int) 643546512)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (signed char)-5)), ((unsigned char)21)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) ((unsigned char) var_1))))))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 136094355U))));
                        arr_18 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_10 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) 643546532)))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 3; i_7 < 9; i_7 += 1) 
                        {
                            {
                                arr_25 [i_2] [i_2] [i_2] [(signed char)8] [8U] &= ((/* implicit */unsigned char) ((3368136211U) & (4294967279U)));
                                arr_26 [i_0] = ((/* implicit */short) max((min((((/* implicit */unsigned int) (_Bool)0)), (2101853670U))), (((((/* implicit */_Bool) arr_9 [i_0])) ? (min((((/* implicit */unsigned int) var_10)), (arr_12 [i_0] [6U] [i_2] [i_0] [i_0] [1U]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)32767)) && (var_9)))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_27 = ((var_10) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (arr_12 [i_0] [i_0] [i_0] [i_0] [9] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)150))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3139)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (1529866294U))));
        arr_27 [4U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((long long int) arr_16 [10] [0LL] [i_0] [i_0])) : (((/* implicit */long long int) ((/* implicit */int) ((max((-1132358950), (0))) > (2147483647)))))));
        var_28 = arr_11 [(short)0] [i_0] [(short)0] [i_0] [i_0];
    }
    var_29 = ((/* implicit */_Bool) max((2873907758U), (((/* implicit */unsigned int) var_6))));
    var_30 *= ((/* implicit */_Bool) 190016131U);
    /* LoopSeq 1 */
    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) min((var_31), (arr_28 [i_8])));
        var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) arr_28 [i_8]))));
    }
}
