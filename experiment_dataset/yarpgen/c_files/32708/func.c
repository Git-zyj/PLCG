/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32708
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
    var_18 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14567579915485117624ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10844))) : (var_12)))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_1))) != (7399492860613335419LL)))) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((unsigned char) max((var_14), (((/* implicit */long long int) (unsigned char)255))))))));
    var_19 -= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) var_0)))) | (var_6)));
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 2) 
    {
        for (unsigned char i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (max((1781757709), (arr_9 [(unsigned char)9])))))) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (_Bool)1))));
                    arr_10 [i_0] [i_1] [4] [i_0] = (((((+(var_6))) / (((((/* implicit */_Bool) (unsigned char)98)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) (_Bool)1)))))) * (((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) 34359738367ULL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (unsigned char)39)))))));
                }
            } 
        } 
    } 
}
