/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218630
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218630 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218630
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
    var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-19785)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_3)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (min((((unsigned long long int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])), (((/* implicit */unsigned long long int) min((arr_4 [i_0 + 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */long long int) arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1])))))))));
                arr_5 [i_1 - 2] = ((/* implicit */int) (((((+(arr_4 [i_0 - 1] [i_0 - 1] [i_0]))) + (9223372036854775807LL))) >> ((((~(((((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])) << (((((/* implicit */int) var_12)) - (3607))))))) + (50)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) arr_7 [i_3])) ? (1382297780) : (var_2))));
                arr_10 [i_3] [i_2] [i_3] = ((/* implicit */unsigned char) arr_9 [12LL]);
                arr_11 [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */_Bool) 1141653878)) || (((/* implicit */_Bool) var_10)))))));
                var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) -1241482448)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) var_0))))));
}
