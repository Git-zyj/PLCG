/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218596
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
    for (int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0 + 1]))))) ? (((/* implicit */unsigned long long int) max((510), (-5)))) : (16972768083880401216ULL)))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) 1473975989829150400ULL))))) * (((/* implicit */int) ((var_6) > (((/* implicit */int) var_7))))))) : (arr_3 [i_0 + 1] [i_0] [i_0])));
                arr_5 [18] [18] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_0 + 1] [(unsigned short)4]), (arr_4 [i_0 - 1] [22ULL])))) ? (max((arr_4 [i_0 + 1] [14ULL]), (arr_4 [i_0 - 1] [18ULL]))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (arr_4 [i_0 + 1] [(signed char)8])))));
                arr_6 [i_1] = ((/* implicit */unsigned short) max((((unsigned long long int) var_7)), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                var_21 ^= ((/* implicit */unsigned short) arr_1 [(unsigned short)2]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 4; i_2 < 13; i_2 += 3) 
    {
        for (short i_3 = 3; i_3 < 13; i_3 += 1) 
        {
            {
                var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (((!(((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_2])) + (2147483647))) << (((((arr_3 [i_2] [i_3 - 1] [13ULL]) + (1913387348))) - (15)))))))) ? (((((/* implicit */_Bool) max((var_17), (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_10 [i_2 - 4]))) : (arr_7 [(short)5] [i_3]))) : ((~(((((/* implicit */unsigned int) arr_3 [i_3] [i_3] [i_3])) ^ (arr_0 [i_2]))))))))));
                var_23 = (unsigned short)61894;
                var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((_Bool) ((arr_9 [i_2 - 4]) | (-5)))))));
                var_25 = ((/* implicit */_Bool) var_8);
            }
        } 
    } 
}
