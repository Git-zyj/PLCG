/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190685
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
    var_18 *= ((/* implicit */unsigned char) (unsigned short)18570);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (signed char)122);
                arr_5 [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (unsigned short)14231);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((min((((/* implicit */unsigned short) (signed char)43)), (var_4))), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_12))))))))));
    var_21 = ((/* implicit */unsigned short) min((max((((/* implicit */int) var_7)), (max((var_8), (((/* implicit */int) var_3)))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)20368))) > (var_11))))));
    var_22 = ((/* implicit */long long int) var_7);
}
