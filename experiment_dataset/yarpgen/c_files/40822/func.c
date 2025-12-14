/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40822
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_6);
                var_18 = ((/* implicit */signed char) ((unsigned char) 7713168525196316611LL));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */short) arr_10 [i_3] [i_3]);
                var_20 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_10 [i_3] [i_3])))), (((((/* implicit */_Bool) arr_10 [i_3] [i_3])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_10 [i_3] [i_3]))))));
                arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_12 [i_2] [i_2])) - (((/* implicit */int) (unsigned char)163))))) - (min((var_11), (((/* implicit */unsigned int) (unsigned char)163))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */int) var_6)) - (((/* implicit */int) (short)-21566))))))));
            }
        } 
    } 
}
