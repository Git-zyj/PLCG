/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2820
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
    var_12 = ((/* implicit */signed char) ((var_3) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */long long int) ((((/* implicit */int) var_10)) << (((var_6) + (275132399)))))) % (((((/* implicit */_Bool) (short)12113)) ? (3658012087813059851LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)38050)))))))));
    var_13 = ((/* implicit */short) ((((/* implicit */int) (short)1057)) < (((/* implicit */int) (unsigned short)38050))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)49448))) | (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)230))) / (1060102643129471794LL)))));
                    arr_10 [i_2] [i_2] [i_1] [i_0] = (-((-(((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) (short)-1057))))))));
                    var_14 = (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)231)) * (((/* implicit */int) (unsigned short)16088))))));
                    arr_11 [i_0] [i_0] [i_0] = ((/* implicit */short) (unsigned short)16088);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) var_0);
}
