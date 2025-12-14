/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51553
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            {
                                var_20 -= ((/* implicit */unsigned long long int) min((arr_12 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]), (arr_10 [i_2] [i_2] [i_2] [i_3] [i_4] [i_1] [i_0])));
                                arr_14 [i_1] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)64)) ? (((((/* implicit */int) (signed char)37)) % (((/* implicit */int) (short)126)))) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1])))) > (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_13) : (((/* implicit */int) arr_6 [i_0] [i_1 + 1] [i_1] [i_1 + 1]))))) ? (((((/* implicit */_Bool) (unsigned char)251)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)64)))) : (((/* implicit */int) (unsigned short)37214))))));
                                var_21 += ((/* implicit */signed char) min((arr_7 [i_4] [i_1] [i_1] [i_1]), (((/* implicit */long long int) ((arr_7 [i_2] [i_2] [i_2] [i_4]) != (arr_7 [i_2] [i_2] [i_3] [i_4]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */long long int) max((arr_3 [i_4] [i_3]), (((/* implicit */short) arr_0 [i_0] [i_0]))));
                                arr_16 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (((!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 3] [i_1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_10 [i_1] [i_1 + 3] [i_1 + 3] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_1] [i_1 + 3] [i_1] [i_1 - 2] [i_1 + 2] [i_1 - 1] [i_1])))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] = ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)191))) > (arr_7 [i_1] [i_1] [i_1] [i_1 + 2]));
                    var_22 = ((/* implicit */signed char) (~(((arr_4 [i_0] [i_0] [i_0]) ^ (((((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) ^ (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1]))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_1);
}
