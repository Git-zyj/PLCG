/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232705
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
    var_11 = var_4;
    var_12 *= ((/* implicit */short) (unsigned short)6760);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)4926))) | (arr_1 [i_0 - 1])));
        var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */int) arr_2 [i_0 + 3])) > (((/* implicit */int) arr_2 [i_0 + 2])))))));
            var_16 = ((/* implicit */unsigned char) (!((_Bool)1)));
            arr_4 [i_1] = ((/* implicit */long long int) (unsigned short)39414);
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 17; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 4) 
                    {
                        {
                            arr_13 [i_3 + 1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) arr_2 [i_1]);
                            arr_14 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)4926))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            var_17 = ((/* implicit */long long int) min((var_17), (((((/* implicit */_Bool) var_4)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
            /* LoopSeq 4 */
            for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_10 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((+(var_0)))));
                var_19 = ((/* implicit */signed char) (((-(var_4))) - ((+(var_0)))));
            }
            for (long long int i_7 = 2; i_7 < 17; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 2; i_8 < 17; i_8 += 2) 
                {
                    for (unsigned short i_9 = 2; i_9 < 17; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)26122)) + (((/* implicit */int) (unsigned short)26137)))))));
                            var_21 = 536870912U;
                            var_22 = ((/* implicit */short) ((arr_1 [i_7 + 1]) - (arr_1 [i_7 + 1])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 536870912U))));
            }
            for (unsigned short i_10 = 1; i_10 < 17; i_10 += 3) 
            {
                var_24 = ((/* implicit */_Bool) var_0);
                arr_32 [(short)13] [i_5] [i_5] = ((((/* implicit */_Bool) (+(536870912U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3758096402U) >= (var_1))))) : (4294967295U));
            }
            for (signed char i_11 = 1; i_11 < 15; i_11 += 4) 
            {
                var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)13865)) ? (((/* implicit */int) arr_3 [i_0] [i_0] [i_0 + 1])) : (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (signed char i_12 = 4; i_12 < 16; i_12 += 4) 
                {
                    for (unsigned short i_13 = 1; i_13 < 17; i_13 += 1) 
                    {
                        {
                            arr_40 [i_0 - 1] [(unsigned char)5] [i_11] [i_0 - 1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_36 [i_11 + 2] [i_11] [i_0 + 1] [i_0] [i_0] [i_0]))));
                            arr_41 [(unsigned short)15] [0ULL] [0ULL] [i_12] [i_13] [i_0] = ((/* implicit */unsigned char) ((5771968960980841791LL) + (((/* implicit */long long int) ((/* implicit */int) (signed char)-39)))));
                            arr_42 [i_0] [i_11] [i_13 - 1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-73))) <= (arr_11 [i_0 + 1] [i_0 + 1] [i_11 + 2] [i_11] [i_13 + 1])));
                            var_26 = ((/* implicit */unsigned short) (!(arr_0 [i_12 - 3] [i_0 - 1])));
                            var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) ((((/* implicit */_Bool) arr_31 [i_0 + 2])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (4063890513U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)39413)))))) : (arr_9 [i_13 - 1] [i_12 - 3] [i_11 + 3] [i_0 - 1]))))));
                        }
                    } 
                } 
            }
        }
    }
    var_28 = ((/* implicit */signed char) var_4);
}
