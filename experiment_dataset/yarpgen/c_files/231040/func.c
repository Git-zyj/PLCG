/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231040
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
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */long long int) arr_1 [i_0 + 1]))))) ? (((/* implicit */int) ((signed char) arr_1 [i_0 + 1]))) : (max((arr_1 [i_0 + 2]), (((/* implicit */int) var_1))))));
        var_15 = ((/* implicit */unsigned char) arr_1 [0]);
    }
    var_16 = ((/* implicit */unsigned int) var_5);
    /* LoopNest 2 */
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
    {
        for (int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) 
                        {
                            {
                                var_17 = ((int) arr_14 [i_1 + 1] [i_1 - 2] [i_1 + 2] [i_1 - 2] [i_1 - 2]);
                                arr_16 [i_1 - 1] [i_2 + 1] [i_4] [i_4] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1] [i_1 - 2])) ? (((((/* implicit */_Bool) var_7)) ? (((var_4) ? (var_9) : (var_14))) : (((/* implicit */long long int) ((unsigned int) var_9))))) : (((var_5) | (min((arr_10 [(_Bool)1]), (var_6)))))));
                                var_18 = ((/* implicit */signed char) min((((var_8) | (((/* implicit */unsigned long long int) arr_14 [i_2 + 1] [i_5] [i_3] [i_5] [i_1 + 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (arr_10 [i_2 + 1]) : (arr_10 [i_2 + 1]))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_11 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2 + 1]), (((/* implicit */unsigned int) var_2))))) || (((/* implicit */_Bool) ((arr_11 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1]) * (arr_11 [i_2 + 1] [i_2 - 1] [i_2] [(unsigned char)2]))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) arr_5 [i_1] [i_2 - 1] [i_1 + 2]))) ? (((/* implicit */long long int) min((((/* implicit */unsigned int) ((int) var_14))), (arr_11 [9LL] [i_2 - 1] [i_2 - 1] [i_2 + 1])))) : (arr_10 [i_2])));
                    arr_17 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 1])) ? (arr_9 [i_2] [i_2 - 1]) : (var_13)))) ? (arr_4 [i_1] [i_2 - 1]) : (((/* implicit */long long int) ((/* implicit */int) ((arr_9 [i_1] [i_2 - 1]) >= (arr_9 [i_1] [i_2 - 1]))))));
                }
                arr_18 [i_1 + 1] [i_1 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) var_1)) ? (((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_1]))))) + (((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((var_9) + (9168221810427433354LL))))))));
            }
        } 
    } 
}
