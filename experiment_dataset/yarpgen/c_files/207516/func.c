/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207516
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
    var_10 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
    var_11 *= ((/* implicit */_Bool) 33554432);
    var_12 = ((/* implicit */int) (~(var_0)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                arr_4 [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) 3310050453U)) && (((/* implicit */_Bool) (signed char)118)))) ? (max((((/* implicit */unsigned int) 33546240)), (3310050453U))) : (((/* implicit */unsigned int) ((arr_0 [i_1 - 1]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0 + 1])))))));
                arr_5 [i_1] = ((/* implicit */signed char) (~(984916825U)));
                arr_6 [i_0] [i_1] = ((/* implicit */int) (((+(min((((/* implicit */unsigned int) -886694555)), (984916825U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 1])) >= (((/* implicit */int) var_9))))))));
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_2 [i_0 + 1])))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-78))) & (-3461722214376007933LL))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)3)))))));
            }
        } 
    } 
}
