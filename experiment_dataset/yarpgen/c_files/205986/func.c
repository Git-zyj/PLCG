/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205986
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
    var_18 = ((/* implicit */int) max((max((((/* implicit */long long int) ((((/* implicit */int) var_6)) - (var_11)))), (((var_8) + (((/* implicit */long long int) 377574666)))))), (((/* implicit */long long int) min(((_Bool)1), ((_Bool)1))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */int) var_13))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 140703128616960ULL)) ? (-64818164) : (((/* implicit */int) (_Bool)1))));
                    arr_9 [i_0] [i_0] = var_6;
                }
            } 
        } 
    } 
    var_21 |= ((/* implicit */unsigned char) max((((var_4) == (max((var_4), (var_3))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (18446603370580934644ULL)))) && (((/* implicit */_Bool) ((var_17) / (((/* implicit */long long int) ((/* implicit */int) var_10))))))))));
}
