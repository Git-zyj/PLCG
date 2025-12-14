/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210975
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
    var_18 = ((/* implicit */long long int) var_17);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */short) arr_0 [i_0 - 2]);
        arr_3 [i_0 - 1] [i_0 - 1] = ((/* implicit */long long int) var_10);
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */signed char) ((var_2) - (1123520233U)));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (int i_3 = 2; i_3 < 8; i_3 += 3) 
            {
                {
                    arr_11 [i_3 + 3] [i_3 + 3] [8LL] [i_1] = ((/* implicit */unsigned int) var_12);
                    arr_12 [2] |= ((/* implicit */long long int) max((((/* implicit */unsigned int) var_9)), (arr_9 [i_3] [i_2] [i_1] [1ULL])));
                }
            } 
        } 
        arr_13 [i_1] [i_1] = (-(((/* implicit */int) arr_1 [i_1])));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 9; i_4 += 3) 
        {
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                {
                    arr_22 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) var_9);
                    arr_23 [i_1] [i_1] [i_4 + 2] [i_4 + 2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_16 [i_4 + 2] [i_4 - 1])) ? (((/* implicit */int) arr_19 [i_4 - 1] [i_4 + 2] [i_4 + 1] [i_4 + 2])) : (((/* implicit */int) arr_19 [i_4 - 1] [i_4 + 1] [i_4 + 2] [i_4 + 2])))), (((/* implicit */int) arr_6 [i_4 + 1]))));
                    /* LoopNest 2 */
                    for (short i_6 = 0; i_6 < 11; i_6 += 3) 
                    {
                        for (signed char i_7 = 1; i_7 < 7; i_7 += 2) 
                        {
                            {
                                arr_28 [i_5] [(signed char)2] [i_4 - 1] [i_4 - 1] [i_5] = ((((/* implicit */_Bool) (+(arr_16 [i_5] [(unsigned char)4])))) ? (max(((+(((/* implicit */int) var_8)))), (((/* implicit */int) var_10)))) : ((~(((/* implicit */int) arr_20 [3LL] [i_4 + 2] [i_5] [i_6])))));
                                arr_29 [i_1] [10LL] |= ((/* implicit */unsigned int) arr_18 [i_1] [(signed char)8] [6LL]);
                            }
                        } 
                    } 
                    arr_30 [i_5] [(_Bool)1] [(_Bool)1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((12010477391098551629ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241)))))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                }
            } 
        } 
        arr_31 [i_1] [i_1] |= ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_17)))))) <= (var_2))) ? (max((8094858538646989192LL), (((/* implicit */long long int) 898369557U)))) : (((/* implicit */long long int) min(((~(arr_9 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned int) arr_20 [i_1] [i_1] [i_1] [i_1]))))));
        arr_32 [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_4)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_4)) ? (253593747U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) (!(((((/* implicit */int) var_9)) != (((/* implicit */int) arr_7 [i_1]))))))))));
    }
    var_19 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) var_14)) : (var_13))) & (((/* implicit */long long int) (~(((/* implicit */int) var_1)))))));
    var_20 = ((/* implicit */unsigned char) var_10);
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (signed char)-25)) ? (67108863LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))))))) ? (((/* implicit */int) var_7)) : (((max((((/* implicit */int) var_1)), (var_5))) % (var_5)))));
}
