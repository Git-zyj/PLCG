/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245952
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
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_11))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1491412173375573504LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)49977))) : (604499461U)))) ? ((~(var_7))) : (((/* implicit */int) var_11))))) : (min((((/* implicit */long long int) 3007512112U)), (-1491412173375573505LL)))));
    var_14 = ((/* implicit */signed char) (unsigned char)255);
    var_15 = ((/* implicit */signed char) var_3);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) 604499460U))));
        /* LoopSeq 2 */
        for (signed char i_1 = 3; i_1 < 12; i_1 += 3) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned int) (((-(var_5))) != (arr_4 [i_0 + 3])));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 + 1])) ? (-1491412173375573525LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 2])))));
                        var_17 |= ((/* implicit */unsigned short) (signed char)-109);
                        arr_13 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned short) arr_0 [i_0]);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_18 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)6890))) <= (0U)));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) (+(((/* implicit */int) var_0)))))));
                        arr_19 [i_5] [i_0] [i_1] = ((/* implicit */short) (-(((/* implicit */int) arr_11 [i_1 + 2] [i_0] [i_0] [i_0 + 2]))));
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4]))) : ((~(9223372036854775807LL)))));
                    }
                } 
            } 
        }
        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            arr_22 [i_0] [i_0] [i_0] = ((/* implicit */signed char) var_6);
            var_21 = var_5;
            var_22 = ((/* implicit */unsigned char) arr_17 [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                arr_27 [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_10))) ? (arr_20 [i_0]) : ((-(((/* implicit */int) (unsigned char)102))))));
                var_23 = ((/* implicit */int) (!(arr_11 [i_0 - 1] [i_0] [i_0] [i_0])));
                /* LoopSeq 1 */
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 3) 
                {
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0 + 2] [i_0 + 2] [i_0] [i_0]))) : (arr_26 [i_0 - 1] [i_0] [i_0])));
                    arr_31 [i_7] [i_7] [i_0] [i_8] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (arr_4 [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0 + 2] [i_0 + 3])))));
                    var_25 = ((/* implicit */signed char) arr_3 [i_0]);
                }
            }
            for (unsigned int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 3; i_10 < 13; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_3))));
                            var_27 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_32 [i_0] [i_0] [i_0] [i_0 + 3])) ? (arr_32 [i_0] [i_0] [i_0] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])))))) > (var_5)));
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) ((short) arr_14 [i_0 + 2] [i_0 - 1])))));
                arr_41 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) 3690467855U)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)86))));
            }
        }
    }
    var_30 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)98))));
}
