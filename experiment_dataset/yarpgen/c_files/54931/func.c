/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54931
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
    var_14 &= ((/* implicit */long long int) var_1);
    var_15 = ((/* implicit */unsigned char) ((var_13) << (((max(((+(var_12))), (var_4))) - (4931789489544146922LL)))));
    var_16 = ((/* implicit */short) ((unsigned short) (-(var_3))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = (-(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7457480382862781167LL)) ? (7457480382862781167LL) : (7457480382862781167LL)))) : (var_10))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0])))))) : (arr_4 [i_1] [i_1] [i_1])));
            }
        } 
    } 
}
