/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219341
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = min((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_0 [5ULL])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) (signed char)78)) ? (1073741824U) : (((/* implicit */unsigned int) 2147483647)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_1 - 1] [i_2])))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 - 2] [i_1] [i_2] [(unsigned char)14])) * (min(((-2147483647 - 1)), (((/* implicit */int) (unsigned short)63488))))))));
                    arr_10 [i_2] [i_1 - 2] = ((/* implicit */signed char) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */unsigned short) ((arr_4 [i_4] [i_2] [0ULL]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_12 [i_0] [i_1 - 2])))) : (((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_6 [i_2] [i_2] [i_4] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) : (arr_3 [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1 + 1] [(short)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2053))) : (arr_5 [i_0] [i_0])))))));
                                arr_16 [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((arr_4 [i_0] [i_0] [i_0]) ? (676269876U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))) ^ (min((((/* implicit */long long int) (short)11019)), (arr_12 [i_3] [i_3])))));
                                arr_17 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_7 [(unsigned char)2] [i_2] [i_2] [i_2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 17; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_22 [(short)13] [(signed char)7] [(short)13] [i_5] [(short)13] [i_5] = ((/* implicit */_Bool) arr_1 [i_1 - 2] [i_0]);
                                arr_23 [i_6 - 1] [(signed char)5] [i_6 - 1] [i_6 - 1] [i_6] = arr_6 [i_0] [i_1 + 1] [i_0] [i_1];
                                arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 2] [i_1 - 2] &= ((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_25 [i_0] [i_0] [(signed char)15] [i_2] [i_2] [(signed char)15] [i_6] = max((((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [(_Bool)1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) : (arr_14 [i_0] [(unsigned char)16] [(_Bool)1] [i_2] [i_5] [i_6] [i_6 - 1]))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_1 - 2]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_1] [i_6 - 1] [i_6] [i_1 + 2])) + (((/* implicit */int) arr_19 [i_2] [i_6 - 1] [i_0] [i_1 + 2]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
        {
            {
                arr_32 [i_7] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25688)) ? (-748747177731642235LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [5U] [i_8])))))) ? (((3480535766U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_8] [i_7]))))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)182)), ((short)6299))))))) | ((+(arr_5 [i_7] [i_8])))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 2; i_9 < 7; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            arr_37 [i_7] [i_10] [i_9] [i_9] [i_10] = ((/* implicit */int) (~((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) & (arr_33 [i_10] [(signed char)4] [i_7])))))));
                            arr_38 [i_9] [i_8] [i_9] [i_8] [i_8] &= ((/* implicit */unsigned char) arr_13 [i_9 + 2] [i_9 - 1] [i_9 + 3] [i_9] [i_9 + 1]);
                            arr_39 [i_9] [i_8] [4U] [i_10] = ((/* implicit */short) 3480535753U);
                        }
                    } 
                } 
            }
        } 
    } 
}
