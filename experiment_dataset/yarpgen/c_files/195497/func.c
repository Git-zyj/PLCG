/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195497
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195497 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195497
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
    for (short i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) (short)28534)))))) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */int) var_2)) : ((+(((/* implicit */int) (_Bool)1))))))));
                    var_20 &= ((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_3 [i_2 + 2] [i_0 + 1] [i_0 + 1])))));
                    var_21 = ((((/* implicit */int) ((_Bool) (_Bool)0))) == (((((/* implicit */_Bool) min(((short)-9057), (((/* implicit */short) (_Bool)0))))) ? ((~(((/* implicit */int) (short)14953)))) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))));
                    arr_7 [(_Bool)1] [i_1] [i_2 - 2] |= ((/* implicit */_Bool) ((short) ((((/* implicit */int) arr_3 [i_2] [i_0 - 1] [i_0])) - (((/* implicit */int) arr_3 [(_Bool)1] [i_0 + 1] [i_0])))));
                    /* LoopSeq 1 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        arr_10 [i_0] = ((/* implicit */short) min((max((((((/* implicit */int) (short)5706)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_3 [i_2 - 2] [i_0 + 1] [i_0 + 1])))), ((+(((/* implicit */int) ((_Bool) var_2)))))));
                        var_22 = (!(((/* implicit */_Bool) (~(((/* implicit */int) (short)11547))))));
                        arr_11 [i_0] [(_Bool)1] &= ((/* implicit */_Bool) var_18);
                    }
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */short) min((((/* implicit */int) ((short) (+(((/* implicit */int) (short)-11188)))))), ((-((+(((/* implicit */int) var_16))))))));
    var_24 = ((/* implicit */_Bool) max((min(((+(((/* implicit */int) var_17)))), ((+(((/* implicit */int) (_Bool)1)))))), (((((/* implicit */int) (short)-12608)) / (((/* implicit */int) (short)-9896))))));
}
