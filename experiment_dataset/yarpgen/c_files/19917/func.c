/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19917
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
    var_19 = ((/* implicit */unsigned short) min((((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_17))))), (((/* implicit */int) min((var_0), (((/* implicit */short) ((unsigned char) var_17))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned int i_1 = 2; i_1 < 13; i_1 += 2) 
        {
            for (unsigned char i_2 = 1; i_2 < 12; i_2 += 2) 
            {
                {
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) min((((signed char) var_1)), (((/* implicit */signed char) var_8)))))));
                    arr_12 [i_0] [i_1] [i_2 + 2] = ((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)13)), (((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) (_Bool)1))))));
                    var_20 += ((/* implicit */unsigned short) min((((/* implicit */int) arr_4 [i_0])), (((((/* implicit */_Bool) (unsigned char)109)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))) : (((/* implicit */int) min(((short)-27880), ((short)27852))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) min((((var_14) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))))), ((((!(((/* implicit */_Bool) -5173418365373467139LL)))) ? (var_14) : (((/* implicit */unsigned long long int) var_10))))));
}
