/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248443
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 9; i_3 += 4) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_6 [i_0 - 3] [i_0 - 3] [i_0]))) << (((((/* implicit */int) arr_3 [i_1] [i_1] [i_1])) + (20380)))));
                        arr_10 [i_0 - 2] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((unsigned short) ((1912183927) - (((/* implicit */int) (short)-15901)))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] [i_0] = ((/* implicit */signed char) var_0);
    }
    var_19 = ((/* implicit */signed char) max((var_19), (((signed char) ((short) var_3)))));
    var_20 = ((/* implicit */signed char) ((int) ((_Bool) (-(((/* implicit */int) var_7))))));
}
