/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22884
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
    var_13 = ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (int i_2 = 0; i_2 < 24; i_2 += 4) 
                {
                    arr_7 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)177)) ? (var_3) : (((/* implicit */long long int) var_5))));
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_2] [i_0] [i_0] [i_0]);
                    arr_9 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) ((arr_4 [i_0] [i_1] [i_2] [i_0]) % (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_2] [i_2]))));
                }
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_14 [i_3] [i_0] [i_0] = ((/* implicit */unsigned short) arr_2 [i_0] [i_0]);
                    arr_15 [i_0] [i_1] [i_0] = (i_0 % 2 == 0) ? (((((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) >> (((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) - (44620)))))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((arr_5 [i_3] [i_0] [i_0] [i_0]) > (((/* implicit */int) arr_6 [i_0] [i_1] [i_3])))))))))) : (((((/* implicit */_Bool) ((((var_12) + (9223372036854775807LL))) >> (((((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) - (44620))) + (5675)))))) ? ((+(4294967295U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((arr_5 [i_3] [i_0] [i_0] [i_0]) > (((/* implicit */int) arr_6 [i_0] [i_1] [i_3]))))))))));
                }
                arr_16 [i_0] [i_0] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) 4294967295U)) : (-8330278271524620042LL)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_9);
    var_15 = ((/* implicit */unsigned long long int) min((var_2), (((/* implicit */short) var_11))));
}
