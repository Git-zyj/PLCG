/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190538
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
    var_12 += ((/* implicit */unsigned int) var_4);
    var_13 = ((/* implicit */_Bool) 1061246161);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned int) 1061246161);
                arr_4 [i_0] [i_0 + 1] [i_0] = ((((arr_0 [i_0 - 3]) << (((arr_0 [i_0 - 1]) - (4092420226U))))) >> (((((arr_0 [i_0 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)32764))))) - (4092428260U))));
            }
        } 
    } 
    var_15 *= ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 13; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
        {
            {
                var_16 *= ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) 1061246182)) / (3702925598U)))), (arr_1 [i_2 - 1]))) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)144)) << (((/* implicit */int) arr_3 [i_2 + 1])))))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((max((arr_6 [i_3] [i_3]), (arr_6 [i_3] [i_3]))) || (((arr_6 [i_3] [i_3]) || (arr_6 [i_3] [i_3]))))))));
                var_18 = (i_2 % 2 == 0) ? (((/* implicit */unsigned int) (-(((arr_1 [i_2 - 1]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2 - 2])))))))) : (((/* implicit */unsigned int) (-(((arr_1 [i_2 - 1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2 - 2]))))))));
                var_19 *= (~(((4191316936U) | (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
}
