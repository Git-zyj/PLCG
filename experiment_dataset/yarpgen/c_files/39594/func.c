/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39594
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
    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_2))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_11 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned short) ((max((var_4), (var_7))) & (((/* implicit */unsigned int) (+(var_5))))));
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */long long int) var_4);
                                arr_16 [i_4] [i_1 - 2] [i_2 + 2] [i_2] [i_4] = ((/* implicit */short) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) >> ((((+(var_9))) + (2141508034)))));
                                arr_17 [i_0] [i_1 - 2] [i_2 + 1] [i_1 - 2] [i_4] [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)128)) + (1908388801)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
