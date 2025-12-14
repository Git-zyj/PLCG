/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210976
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
    var_15 = ((/* implicit */unsigned char) ((signed char) (~(-1248456226))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (+(min((arr_3 [13U] [i_1]), (((/* implicit */int) var_13))))))), ((~(max((var_10), (7899124603066549825LL)))))));
                arr_7 [i_0] = ((/* implicit */unsigned int) arr_2 [17LL] [i_0 + 1]);
                arr_8 [i_0] [5U] [0] |= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
    var_16 = ((/* implicit */signed char) var_6);
    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (min((var_10), (-7796551685689040370LL)))));
}
