/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207130
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_16 -= ((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)0)) * (((/* implicit */int) arr_0 [i_0] [i_1])))) <= (((/* implicit */int) arr_3 [i_0] [i_1]))));
                var_17 = var_3;
                var_18 -= ((max(((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))), (((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20073))))))) || (arr_4 [i_0]));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) var_0);
    var_20 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_8 [i_3] [i_2] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2] [i_3] [i_3]))) : (arr_5 [i_2] [i_2]))) << (((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))));
                var_22 = ((/* implicit */long long int) (+((-(arr_6 [i_3] [i_2])))));
                arr_9 [i_2] &= ((/* implicit */_Bool) var_15);
            }
        } 
    } 
}
