/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199049
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199049 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199049
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
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_6)), (var_11)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_4 [12U] [i_1] [i_0] |= ((/* implicit */int) (_Bool)1);
                arr_5 [14] = ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_1 [14ULL])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0])))))) >> ((((+(-2044736015))) + (2044736038))));
                var_20 = ((unsigned long long int) 2044736006);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        for (signed char i_3 = 1; i_3 < 16; i_3 += 4) 
        {
            {
                arr_12 [i_2] [i_3 + 2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
                arr_13 [15ULL] = ((/* implicit */unsigned long long int) -2044735998);
            }
        } 
    } 
}
