/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29329
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
    var_11 = ((unsigned int) ((max((var_6), (((/* implicit */long long int) 0U)))) * (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (signed char)47)), (var_7)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 12; i_2 += 3) 
            {
                {
                    var_12 = max((min((-1231187256), (((/* implicit */int) (short)-1)))), ((-(((/* implicit */int) ((_Bool) (unsigned short)0))))));
                    var_13 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_2 [(short)8]) >= (((/* implicit */int) var_9)))))) * (max((arr_6 [3LL] [(_Bool)1]), (arr_0 [i_2] [(_Bool)1]))))));
                }
            } 
        } 
    } 
}
