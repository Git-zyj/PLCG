/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33276
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
    var_13 -= ((/* implicit */short) var_1);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_5 [i_0 - 1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_5 [i_0] [i_2])) : (((/* implicit */int) (short)17281))))) < (((((/* implicit */_Bool) -5963195358825544926LL)) ? (arr_1 [(unsigned char)3] [i_1]) : (arr_1 [i_0 + 4] [i_0])))))) : ((~((+(((/* implicit */int) arr_3 [i_2] [i_1] [i_0 + 4]))))))));
                    var_14 -= ((/* implicit */short) (~(arr_2 [i_2])));
                    arr_7 [i_0 + 4] [i_0 + 4] [i_0] [i_1] = ((/* implicit */signed char) (~(arr_2 [i_0 + 3])));
                    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) arr_3 [(unsigned char)13] [i_1] [i_2]))));
                }
            } 
        } 
    } 
}
