/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241671
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
    var_18 = max((((/* implicit */unsigned long long int) var_12)), (((((unsigned long long int) var_14)) & (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)25)) & (((/* implicit */int) var_0))))))));
    var_19 = ((/* implicit */short) (-(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_20 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1072697134U)) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_3 [i_0]), (((/* implicit */short) arr_0 [i_1])))))) : (arr_1 [i_0] [i_1])))) ? (((/* implicit */int) ((unsigned short) (unsigned short)17412))) : (((/* implicit */int) arr_0 [i_0]))));
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_10))) | (((/* implicit */int) ((_Bool) arr_1 [i_0] [i_1])))));
                var_21 -= ((/* implicit */unsigned short) ((unsigned long long int) (+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55416))) : (20U))))));
            }
        } 
    } 
}
