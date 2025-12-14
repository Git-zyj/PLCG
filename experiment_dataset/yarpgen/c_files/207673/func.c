/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207673
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_20 = ((short) max((((/* implicit */unsigned short) var_18)), (arr_2 [i_0] [i_0] [i_0])));
                    var_21 = ((/* implicit */short) max(((-(((/* implicit */int) arr_6 [i_0] [i_2] [i_1] [i_2 - 1])))), (((/* implicit */int) min(((short)2110), (((/* implicit */short) arr_6 [i_0] [i_2] [i_2 - 1] [i_2 - 1])))))));
                    arr_7 [i_2] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) / (arr_1 [i_0] [i_2 - 1]))));
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)9224)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)19560)) ? (((/* implicit */int) arr_2 [i_0] [i_1] [i_1])) : (((/* implicit */int) var_18)))))))) : (max((((/* implicit */int) arr_0 [i_2 - 1])), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))))));
                    arr_8 [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) var_11)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */_Bool) var_6);
    var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (short)32750)) : (((/* implicit */int) var_6)))))))));
    var_25 &= ((/* implicit */unsigned int) var_19);
}
