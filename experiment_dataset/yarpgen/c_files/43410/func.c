/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43410
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned short) (_Bool)0);
        var_15 = ((/* implicit */unsigned int) var_8);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_7 [i_0] [(unsigned short)17] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [(short)18] [i_0])) : (((/* implicit */int) var_12))));
            var_16 = ((/* implicit */signed char) arr_3 [(signed char)13] [i_1] [i_1]);
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (unsigned int i_4 = 2; i_4 < 24; i_4 += 2) 
                    {
                        {
                            arr_14 [i_0] [i_3] [i_3] [(_Bool)1] = var_8;
                            arr_15 [i_0] [i_1] [i_2 - 1] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_5 [i_3] [i_2] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_5))))) : (((/* implicit */int) arr_9 [i_0] [i_2] [i_4]))));
                        }
                    } 
                } 
            } 
        }
    }
    var_17 = ((/* implicit */_Bool) ((unsigned short) var_2));
}
