/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4754
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
    for (signed char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) 972713146)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_18)) : (arr_1 [i_0])))))) : (min((((unsigned long long int) 15162117345619662717ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)176))) : (arr_1 [i_1]))))))));
                var_20 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)30)) : (var_0)))) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (12888196995806288672ULL))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */unsigned int) var_2)) : (arr_0 [i_0] [i_0])))) | (max((3190181601214192443LL), (((/* implicit */long long int) (unsigned short)25650)))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_4);
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 17; i_2 += 3) 
    {
        for (unsigned int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                arr_11 [i_2] [i_3] [i_3] = ((/* implicit */unsigned short) ((unsigned long long int) ((unsigned long long int) arr_5 [i_2 + 3])));
                var_22 = ((/* implicit */signed char) (~(((((((/* implicit */unsigned int) var_18)) - (var_1))) - (max((((/* implicit */unsigned int) arr_7 [i_2] [i_2])), (var_4)))))));
                arr_12 [i_3] [i_2] = ((/* implicit */signed char) arr_10 [i_2]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned long long int) var_2);
}
