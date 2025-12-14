/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192152
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
    var_16 *= var_4;
    var_17 = ((/* implicit */signed char) (short)32311);
    var_18 |= ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */signed char) (((+(((/* implicit */int) (unsigned short)10762)))) >= (max((max((-1424665324), (((/* implicit */int) arr_2 [i_0])))), (max((((/* implicit */int) var_0)), (2046765108)))))));
                arr_5 [i_0] [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_3 [i_0] [i_0] [(short)13]), (var_10)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1 + 1])))))))) ? ((~(((((/* implicit */int) arr_1 [3LL] [i_1])) + (((/* implicit */int) (unsigned short)54779)))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)236))) != (((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))))));
                arr_6 [i_0] [i_0] [(signed char)12] = ((/* implicit */unsigned char) (-(((/* implicit */int) (short)32307))));
            }
        } 
    } 
}
