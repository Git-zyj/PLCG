/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242787
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)86))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (var_2)));
        var_18 = ((((/* implicit */_Bool) 3358605676730657973ULL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                {
                    var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (signed char)112))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 4) 
                        {
                            {
                                arr_13 [i_4] = (signed char)-117;
                                var_20 = ((/* implicit */short) (signed char)112);
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_4] [i_3] [i_2] [i_1])) ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (arr_9 [i_1] [i_1] [i_3] [i_3])));
                            }
                        } 
                    } 
                    arr_14 [i_0 - 1] [i_0 - 1] [i_2] [i_2] &= ((/* implicit */short) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 + 1]))));
                    arr_15 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((int) var_16));
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) 407406889U)) ? (((/* implicit */long long int) var_10)) : (var_13))) : (-1LL))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_5 = 1; i_5 < 8; i_5 += 2) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_20 [i_5] [3ULL] = ((/* implicit */unsigned long long int) (+(((((/* implicit */unsigned int) 281665589)) / (var_15)))));
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_14) >> (((((/* implicit */int) var_5)) - (42602)))))) ? (((/* implicit */long long int) var_15)) : (var_13)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 3) 
    {
        var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [(short)8])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)44475))))) : (((((/* implicit */int) arr_23 [10LL])) >> (((((/* implicit */int) arr_23 [10LL])) - (27))))))))));
        var_25 = ((/* implicit */_Bool) (short)16704);
    }
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-(var_14))))))) : (((/* implicit */int) (signed char)105))));
    var_27 = ((/* implicit */unsigned int) var_8);
    var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_16)), (22U)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(var_11)))))))) : (((((/* implicit */_Bool) ((unsigned int) var_2))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (0LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)11444)))))));
}
