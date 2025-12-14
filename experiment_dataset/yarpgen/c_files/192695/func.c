/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192695
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
    /* LoopNest 2 */
    for (long long int i_0 = 4; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0 - 3] [i_0] [i_1 - 1] = arr_1 [i_0] [i_1];
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                            {
                                arr_13 [i_0] [i_1 - 1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) arr_2 [i_1 - 1] [i_4 - 1]);
                                arr_14 [i_4] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_2] [i_1 - 1] [i_0])) ? (((/* implicit */int) arr_12 [i_3] [i_0])) : (((/* implicit */int) var_8)))) <= (arr_6 [i_1 - 1] [i_2] [i_1 - 1]))))));
                                var_10 = ((/* implicit */short) max((var_3), (((/* implicit */unsigned short) var_7))));
                            }
                            /* LoopSeq 1 */
                            for (signed char i_5 = 0; i_5 < 12; i_5 += 1) 
                            {
                                var_11 ^= ((/* implicit */_Bool) arr_7 [i_2]);
                                var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (arr_6 [i_2] [i_3] [i_5]) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0]))))) + (min((arr_6 [i_0] [i_1] [i_2]), (((/* implicit */int) ((arr_2 [i_0] [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 - 3] [i_1] [i_2] [i_3])))))))))))));
                                var_13 = ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_0] [i_2] [i_5]);
                            }
                            arr_17 [i_0 + 1] [i_3] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (~(arr_15 [i_0] [i_0] [i_1 - 1] [i_2] [i_3])))), (min((((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (arr_10 [i_0] [i_1 - 1] [i_2] [i_3] [i_0 - 4]))), (((/* implicit */unsigned long long int) 1993629851U))))));
                            arr_18 [i_0 - 4] |= ((/* implicit */_Bool) (((-(((/* implicit */int) min((((/* implicit */short) (unsigned char)145)), ((short)-19739)))))) - ((((+(((/* implicit */int) var_4)))) - (((/* implicit */int) var_9))))));
                            var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_2 [i_0] [i_3])))) ? (5498650105520186089ULL) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) 1993629863U)))) ? (max((arr_3 [i_0 - 2] [i_1] [i_3]), (((/* implicit */long long int) arr_6 [i_0] [i_1 - 1] [i_2])))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_0])))))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_1);
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-19720)) ? (2301337433U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
}
