/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215736
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 1; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        var_19 += ((short) var_1);
                        /* LoopSeq 1 */
                        for (signed char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            arr_10 [i_0] [i_1 + 2] [i_2] [i_3] [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-24980))))) : (((/* implicit */int) arr_6 [i_1 - 1] [i_3 + 2]))));
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (short)-24980)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11)))))));
                        }
                        arr_11 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (short)25763))));
                        arr_12 [i_0 + 1] [i_1 - 1] [i_0] [(signed char)6] = arr_3 [i_1] [i_2] [i_0];
                    }
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-24965)) ? (((/* implicit */int) ((((/* implicit */_Bool) (short)-24992)) && (((/* implicit */_Bool) ((short) (short)24992)))))) : (((/* implicit */int) var_14))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */signed char) (+(((/* implicit */int) max((max(((signed char)-80), ((signed char)1))), ((signed char)-69))))));
}
