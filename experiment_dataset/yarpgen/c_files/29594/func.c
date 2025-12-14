/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29594
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) var_5)), (var_7)))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [(short)10] [i_1] [i_2])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_1)), (13814168619748494916ULL))))))) : (var_7)));
                    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) var_5))))), ((+(var_8)))))), (((((arr_3 [i_0] [i_0]) <= (((/* implicit */unsigned long long int) var_1)))) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-18658)) == (((/* implicit */int) var_3))))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) (~(var_1)));
}
