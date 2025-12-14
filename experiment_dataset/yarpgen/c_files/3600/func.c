/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3600
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) < (((/* implicit */int) var_7))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */_Bool) (((((+(var_5))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1]) : (arr_2 [i_0]))) - (16528644415914542579ULL)))));
                arr_7 [2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((1175735361677619018LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-107)))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)92)) && (((/* implicit */_Bool) var_3))))))) + (((/* implicit */int) ((_Bool) (unsigned char)222)))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((3759762412U), (3759762412U)));
    var_19 = ((/* implicit */unsigned char) var_5);
}
