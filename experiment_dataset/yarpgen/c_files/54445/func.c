/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54445
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
    var_18 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_19 ^= ((/* implicit */short) max((((((/* implicit */int) min(((unsigned char)0), (var_16)))) & (((((/* implicit */int) (short)15000)) - (((/* implicit */int) (short)15000)))))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) != (((/* implicit */int) (short)-25718)))))));
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) & (arr_3 [(short)6] [i_1] [i_0 - 1]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1637942086)) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) (short)0)))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)1557)) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))) ? (((/* implicit */int) ((short) arr_0 [i_0] [i_0 - 1]))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -3092421006032617842LL)) >= (7304101302664533447ULL))))));
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) 18014398501093376ULL)))))))) == (min((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]), (((/* implicit */unsigned int) min((((/* implicit */short) var_9)), ((short)26274))))))));
            }
        } 
    } 
}
