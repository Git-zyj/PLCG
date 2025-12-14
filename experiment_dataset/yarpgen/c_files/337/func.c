/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/337
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 1; i_2 < 16; i_2 += 4) 
                {
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned int) ((arr_6 [i_1 - 2] [(short)16] [i_2 - 1]) | (var_12)))) % (((((/* implicit */unsigned int) ((/* implicit */int) (short)13))) | (859692924U)))));
                    var_19 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 - 3] [i_1 + 1])) >= (max((((/* implicit */int) var_11)), (arr_6 [i_2] [i_1] [i_1])))))), ((((((~(arr_6 [i_0] [i_1] [i_2]))) + (2147483647))) >> (((var_10) - (5994728425162207581ULL)))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 17; i_3 += 1) 
                    {
                        for (short i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (arr_2 [i_2 + 1]) : (arr_2 [i_0])))));
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_3] [i_4 - 1])) ? (arr_6 [i_0] [i_1 - 3] [i_2]) : (arr_6 [i_1] [(_Bool)1] [i_4])))), (arr_5 [i_1] [i_1] [i_1 - 4])))));
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_10))));
                                var_23 = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_2 [i_3 - 1]))))), (((arr_7 [i_0] [i_1] [i_2] [i_1]) * (((/* implicit */unsigned long long int) arr_11 [i_0] [i_2] [i_3] [i_4]))))))));
                            }
                        } 
                    } 
                }
                var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min(((((_Bool)1) ? (3396523089687453093LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_4)))))))))))));
            }
        } 
    } 
}
