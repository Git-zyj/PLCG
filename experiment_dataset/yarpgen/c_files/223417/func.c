/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223417
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
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_10))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    arr_9 [i_2] [i_2] [i_0] = ((/* implicit */signed char) var_14);
                    var_19 -= ((/* implicit */unsigned char) arr_1 [i_0] [(short)5]);
                    var_20 = ((/* implicit */signed char) (short)-32767);
                    arr_10 [i_2] [i_1] [(unsigned short)8] [i_2] = ((/* implicit */short) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_11))));
                }
                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)255)) && ((!(((((/* implicit */int) (signed char)41)) > (((/* implicit */int) var_7))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        arr_15 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) var_15))) ? (((((/* implicit */int) (signed char)12)) << (((((/* implicit */int) var_6)) - (22751))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) var_13)))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_3] [i_3] [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))));
    }
    var_23 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13))))) && (((/* implicit */_Bool) ((unsigned char) var_17))))) ? (((max((var_14), (var_16))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) (short)-17003)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) (unsigned char)162)))))) : (((/* implicit */int) max((var_7), (var_16))))));
}
