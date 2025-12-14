/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33162
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33162 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33162
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
    var_11 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-19)))) : (((((/* implicit */_Bool) (short)-25434)) ? (((/* implicit */int) (signed char)-66)) : (((/* implicit */int) (short)-25434))))))));
    var_12 = var_8;
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    var_13 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((arr_7 [i_2] [i_2] [i_1] [i_0]), (arr_5 [i_0] [i_1] [i_2] [i_2]))))));
                    arr_8 [i_2] [i_1] [i_2] = ((/* implicit */short) ((signed char) ((short) arr_6 [i_0] [i_0] [i_0] [i_0])));
                    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)84)) || (((((/* implicit */_Bool) arr_5 [i_2] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)95)) | (((/* implicit */int) (signed char)-63)))))))));
                }
            } 
        } 
    } 
    var_15 *= var_1;
}
