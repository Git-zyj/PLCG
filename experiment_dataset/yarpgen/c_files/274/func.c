/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/274
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
    var_13 = min((((/* implicit */unsigned long long int) min((max((((/* implicit */int) var_2)), (var_8))), (((/* implicit */int) (unsigned short)0))))), (var_11));
    var_14 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) ((min((((((/* implicit */int) (short)-2620)) ^ (((/* implicit */int) arr_2 [i_1] [i_0] [20U])))), (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) <= (((/* implicit */int) arr_3 [11U] [i_0] [(_Bool)1]))));
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) ((unsigned short) var_6));
            }
        } 
    } 
}
