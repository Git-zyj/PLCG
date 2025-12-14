/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216560
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
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                arr_5 [i_0] [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */int) arr_2 [i_0 + 3])) : (((/* implicit */int) arr_2 [i_0 - 1]))));
                var_19 = ((short) arr_3 [i_0]);
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) arr_2 [i_0 - 1]))))))));
                var_21 += ((short) (_Bool)1);
            }
        } 
    } 
    /* LoopSeq 2 */
    for (signed char i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_22 ^= ((/* implicit */short) arr_6 [i_2]);
        var_23 = ((/* implicit */short) arr_6 [i_2]);
    }
    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        arr_10 [i_3] = ((/* implicit */short) ((((/* implicit */int) (short)-17850)) % (((/* implicit */int) max((arr_6 [i_3]), ((_Bool)1))))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((short) var_4)))));
        var_25 &= ((/* implicit */short) ((unsigned short) (((~(((/* implicit */int) (unsigned short)65535)))) % (((/* implicit */int) min((arr_7 [i_3]), (((/* implicit */unsigned short) (_Bool)1))))))));
    }
    var_26 = ((/* implicit */signed char) ((short) ((short) var_8)));
}
