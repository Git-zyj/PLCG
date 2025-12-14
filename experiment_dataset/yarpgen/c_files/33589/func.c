/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33589
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_3 [i_0] = ((((int) 9904590136846155666ULL)) != (((/* implicit */int) (short)22978)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            arr_7 [i_1] [13] = ((/* implicit */short) 3529397928U);
            var_13 = ((/* implicit */unsigned long long int) 1371134776689950778LL);
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                var_14 = ((/* implicit */unsigned char) var_4);
                arr_10 [i_2] = 1371134776689950802LL;
                var_15 -= ((/* implicit */_Bool) ((short) 17787613129082075901ULL));
                arr_11 [(_Bool)1] [i_1] [i_1 + 3] = ((/* implicit */int) ((17787613129082075887ULL) * (9904590136846155652ULL)));
            }
        }
        var_16 = ((/* implicit */_Bool) 1449204615);
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_17 *= ((/* implicit */unsigned char) arr_0 [i_3 - 1]);
        arr_14 [i_3] = arr_5 [i_3];
    }
    var_18 = ((/* implicit */_Bool) ((int) 612436890U));
}
