/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196
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
    var_11 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_4))));
    var_12 *= ((/* implicit */unsigned char) var_3);
    var_13 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), (var_2)));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(unsigned short)0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_0 [i_0 - 1]))))));
                var_14 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [(unsigned short)9] [i_0]), (arr_3 [i_1] [i_0])))) ? (arr_3 [i_0] [i_1]) : (min((arr_3 [i_1] [i_0 + 1]), (4294967295U)))))) ? (((((/* implicit */_Bool) max(((unsigned short)61093), (((/* implicit */unsigned short) (unsigned char)84))))) ? (arr_1 [i_0 + 2]) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)50692))))))) : (arr_0 [i_0 + 2]));
            }
        } 
    } 
}
