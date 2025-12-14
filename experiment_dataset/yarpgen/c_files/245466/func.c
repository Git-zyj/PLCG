/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245466
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (+(608706575)));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        arr_11 [i_3] [i_2] [i_1] [(unsigned short)14] = ((/* implicit */signed char) ((((-608706564) <= (-608706552))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_2 [i_1]))))) : (((/* implicit */int) (_Bool)1))));
                        arr_12 [i_0] [i_1] [9LL] [i_3] = ((/* implicit */int) arr_6 [i_2] [i_1]);
                    }
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */int) (short)28178)) >> (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((608706564) == (((/* implicit */int) var_7)))))))) ? (((/* implicit */int) var_3)) : (var_12)));
}
