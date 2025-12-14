/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199612
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */_Bool) min((((/* implicit */int) ((arr_4 [i_0]) <= ((~(((/* implicit */int) (short)0))))))), ((+(arr_4 [i_1 - 1])))));
                arr_7 [i_0] = ((/* implicit */int) (+(((((/* implicit */_Bool) 2871379254965130193LL)) ? (258048U) : (4294709247U)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (signed char i_3 = 2; i_3 < 12; i_3 += 2) 
        {
            {
                arr_14 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) ((5087111388114498359LL) + (((/* implicit */long long int) ((/* implicit */int) (short)-22745)))));
                var_21 = min((198178516U), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_0 [i_2] [i_2])), (arr_3 [i_2])))) >= (((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                var_22 -= ((/* implicit */short) (-(198178516U)));
            }
        } 
    } 
}
