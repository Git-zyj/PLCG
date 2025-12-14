/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215525
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
    var_18 = var_8;
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                arr_5 [i_1] = ((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))), (15969124828274785964ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))));
                var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0 + 1]))) * (arr_2 [i_0 - 1]))))))));
                var_20 = ((/* implicit */unsigned long long int) max((((signed char) ((var_2) || (var_5)))), (((/* implicit */signed char) arr_3 [i_1]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        for (short i_3 = 3; i_3 < 11; i_3 += 1) 
        {
            {
                arr_12 [i_3] = ((/* implicit */unsigned short) max((((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-71)) ? (arr_6 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_15)))))) == (2477619245434765652ULL)))), (max((arr_1 [i_2] [i_2]), (max((((/* implicit */unsigned char) var_13)), (var_14)))))));
                var_21 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_2 + 1] [i_3 + 1])) + (((/* implicit */int) var_16)))) >> (min((((/* implicit */unsigned long long int) arr_8 [i_3])), (3410798398264275509ULL)))))) * (var_4)));
            }
        } 
    } 
}
