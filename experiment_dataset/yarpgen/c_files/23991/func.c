/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23991
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
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 4; i_1 < 9; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)1))));
                var_12 = ((/* implicit */short) min((max((var_10), (2147483647))), (((/* implicit */int) arr_4 [i_0] [i_1 - 3]))));
                var_13 = ((/* implicit */int) ((unsigned char) max((((/* implicit */short) min((var_8), (var_8)))), (max((((/* implicit */short) (unsigned char)25)), ((short)13456))))));
                arr_8 [i_1] [i_0 + 1] [i_1] = ((/* implicit */int) var_2);
            }
        } 
    } 
    var_14 |= var_8;
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */int) (short)13456)), (((((/* implicit */_Bool) (+(var_9)))) ? ((~(((/* implicit */int) (unsigned char)12)))) : (max((var_11), (((/* implicit */int) var_0))))))));
}
