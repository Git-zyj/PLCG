/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225875
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
        for (int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    var_18 -= ((/* implicit */unsigned int) (-(((((/* implicit */int) (_Bool)1)) - (var_8)))));
                    var_19 = ((/* implicit */unsigned char) arr_5 [i_0]);
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) ^ ((-(((((/* implicit */_Bool) 8388096U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))))));
    var_21 = ((/* implicit */long long int) min((max((((/* implicit */int) min((var_5), (var_5)))), ((-(((/* implicit */int) (short)25099)))))), ((+(var_8)))));
}
