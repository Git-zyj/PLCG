/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40476
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (max(((~(((/* implicit */int) arr_0 [i_0] [i_1])))), ((+(((/* implicit */int) arr_4 [i_1] [i_1])))))) : ((-(((/* implicit */int) (signed char)-28))))));
                    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) (short)63))));
                }
            } 
        } 
        var_11 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (arr_3 [(_Bool)1] [i_0])))) ? (((/* implicit */int) (unsigned short)5046)) : ((-(((((/* implicit */_Bool) (unsigned short)5046)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) (short)18760)))))));
        var_12 = ((/* implicit */int) var_6);
        var_13 = ((/* implicit */signed char) ((((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (unsigned short)25688)))) ? ((~(((/* implicit */int) (unsigned short)5041)))) : (((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))))) <= ((-(((((/* implicit */_Bool) (signed char)-95)) ? (((/* implicit */int) (unsigned short)32588)) : (((/* implicit */int) (signed char)-51))))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_3 = 1; i_3 < 19; i_3 += 1) 
    {
        var_14 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_9 [i_3])) ? (arr_9 [i_3]) : (((/* implicit */int) arr_8 [i_3] [i_3])))) <= (((/* implicit */int) arr_8 [i_3 - 1] [i_3 - 1]))));
        arr_10 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1997423103)) ? (((/* implicit */int) arr_8 [i_3 - 1] [i_3 + 3])) : (((/* implicit */int) arr_8 [i_3 + 4] [i_3 + 1]))));
        var_15 = ((/* implicit */unsigned short) arr_9 [i_3]);
        arr_11 [i_3] = (!(((/* implicit */_Bool) arr_9 [i_3 + 1])));
    }
}
