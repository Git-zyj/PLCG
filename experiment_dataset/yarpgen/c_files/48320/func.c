/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48320
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0]))) % (arr_2 [6] [i_0]))) / (arr_2 [i_0 - 1] [(_Bool)1])));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1]))))))));
        var_17 -= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_0 + 1])) != (((/* implicit */int) arr_0 [i_0 + 1]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 4) 
            {
                for (signed char i_3 = 0; i_3 < 20; i_3 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((_Bool) arr_10 [i_3] [(unsigned short)5] [i_2] [i_1 - 1] [i_1] [i_0 + 1])))));
                        arr_12 [i_0 + 1] [i_0 + 1] [i_0] [i_1] [i_0 + 1] [i_3] = ((/* implicit */short) arr_7 [i_2] [i_0]);
                    }
                } 
            } 
            arr_13 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 - 1] [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_0 + 1]))) : (arr_10 [(signed char)15] [i_1 + 2] [i_1 - 1] [i_0] [i_0] [i_0])));
        }
        for (short i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_19 = ((/* implicit */short) ((unsigned char) arr_0 [i_0 + 1]));
            var_20 = ((/* implicit */signed char) ((short) arr_10 [i_0] [i_4] [i_0] [i_0] [i_0 + 1] [i_4]));
        }
    }
    var_21 = ((/* implicit */short) var_0);
}
