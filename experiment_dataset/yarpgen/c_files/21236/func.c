/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21236
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_17 = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */int) (signed char)77)) << (((((/* implicit */int) arr_1 [i_0] [i_0])) - (33762)))))) : (((/* implicit */short) ((((/* implicit */int) (signed char)77)) << (((((((/* implicit */int) arr_1 [i_0] [i_0])) - (33762))) - (8593))))));
                arr_6 [i_0] [i_0] [i_0] = min(((-(((/* implicit */int) ((((/* implicit */int) (short)-32521)) > (((/* implicit */int) arr_2 [i_0] [i_0]))))))), (var_10));
                arr_7 [i_0] = ((/* implicit */unsigned short) var_10);
                var_18 += ((/* implicit */unsigned int) min((max((min((arr_3 [(short)18] [(short)18] [(short)18]), (arr_2 [8] [8]))), (min((var_9), (var_4))))), (var_9)));
                arr_8 [i_0] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned int) min(((short)5475), (((/* implicit */short) var_7))))), (min((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (max((var_11), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) var_13);
    var_20 = ((/* implicit */int) min((max((var_11), (min((((/* implicit */unsigned int) var_9)), (var_12))))), (((/* implicit */unsigned int) (+(min(((-2147483647 - 1)), (((/* implicit */int) var_0)))))))));
    var_21 = ((/* implicit */short) min((var_16), (var_12)));
}
