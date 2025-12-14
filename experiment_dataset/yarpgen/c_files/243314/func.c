/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243314
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
    var_16 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [(unsigned char)14] [i_0] &= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)6)) : (((/* implicit */int) (unsigned char)7)))))));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((7292818985267634835ULL) < (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_8)))))))) / ((~(((/* implicit */int) var_1))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_4), (((/* implicit */short) (!(var_5))))))) << (((((/* implicit */int) var_8)) - (5519))))))));
    var_18 = ((/* implicit */_Bool) var_13);
}
