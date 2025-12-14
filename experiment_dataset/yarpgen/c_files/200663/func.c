/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200663
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200663 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200663
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
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8))));
    var_19 = ((((((/* implicit */_Bool) min((-1398710883), (4)))) ? (max((((/* implicit */unsigned long long int) var_16)), (18446744073709551597ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (unsigned short)48303)))))) >= (((/* implicit */unsigned long long int) var_1)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) var_13);
                arr_5 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) arr_0 [i_0 - 2] [i_1]);
                arr_6 [i_1] = max(((!(((/* implicit */_Bool) arr_0 [i_0 - 4] [i_0 - 4])))), ((!(((/* implicit */_Bool) (unsigned short)12799)))));
            }
        } 
    } 
}
