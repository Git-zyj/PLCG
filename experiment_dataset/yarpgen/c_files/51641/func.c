/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51641
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
    var_15 ^= ((/* implicit */_Bool) var_6);
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [(unsigned char)7] [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]);
                        var_16 += ((/* implicit */_Bool) 1489800418U);
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (((~(2805166891U))) <= (arr_10 [i_1] [i_1] [i_1] [(signed char)14] [i_1]))))));
            var_18 = ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_1]);
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (signed char)118)) : (1875575607)))));
        }
        arr_12 [i_0] = ((/* implicit */short) arr_6 [i_0] [i_0] [i_0]);
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) ((((/* implicit */_Bool) 3950521611U)) ? (10866047336246745817ULL) : (((/* implicit */unsigned long long int) 3193916325U)))))));
    }
}
