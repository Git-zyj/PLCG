/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24180
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
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */_Bool) max((min(((-(((/* implicit */int) var_0)))), (((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_13))))))), ((+(min((-955880135), (((/* implicit */int) (short)17560))))))));
                    var_19 = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (~(var_16)))) ? (max((((/* implicit */long long int) (signed char)97)), (-9223372036854775804LL))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (-9223372036854775804LL))))), (max((((-9223372036854775783LL) / (-9223372036854775805LL))), (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0])))))))));
                    arr_7 [6LL] [i_1] [4] &= ((/* implicit */unsigned long long int) var_15);
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */_Bool) (-(var_1)));
    var_21 = ((/* implicit */_Bool) var_13);
}
