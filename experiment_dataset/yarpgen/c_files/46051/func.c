/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46051
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
    var_18 = ((/* implicit */int) 6893731991663741773ULL);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 3; i_0 < 8; i_0 += 3) 
    {
        arr_4 [i_0] = ((/* implicit */int) ((262128ULL) < (14422290502734908314ULL)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] = 262128ULL;
                        arr_12 [i_0] [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_0 + 3]))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) var_17);
    var_20 = var_14;
    var_21 = max((((262128ULL) - (((/* implicit */unsigned long long int) 1655358413)))), (((((/* implicit */_Bool) var_6)) ? (max((var_7), (16325316069537482626ULL))) : (((((/* implicit */_Bool) 67108863)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
}
