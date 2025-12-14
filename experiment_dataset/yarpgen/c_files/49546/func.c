/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49546
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_17 = var_8;
        arr_3 [i_0] [i_0] = ((short) ((short) var_0));
        var_18 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_10)) < (((/* implicit */int) var_14))))) >> (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) arr_1 [i_0])))))));
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                for (short i_3 = 3; i_3 < 17; i_3 += 4) 
                {
                    {
                        var_19 *= var_3;
                        /* LoopSeq 1 */
                        for (short i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((((/* implicit */int) ((short) var_14))) & ((-(((/* implicit */int) var_14)))))))));
                            var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (short)12909)) : (((/* implicit */int) ((((/* implicit */int) (short)15199)) < (((/* implicit */int) (short)-12997)))))));
                        }
                    }
                } 
            } 
        } 
        var_22 ^= ((/* implicit */short) ((((/* implicit */int) ((short) var_11))) - (((/* implicit */int) var_13))));
    }
    for (short i_5 = 0; i_5 < 15; i_5 += 2) 
    {
        var_23 = ((/* implicit */short) min((var_23), (min(((short)-585), ((short)31792)))));
        arr_16 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_5]))))) && (((((/* implicit */int) arr_7 [i_5])) > (((((/* implicit */_Bool) (short)-7670)) ? (((/* implicit */int) (short)7673)) : (((/* implicit */int) (short)7670))))))));
    }
    var_24 &= ((/* implicit */short) ((((((/* implicit */int) (short)7685)) % (((/* implicit */int) (short)7670)))) % (max((((/* implicit */int) ((short) var_11))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)7131)) : (((/* implicit */int) var_5))))))));
}
