/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53658
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
    var_14 = ((/* implicit */int) ((long long int) var_7));
    var_15 = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((unsigned short) var_10))))));
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) != (min((11850288631125064084ULL), (var_3)))))) : (((/* implicit */int) ((unsigned char) (+(var_13)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) arr_4 [i_0]))));
                arr_6 [8LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_0 [0ULL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))))))) : (((/* implicit */int) ((unsigned short) 11850288631125064084ULL)))));
            }
        } 
    } 
}
