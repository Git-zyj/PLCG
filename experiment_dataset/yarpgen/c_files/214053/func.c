/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214053
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
    var_11 = ((/* implicit */unsigned int) var_6);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((unsigned short) var_7)))));
                    var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_11 [(unsigned short)10] [i_2] [i_2]))) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)45865)) * (((/* implicit */int) (unsigned short)45872)))) / (((/* implicit */int) arr_11 [i_0 + 1] [i_2] [(_Bool)1]))))))))));
                    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((unsigned long long int) var_3))))) : (arr_10 [i_0] [i_1] [i_1])));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((short) var_2));
}
