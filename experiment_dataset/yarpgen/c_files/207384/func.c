/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207384
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
    var_11 = ((/* implicit */_Bool) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_7 [i_0] [i_0] [i_1] [(_Bool)1] = ((/* implicit */signed char) (-(((/* implicit */int) arr_3 [i_0] [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] = ((/* implicit */long long int) 2885392635U);
                                arr_13 [i_0] [i_0] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */_Bool) ((((/* implicit */long long int) 2885392652U)) / (-4718621860533952365LL)));
                            }
                        } 
                    } 
                    arr_14 [i_0] [i_1] [i_2] = min((((/* implicit */unsigned int) max((arr_10 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (var_9)))), (((((/* implicit */_Bool) ((signed char) var_8))) ? (((((/* implicit */_Bool) -1410579559181704712LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (875340050U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))));
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
                    {
                        for (short i_7 = 0; i_7 < 14; i_7 += 2) 
                        {
                            {
                                arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_17 [i_1] [i_1] [i_7]);
                                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_18 [i_6] [i_1] [i_5] [i_6])) : (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_6))) : (((/* implicit */unsigned long long int) ((long long int) (unsigned short)27424)))));
                                arr_24 [(signed char)12] [i_1] [i_1] [i_1] [i_1] [(signed char)12] [i_1] = ((/* implicit */unsigned int) (signed char)23);
                                var_13 = ((/* implicit */unsigned long long int) (-(arr_17 [i_0] [i_1] [i_5])));
                                var_14 = ((signed char) (signed char)-67);
                            }
                        } 
                    } 
                    arr_25 [i_0] [11LL] = ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_5])) ? (((/* implicit */int) (signed char)23)) : ((-(((/* implicit */int) arr_19 [(unsigned short)12] [i_1] [i_5] [i_1])))));
                }
                var_15 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_0] [i_0] [i_1] [i_0] [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_21 [i_1] [i_1] [i_1] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_0] [i_1] [i_1] [(unsigned char)5])) : (((/* implicit */int) (signed char)14))))));
            }
        } 
    } 
}
