/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41423
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
    var_15 = ((/* implicit */unsigned short) var_13);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) min(((short)-347), (((/* implicit */short) arr_3 [i_0] [i_0] [i_0])))))))) ? (((/* implicit */long long int) var_10)) : (((long long int) arr_3 [i_0] [i_0 + 2] [i_0]))));
                var_16 = ((/* implicit */unsigned char) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) : (-949608003))) + (((/* implicit */int) (unsigned char)250)))))));
                arr_7 [i_0] = ((/* implicit */unsigned char) (((((-((-(arr_5 [i_0] [i_1]))))) + (2147483647))) << (((/* implicit */int) (unsigned char)0))));
                var_17 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) -949608008))))))) : (((/* implicit */int) arr_4 [4LL]))));
            }
        } 
    } 
}
