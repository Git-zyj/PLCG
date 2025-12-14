/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208895
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
    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) ((unsigned char) ((short) var_9)))))))));
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_1 [10U] [i_1])) ? (arr_2 [i_0] [10U]) : (max((arr_2 [2LL] [2LL]), (((/* implicit */unsigned int) (unsigned char)155)))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(unsigned short)8] [(short)2]))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 4; i_2 < 12; i_2 += 3) 
                {
                    for (signed char i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_9 [i_2 - 4] [(short)0] [(short)9] [i_2 + 2] [3] [i_0] [(signed char)2]))) ? (((((/* implicit */_Bool) arr_6 [i_4] [(unsigned short)2] [i_2 - 3] [i_2 - 1] [i_1] [i_4])) ? (arr_7 [i_2 - 1] [i_2 + 2] [i_2 + 3] [i_1]) : (arr_7 [i_2 - 3] [i_0] [10ULL] [0LL]))) : (((/* implicit */long long int) max((arr_6 [i_4] [(signed char)2] [i_2 - 4] [4ULL] [(short)8] [i_4]), (arr_6 [i_4] [(signed char)10] [i_2 + 3] [8ULL] [12U] [i_4]))))));
                                arr_12 [i_0] [i_1] [i_2 - 1] [(short)6] [11LL] = ((/* implicit */int) (-(((unsigned int) 3388216332U))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) var_11))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 |= ((/* implicit */unsigned short) var_1);
}
