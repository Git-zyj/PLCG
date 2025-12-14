/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23692
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
    var_10 += ((/* implicit */short) (+(((/* implicit */int) (short)-29654))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_7 [i_0] [i_0] [i_0])))));
                    var_12 -= ((/* implicit */signed char) ((((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))) < (var_1)))), (var_8)))) | (((/* implicit */int) var_8))));
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) min((((/* implicit */int) ((((long long int) 10946682821156952379ULL)) != (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2])))))), ((+(((/* implicit */int) arr_7 [i_0] [i_1] [i_0])))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_2);
}
