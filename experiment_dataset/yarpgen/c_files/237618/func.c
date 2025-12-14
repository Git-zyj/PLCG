/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237618
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
    var_16 |= ((short) var_7);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)5401)) && (((/* implicit */_Bool) (short)5404))));
            var_17 &= ((/* implicit */int) var_7);
            arr_7 [i_0 + 1] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (short)-5401))));
        }
        for (short i_2 = 0; i_2 < 18; i_2 += 4) 
        {
            arr_10 [i_0] [i_0] &= ((((((/* implicit */_Bool) max(((short)5408), ((short)-5402)))) ? ((+(8229683688434501536ULL))) : (arr_5 [i_2] [i_2] [i_0]))) << (((var_9) - (6235510223269911648ULL))));
            var_18 &= ((/* implicit */signed char) ((var_13) + (((/* implicit */unsigned int) ((/* implicit */int) (short)5402)))));
            var_19 = (~(((/* implicit */int) (unsigned short)1)));
        }
        arr_11 [i_0] |= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-5398))));
    }
}
