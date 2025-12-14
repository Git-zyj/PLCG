/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240129
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
    var_16 |= ((/* implicit */unsigned long long int) min(((-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)7964)) : (var_6))))), (((/* implicit */int) var_7))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) <= (var_8)));
                    arr_9 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (~(max((var_12), (((/* implicit */unsigned int) var_13))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_9))));
                                var_18 = ((/* implicit */short) ((unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-26097))) <= (1390251582U)))) / ((~(((/* implicit */int) var_0)))))));
                            }
                        } 
                    } 
                    var_19 = max((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (var_3) : (var_3)))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (var_1) : (((/* implicit */int) var_15))))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_1)), (35183298347008LL)))) ? (var_14) : (((/* implicit */unsigned int) var_3))))));
}
