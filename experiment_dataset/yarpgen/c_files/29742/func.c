/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29742
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
    var_10 = ((/* implicit */short) ((unsigned int) (short)-15085));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        arr_9 [i_2] [i_2] [i_1] = (~(((((var_5) + (2147483647))) >> (((/* implicit */int) var_1)))));
                        arr_10 [i_0] [i_0] = arr_1 [i_2];
                        arr_11 [i_0] [i_0] [i_0] [i_0] = var_0;
                    }
                    arr_12 [i_1] [(_Bool)1] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_9))));
                    arr_13 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-8903)) ? (((4466994741289544689ULL) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (1625108381) : (((/* implicit */int) arr_3 [i_2]))))))) : (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (var_2))))));
                }
            } 
        } 
        arr_14 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) (_Bool)1));
        arr_15 [i_0] [i_0] = ((/* implicit */int) ((unsigned short) (-(arr_1 [i_0]))));
    }
    var_11 = ((/* implicit */short) var_1);
}
