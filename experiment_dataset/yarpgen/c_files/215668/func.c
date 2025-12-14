/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215668
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
    var_19 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    var_20 = ((/* implicit */int) 2721987828U);
                    arr_7 [i_0] [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) (+(max((((/* implicit */int) (_Bool)1)), (var_2))))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned short) var_11);
    var_22 = ((/* implicit */unsigned long long int) ((max(((+(((/* implicit */int) (_Bool)0)))), (((/* implicit */int) max(((_Bool)0), (var_15)))))) << (((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_11) : (var_11)))) ? (((/* implicit */long long int) (~(var_2)))) : (var_12))) + (1146660802LL)))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) var_17))));
}
