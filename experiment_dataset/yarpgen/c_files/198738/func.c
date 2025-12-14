/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198738
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
    var_13 = ((unsigned short) var_1);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) min((var_14), (((-701629279) <= (-701629279)))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) arr_4 [(_Bool)1] [(unsigned char)14])) : (((/* implicit */int) (!(((((/* implicit */int) var_8)) >= (var_0))))))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) min((arr_1 [13]), (((((/* implicit */unsigned long long int) ((var_7) >> (((-8062993482203551830LL) + (8062993482203551839LL)))))) * (max((arr_1 [i_0]), (((/* implicit */unsigned long long int) (unsigned char)255)))))))))));
                arr_5 [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(var_0)))) <= (arr_1 [i_0])))))));
            }
        } 
    } 
    var_17 += ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-22170)), (4294967295U)));
}
