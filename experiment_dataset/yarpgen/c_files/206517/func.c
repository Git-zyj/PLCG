/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206517
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
    var_17 = var_13;
    var_18 = ((/* implicit */unsigned short) var_11);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) var_3);
                arr_6 [i_0] = ((/* implicit */long long int) ((min((var_7), (((((/* implicit */unsigned int) ((/* implicit */int) var_2))) / (var_7))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
            }
        } 
    } 
    var_19 |= ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (short i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
        {
            for (short i_4 = 4; i_4 < 10; i_4 += 3) 
            {
                {
                    arr_16 [i_2] [i_3 - 1] [i_4 + 1] [i_3 - 1] = ((/* implicit */short) ((((/* implicit */int) var_12)) < (((/* implicit */int) min((var_1), (((/* implicit */short) var_14)))))));
                    arr_17 [i_2] [i_2] = ((/* implicit */short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) (~(var_7)))) : (var_0)))));
                    arr_18 [i_2] [i_2] [i_4] [i_4 - 4] = ((/* implicit */unsigned char) (-(((var_4) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                    arr_19 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_15))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-5092)) ? (((/* implicit */int) (short)5092)) : (((/* implicit */int) (short)-5110)))))));
                }
            } 
        } 
    } 
}
