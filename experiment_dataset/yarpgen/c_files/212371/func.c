/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212371
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
    for (int i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_12 -= ((/* implicit */unsigned short) (+(-1073741824)));
                arr_4 [i_0] [i_1] [(signed char)2] = arr_0 [(short)3] [(short)3];
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_2 - 1])) * ((-(((/* implicit */int) arr_5 [i_2 - 1]))))));
        arr_8 [i_2] [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-29426)) | (((/* implicit */int) arr_5 [i_2]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_6 [i_2 - 1] [i_2])) > (((/* implicit */int) arr_5 [i_2]))))) : (-1116044903))) <= (2075781131)));
    }
}
