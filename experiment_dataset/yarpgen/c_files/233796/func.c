/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233796
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
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 4) 
        {
            {
                var_17 -= ((/* implicit */unsigned long long int) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [2] [2])))))) % (min((var_11), (((/* implicit */unsigned long long int) arr_3 [(unsigned short)2] [(signed char)6] [(unsigned short)2])))))));
                arr_6 [i_0] [i_1] = (unsigned short)0;
                var_18 = ((/* implicit */int) (+(max((((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) 2420346517U)) : (14LL))), (min((((/* implicit */long long int) 1676107847)), (-1LL)))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_11 [i_2] [i_3]))) ? ((~(16LL))) : (((/* implicit */long long int) arr_9 [i_2] [i_3]))));
                var_20 = ((/* implicit */int) ((((((/* implicit */int) (short)11188)) <= (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_9)) : (arr_9 [i_2] [(unsigned short)1]))))) ? ((~(arr_12 [5] [5] [i_3]))) : (((/* implicit */unsigned int) ((int) (unsigned short)40583)))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) arr_8 [i_3])) : (arr_12 [(unsigned short)7] [i_3] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3445020719U)))))) : (arr_7 [i_2] [i_3]))))));
            }
        } 
    } 
}
