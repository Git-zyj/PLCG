/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26870
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
    var_13 = ((/* implicit */unsigned short) (-(var_4)));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [(_Bool)1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) var_10)), (arr_0 [i_0 - 1])));
                arr_5 [i_0 - 1] [(unsigned short)4] [i_1 + 4] = ((/* implicit */unsigned char) max((arr_1 [i_1]), (((/* implicit */long long int) (((-(arr_0 [i_0 - 2]))) | (max((((/* implicit */unsigned int) arr_2 [i_0] [i_0] [i_0 - 2])), (arr_0 [(unsigned short)21]))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
                    {
                        {
                            arr_12 [i_0 - 2] [3ULL] [(_Bool)1] [i_3 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) min((arr_9 [i_0 - 1] [i_1] [i_2] [(signed char)1]), (var_0)))) / (((/* implicit */int) ((short) var_12))))))));
                            /* LoopSeq 1 */
                            for (int i_4 = 0; i_4 < 23; i_4 += 4) 
                            {
                                arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (short)-2691)))));
                                var_14 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                            }
                            arr_16 [i_3] [i_1 - 2] [i_0 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [i_3] [i_3 - 2] [i_2] [i_0] [i_1 + 4] [i_0])) != (((/* implicit */int) arr_3 [i_1] [i_1]))))) : (((/* implicit */int) min((arr_13 [i_0] [i_0 - 2] [i_1 - 1] [i_2] [i_3]), (var_0))))))) ? (((/* implicit */int) arr_2 [22] [i_2] [i_3 - 1])) : (min((((/* implicit */int) (short)-2089)), (2147483647)))));
                            var_15 |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */int) max((arr_10 [i_3 - 2] [(signed char)8] [i_3] [i_1 - 3] [10] [i_1 + 3]), (((/* implicit */unsigned short) var_6))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_6 [i_1] [i_1])))))))));
                            arr_17 [i_0 - 2] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) ((signed char) ((var_11) < (((/* implicit */unsigned long long int) var_3)))));
}
