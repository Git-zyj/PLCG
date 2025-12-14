/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5368
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? ((-(((/* implicit */int) arr_2 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_0 [i_0] [6LL]))))))) ? ((+((-(((/* implicit */int) var_4)))))) : (((/* implicit */int) var_10))));
                var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) (unsigned short)40830)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25110))) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)25114)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [(short)3] [(short)3]))))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (max((((((/* implicit */_Bool) (short)-25111)) ? (((/* implicit */long long int) ((/* implicit */int) (short)25129))) : (var_6))), (var_9))) : (((/* implicit */long long int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)46585)) : (((/* implicit */int) var_5)))))))));
    var_17 += ((/* implicit */int) (~(max((((var_1) + (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((((/* implicit */long long int) ((/* implicit */int) var_10))) + (-3925244952867954322LL)))))));
    var_18 = ((/* implicit */_Bool) var_12);
}
