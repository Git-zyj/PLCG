/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249182
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
    var_12 = ((/* implicit */signed char) var_5);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 4194303LL)), (max((18446744073709551610ULL), (((/* implicit */unsigned long long int) var_10))))));
                arr_5 [i_0] [i_1] [(short)6] = ((/* implicit */long long int) 1ULL);
                var_14 = ((/* implicit */_Bool) (((+(((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1])))))) | (min((((/* implicit */unsigned long long int) (signed char)32)), (18446744073709551610ULL)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 3) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) arr_7 [i_2])) ? (-157353950) : (((/* implicit */int) arr_6 [i_3])))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-126))))) ? (((((/* implicit */int) arr_6 [14])) << (((((/* implicit */int) arr_7 [i_2])) - (24800))))) : (((/* implicit */int) arr_7 [i_2])))))))));
                var_16 = ((/* implicit */long long int) var_4);
            }
        } 
    } 
}
