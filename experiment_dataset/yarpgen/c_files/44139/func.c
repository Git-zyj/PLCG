/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44139
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
    var_16 = ((/* implicit */int) min((((/* implicit */long long int) ((short) ((signed char) (short)9251)))), (min((max((var_12), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) max(((short)9251), (((/* implicit */short) var_8)))))))));
    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((signed char) -6481887609456206771LL))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((unsigned char) (short)-7226)))));
                    arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) (short)-32766)), (max((((/* implicit */int) var_8)), (-991666063)))));
                    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_2))));
                    var_20 = ((int) 884581407);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */_Bool) var_6);
    var_22 = ((/* implicit */unsigned int) ((long long int) 884581407));
}
