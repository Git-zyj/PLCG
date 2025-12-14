/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245450
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
    for (unsigned int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((short) arr_3 [i_0])))));
                var_12 += ((/* implicit */unsigned int) arr_4 [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        for (unsigned char i_3 = 2; i_3 < 7; i_3 += 3) 
        {
            for (signed char i_4 = 3; i_4 < 8; i_4 += 2) 
            {
                {
                    arr_13 [1U] [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((int) max((((/* implicit */signed char) arr_8 [i_3] [i_3] [i_3])), (var_4))))) < (((arr_5 [i_2] [i_3 + 3] [i_4]) * (var_3)))));
                    arr_14 [i_2] [i_3] = ((/* implicit */short) (~(max((((((/* implicit */int) arr_7 [i_4])) << (((((/* implicit */int) (signed char)-99)) + (121))))), (((/* implicit */int) ((unsigned short) var_8)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) var_0);
    var_14 = ((unsigned int) max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-2585)))))));
}
