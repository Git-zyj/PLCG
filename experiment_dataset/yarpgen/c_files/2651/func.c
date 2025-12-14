/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2651
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
    var_17 = ((/* implicit */short) (+((~(var_0)))));
    var_18 = ((/* implicit */_Bool) (~(var_15)));
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((var_0) ^ (((/* implicit */int) ((min((var_10), (((/* implicit */long long int) 132120576U)))) >= (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)190)) - (131576859))))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_0] [i_0]))))));
        var_20 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) 1049753869)) ? (((/* implicit */int) arr_0 [i_0])) : (var_2))) << (((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0])))))) | (min((min((1596384094), (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2119515727)) ? ((+(979703572))) : (var_16))))));
        var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 + 2])) == (((/* implicit */int) (!(((/* implicit */_Bool) -1049753861)))))));
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1 - 1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1]))) & (0U)))));
    }
}
