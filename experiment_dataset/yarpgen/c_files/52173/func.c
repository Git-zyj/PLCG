/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52173
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
    var_17 = ((unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)25315))) < (var_13))) ? (var_1) : (((/* implicit */long long int) min((((/* implicit */int) var_0)), (var_2))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (4907087206434435531ULL) : (((/* implicit */unsigned long long int) arr_5 [i_0 + 1] [i_1 + 2] [i_2 + 1]))))));
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) 1815994365)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned char)165)))) - (((/* implicit */int) (short)-28327))));
                    arr_10 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (-(arr_0 [i_0] [11U])));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned long long int) var_11);
}
