/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4067
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
    var_13 = var_10;
    var_14 = min((((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_9)))) || (((/* implicit */_Bool) min((-7528525252719003599LL), (var_8))))))), (var_0));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 6; i_0 += 2) 
    {
        for (signed char i_1 = 3; i_1 < 9; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) arr_0 [i_1 - 2] [i_0 + 1]))));
                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(7528525252719003598LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) -7528525252719003599LL))))) : (((((/* implicit */_Bool) (+(arr_3 [i_0 - 2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_3 [i_0 - 1]))))) : (((((/* implicit */int) (signed char)125)) << (((((-7528525252719003605LL) + (7528525252719003631LL))) - (15LL)))))))));
                arr_5 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned char) arr_4 [i_0] [i_1 - 3])), (min((((/* implicit */unsigned char) arr_1 [i_0 + 2])), (var_12)))))) - (((/* implicit */int) (unsigned short)53673))));
                var_17 = ((/* implicit */long long int) arr_0 [(_Bool)1] [i_1]);
            }
        } 
    } 
    var_18 -= ((/* implicit */signed char) var_4);
    var_19 -= ((((/* implicit */int) (signed char)86)) < (((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (var_0)))));
}
