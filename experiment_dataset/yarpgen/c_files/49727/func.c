/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49727
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
    var_15 &= ((/* implicit */signed char) var_0);
    var_16 = ((/* implicit */long long int) var_5);
    var_17 = ((/* implicit */short) (~(((/* implicit */int) var_4))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 -= ((/* implicit */_Bool) arr_0 [i_0] [8]);
                var_19 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) : (var_10))))))));
                var_20 &= ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16881)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (arr_1 [i_1 + 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */int) var_4)));
            }
        } 
    } 
    var_21 = (-(((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) min((var_8), (((/* implicit */short) var_12))))))));
}
