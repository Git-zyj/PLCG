/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54914
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
    var_18 = var_0;
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        var_19 = ((int) (!(((/* implicit */_Bool) -413714424))));
                        var_20 = ((/* implicit */int) max((var_20), (((((((/* implicit */int) var_7)) <= (((/* implicit */int) (unsigned char)108)))) ? (((((/* implicit */_Bool) (short)-3705)) ? (((/* implicit */int) var_1)) : (var_2))) : (((/* implicit */int) (unsigned char)155))))));
                    }
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        arr_13 [(short)11] [(short)11] [i_2] [(short)11] [i_0] = ((/* implicit */short) max(((+(-1362932863))), (-1362932855)));
                        var_21 ^= (-(((int) max((((/* implicit */int) arr_4 [(unsigned char)7] [i_2] [i_4])), (1362932863)))));
                        arr_14 [i_1] [i_1] [i_1] [i_0] [i_1] [(short)11] = ((/* implicit */int) (unsigned char)178);
                    }
                    var_22 *= ((/* implicit */unsigned char) -413714440);
                }
            } 
        } 
    } 
}
