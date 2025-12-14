/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36047
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
    var_15 = ((/* implicit */unsigned char) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))), ((~((~(((/* implicit */int) (unsigned char)27))))))));
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((((/* implicit */int) ((var_12) <= (((/* implicit */unsigned int) -1794229540))))) & ((~(((/* implicit */int) var_11))))))) : (max((8258959637294906758LL), (((/* implicit */long long int) (-(1065353216))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                for (unsigned int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        arr_12 [i_2] = ((/* implicit */unsigned int) -1794229540);
                        var_17 += ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_3]))));
                    }
                } 
            } 
        } 
        var_18 = ((/* implicit */long long int) arr_4 [i_0] [i_0 - 2]);
    }
}
