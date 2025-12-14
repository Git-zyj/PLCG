/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32726
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
    var_17 = ((/* implicit */int) var_13);
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_1 [i_2 + 1])), (15436418239665218419ULL)))) && (((/* implicit */_Bool) min((arr_1 [i_2 - 3]), (arr_1 [i_2 + 3]))))));
                    arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) == (min((((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))), (var_12)))));
                    arr_10 [i_2 - 2] [i_1] [i_0] = ((((/* implicit */int) arr_2 [i_0])) + (((int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2 - 4]))))));
                    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_0 [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_20 = (unsigned char)218;
    var_21 |= min((((unsigned long long int) (short)-6782)), (((/* implicit */unsigned long long int) min(((signed char)-67), (((/* implicit */signed char) var_2))))));
}
