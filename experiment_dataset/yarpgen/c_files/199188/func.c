/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199188
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199188 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199188
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
    for (unsigned int i_0 = 3; i_0 < 6; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), ((+(max((((/* implicit */int) arr_1 [i_0 + 3])), (-1648921451)))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) var_7)))))))) ? (((long long int) (~(-8435060562124329293LL)))) : (((/* implicit */long long int) (~(1277448139U))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1277448139U)) ? (1277448143U) : (2776218362U)))) ? (((((/* implicit */_Bool) 1401413231302677181LL)) ? (var_1) : (((/* implicit */int) var_11)))) : ((~(((/* implicit */int) var_5)))))) != (1998047290)));
    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
}
