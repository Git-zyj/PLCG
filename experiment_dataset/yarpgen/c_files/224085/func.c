/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224085
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
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */short) var_8);
                var_11 &= ((/* implicit */long long int) arr_4 [i_0]);
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) ((((min((var_2), (((1793633644) / (((/* implicit */int) (short)-1210)))))) + (2147483647))) >> (((var_7) - (2110345280U)))));
    var_13 = ((/* implicit */int) ((_Bool) ((unsigned long long int) ((long long int) var_1))));
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 10; i_2 += 2) 
    {
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            {
                var_14 -= ((/* implicit */unsigned int) min((((var_1) << (min((arr_6 [i_2 - 1]), (((/* implicit */int) var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((1793633654), (var_3)))) ? (((((/* implicit */_Bool) (short)-12060)) ? (((/* implicit */long long int) var_5)) : (arr_2 [i_2]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_2 [i_2])))))))));
                arr_11 [i_2] = ((/* implicit */long long int) ((min((((/* implicit */int) var_6)), ((~(((/* implicit */int) var_6)))))) | (arr_6 [i_2])));
            }
        } 
    } 
}
