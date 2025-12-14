/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190622
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */int) var_14)) & (min((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)18240)) : (((/* implicit */int) (unsigned short)61505)))), (((/* implicit */int) (short)18240))))));
                    arr_6 [i_1] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max(((short)18240), ((short)18230)))) ? (((/* implicit */int) max((arr_0 [i_2 - 1]), (((/* implicit */short) arr_5 [i_0] [i_1] [(unsigned char)2] [i_0]))))) : (-782085404))), (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) (short)18207))))))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        var_17 = ((/* implicit */_Bool) min((-782085404), (((/* implicit */int) var_0))));
                        arr_10 [i_2] = ((/* implicit */unsigned short) (_Bool)0);
                    }
                }
            } 
        } 
        var_18 &= ((/* implicit */short) min((max(((~(var_6))), (((int) arr_5 [i_0] [i_0] [i_0] [i_0])))), (((arr_9 [5U] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [(short)6]))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) var_7))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 4; i_4 < 12; i_4 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) (+(((var_13) | (((/* implicit */unsigned int) arr_12 [i_4] [(_Bool)1]))))));
        var_21 = ((/* implicit */unsigned char) var_4);
        arr_14 [i_4] = ((/* implicit */_Bool) ((unsigned short) var_0));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 20; i_5 += 3) 
    {
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((arr_16 [6] [0]) ? (arr_15 [i_5]) : (((/* implicit */int) var_2))))) ^ (((3074658955U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [8U] [8U]))))))))));
        var_23 |= ((/* implicit */_Bool) (short)-18239);
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) (unsigned short)1677)) >= (((/* implicit */int) arr_16 [(unsigned short)10] [i_5])))))));
    }
    var_25 = ((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-28), (var_15))))) : (min((((/* implicit */unsigned int) min((((/* implicit */short) var_8)), ((short)-18221)))), (min((3283154144U), (((/* implicit */unsigned int) (unsigned char)31))))))));
}
