/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230170
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
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 10; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((2147481600) - (((/* implicit */int) var_5)))), (((/* implicit */int) max((var_1), (arr_1 [i_0 + 1] [i_0]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (-2147481600)))), (min((var_0), (((/* implicit */long long int) var_10))))))));
                var_14 = ((/* implicit */short) arr_1 [i_0 + 1] [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (2147481583) : (((/* implicit */int) (unsigned short)10031)))))) / (min((min((((/* implicit */int) var_4)), (2147481595))), (((/* implicit */int) var_1))))));
    var_16 -= ((/* implicit */_Bool) ((signed char) var_4));
    var_17 = ((/* implicit */unsigned short) var_10);
}
