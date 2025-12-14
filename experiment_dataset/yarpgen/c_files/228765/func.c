/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228765
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
    var_10 &= ((long long int) ((((/* implicit */_Bool) (unsigned char)246)) && (((/* implicit */_Bool) (unsigned char)246))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            arr_5 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))));
            var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (-2147483647 - 1)))));
        }
        for (int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_8 [i_0] [i_2] &= ((unsigned long long int) (-(((/* implicit */int) arr_1 [i_0 - 2]))));
            var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) (~(arr_2 [i_0] [i_0] [i_0]))))));
        }
        var_13 |= ((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) (unsigned char)253)));
    }
    var_14 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)155))));
    var_15 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned char)235)), (-19LL)));
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_2))));
}
