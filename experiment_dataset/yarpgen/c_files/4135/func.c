/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4135
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4135 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4135
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
    /* LoopNest 3 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_12 -= ((/* implicit */unsigned short) arr_0 [17LL]);
                    /* LoopSeq 1 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        arr_11 [i_3] [i_1] &= ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1])) ? (arr_5 [i_0 + 2] [i_0 + 2]) : (arr_5 [i_0 + 1] [i_0 - 1]))), (arr_5 [i_0 + 1] [i_0 + 2])));
                        arr_12 [i_3] [i_1] |= ((/* implicit */unsigned int) ((arr_2 [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */signed char) arr_9 [i_3] [i_2])), (arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))))) : (((var_6) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (var_10) : (((/* implicit */long long int) arr_7 [i_1] [i_3])))) : (arr_3 [i_0 + 1] [i_0 - 1])))));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 22; i_4 += 2) 
                    {
                        arr_15 [i_4] [i_4] [i_4] [i_0] &= (!(((/* implicit */_Bool) arr_8 [i_0] [i_4])));
                        var_13 = ((/* implicit */signed char) arr_13 [i_1] [i_1] [i_1] [i_2] [i_4] [i_4]);
                        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_14 [i_0] [i_1] [i_0 - 1] [i_0])) : (((/* implicit */int) var_7))));
                    }
                    var_15 = ((/* implicit */unsigned char) var_4);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        for (long long int i_6 = 0; i_6 < 18; i_6 += 3) 
        {
            {
                arr_21 [i_5] [i_5] = ((/* implicit */long long int) arr_7 [(_Bool)1] [i_5]);
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 16; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) max((arr_25 [i_5] [i_5] [i_5]), (((/* implicit */int) arr_23 [i_5] [i_5] [i_7 - 1] [i_8])))))) ? (min((((/* implicit */long long int) ((unsigned char) arr_19 [i_7] [(unsigned char)17] [(unsigned char)17]))), (arr_17 [i_5] [0U]))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_5] [i_8 + 1] [i_5] [i_8 + 1] [i_8] [i_8])) ? (((/* implicit */int) arr_10 [i_8] [i_8 + 1] [(unsigned short)1] [i_8 + 1])) : (((/* implicit */int) arr_23 [i_8] [i_5] [11] [i_8 + 1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_5 [i_8] [i_7])))))) : (var_10)));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        var_19 = ((/* implicit */_Bool) ((unsigned short) var_1));
        arr_32 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [(unsigned char)18])) ? (((/* implicit */int) arr_31 [i_9])) : (arr_7 [i_9] [i_9])))), ((+(var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [(short)16] [i_9] [i_9 + 1] [i_9 + 1] [i_9 - 1] [i_9]))))) : (max((min((arr_0 [i_9]), (((/* implicit */int) var_8)))), (((((/* implicit */_Bool) arr_28 [i_9 - 1] [i_9 - 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_9]))))))));
        arr_33 [i_9] = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))))), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_9]))) & (var_1))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) arr_7 [i_9] [(unsigned short)7])), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (min((arr_8 [i_9] [(_Bool)1]), (((/* implicit */long long int) arr_28 [i_9] [i_9]))))))));
    }
}
