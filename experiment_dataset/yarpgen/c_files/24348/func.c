/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24348
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
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_1]) ^ (arr_1 [i_0] [i_0])))) ? ((+(arr_1 [i_1] [i_1]))) : (min((var_14), (arr_1 [i_2] [i_0])))));
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) <= (18446744073709551611ULL)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 1; i_3 < 10; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            {
                arr_15 [i_3] [i_3 - 1] [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) (signed char)104)) && (((/* implicit */_Bool) arr_10 [i_3])))))))), (arr_14 [i_3] [i_3])));
                arr_16 [i_4] &= ((/* implicit */unsigned short) ((max((5ULL), (((/* implicit */unsigned long long int) arr_14 [i_4] [i_4])))) | (((/* implicit */unsigned long long int) (~(var_7))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) ((long long int) var_4));
    var_21 *= ((/* implicit */short) var_12);
}
