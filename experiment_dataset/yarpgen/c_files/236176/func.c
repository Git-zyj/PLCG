/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236176
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
    var_20 &= ((/* implicit */int) (+(var_13)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_8)), ((~(((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (arr_2 [i_1] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) < (((/* implicit */int) arr_1 [i_0])))))) >= (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))));
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((+(2068952585)))))) ? (min((((unsigned long long int) var_5)), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 290948445U))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 290948444U)) ? (var_13) : (var_10)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-19007)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1])))))) : (((((/* implicit */_Bool) 290948424U)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_0])))))))));
            }
        } 
    } 
}
